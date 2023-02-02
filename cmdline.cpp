//
//  cmdline.cpp
//  CS6015HomeWorks
//
//  Created by Chunhao on 2023/1/24.
//
#define CATCH_CONFIG_RUNNER
#include "cmdline.hpp"

void use_arguments(int argc, const char * argv[] ){
    if(argc == 1){
        return;
    }
    bool isTested = false;
    for(int i = 1; i < argc; i++ ){
        std::string s = argv[i];
        if(strcmp(argv[i], "--help") == 0){
            std::cout << "This are the helpful tips: " << "\n";
            std::cout << "Tip1: add" << "\n";
            std::cout << "Tip2: remove " << "\n";
            exit(0);
        }
        else if(s == "--test" && isTested == false){
            if(Catch::Session().run(1,argv) != 0){
                exit(1);
            }
            std::cout << "Test passed" << "\n";
            isTested = true;
        }
        else if((std::string)argv[i] == "--test" && isTested == true){
            std::cerr << "Error: you have already tested" << "\n";
            exit(1);
        }
        else{
            std::cerr << "Error: no such command" << "\n";
            exit(1);
        }
    }
}
