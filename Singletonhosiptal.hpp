//
// Created by Owner on 2019-04-12.
//

#ifndef ASSIGNMENT3_SINGLETONHOSIPTAL_HPP
#define ASSIGNMENT3_SINGLETONHOSIPTAL_HPP


#include "heap.hpp"

class Singletonhosiptal {


    public:
        static Singletonhosiptal& get_instance()
        {

            static Singletonhosiptal instance;
            return instance; // Instantiated on first use.
        }
    private:
    vector<int> v1;
    heap<int,bool> heap1;
        int value;
    Singletonhosiptal() {
        heap<int,bool> heap1(v1);
    } //private constructor

    public:
    Singletonhosiptal(Singletonhosiptal const&)       = delete;
        void operator=(Singletonhosiptal const&)  = delete;
    void addPatientCheckout();
    void addnewPatientQue( int severity);
    void sizeofwait();
    void waitlistemtpy();
    void clearwaitlist();
    void viewlist();
};





#endif //ASSIGNMENT3_SINGLETONHOSIPTAL_HPP
