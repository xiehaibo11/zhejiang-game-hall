
/* v8::internal::ExternalReference::handle_scope_limit_address(v8::internal::Isolate*) */

void v8::internal::ExternalReference::handle_scope_limit_address(Isolate *param_1)

{
  HandleScope::current_limit_address(param_1);
  return;
}

