
/* v8::Isolate::AddBeforeCallEnteredCallback(void (*)(v8::Isolate*)) */

void __thiscall
v8::Isolate::AddBeforeCallEnteredCallback(Isolate *this,_func_void_Isolate_ptr *param_1)

{
  if (param_1 != (_func_void_Isolate_ptr *)0x0) {
    internal::Isolate::AddBeforeCallEnteredCallback((Isolate *)this,param_1);
    return;
  }
  return;
}

