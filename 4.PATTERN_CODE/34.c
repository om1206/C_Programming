//                       *       *
//                       * *   * *
//                       *   *   *
//                       * *   * *
//                       *       *
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the value : ");
    scanf("%d",&n);  
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
          if(j==1 || i==j || j== n-i+1 || j==n){
            printf("* ");
          }else{
            printf("  ");
          }
        }
        printf("\n");
    }
  return 0;
}