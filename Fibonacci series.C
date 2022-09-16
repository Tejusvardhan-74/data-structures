#include<stdio.h>
int main(){
int i,j,k;
int r1,c1,r2,c2;
printf("Enter Rowss and columns of Mat 1 : \n");
scanf("%d %d", &r1, &c1);
printf("Enter Rowss and columns of Mat 2 : \n");
scanf("%d %d", &r2, &c2);
if(c1 == r2){
int a[r1][c1];
int b[r2][c2];
printf("Enter Elements of Mat1 : \n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
scanf("%d", &a[i][j]);
} }
printf("Enter Elements of Mat2 : \n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
scanf("%d", &b[i][j]);
} }
int c[c1][r2];
for(i=0;i<c1;i++){
for(j=0;j<r2;j++){
c[i][j]= 0;
for(k=0;k<r1;k++){
c[i][j]+= a[i][k]*b[k][j];
} } }
printf("Matrix 1 X Matrix 2 : \n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
printf("%d \t", c[i][j]);
}
printf("\n");
} }
else{
printf("Matrix Multipliaction is Not Possible.");
}
return 0;
}
