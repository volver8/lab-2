// Copyright 2019 Kondr11

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#pragma once
#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::system;
using std::chrono::system_clock;

class Experiment {
public:
    static void cache_levels_init(vector<unsigned int> &cache_size);

    static void constructor(vector <unsigned int> &a, unsigned int size);

    static void init(vector <unsigned int> &a);

    static void heating_cache(vector <unsigned int> &a);

    static time_t investigate(vector <unsigned int> &a);

    static void experiment(vector <unsigned int> &cache_size);
};


#endif // INCLUDE_HEADER_HPP_
