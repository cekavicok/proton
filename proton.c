#include <math.h>
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
double mod(double a, double b){
   // return a % b;
   
}
double sqre(double a){
    return pow(a,2);
}
double sqrt(double a){
    sqrt(a);
}
int main(){
    int a, b;
    printf("Izaberi broj {a b}");
    scanf("%d %d", &a, &b);
    char operacija;
    printf("Izaberi operaciju { + - * /}");
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