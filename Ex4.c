#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,head = 0,tail = 0,HoT;
  
 
  printf("Tossind a coin...\n");
  for(i = 1;i<4;i++){
    HoT = rand();
    if(HoT%2==0){
      printf("Round%d:Heads\n",i);
      head++;
    }
    else{
      printf("Round%d:Tails\n",i);
      tail++;
    }
  }
  printf("Heads:%d,Tails:%d\n",head,tail);
  
   
  if(head>tail)
    printf("You won\n");
  else
    printf("You lost\n");
  
  return 0;
}
    
