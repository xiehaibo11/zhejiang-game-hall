
/* v8::internal::Genesis::InitializeNormalizedMapCaches() */

void __thiscall v8::internal::Genesis::InitializeNormalizedMapCaches(Genesis *this)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = (ulong *)NormalizedMapCache::New(*(Isolate **)this);
  uVar4 = *puVar2;
  uVar5 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar5 + 0x1eb);
  *puVar1 = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,puVar1,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,puVar1,uVar4);
      return;
    }
  }
  return;
}

