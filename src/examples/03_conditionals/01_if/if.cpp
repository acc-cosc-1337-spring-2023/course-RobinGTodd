//write include statement for if header
#include "if.h"

bool get_anded_result(bool b1, bool b2){
    return b1 && b2;
}

bool get_ored_result(bool b1, bool b2)
{
    return b1 || b2;
}

bool get_notted_result(bool b1)
{
    return !b1;
}

bool get_bool_order_of_ops(bool b1, bool b2, bool b3)
{
    return !b1 && b2 || b3;
}


//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise

bool get_is_over_time(int hours)
{
    return hours > 40;
}

