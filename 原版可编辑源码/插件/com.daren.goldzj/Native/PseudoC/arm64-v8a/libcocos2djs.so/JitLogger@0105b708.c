
/* v8::internal::JitLogger::JitLogger(v8::internal::Isolate*, void (*)(v8::JitCodeEvent const*)) */

void __thiscall
v8::internal::JitLogger::JitLogger
          (JitLogger *this,Isolate *param_1,_func_void_JitCodeEvent_ptr *param_2)

{
  undefined4 *puVar1;
  
  *(Isolate **)(this + 8) = param_1;
  puVar1 = operator_new(0x204);
  *puVar1 = 0;
  *(undefined4 **)(this + 0x10) = puVar1;
  *(_func_void_JitCodeEvent_ptr **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR__JitLogger_01cb21d0;
  base::Mutex::Mutex((Mutex *)(this + 0x20));
  return;
}

