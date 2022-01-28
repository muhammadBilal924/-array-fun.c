#include<stdio.h>
int main(){
arrayFunction();
return 0;
}
void arrayFunction(){
int array[10];
int i=  0;
printf("Enter values for array");
while(i<10){
      scanf("%d",&array[i]);
        i++;
    }
}
