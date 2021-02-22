cmake_minimum_required(VERSION 3.8)

set(This First_CPP_TESTS)

set(Sources
    main.test.cpp
)

add_executable(${This} ${Sources})


target_link_libraries(${This} PUBLIC
    gtest_main
    First_CPP
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
