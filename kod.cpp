#include <cstdio>
#include <memory.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void launch_missiles(int n) {
  printf("Launching %d missiles\n", n);
}
void authenticate_and_launch() {
  int n_missiles = 2;
  bool allowaccess = false;
  char response[8];

  printf("Secret: ");
  std::cin >> response; //niezabezpieczony sos response

  if (strcmp(response, "Joshua") == 0)
    allowaccess = true;

  if (allowaccess) {
    puts("Access granted");
    launch_missiles(n_missiles);
  }

  if (!allowaccess)
    puts("Access denied");
}
int foo() {
return foo();
}

void TestArray(int length)
{

 double n[length];
   int i;


   for ( i = 0; i < length; i++ )
   {
      n[ i ] = i *100.0;
   }

   n[1]=n[1];


   printf(" length = %d , size = %ld bytes = %ld kB  \n",length, length*sizeof(double), length*sizeof(double)/1000);
}

int main(int argc, char *argv[]) {
  puts("WarGames MissileLauncher v0.1");
  authenticate_and_launch();
  puts("Operation complete");
  int n[1000000]; //przepe³nienie stosu za duza tablica
  int j = 0;

  foo(); //przepe³nienie stosu rekursja

  int i;
  for (i=1; i<1000000; i++)
      TestArray(1000*i); //naruszenie ochrony pamiêci

      char mybuffer[5];     //przepe³nienie bufora
       if (argc < 2)
    {
      printf("strcpy() NOT executed....\n");
      printf("Syntax: %s <characters>\n", argv[0]);
      exit(0);
    }
    strcpy(mybuffer, argv[1]);
    printf("mybuffer content= %s\n", mybuffer);
    printf("strcpy() executed...\n");

}
