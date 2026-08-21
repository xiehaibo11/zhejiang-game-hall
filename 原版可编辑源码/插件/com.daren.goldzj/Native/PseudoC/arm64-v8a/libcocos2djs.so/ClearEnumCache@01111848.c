
/* v8::internal::DescriptorArray::ClearEnumCache() */

void __thiscall v8::internal::DescriptorArray::ClearEnumCache(DescriptorArray *this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)((*(ulong *)this & 0xffffffff00000000) + 0x3b0);
  *(int *)(*(ulong *)this + 0xb) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar1 = *(ulong *)this;
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar1 + 0xb;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,uVar4);
      uVar1 = *(ulong *)this;
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar1 + 0xb;
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,uVar4);
      return;
    }
  }
  return;
}

