
/* v8::internal::Factory::NewArgumentsObject(v8::internal::Handle<v8::internal::JSFunction>, int) */

ulong * __thiscall
v8::internal::Factory::NewArgumentsObject(Factory *this,ulong *param_2,ulong param_3)

{
  Factory *pFVar1;
  long lVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  
  uVar8 = *param_2;
  pIVar4 = (Isolate *)(uVar8 & 0xffffffff00000000);
  pFVar1 = this + 0x95a0;
  if ((*(uint *)(((ulong)pIVar4 | (ulong)*(uint *)(uVar8 + 0xb)) + 0x1b) >> 6 & 1) == 0) {
    uVar3 = *(uint *)(((ulong)pIVar4 | (ulong)*(uint *)(uVar8 + 0xb)) + 7);
    if (((uVar3 & 1) == 0) ||
       (uVar8 = (ulong)pIVar4 | (ulong)uVar3,
       *(short *)(((ulong)pIVar4 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x83)) {
      uVar8 = ScopeInfo::Empty(pIVar4);
    }
    if ((1 < *(int *)(uVar8 + 3)) && ((*(uint *)(uVar8 + 7) >> 0x11 & 1) != 0)) {
      uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
      uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)
                                                   ) + 0x13)) + 0x28f);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pFVar1;
        if (puVar5 == *(ulong **)(this + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
        }
        bVar10 = false;
        *(ulong **)pFVar1 = puVar5 + 1;
        *puVar5 = uVar8;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
        bVar10 = false;
      }
      goto LAB_00f7e210;
    }
  }
  uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) +
                                              0x13)) + 0x297);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0x95a0);
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
  }
  bVar10 = true;
LAB_00f7e210:
  lVar9 = *(long *)(this + 0x8938);
  lVar2 = *(long *)(lVar9 + 0x68);
  uVar8 = (ulong)*(byte *)(*puVar5 + 3) * 4;
  if ((((ulong)(*(long *)(lVar9 + 0x70) - lVar2) < uVar8) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar6 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar8,0,1,0);
  }
  else {
    uVar6 = lVar2 + 1;
    *(ulong *)(lVar9 + 0x68) = lVar2 + uVar8;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar8,1,1);
  }
  *(int *)(uVar6 - 1) = (int)*puVar5;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pFVar1;
    if (puVar7 == *(ulong **)(this + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar7 + 1;
    *puVar7 = uVar6;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
  }
  InitializeJSObjectFromMap(this,puVar7,this + 0x168,puVar5);
  uVar8 = -((param_3 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0x95a0);
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
  }
  Object::SetProperty(this,puVar7,this + 0x7b8,puVar5,0,1);
  if (!bVar10) {
    Object::SetProperty(this,puVar7,this + 0x580,param_2,0,1);
  }
  return puVar7;
}

