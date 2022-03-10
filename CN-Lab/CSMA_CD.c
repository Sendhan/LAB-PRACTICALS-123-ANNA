#include <protocol.h> 

void main(){
    Frame X,Y; 
    X="data1";
    Y="data2"; 
    CSMACD_INIT(); 
    CSMACD_START();
    CSMA_SEND(B,A,X);
    CSMA_SEND(A,C,Y); 
    R=COLLISION_OCCUR();
    if(R){
    WAIT(1000); RETRANSMIT(B,A); RETRANSMIT(A,C);
    }
}