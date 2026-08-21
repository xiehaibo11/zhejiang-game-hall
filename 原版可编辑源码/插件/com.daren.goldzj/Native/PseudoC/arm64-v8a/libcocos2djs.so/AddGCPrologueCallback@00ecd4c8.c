
/* v8::Isolate::AddGCPrologueCallback(void (*)(v8::Isolate*, v8::GCType, v8::GCCallbackFlags),
   v8::GCType) */

void __thiscall
v8::Isolate::AddGCPrologueCallback(Isolate *this,undefined8 param_1,undefined8 param_3)

{
  internal::Heap::AddGCPrologueCallback((Heap *)(this + 0x8850),FUN_00ecd4e4,param_3,param_1);
  return;
}

