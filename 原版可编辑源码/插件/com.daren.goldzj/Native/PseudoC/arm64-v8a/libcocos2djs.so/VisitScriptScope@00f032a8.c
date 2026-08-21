
/* v8::internal::ScopeIterator::VisitScriptScope(std::__ndk1::function<bool
   (v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Object>)> const&)
   const */

void __thiscall v8::internal::ScopeIterator::VisitScriptScope(ScopeIterator *this,function *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  int iVar6;
  long lVar7;
  ulong local_68;
  
  local_68 = **(ulong **)(this + 0x28);
  uVar1 = Context::global_object((Context *)&local_68);
  pIVar5 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar1);
  }
  uVar1 = *puVar2 & 0xffffffff00000000;
  pIVar5 = *(Isolate **)this;
  uVar1 = uVar1 | *(uint *)((uVar1 | *(uint *)(*puVar2 + 0xb)) + 0x273);
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar1);
    uVar1 = *puVar2;
  }
  if (3 < *(int *)(uVar1 + 7)) {
    iVar6 = 8;
    lVar7 = 1;
    do {
      pIVar5 = *(Isolate **)this;
      uVar1 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + (long)iVar6 + 7);
      if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar1;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar1);
      }
      local_68 = *puVar3;
      uVar1 = Context::scope_info((Context *)&local_68);
      pIVar5 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar1;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar1);
      }
      uVar1 = VisitContextLocals(this,param_1,puVar4,puVar3);
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar1 = *puVar2;
      lVar7 = lVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (lVar7 < *(int *)(uVar1 + 7) >> 1);
  }
  return;
}

