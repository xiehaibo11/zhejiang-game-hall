
/* v8::internal::AbstractCode::DropStackFrameCache() */

void __thiscall v8::internal::AbstractCode::DropStackFrameCache(AbstractCode *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)this;
  uVar2 = uVar4 & 0xffffffff00000000;
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x9a) {
    puVar5 = (uint *)(uVar4 + 0xb);
    uVar1 = *puVar5;
  }
  else {
    puVar5 = (uint *)(uVar4 + 0xf);
    uVar1 = *puVar5;
  }
  if (((uVar1 & 1) == 0) ||
     (((uVar1 != *(uint *)(uVar2 + 0xa0) &&
       (*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) != 0x85)) &&
      (uVar1 != *(uint *)(uVar2 + 0x180))))) {
    uVar1 = *(uint *)((uVar2 | uVar1) + 3);
    *puVar5 = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar6 = uVar2 | uVar1;
      uVar2 = uVar2 | (ulong)uVar1 & 0xfffffffffffc0000;
      uVar3 = *(ulong *)(uVar2 + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,puVar5,uVar6);
        uVar3 = *(ulong *)(uVar2 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,puVar5,uVar6);
        return;
      }
    }
  }
  return;
}

