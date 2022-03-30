#include<stdio.h>
#include "Registration.h"
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
