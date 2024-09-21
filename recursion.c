// #include<stdio.h>
// int factorial(int n)
// {
//     if(n==1 || n ==0) return 1;
//     return n*factorial(n-1);
// }
// int main()
// {
//     int n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     int fact = factorial(n);
//     printf("The number is %d and the factorial is %d",n,fact);
//     return 0;

// }


// #include<stdio.h>
// void decreasing(int n)
// {
//     if(n==10) return;
//     printf("%d\n",n);
//     decreasing(n+1);
//     return ;
// }
// int main()
// {
//     int n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     decreasing(n);
//     return 0;

// }


// #include<stdio.h>
// void increasing(int n)
// {
//     if(n==0) return;
//     printf("%d\n",n);
//     increasing(n-1);
//     printf("%d\n",n);
//     return ;
// }
// int main()
// {
//     int n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     increasing(n);
//     return 0;

// }

// #include<stdio.h>
// int sum(int n)
// {
//     if( n==1) return 1;
//     int ans = n+sum(n-1);
//     return ans;
// }
// int main()
// {
//     int n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     int add = sum(n);
//     printf("%d",add);
//     return 0;

// }

#include<stdio.h>
int sum(int n)
{
    if( n==1 || n==2 || n==3) return n;
    int ans = sum(n-1)+sum(n-2);
    return ans;
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int add = sum(n);
    printf("%d",add);
    return 0;

}