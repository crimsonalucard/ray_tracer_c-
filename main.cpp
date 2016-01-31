#include <iostream>
#include <libs.hpp>



int main() {
    write_to_file("test.ppm", generate_color_gradient(200,100));
    std::cout<<"executed successfully.";
}

