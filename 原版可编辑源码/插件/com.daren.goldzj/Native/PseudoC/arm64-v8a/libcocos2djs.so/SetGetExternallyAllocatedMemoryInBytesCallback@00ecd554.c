
/* v8::Isolate::SetGetExternallyAllocatedMemoryInBytesCallback(unsigned long (*)()) */

void __thiscall
v8::Isolate::SetGetExternallyAllocatedMemoryInBytesCallback(Isolate *this,_func_ulong *param_1)

{
  *(_func_ulong **)(this + 0x8e78) = param_1;
  return;
}

