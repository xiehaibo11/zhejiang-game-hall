
/* v8::internal::Isolate::SetAtomicsWaitCallback(void (*)(v8::Isolate::AtomicsWaitEvent,
   v8::Local<v8::SharedArrayBuffer>, unsigned long, long, double,
   v8::Isolate::AtomicsWaitWakeHandle*, void*), void*) */

void __thiscall
v8::internal::Isolate::SetAtomicsWaitCallback
          (Isolate *this,
          _func_void_AtomicsWaitEvent_Local_ulong_long_double_AtomicsWaitWakeHandle_ptr_void_ptr
          *param_1,void *param_2)

{
  *(_func_void_AtomicsWaitEvent_Local_ulong_long_double_AtomicsWaitWakeHandle_ptr_void_ptr **)
   (this + 0xb658) = param_1;
  *(void **)(this + 0xb660) = param_2;
  return;
}

