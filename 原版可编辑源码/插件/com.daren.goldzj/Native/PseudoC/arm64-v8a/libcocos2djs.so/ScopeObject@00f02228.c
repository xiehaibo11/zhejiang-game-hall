
/* v8::internal::ScopeIterator::ScopeObject(v8::internal::ScopeIterator::Mode) */

ulong * __thiscall v8::internal::ScopeIterator::ScopeObject(ScopeIterator *this,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  code *pcVar6;
  undefined **local_80;
  ScopeIterator *pSStack_78;
  ulong *local_70;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = Type(this);
  if (iVar2 == 2) {
    puVar4 = (ulong *)WithContextExtension(this);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return puVar4;
    }
    goto LAB_00f02374;
  }
  if (iVar2 == 0) {
    local_80 = (undefined **)**(undefined8 **)(this + 0x28);
    uVar3 = Context::global_proxy((Context *)&local_80);
    pIVar5 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar3;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar3);
    }
  }
  else {
    puVar4 = (ulong *)Factory::NewJSObjectWithNullProto(*(Factory **)this);
    local_80 = &PTR_FUN_01ca4560;
    pSStack_78 = this;
    local_70 = puVar4;
    local_60 = (long *)&local_80;
    VisitScope(this,&local_80,param_2);
    if (&local_80 == (undefined ***)local_60) {
      pcVar6 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00f02348;
      pcVar6 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar6)();
  }
LAB_00f02348:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar4;
  }
LAB_00f02374:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

