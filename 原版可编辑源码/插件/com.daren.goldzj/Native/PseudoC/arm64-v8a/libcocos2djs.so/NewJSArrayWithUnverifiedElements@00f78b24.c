
/* v8::internal::Factory::NewJSArrayWithUnverifiedElements(v8::internal::Handle<v8::internal::FixedArrayBase>,
   v8::internal::ElementsKind, int, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewJSArrayWithUnverifiedElements
          (Factory *this,ulong *param_2,byte param_3,int param_4,undefined4 param_5)

{
  Factory *pFVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar4 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar1 = this + 0x95a0;
  uVar6 = uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
  if ((5 < param_3) || (uVar7 = *(uint *)(uVar6 + (ulong)param_3 * 4 + 0x15f), uVar7 == 0)) {
    uVar7 = *(uint *)((uVar4 | *(uint *)(uVar6 + 0x2f)) + 0x1b);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pFVar1;
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar2 + 1;
    *puVar2 = uVar4 | uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar4 | uVar7);
  }
  uVar4 = AllocateRawWithAllocationSite(this,puVar2,param_5,0);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
  }
  InitializeJSObjectFromMap(this,puVar3,this + 0x168,puVar2);
  uVar6 = *puVar3;
  uVar4 = *param_2;
  *(int *)(uVar6 + 7) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 7,uVar4);
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 7,uVar4);
    }
  }
  *(int *)(*puVar3 + 0xb) = param_4 << 1;
  return puVar3;
}

