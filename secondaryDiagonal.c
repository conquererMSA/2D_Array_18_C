#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int isSecDiagonal=1;
    if(row!=col){
        isSecDiagonal=0;
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i+j==row-1){
                continue;
            }
            if(a[i][j]!=0){
                isSecDiagonal=0;
            }
        }
    }
    if(isSecDiagonal){
        printf("Secondery Diagonal");
    }else{
        printf("Not Diagonal");
    }
    return 0;
}