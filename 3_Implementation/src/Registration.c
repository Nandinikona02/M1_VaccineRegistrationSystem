#include <stdio.h>
#include "Registration.h"

int regist_status(long p){

    // Checks for registration details of new patients    
    pd[0].aadhar_number=p;
    int i=1;
    while(i<=1000){
        if(pd[i].aadhar_number==pd[0].aadhar_number{
            if(pd[i].vaccine_type==0)
                return 0;
            else
                return 1;
        }
        i++;
    }
    return -1;
}

// Checks how many doses should be given
int vaccine_status(int i){
     
    if (pd[i].no.ofdoses==0){
        pd[i].no.ofdoses++;
        return 1;}
    else if(pd[i].no.ofdoses==1){
        pd[i].no.ofdoses++;
        return 2;}
    else if (pd[i].no.ofdoses==2){
        return 3;}
    else
        return 0;

}
