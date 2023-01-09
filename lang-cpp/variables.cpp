#include<iostream>

//constant-variables
#define K_HELLO_WORLD "Hello New World"

//signed-integer-variables
int i_example = 0; //avoid, dynamic-change-variable
int8_t i8_example = 0;
int16_t i16_example = 0;
int32_t i32_example = 0;
int64_t i64_example = 0;

//unsigned-integer-variables
uint ui_number = 0; //avoid, dynamic-change-variable
uint8_t ui8_number = 0;
uint16_t ui16_example = 0;
uint32_t ui32_number = 0;
uint64_t ui64_number = 0;

//float-variables
float f_number = 0.001f;

//double-variables
double d_number = 0.001f;

//long-variables
long l_number = 0.001f;
long double ld_number = 0.025f; 

//boolean-variables
bool isSomething = true;

//characters-string-variables
char chr_something = 'a';
std::string str_something = "Hello there";

int main(){
    std::cout << "Int32 = " << i32_example << std::endl;
    return 0;
}