#include <stdio.h>

int main()
{
   int i, x, key;
   char str[10];

   printf("\nPlease enter a string:\t");
   gets(str);

   printf("\nEnter the key:\t");
   scanf("%d", &key);

   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &x);

   //using switch case statements
   switch(x)
   {
   case 1: //Encryption
      for(i = 0; (i < 10 && str[i] != '\0'); i++)
        str[i] = str[i] + key; //the key for encryption is varaiable 'key' that is added to ASCII value

      printf("\nEncrypted string: %s\n", str);
      break;

   case 2: //Decryption
      for(i = 0; (i < 10 && str[i] != '\0'); i++)
        str[i] = str[i] - key; //the key for encryption is varaiable 'key' that is subtracted to ASCII value

      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nYou have entered a wrong option!\n");
   }
   return 0;
}