#include <stdio.h>
#include <stdlib.h>

/*
1- Kyle Geerts - Participation: 20%
2- Tyler Weberski - Participation: 20%
3- Matt Graham - Participation: 20%
4- Nick Thomas - Participation: 20%	
5- Carter Everts - Participation: 20%
*/

void Total_Of_All(int* p, int* num, int *x)
{
  
    for(int i = 0; i < *num; i++){

            *x += *(p + i);

    }
}

int main() {
int x = 0;
int num;
int *p;

printf("How many integers are you going to input?\n");
scanf(" %d", &num);
p = (int*)malloc(num * sizeof(int));
printf("Enter an integer\n");
 for(int i = 0; i < num; i++){
    int temp;
    
    scanf(" %d", &temp);
    *(p + i) = temp;
 }
 Total_Of_All(p,&num,&x);

free(p);
printf("%d", x);
return 0;
}
