#include<stdio.h>
int main()
{

    int matrix[2][2]={{1,2},{3,4}};
    int mat[2][2]={{5,6},{7,8}};
    int mul[2][2]={};
    int i,j,k;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          for(k=0;k<2;k++){
            mul[i][j]+=matrix[i][k]*mat[k][j];
          }
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d\t",mul[i][j]);
       }
       printf("\n");
    }
    return 0;
}
