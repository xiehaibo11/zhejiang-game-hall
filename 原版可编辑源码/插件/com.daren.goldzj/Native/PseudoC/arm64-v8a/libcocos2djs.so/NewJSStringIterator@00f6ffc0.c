
/* v8::internal::Factory::NewJSStringIterator(v8::internal::Handle<v8::internal::String>) */

ulong * __thiscall v8::internal::Factory::NewJSStringIterator(Factory *this,undefined8 param_2)

{
  Factory *pFVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar7 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar1 = this + 0x95a0;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar7;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
    uVar7 = *puVar3;
  }
  uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x113);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar7;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  puVar4 = (ulong *)String::Flatten(this,param_2,0);
  lVar8 = *(long *)(this + 0x8938);
  lVar2 = *(long *)(lVar8 + 0x68);
  uVar7 = (ulong)*(byte *)(*puVar3 + 3) * 4;
  if ((((ulong)(*(long *)(lVar8 + 0x70) - lVar2) < uVar7) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar7,0,1,0);
  }
  else {
    uVar5 = lVar2 + 1;
    *(ulong *)(lVar8 + 0x68) = lVar2 + uVar7;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar7,1,1);
  }
  *(int *)(uVar5 - 1) = (int)*puVar3;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pFVar1;
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  InitializeJSObjectFromMap(this,puVar6,this + 0x168,puVar3);
  uVar5 = *puVar6;
  uVar7 = *puVar4;
  *(int *)(uVar5 + 0xb) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar7);
      uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar7);
    }
  }
  *(undefined4 *)(*puVar6 + 0xf) = 0;
  return puVar6;
}

