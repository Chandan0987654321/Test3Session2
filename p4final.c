#include<stdio.h>
int input_degree(){
    int n;
    printf("Enter the degree of the polynoial\n");
    scanf("%d",&n);
    return n;
}
float input_x(){
    float x;
    printf("Enter the value of x\n");
    scanf("%f",&x); 
    return x;       
}
void input_coefficients(int n,float a[n]){
    int i;
    for( i=0;i<=n;i++){
        printf("Enter the %d coefficients of x\n",i+1);
        scanf("%f",&a[i]);

