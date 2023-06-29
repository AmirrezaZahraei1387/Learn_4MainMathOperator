#include "randomh/random.h"
#include "consh/constants.h"
#include "evalh/eval.h"
#include <string>
#include <limits>
#include <iostream>

using namespace std::string_literals;

void remove_lines(){
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}

int get_number(){

    int number{};

    while(true){
        std::cin>>number;
        if (std::cin.fail()) {
            std::cin.clear();
            remove_lines();
        }else{
            return number;
        }
    }
}

bool is_continue(){
    std::cout<<"do you want to continue?(0 --> no :(, anything else --> continue :) ):"s;
    return static_cast<bool>(get_number());
}

void check_continue(){
    if(! is_continue()){
        std::cout<<"have a good time."s;
        exit(0);
    }
}

int main() {

    int number_1;
    int number_2;
    int user_number;
    int result;
    int score;

    while (true){
        check_continue();
        score = 0;
        for (int i{0}; i<= cons::NUMBER_ASKING;++i){
            number_1 = rnd::generate();
            number_2 = rnd::generate();
            result = precalc::add(number_1, number_2);
            std::cout<<number_1 << '+'<< number_2<<'=';
            user_number = get_number();
            if (user_number == result)
                score += cons::WINNIG_SCORE;
            else
                score += cons::LOSING_SCORE;
            check_continue();
        }
        std::cout<<"you got the score of "<<score<<std::endl;
    }

    return 0;
}
