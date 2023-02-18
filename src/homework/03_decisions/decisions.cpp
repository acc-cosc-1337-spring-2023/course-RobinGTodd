//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
std::string get_letter_grade_using_if(int grade)
{
    std::string result;

    if (grade >= 90 && grade <= 100) 
    {
        result = "A";
    } 
    else if (grade >= 80 && grade < 90) 
    {
        result = "B";
    }
    else if (grade >= 70 && grade < 80) 
    {
        result = "C";
    } 
    else if (grade >= 60 && grade < 70) 
    {
        result = "D";
    }
    else if (grade >= 0 && grade < 60) 
    {
        result = "F";
    }
    else 
    {
        result = "Invalid grade";
    }
    
    return result;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string result;

    switch(grade) {
        case 90 ... 100:
            result = "A";
            break;
        case 80 ... 89:
            result = "B";
            break;
        case 70 ... 79:
            result = "C";
            break;
        case 60 ... 69:
            result = "D";
            break;
        case 0 ... 59:
            result = "F";
            break;
        default:
            result = "Invalid grade";
            break;
    }
    return result;
}