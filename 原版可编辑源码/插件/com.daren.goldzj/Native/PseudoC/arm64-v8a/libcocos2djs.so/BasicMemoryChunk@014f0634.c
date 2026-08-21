
/* v8::internal::BasicMemoryChunk::BasicMemoryChunk(unsigned long, unsigned long, unsigned long) */

void __thiscall
v8::internal::BasicMemoryChunk::BasicMemoryChunk
          (BasicMemoryChunk *this,ulong param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  
  *(ulong *)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = calloc(1,0x2000);
  *(void **)(this + 0x10) = pvVar1;
  *(ulong *)(this + 0x20) = param_2;
  *(ulong *)(this + 0x28) = param_3;
  return;
}

