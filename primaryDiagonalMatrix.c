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

    int isDiagonal=1;
    if(row!=col){
        isDiagonal=0;
    }
   for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i]==a[j]){
                continue;
            }
            if(a[i][j]!=0){
                isDiagonal=0;
            }
        }
    }
    if(isDiagonal){
        printf("Primary Diagonal");
    }else{
        printf("Not Diagonal");
    }

    return 0;
}