
/* v8::Isolate::AddGCPrologueCallback(void (*)(v8::Isolate*, v8::GCType, v8::GCCallbackFlags,
   void*), void*, v8::GCType) */

void __thiscall
v8::Isolate::AddGCPrologueCallback
          (Isolate *this,undefined8 param_1,undefined8 param_2,undefined4 param_4)

{
  internal::Heap::AddGCPrologueCallback((Heap *)(this + 0x8850),param_1,param_4,param_2);
  return;
}

