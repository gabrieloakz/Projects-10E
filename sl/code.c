// Hello world in c?
// #include <stdio.h>

// int main(void)
// {
//   printf("Hello World\n");
//   return 0;
// }




// //Source: https://stackoverflow.com/questions/12355758

// caculator in c++?
printf("The result is", &sum);


printf("The result is %lf\n", sum);


#include <stdio.h>
#include <stdlib.h>

int main(){

    double a, b;
    double sum = 0;
    char o; //operator

    /* I had to use scanf, since I'm not using MS/Visual Studio, but GCC */
    printf("Enter operator\n");
    scanf("%c", &o);
    printf("Enter first operand\n");
    scanf("%lf", &a); /* changed %f to %lf */
    printf("Enter second operand\n");
    scanf("%lf", &b); /* changed %f to %lf */

    /* I prefer to use if ... else if ..., this is personal preference */
    if (o == '+'){
        sum = a + b;
        printf("The result is %lf\n", sum); /* Changed, see original post */
    } else if (o == '-'){
        sum = a - b;
        printf("The result is %lf\n", sum); /* Changed, see original post */
    } else if (o == '*'){
        sum = a*b;
        printf("The result is %lf\n", sum); /* Changed, see original post */
    } else if (o == '/'){
        if (b != 0){
        sum = a / b;
            printf("The result is %lf\n", sum); /* Changed, see original post */
        }
        else printf("Error");
    }

    getchar();

    return 0;

}




//Source: https://stackoverflow.com/questions/24104968










