
/* v8::internal::Factory::NewUninitializedJSGlobalProxy(int) */

ulong * __thiscall v8::internal::Factory::NewUninitializedJSGlobalProxy(Factory *this,int param_1)

{
  Heap *pHVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  Logger *this_00;
  
  pHVar1 = (Heap *)(this + 0x8850);
  lVar2 = Heap::AllocateRawWithRetryOrFailSlowPath(pHVar1,0x28,3,1,0);
  *(undefined4 *)(lVar2 + -1) = *(undefined4 *)(this + 0xd0);
  uVar3 = InitializeMap(this,lVar2,0xab,param_1,3,0);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
  }
  *(byte *)(*puVar4 + 9) = *(byte *)(*puVar4 + 9) | 0x20;
  *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar4 + 0xb) | 0x10000000;
  this_00 = *(Logger **)(this + 0x9558);
  uVar3 = Logger::is_logging(this_00);
  if ((uVar3 & 1) != 0) {
    Logger::MapDetails(this_00,*puVar4);
  }
  lVar7 = *(long *)(this + 0x8938);
  lVar2 = *(long *)(lVar7 + 0x68);
  uVar3 = (ulong)*(byte *)(*puVar4 + 3) * 4;
  if ((((ulong)(*(long *)(lVar7 + 0x70) - lVar2) < uVar3) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath(pHVar1,uVar3,0,1,0);
  }
  else {
    uVar5 = lVar2 + 1;
    *(ulong *)(lVar7 + 0x68) = lVar2 + uVar3;
    Heap::CreateFillerObjectAt(pHVar1,lVar2,uVar3,1,1);
  }
  *(int *)(uVar5 - 1) = (int)*puVar4;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  InitializeJSObjectFromMap(this,puVar6,this + 0x168,puVar4);
  return puVar6;
}

