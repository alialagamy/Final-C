//preprocessing part.
#include <stdio.h>
#include <stdlib.h>
 //menu function
 int menu(void)
  {
  	int x;
   printf("\tSelect one of the following:\n");
   printf("1 = Enter The Encrypted messsge.\n");
   printf("2 = Enter The Decrypted messsge\n");
   printf("3 = Exit\n");
   scanf("%d", &x);
   return x;
   }
   //Encrypt function
void encrypt(void)
 {
	int i,key;
    char s1[100];
   printf("\nPlease Enter a messege: ");
   scanf("%s",&s1);
   printf("Enter key : ");
   scanf("%d",&key);
      for(i = 0; (i < 100 && s1[i] != '\0'); i++)
         s1[i] = s1[i] + key; 
      printf("\nEncrypted messege: %s\n", s1);
 }
	//Decrypt function
void decrypt(void)
 {
    int i,key;
    char s2[100];
   printf("\nPlease Enter a messege: ");
   scanf("%s",&s2);
   printf("Enter key : ");
   scanf("%d",&key);
    for(i = 0; (i < 100 && s2[i] != '\0'); i++)
    s2[i] = s2[i] - key; 
    printf("\nDecrypted messege: %s\n", s2);
 }

int main()
{
 //main loop
  int c;
  c = menu();
	while (c != 3) {
		if (c == 1) {
			encrypt();
		}
		else if (c == 2) {
			decrypt();
		}
		c = menu();
	}
   
   system("pause");
   return 0;
}
