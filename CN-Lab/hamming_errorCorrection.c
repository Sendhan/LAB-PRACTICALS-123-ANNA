#include <stdio.h>

int main(){
    int data[7], recv[7], i, c1, c2, c3, c;
    printf("\nEnter the 4 bit message :\n");
    for(i=0; i<4; i++){
        if(i != 3){
            scanf("%d",&data[i]);
        }
        else{
            scanf("%d",&data[4]);
        }
    }
    data[6] = data[0]^data[2]^data[4];
    data[5] = data[0]^data[1]^data[4];
    data[3] = data[0]^data[1]^data[2];
    printf("\nThe Encoded message is:\n");
    for(i = 0; i < 7; i++){
        printf("%d", data[i]);
    }
    printf("\nEnter the received message :\n");
    for(i=0; i< 7; i++){
        scanf("%d",&recv[i]);
    }
    c1 = recv[6]^recv[4]^recv[2]^recv[0];
    c2 = recv[5]^recv[4]^recv[1]^recv[0];
    c3 = recv[3]^recv[2]^recv[1]^recv[0];
    c = c3*4 + c2*2 + c1;
    if(c == 0){
        printf("\nError is not present!");
    }
    else{
        printf("Error is present in the %d th bit", c);
        if(recv[7-c]==0){
            recv[7-c] = 1;
        }
        else{
            recv[7-c] = 0;
        }
        printf("\nThe corrected sequence is : ");
        for(i=0; i<7; i++){
            printf("%d", recv[i]);
        }
    }
}