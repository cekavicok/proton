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
    double c =0;
    printf("Izaberi broj {a b}");
    scanf("%d %d /n", &a, &b);
    char operacija;
    printf("Izaberi operaciju { + - * /}");
    scanf("%c", &operacija);
    switch (operacija) {
    case '-':
        c = sub(a,b);
        break;
    case '+':
        c =add(a,b);
        // code block
        break;
    case '*':
        // code block
        c =mul(a,b);
        break;
    case '/':
        c = div(a,b);

        // code block
        break;
}
    printf("result is %d", &c);
} 