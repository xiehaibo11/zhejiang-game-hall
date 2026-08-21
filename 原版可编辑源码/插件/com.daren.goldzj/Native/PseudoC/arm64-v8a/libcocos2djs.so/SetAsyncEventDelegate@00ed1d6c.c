
/* v8::debug::SetAsyncEventDelegate(v8::Isolate*, v8::debug::AsyncEventDelegate*) */

void v8::debug::SetAsyncEventDelegate(Isolate *param_1,AsyncEventDelegate *param_2)

{
  *(AsyncEventDelegate **)(param_1 + 0xc710) = param_2;
  internal::Isolate::PromiseHookStateUpdated((Isolate *)param_1);
  return;
}

