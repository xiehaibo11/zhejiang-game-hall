
/* v8::internal::Factory::NewJSGeneratorObject(v8::internal::Handle<v8::internal::JSFunction>) */

ulong * __thiscall v8::internal::Factory::NewJSGeneratorObject(Factory *this,ulong *param_2)

{
  Factory *pFVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  pFVar1 = this + 0x95a0;
  JSFunction::EnsureHasInitialMap(param_2);
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1b);
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
  lVar6 = *(long *)(this + 0x8938);
  lVar2 = *(long *)(lVar6 + 0x68);
  uVar7 = (ulong)*(byte *)(uVar7 + 3) * 4;
  if ((((ulong)(*(long *)(lVar6 + 0x70) - lVar2) < uVar7) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar7,0,1,0);
  }
  else {
    uVar4 = lVar2 + 1;
    *(ulong *)(lVar6 + 0x68) = lVar2 + uVar7;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar7,1,1);
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
  return puVar5;
}

