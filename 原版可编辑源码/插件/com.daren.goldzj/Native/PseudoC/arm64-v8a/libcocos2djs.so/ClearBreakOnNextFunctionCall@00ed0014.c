
/* v8::debug::ClearBreakOnNextFunctionCall(v8::Isolate*) */

void v8::debug::ClearBreakOnNextFunctionCall(Isolate *param_1)

{
  internal::Debug::ClearBreakOnNextFunctionCall(*(Debug **)(param_1 + 0xb6c8));
  return;
}

