
/* v8::V8::EnableWebAssemblyTrapHandler(bool) */

void v8::V8::EnableWebAssemblyTrapHandler(bool param_1)

{
  internal::trap_handler::EnableTrapHandler(param_1);
  return;
}

