cmake_minimum_required(VERSION 3.19)
project(LeetCode)

set(CMAKE_CXX_STANDARD 20)

add_executable(LeetCode
        main.cpp
        march_challenge/binary_codes_of_2.cpp
        march_challenge/bi_trees_with_factors.cpp
        march_challenge/swaping_nodes_ll.cpp
        march_challenge/tiny_url_encode_decode.cpp
        march_challenge/sell_buy_with_transaction_fee.cpp
        march_challenge/solution.h

        out_of_challenge/solution.h
        out_of_challenge/reverse_integer.cpp)