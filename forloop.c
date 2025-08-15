#include <stdio.h>
// average calculate
int main()
{
int i,sum ;

for (i=0;i<10;i++){
sum=sum+i;//here previous sum is stored |logic can use in hacker rank , series problem|
printf("sum is : %d",&sum);
}
printf("final sum is : %d",&sum);

//----even number print
for(i=0;i<=50;i++){
    if (i%2==0)
    {
       printf("even number : %d",&i);
    }
    
}

    return 0;
}  
