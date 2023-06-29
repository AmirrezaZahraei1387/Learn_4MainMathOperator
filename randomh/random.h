//
// Created by KAVOSH on 6/29/2023.
//
#ifndef LEARN_4MAINMATHOPERATOR_RANDOM_H
#define LEARN_4MAINMATHOPERATOR_RANDOM_H
#include <random>
namespace rnd {

    std::mt19937 generate_random_seed();
    [[maybe_unused]]int generate(int max = 500, int min = -100);
}
#endif //LEARN_4MAINMATHOPERATOR_RANDOM_H
