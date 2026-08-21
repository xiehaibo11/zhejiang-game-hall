
/* v8::internal::ExternalReference::debug_is_active_address(v8::internal::Isolate*) */

long v8::internal::ExternalReference::debug_is_active_address(Isolate *param_1)

{
  return *(long *)(param_1 + 0xb6c8) + 8;
}

