#include<stdio.h> 
int main(){
           int n,n1,r,i;
           printf("   Give the First number for the Range :   \n");
           scanf("%d",&n);
           printf("   Give the Final number for the Range :   \n");
           scanf("%d",&n1);
           printf("\n The Even numbers between %d and %d are ",n,n1); 
           for(i=n; i<=n1; ++i){
               r=((i%2)==0)
               printf("\n  %d",i);
           }
    return 0; 
    } 
