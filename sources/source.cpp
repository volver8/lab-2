// Copyright 2019 <Kondr11>

#include <header.hpp>

void Experiment::constructor(vector <unsigned int> &a, unsigned int size) {
    a.resize(size * 1024 * 1024 / 4);
}

void Experiment::init(vector <unsigned int> &a) {
    for (unsigned int i = 0; i < a.size(); i++) {
        a[i] = rand_r(&i) % 1000;
    }
}

void Experiment::heating_cache(vector <unsigned int> &a ) {
    for (unsigned int i = 0; i < a.size(); i++) {
        a[i]--;
    }
}

time_t Experiment::investigate(vector <unsigned int> &a) {
    auto start = std::chrono::system_clock::now();

    for (unsigned int j = 0; j < 1000; j++) {
        for (unsigned int i = 0; i < a.size(); i++) {
            a[i]++;
        }
    }

    auto end = std::chrono::system_clock::now();
    time_t start_time = std::chrono::system_clock::to_time_t(start);
    time_t end_time = std::chrono::system_clock::to_time_t(end);
    return end_time - start_time;
}

void Experiment::experiment(vector <unsigned int> &cache_size) {
    for (unsigned int i = 0; i < 5; i++) {
        vector<unsigned int> vec;

        constructor(vec, cache_size[i]);

        init(vec);

        heating_cache(vec);

        time_t exp_time = investigate(vec);

        cout << "experiment №" << i + 1 << " time  = " << exp_time << endl;
    }
}

void Experiment::cache_levels_init(vector<unsigned int> &cache_size) {
    unsigned int cnt = 0, i = 0;

    cout <<  "Enter count of cache size levels - ";
    cin >> cnt;

    cache_size.resize(cnt);
    for (auto& e : cache_size) {
        cout << "№" << i + 1 << " Level's size = ";
        cin >> e;
        i++;
    }

    cout << endl;
}
