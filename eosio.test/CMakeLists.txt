add_contract(eosio.test eosio.test ${CMAKE_CURRENT_SOURCE_DIR}/src/eosio.test.cpp)

target_include_directories(eosio.test
   PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/include)

set_target_properties(eosio.test
   PROPERTIES
   RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

