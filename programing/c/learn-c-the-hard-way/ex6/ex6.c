#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.34f;
    double super_power = 56789.4321;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Show";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power. \n", power);
    printf("You have %f awasome super power. \n", super_power);
    printf("I have an initial %c. \n", initial);
    printf("I have a first name %s. \n", first_name);
    printf("I have a last_name %s. \n", last_name);
    printf("My whole name is %s %c. %s. \n",
            first_name, initial, last_name);

    return 0;
}