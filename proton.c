#include <math.h>
#include <stdio.h>
double add(double a, double b){
    return a+b;
}
double mul(double a, double b){
    return a*b;
}
double sub(double a, double b){
    return a-b;
}
double div(double a, double b){
    return a/b;
}
double mod(int a, int b){
    return a%b;
}
double sqre(double a){
    return pow(a,2);
}
double sqrt(double a){
    sqrt(a);
}

void main(){
    int a, b;
    scanf("%d %d /n", &a, &b);
    char operacija;
    scanf("%c", &operacija);
    switch (operacija) {
    case '-': 
        break;
    case '+':
        // code block
        break;
    case '*':
        // code block
        break;
    case '/':
        // code block
        break;
    }
}