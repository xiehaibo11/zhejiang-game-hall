
/* v8::internal::Isolate::SetPromiseRejectCallback(void (*)(v8::PromiseRejectMessage)) */

void __thiscall
v8::internal::Isolate::SetPromiseRejectCallback
          (Isolate *this,_func_void_PromiseRejectMessage *param_1)

{
  *(_func_void_PromiseRejectMessage **)(this + 0xb7e0) = param_1;
  return;
}

