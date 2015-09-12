#include<stdio.h>
#include<math.h>


int main (void){
  int i; //for scanf
  int isPrime; //for HANTEI of prime
  int count = 3;  //for numbering of prime
  int n = 5;  //for natural numbers which are checked
  int j;  //for checking whether 'n' is the prime
  int a;  //for calculating sqrt of n

  printf("How many prime numbers are there before the prime you want?\n"); 
  scanf("%d",&i);

  if(i == 0)
    printf("the first prime is 2");
  else if(i == 1)
    printf("the second prime is 3");
  else 
    while(count <= i+1){
      isPrime = 1;
      a = sqrt(n);
      for(j = 3; j < a+1; j+=2){
        if(n % j == 0){
          isPrime = 0;
          break;
        }
      }
      
      if(isPrime){
        if(count == i+1){
          if(count % 10 == 1)
            printf("the %dst prime is %d.\n",count,n);
          else if(count % 10 == 2)
            printf("the %dnd prime is %d.\n",count,n);
          else if(count % 10 == 3)
            printf("the %drd prime is %d.\n",count,n);
          else
            printf("the %dth prime is %d.\n",count,n);
        }
        count = count + 1;
      }
      n = n + 2;
    }
}