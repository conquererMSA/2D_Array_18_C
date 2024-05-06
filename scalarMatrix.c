//Scalar Matrix er kkhetre sob somoy a[0][0] index er value er sathe baki index gulu a[1][1], a[2][2] and a[0][0] nijer songge check korve value same kina. Same hole Scalar Matrix, na hole Scalar Matrix noy.

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
    int isScalar=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                if(a[i][j]!=a[0][0]){
                    isScalar=0;
                }
                continue;
            }
           if(a[i][j]!=0){
            isScalar=0;
            break;
           }
        }
    }
    if(isScalar){
        printf("Scalar Matrix");
    }else{
        printf("Not Scalar Matrix");
    }
    return 0;
}