#include <protocol.h> 

void main(){
    Frame X; 
    X="data1";
    CSMACA_INIT(); 
    CSMACA_START();
    NODE_LISTEN();
    REQUESTTO_SEND(A,B); 
    CLEARTO_SEND(B,A);
    DATATO_SEND(A,B,X);
    ACKNOWLEDGE(B,A);
}