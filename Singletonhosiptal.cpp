//
// Created by Owner on 2019-04-12.
//

#include "Singletonhosiptal.hpp"
//Pre enters the severity
//post push a patient too heap
//return void
void Singletonhosiptal::addnewPatientQue( int severity) {
    cout<< "Add patient with severity: " << severity<<endl;
    heap1.heap_push(severity);
}
//Pre n/a
//post push a patient too heap
//return void
void Singletonhosiptal::PatientCheckout() {
    cout<< "Patent: "<<heap1.heap_pop()<< " Check out\n";
}
//Pre n/a
//post prionts out the size of the wait
//return void
void Singletonhosiptal::sizeofwait() {

    cout<< "Size of Wait: "<<heap1.size()<<"\n";
}
//Pre n/a
//post checks if there is a wait
//return void
void Singletonhosiptal::waitlistemtpy() {
    if(heap1.is_empty()==1){
        cout<<"\nThere is no wait\n";
    }else{
        cout<<"\nThere is a wait\n";
    }
}
//Pre n/a
//post clears the heap
//return void
void Singletonhosiptal::clearwaitlist() {
    cout<< "\nClosing time! Clear waitlist.\n";
    heap1.clear();
}
//Pre n/a
//post view list to see the doctor
//return void
void Singletonhosiptal::viewlist() {
    cout<< "Wait list to see Doctor\n";
    cout<<heap1;
}


