
/* v8::internal::ScopeIterator::VisitContextLocals(std::__ndk1::function<bool
   (v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Object>)> const&,
   v8::internal::Handle<v8::internal::ScopeInfo>, v8::internal::Handle<v8::internal::Context>) const
    */

undefined8 __thiscall
v8::internal::ScopeIterator::VisitContextLocals
          (ScopeIterator *this,long param_1,long *param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  Isolate *pIVar7;
  int iVar8;
  ulong *local_70;
  ulong *local_68;
  
  iVar8 = 0;
  do {
    local_68 = (ulong *)*param_3;
    if (*(int *)((long)local_68 + 3) < 2) {
      if (-1 < iVar8) {
        return 0;
      }
    }
    else if (*(int *)((long)local_68 + 0xf) >> 1 <= iVar8) {
      return 0;
    }
    uVar3 = ScopeInfo::ContextLocalName((ScopeInfo *)&local_68,iVar8);
    pIVar7 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar3;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar3);
    }
    uVar3 = ScopeInfo::VariableIsSynthetic(*puVar4);
    if ((uVar3 & 1) == 0) {
      local_68 = (ulong *)*param_3;
      iVar2 = ScopeInfo::ContextHeaderLength((ScopeInfo *)&local_68);
      uVar1 = *(uint *)(*param_4 + (long)((iVar2 + iVar8) * 4) + 7);
      pIVar7 = *(Isolate **)this;
      uVar3 = *param_4 & 0xffffffff00000000 | (ulong)uVar1;
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar3;
        if ((uVar1 & 1) != 0) goto LAB_00f04144;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar3);
        uVar3 = *puVar5;
        if ((uVar3 & 1) != 0) {
LAB_00f04144:
          if ((int)uVar3 == *(int *)(*(long *)this + 0xa8)) goto LAB_00f04034;
        }
      }
      plVar6 = *(long **)(param_1 + 0x20);
      local_70 = puVar5;
      local_68 = puVar4;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_68,&local_70);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
LAB_00f04034:
    iVar8 = iVar8 + 1;
  } while( true );
}

