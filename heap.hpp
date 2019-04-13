//
// Created by Owner on 2019-04-11.
//

#ifndef ASSIGNMENT3_HEAP_HPP
#define ASSIGNMENT3_HEAP_HPP
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <class T, class B>
class heap {
private:
    vector<T> myheap;
    void heapify(){
        make_heap(myheap.begin(), myheap.end());
    }
public:
heap() = default;
heap(vector<T> v){

    for(auto element: v){
        myheap.emplace_back(element);
    }

    heapify();
}

void heap_push(T number){
    myheap.emplace_back(number);
    heapify();
}
T size(){
    return  myheap.size();
}
B is_empty(){
    if(myheap.size()==0)
        return true;

    return false;
}
void clear(){
    myheap.clear();
}
T heap_pop(){
    auto i = myheap[0];
    sort(myheap.begin(), myheap.end());
    myheap.pop_back();
    heapify();
    return i;
}

    friend ostream &operator<<(ostream &os, const heap &heap1) {
      for(auto t= heap1.myheap.begin(); t!= heap1.myheap.end(); ++t){
          os <<"Patient with Severity: "<< *t<<endl;
      }
      os<<endl;
      return os;
    }

};
#endif //ASSIGNMENT3_HEAP_HPP
