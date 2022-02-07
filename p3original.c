#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int composite);

int main()
{
 int n,composite;
 input_number();
 is_composite(n);
 output(n,composite);
 return 0;
}
int input_number()
{
 int n;
 printf("enter a number\n");
 scanf("%d",&n);
 return n;
}

int is_composite(int n)
{
    int composite;
    if(n%n==1 && n%1==n)
    {
      composite=1;
    }
    return composite;
}

void output(int n,int composite)
{
    if(composite==1)
    printf("%d is composite \n",n);
   else
    printf("%d is not composite",n);
} 


