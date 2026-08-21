
/* v8::ValueSerializer::Delegate::ReallocateBufferMemory(void*, unsigned long, unsigned long*) */

void __thiscall
v8::ValueSerializer::Delegate::ReallocateBufferMemory
          (Delegate *this,void *param_1,ulong param_2,ulong *param_3)

{
  *param_3 = param_2;
  realloc(param_1,param_2);
  return;
}

