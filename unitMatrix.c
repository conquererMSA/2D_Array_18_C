#include<stdio.h>
//Primary Diagonal Unit Matrix:
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
  int isUnitMatrix=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           if(i==j){
            if(a[i][j]!=1){
              isUnitMatrix=0;
            }
            continue;
           }

          if(a[i][j]!=0){
             isUnitMatrix=0;
          }
        }
    }
    if(isUnitMatrix){
        printf("Unit Matrix");
    }else{
        printf("Not Unit Matrix");
    }
    return 0;
}

//Secondery diagonal matrix
// int main(){
//     int row,col;
//     scanf("%d %d",&row,&col);
//     int a[row][col];
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//   int isUnitMatrix=1;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//            if(i+j==row-1){
//             if(a[i][j]!=1){
//               isUnitMatrix=0;
//             }
//             continue;
//            }

//           if(a[i][j]!=0){
//              isUnitMatrix=0;
//           }
//         }
//     }
//     if(isUnitMatrix){
//         printf("Unit Matrix");
//     }else{
//         printf("Not Unit Matrix");
//     }
//     return 0;
// }