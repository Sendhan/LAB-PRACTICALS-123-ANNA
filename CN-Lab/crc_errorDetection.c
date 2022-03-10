#include <stdio.h>
#include <string.h>

int main(){
    int i, j, n[50], div[50], rem[20], temp, quotient[20];
    char trans[50], recv[50];
    int Flag = 0;
    printf("Enter the data word (in binary):\n");
    for(i=0; i<8; i++){
        scanf("%d",&n[i]);
    }
    printf("Enter th divisor (in binary):\n");
    for(i=0; i<4; i++){
        scanf("%d",&div[i]);
    }
    for(i=8; i<11; i++){
        n[i] = 0;
    }
    for(i=0; i<8; i++){
        temp = i;
        if(n[i]==1){
            for(j=0; j<4; j++){
                if(n[temp]==div[j]){
                    n[temp] = 0;
                    rem[j] = 0;
                }
                else{
                    n[temp] = 1;
                    rem[j] = 1;
                }
                temp = temp + 1;
            }
            quotient[i] = 1;
        }
        else{
            quotient[i] = 0;
        }
    }
    printf("\nthe quotient is \n");
    for(i=0; i<8; i++){
        printf("%d", quotient[i]);
    }
    printf("\n and the remainder is \n");
    for(j=0; j<4; j++){
        printf("%d", rem[j]);
    }
    printf("\nEnter the transmitted word : \n");
    scanf("%s", trans);
    printf("\n Enter the received message : \n");
    scanf("%s", recv);
    Flag = strcmp(recv, trans);
    if(Flag == 0){
        printf("No error is present.\n");
    }
    else{
        printf("Error is detected.\n");
    }
    return 0;
}