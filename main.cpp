#include <iostream>

std::int32_t calculate(std::int32_t& a, std::int32_t b, std::int32_t* c){
    if (a < b){
a= 0;
*c= b;
} else {
b = 0;
*c = a;
}
c= &a;
return a + b + *c;
}
std::int32_t main(){
    std::int32_t x{1};
    std::int32_t y{2};
    std:int32_t z{3};
    std::int32_t* z_ptr{&z};
    std::cout << calculate(x, y, z_ptr) << "," << x <<"," << *z_ptr <<std::endl;
    x= 2;
    y = 1;
    z= 3;
    z_ptr = &z;
    std::cout << calculate(x, y, z_ptr) << "," << x <<" ,"<< *z_ptr <<std::endl;
    return 0;
}
