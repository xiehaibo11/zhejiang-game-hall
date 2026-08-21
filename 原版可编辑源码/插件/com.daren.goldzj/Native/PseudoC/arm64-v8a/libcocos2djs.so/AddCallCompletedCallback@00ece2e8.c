
/* v8::Isolate::AddCallCompletedCallback(void (*)(v8::Isolate*)) */

void __thiscall v8::Isolate::AddCallCompletedCallback(Isolate *this,_func_void_Isolate_ptr *param_1)

{
  if (param_1 != (_func_void_Isolate_ptr *)0x0) {
    internal::Isolate::AddCallCompletedCallback((Isolate *)this,param_1);
    return;
  }
  return;
}

