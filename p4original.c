#include <stdio.h>
int input_array_size()
{
    int n;
    printf("how many composite numbers?\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    printf("enter the composite numbers\n");
    for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]); 
        }
}
int sum_composite_numbers(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
    return sum;
}
void out_put(int sum)
{
    printf("sum is %d",sum);
}
int main()
{
   int n,sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    out_put(sum);
    return 0;
}