
/* v8::internal::ExternalReference::handle_scope_next_address(v8::internal::Isolate*) */

void v8::internal::ExternalReference::handle_scope_next_address(Isolate *param_1)

{
  HandleScope::current_next_address(param_1);
  return;
}

