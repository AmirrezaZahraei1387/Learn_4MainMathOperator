//
// Created by KAVOSH on 6/29/2023.
//
#ifndef LEARN_4MAINMATHOPERATOR_RANDOM_H
#define LEARN_4MAINMATHOPERATOR_RANDOM_H
#include <random>

namespace rnd{

    inline std::mt19937 generate_random_seed(){

        std::random_device RD{};
        std::seed_seq SQ{RD(),RD(),RD(),RD(),
                      RD(),RD(),RD(),RD(),
                      RD(),RD(),RD(),RD(),
                      RD(),RD(),RD(),RD()};
        return std::mt19937 {SQ};
    }

    std::mt19937 random{generate_random_seed()};

    inline int generate(int max=500, int min=-100){
        std::uniform_int_distribution<> random_g{max, min};
        return random_g(random);
    }

}//rnd namespace ::
#endif //LEARN_4MAINMATHOPERATOR_RANDOM_H
