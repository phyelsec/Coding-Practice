#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;     // %d
    long l;    // %dl - decimal long
    char ch;   // %c  - char
    float fl;  // %f
    double db; // %fl - float long
    
    // the string argument must be equal to the string you will receive:
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &fl, &db);
    
    // the string argument will be what you expect to see:
    printf("%d\n%ld\n%c\n%f\n%lf", i, l, ch, fl, db);
    
    return 0;
}