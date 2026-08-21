
/* v8::internal::Factory::NewJSSet() */

ulong * __thiscall v8::internal::Factory::NewJSSet(Factory *this)

{
  Factory *pFVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar1 = this + 0x95a0;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
    uVar6 = *puVar3;
  }
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x187);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
    uVar6 = *puVar3;
  }
  lVar7 = *(long *)(this + 0x8938);
  lVar2 = *(long *)(lVar7 + 0x68);
  uVar6 = (ulong)*(byte *)(uVar6 + 3) * 4;
  if ((((ulong)(*(long *)(lVar7 + 0x70) - lVar2) < uVar6) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar6,0,1,0);
  }
  else {
    uVar4 = lVar2 + 1;
    *(ulong *)(lVar7 + 0x68) = lVar2 + uVar6;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar6,1,1);
  }
  *(int *)(uVar4 - 1) = (int)*puVar3;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pFVar1;
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
  }
  InitializeJSObjectFromMap(this,puVar5,this + 0x168,puVar3);
  JSSet::Initialize(puVar5,this);
  return puVar5;
}

