
/* v8::internal::Factory::NewAllocationSite(bool) */

ulong * __thiscall v8::internal::Factory::NewAllocationSite(Factory *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = 0xdd0;
  if (!param_1) {
    lVar1 = 0xdd8;
  }
  uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(ulong)*(byte *)(*(long *)(this + lVar1) + 3) << 2,1,1,
                     0);
  uVar4 = *(ulong *)(this + lVar1);
  *(int *)(uVar2 - 1) = (int)uVar4;
  if (((uVar4 & 1) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar2,0);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    uVar2 = *puVar3;
  }
  *(undefined4 *)(uVar2 + 3) = 0;
  *(undefined4 *)(uVar2 + 3) = 0;
  *(undefined4 *)(uVar2 + 7) = 0;
  *(undefined8 *)(uVar2 + 0xf) = 0;
  *(undefined4 *)(uVar2 + 0xb) = *(undefined4 *)((uVar2 & 0xffffffff00000000) + 0x420);
  if (param_1) {
    uVar4 = *puVar3;
    uVar2 = *(ulong *)(this + 0x8e40);
    *(int *)(uVar4 + 0x17) = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar5 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x17,uVar2);
        uVar5 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x17,uVar2);
      }
    }
    *(ulong *)(this + 0x8e40) = *puVar3;
  }
  return puVar3;
}

