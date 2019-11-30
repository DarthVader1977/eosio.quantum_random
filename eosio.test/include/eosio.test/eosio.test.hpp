#pragma once

#include <eosio/eosio.hpp>
#include <eosio/random_number.hpp>

#include <string>

namespace eosio {

   using std::string;

   class [[eosio::contract("eosio.test")]] randomt : public contract {
      public:
         using contract::contract;

	[[eosio::action]]
	void test();

        using test_action = eosio::action_wrapper<"test"_n, &randomt::test>;
   };

} /// namespace eosio
