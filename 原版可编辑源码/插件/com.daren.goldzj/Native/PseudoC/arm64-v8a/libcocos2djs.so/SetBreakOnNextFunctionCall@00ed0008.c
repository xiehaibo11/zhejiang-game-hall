
/* v8::debug::SetBreakOnNextFunctionCall(v8::Isolate*) */

void v8::debug::SetBreakOnNextFunctionCall(Isolate *param_1)

{
  internal::Debug::SetBreakOnNextFunctionCall(*(Debug **)(param_1 + 0xb6c8));
  return;
}

