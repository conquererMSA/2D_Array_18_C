//null matrix er sq/rect hote pare. row+col er value zero hobe. null/zero matrix er sob gulu index er value 0 hobe.
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
    int isNullMatrix=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           if(a[i][j]!=0){
             isNullMatrix=0;
             break;
           }
        }
    }
    if(isNullMatrix){
        printf("Null Matrix");
    }else{
        printf("Not Null Matrix");
    }
    return 0;
}