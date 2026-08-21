
/* v8::Isolate::SetJitCodeEventHandler(v8::JitCodeEventOptions, void (*)(v8::JitCodeEvent const*))
    */

void __thiscall
v8::Isolate::SetJitCodeEventHandler(Isolate *this,uint param_2,_func_void_JitCodeEvent_ptr *param_3)

{
  internal::Isolate::InitializeLoggingAndCounters((Isolate *)this);
  internal::Logger::SetCodeEventHandler(*(Logger **)(this + 0x9558),param_2,param_3);
  return;
}

