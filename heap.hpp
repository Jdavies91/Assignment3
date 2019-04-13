//
// Created by Owner on 2019-04-11.
//

#ifndef ASSIGNMENT3_HEAP_HPP
#define ASSIGNMENT3_HEAP_HPP
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//This is for my template class.  Allowing me to have two varibles type
//
//
template <class T, class B>
class heap {
private:
    // this is my vector member class my heap
    vector<T> myheap;
    //pre: n/a
    //Post: sorts the myHeap member.
    //return: void
    void heapify(){
        make_heap(myheap.begin(), myheap.end());
    }
public:
    //pre: Default constructor
heap() = default;
    //pre: Param of type T
    //Post: creates a vector of t elements
    //return: Constructor
heap(vector<T> v){

    for(auto element: v){
        myheap.emplace_back(element);
    }

    heapify();
}
//pre: Param of type T
    //Post: places a new number in the heap and heap sorts it
    //return: void
void heap_push(T number){
    myheap.emplace_back(number);
    heapify();
}
//pre: n/a
    //Post: returns size of the heap
    //return: Type T
T size(){
    return  myheap.size();
}
//pre: n/a
    //Post: sees if the heap size is empty or not
    //return: Type B

B is_empty(){
    if(myheap.size()==0)
        return true;

    return false;
}
//pre: n/a
    //Post: clears the heap vector;
    //return: void
void clear(){
    myheap.clear();
}
//pre: n/a
    //Post: pops the top value of the heap
    //return: Type T
T heap_pop(){
    auto i = myheap[0];
    sort(myheap.begin(), myheap.end());
    myheap.pop_back();
    heapify();
    return i;
}
//pre: Overload the << operator param are os and heap1
    //Post: output of myheap
    //return: os

    friend ostream &operator<<(ostream &os, const heap &heap1) {
      for(auto t= heap1.myheap.begin(); t!= heap1.myheap.end(); ++t){
          os <<"Patient with Severity: "<< *t<<endl;
      }
      os<<endl;
      return os;
    }

};
#endif //ASSIGNMENT3_HEAP_HPP
