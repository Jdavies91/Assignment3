//
// Created by Owner on 2019-04-12.
//

#include "Singletonhosiptal.hpp"

void Singletonhosiptal::addnewPatientQue( int severity) {
    cout<< "Add patient with severity: " << severity<<endl;
    heap1.heap_push(severity);
}

void Singletonhosiptal::addPatientCheckout() {
    cout<< "Patent: "<<heap1.heap_pop()<< " Check out\n";
}

void Singletonhosiptal::sizeofwait() {

    cout<< "Size of Wait: "<<heap1.size()<<"\n";
}

void Singletonhosiptal::waitlistemtpy() {
    if(heap1.is_empty()==1){
        cout<<"\nThere is no wait\n";
    }else{
        cout<<"\nThere is a wait\n";
    }
}

void Singletonhosiptal::clearwaitlist() {
    cout<< "\nClosing time! Clear waitlist.\n";
    heap1.clear();
}

void Singletonhosiptal::viewlist() {
    cout<< "Wait list to see Doctor\n";
    cout<<heap1;
}


