#include <stdio.h>

void main(){
    int row,cols,matrix[10][10],i,j;
    printf("Enter the order of matrix ");
    scanf("%d %d",&row,&cols);
    for(i=0;i<row;i++){
        for(j=0;j<cols;j++){
            if(j<i){
                matrix[i][j]=-1;
            }else if(i<j){
                matrix[i][j]=1;
            }
            else{
                matrix[i][j]=0;
            }
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<cols;j++){
            printf(" %d",matrix[i][j]);
        }
        printf("\n");
    }
}
