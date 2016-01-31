//
// Created by Brian Yeh on 1/31/16.
//
#ifndef RAY_TRACER_LIBS_H
#define RAY_TRACER_LIBS_H
#include <string>
#include <iostream>
#include <fstream>
#include <vec3.h>

std::string generate_color_gradient(int width, int height){
    std::string output = "";
    output += "P3\n" + std::to_string(width) + " " + std::to_string(height) + "\n255\n";
    for(int j = height-1; j>=0; j--){
        for(int i = 0; i < width; i++){
            float red = float(i) / float(width);
            float green = float(j) / float(height);
            float blue = 0.2;
            vec3 color = vec3(red, green, blue);
            color *= vec3(255.99,255.99,255.99);

            output    += std::to_string((int)color[0]) + " "
                      + std::to_string((int)color[1]) + " "
                      + std::to_string((int)color[2]) + "\n";
        }
    }
    return output;
}

void write_to_file(std::string filename, std::string file_content){
    std::ofstream myfile;
    myfile.open(filename);
    myfile << file_content;
    myfile.close();
}



#endif //RAY_TRACER_LIBS_H
