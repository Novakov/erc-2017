set(NAME unit_tests)

set(SOURCES
    test.cpp
)

add_executable(${NAME} ${SOURCES})

target_link_libraries(${NAME}
    gtest_main
    gmock
)