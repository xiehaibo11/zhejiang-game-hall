
/* v8::Isolate::SetPromiseRejectCallback(void (*)(v8::PromiseRejectMessage)) */

void __thiscall
v8::Isolate::SetPromiseRejectCallback(Isolate *this,_func_void_PromiseRejectMessage *param_1)

{
  if (param_1 != (_func_void_PromiseRejectMessage *)0x0) {
    internal::Isolate::SetPromiseRejectCallback((Isolate *)this,param_1);
    return;
  }
  return;
}

