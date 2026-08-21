
/* v8::internal::ExternalReference::handle_scope_level_address(v8::internal::Isolate*) */

void v8::internal::ExternalReference::handle_scope_level_address(Isolate *param_1)

{
  HandleScope::current_level_address(param_1);
  return;
}

