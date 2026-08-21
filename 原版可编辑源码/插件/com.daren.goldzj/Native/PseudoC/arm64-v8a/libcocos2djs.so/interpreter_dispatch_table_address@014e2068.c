
/* v8::internal::ExternalReference::interpreter_dispatch_table_address(v8::internal::Isolate*) */

long v8::internal::ExternalReference::interpreter_dispatch_table_address(Isolate *param_1)

{
  return *(long *)(param_1 + 0xb6e8) + 0x10;
}

