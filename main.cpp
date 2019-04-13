#include <iostream>
#include <vector>
#include "heap.hpp"
#include "Singletonhosiptal.hpp"

using namespace std;


int main() {
    Singletonhosiptal *sh = &Singletonhosiptal::get_instance();

    sh->waitlistemtpy();
    sh->addnewPatientQue(2);
    sh->addnewPatientQue(4);
    sh->addnewPatientQue(7);
    sh->waitlistemtpy();
    sh->viewlist();
    sh->sizeofwait();
    sh->addPatientCheckout();
    sh->viewlist();
    sh->addnewPatientQue(3);
    sh->viewlist();
    sh->clearwaitlist();
    sh->sizeofwait();
    return 0;
}