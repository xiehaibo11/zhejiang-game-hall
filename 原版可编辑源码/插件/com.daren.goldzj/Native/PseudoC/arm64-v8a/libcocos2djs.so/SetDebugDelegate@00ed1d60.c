
/* v8::debug::SetDebugDelegate(v8::Isolate*, v8::debug::DebugDelegate*) */

void v8::debug::SetDebugDelegate(Isolate *param_1,DebugDelegate *param_2)

{
  internal::Debug::SetDebugDelegate(*(Debug **)(param_1 + 0xb6c8),param_2);
  return;
}

