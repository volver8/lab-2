// Copyright 2019 <Kondr11>
#include "header.hpp"

int main() {
    vector <unsigned int> cache_size;

    Experiment::cache_levels_init(cache_size);

    Experiment::experiment(cache_size);

    return 0;
}
