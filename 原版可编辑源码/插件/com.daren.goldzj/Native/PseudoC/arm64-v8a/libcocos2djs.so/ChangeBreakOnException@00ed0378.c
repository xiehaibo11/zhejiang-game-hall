
/* v8::debug::ChangeBreakOnException(v8::Isolate*, v8::debug::ExceptionBreakState) */

void v8::debug::ChangeBreakOnException(long param_1,int param_2)

{
  internal::Debug::ChangeBreakOnException(*(Debug **)(param_1 + 0xb6c8),0,param_2 == 2);
  internal::Debug::ChangeBreakOnException(*(Debug **)(param_1 + 0xb6c8),1,param_2 != 0);
  return;
}

