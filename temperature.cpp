#include "temperature.h"
#include<iostream>

double Temperature::celsius2fahrenheit(double celsius) {
    double answer = (celsius*(9.0/5.0))+32;
    return answer;
}

double Temperature::fahrenheit2celsius(double fahrenheit) {
    double answer = (fahrenheit-32)*(5.0/9.0);
    return answer;
}
