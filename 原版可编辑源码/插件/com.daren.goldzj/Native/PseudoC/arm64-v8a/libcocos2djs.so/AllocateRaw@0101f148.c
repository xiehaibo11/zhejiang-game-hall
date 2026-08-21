
/* v8::internal::OffThreadLargeObjectSpace::AllocateRaw(int) */

ulong __thiscall
v8::internal::OffThreadLargeObjectSpace::AllocateRaw(OffThreadLargeObjectSpace *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)param_1;
  lVar1 = MemoryAllocator::AllocateChunk
                    (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),lVar3,lVar3,0,this);
  if (lVar1 == 0) {
    uVar2 = (long)*(int *)(this + 0x48) << 1;
  }
  else {
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    *(undefined8 *)(lVar1 + 0xe8) = 0;
    *(ulong *)(lVar1 + 8) = *(ulong *)(lVar1 + 8) | 0x20;
    (**(code **)(*(long *)this + 0x88))(this,lVar1,lVar3);
    Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),*(undefined8 *)(lVar1 + 0x20),param_1,1,1);
    uVar2 = *(long *)(lVar1 + 0x20) + 1;
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!object.IsSmi()");
    }
  }
  return uVar2;
}

