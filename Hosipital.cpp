//
// Created by Owner on 2019-04-13.
//

#include "Hosipital.hpp"
#include "Singletonhosiptal.hpp"
// implements the function for the hospital
void Hosipital::startDayathosipital() {
    Singletonhosiptal *sh = &Singletonhosiptal::get_instance();

    sh->waitlistemtpy();
    sh->addnewPatientQue(two);
    sh->addnewPatientQue(four);
    sh->addnewPatientQue(seven);
    sh->waitlistemtpy();
    sh->sizeofwait();
    sh->viewlist();
    sh->PatientCheckout();
    cout<<endl;
    sh->sizeofwait();
    sh->viewlist();
    sh->addnewPatientQue(three);
    sh->addnewPatientQue(ten);
    cout<<endl;
    sh->sizeofwait();
    sh->viewlist();
    sh->clearwaitlist();
    sh->waitlistemtpy();
    sh->sizeofwait();
}
