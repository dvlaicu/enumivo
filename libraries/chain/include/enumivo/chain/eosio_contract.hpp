/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */
#pragma once

#include <enumivo/chain/types.hpp>
#include <enumivo/chain/contract_types.hpp>

namespace eosio { namespace chain { 

   class apply_context;

   /**
    * @defgroup native_action_handlers Native Action Handlers
    */
   ///@{
   void apply_eosio_newaccount(apply_context&);
   void apply_eosio_updateauth(apply_context&);
   void apply_eosio_deleteauth(apply_context&);
   void apply_eosio_linkauth(apply_context&);
   void apply_eosio_unlinkauth(apply_context&);

   /*
   void apply_eosio_postrecovery(apply_context&);
   void apply_eosio_passrecovery(apply_context&);
   void apply_eosio_vetorecovery(apply_context&);
   */

   void apply_eosio_setcode(apply_context&);
   void apply_eosio_setabi(apply_context&);

   void apply_eosio_canceldelay(apply_context&);
   ///@}  end action handlers
   
   abi_def eosio_contract_abi(const abi_def& eosio_system_abi);

} } /// namespace eosio::chain
