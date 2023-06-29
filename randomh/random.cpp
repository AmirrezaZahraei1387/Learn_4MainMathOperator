//
// Created by KAVOSH on 6/29/2023.
//
#include <random>

namespace rnd{

    std::mt19937 generate_random_seed() {

        std::random_device RD{};
        std::seed_seq SQ{RD(), RD(), RD(), RD(),
                         RD(), RD(), RD(), RD(),
                         RD(), RD(), RD(), RD(),
                         RD(), RD(), RD(), RD()};
        return std::mt19937{SQ};
    }

    std::mt19937 random{generate_random_seed()};

    [[maybe_unused]]int generate(int max=500, int min=-100){
        std::uniform_int_distribution<int> random_g{min, max};
        return random_g(random);
    }
}//rnd namespace ::