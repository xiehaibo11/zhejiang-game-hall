
/* v8::internal::LargeObjectSpace::AllocateLargePage(int, v8::internal::Executability) */

ulong * __thiscall
v8::internal::LargeObjectSpace::AllocateLargePage(LargeObjectSpace *this,int param_1,int param_3)

{
  ulong *puVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  puVar1 = (ulong *)MemoryAllocator::AllocateChunk
                              (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),lVar2,lVar2,
                               param_3,this);
  if (puVar1 != (ulong *)0x0) {
    if ((param_3 != 0) && (0x20000000 < *puVar1)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Code page is too large.");
    }
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[1] = puVar1[1] | 0x20;
    (**(code **)(*(long *)this + 0x88))(this,puVar1,lVar2);
    Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),puVar1[4],param_1,1,1);
  }
  return puVar1;
}

