//
//  main.cpp
//  file-compressor
//
//  Created by 김제인 on 2022/06/13.
//
#include "include/main.hpp"

int main(const int32_t argc, const char** argv, const char** env) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    zip::initialize();
    
    return EXIT_SUCCESS;
}
