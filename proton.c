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
    //ddakdakdakdka
    double c = 0;
    printf("Izaberi broj {a b}");
    scanf("%d %d", &a, &b);
    int operacija;
    printf("Izaberi operaciju: 1) - 2) + 3) * 4) / ");
    scanf("%d", &operacija);
    switch (operacija) {
    case 1:
        c = sub(a,b);
        break;
    case 2:
        c =add(a,b);
        // code block
        break;
    case 3:
        // code block
        c =mul(a,b);
        break;
    case 4:
        c = div(a,b);

        // code block
        break;
    }
    printf("result is %f", c);
} 