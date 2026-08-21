
/* v8::internal::ExternalReference::old_space_allocation_top_address(v8::internal::Isolate*) */

long v8::internal::ExternalReference::old_space_allocation_top_address(Isolate *param_1)

{
  return *(long *)(param_1 + 0x8940) + 0x68;
}

