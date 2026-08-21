
/* v8::internal::MemoryAllocator::AllocateLargePage(unsigned long, v8::internal::LargeObjectSpace*,
   v8::internal::Executability) */

void __thiscall
v8::internal::MemoryAllocator::AllocateLargePage
          (MemoryAllocator *this,undefined8 param_1,undefined8 param_2,int param_4)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)AllocateChunk(this,param_1,param_1,param_4,param_2);
  if (puVar1 != (ulong *)0x0) {
    if ((param_4 != 0) && (0x20000000 < *puVar1)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Code page is too large.");
    }
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[1] = puVar1[1] | 0x20;
  }
  return;
}

