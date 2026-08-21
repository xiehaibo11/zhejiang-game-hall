
/* v8::internal::ExternalReference::address_of_regexp_stack_memory_top_address(v8::internal::Isolate*)
    */

long v8::internal::ExternalReference::address_of_regexp_stack_memory_top_address(Isolate *param_1)

{
  return *(long *)(param_1 + 0xb618) + 0x208;
}

