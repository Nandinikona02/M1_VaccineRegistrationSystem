#ifndef REGIST_C
#define REGIST_C

 // Checks for registration details of new patients
int regist_status(long pd );

// Checks details from the pre registered patients
int existregist();

// Checks how many doses should be given
int vaccine_status(int );

// Structure that stores all details of a patient
typedef struct person{
    int age;
    long aadhar_number;
    int phone_number;
    int secret_code;
    int vaccine_type;
    int no.ofdoses;
}person_details;

// variable pd that stores details of upto 1000 patients
person_details pd[1000];

#endif
