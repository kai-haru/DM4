#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,head = 0,tail = 0,HoT;
  
   int x,y;
  scanf("%d",&x);
  y= rand();
  if(x>y)
    printf("You won\n");
  else
    printf("You lost\n");
  
  printf("Tossing a coin...\n");

 

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
  return 0;
}
    
