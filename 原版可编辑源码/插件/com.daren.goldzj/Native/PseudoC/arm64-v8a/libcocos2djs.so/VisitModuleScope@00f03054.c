
/* v8::internal::ScopeIterator::VisitModuleScope(std::__ndk1::function<bool
   (v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Object>)> const&)
   const */

void __thiscall v8::internal::ScopeIterator::VisitModuleScope(ScopeIterator *this,function *param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  Isolate *pIVar8;
  int iVar9;
  int local_74;
  ulong *local_70;
  ulong *local_68;
  
  local_68 = (ulong *)**(undefined8 **)(this + 0x28);
  uVar3 = Context::scope_info((Context *)&local_68);
  pIVar8 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
  }
  uVar3 = VisitContextLocals(this,param_1,puVar4,*(undefined8 *)(this + 0x28));
  if ((uVar3 & 1) == 0) {
    local_68 = (ulong *)*puVar4;
    iVar2 = ScopeInfo::ModuleVariableCountIndex((ScopeInfo *)&local_68);
    iVar2 = *(int *)(*puVar4 + (long)(iVar2 << 2) + 7);
    local_68 = (ulong *)**(undefined8 **)(this + 0x28);
    uVar3 = Context::module((Context *)&local_68);
    pIVar8 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar3;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
    }
    if (1 < iVar2) {
      iVar9 = 0;
      do {
        local_68 = (ulong *)0x0;
        local_70 = (ulong *)*puVar4;
        ScopeInfo::ModuleVariable
                  ((ScopeInfo *)&local_70,iVar9,(String *)&local_68,&local_74,(VariableMode *)0x0,
                   (InitializationFlag *)0x0,(MaybeAssignedFlag *)0x0);
        uVar3 = ScopeInfo::VariableIsSynthetic(local_68);
        puVar1 = local_68;
        if ((uVar3 & 1) == 0) {
          pIVar8 = *(Isolate **)this;
          if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)(pIVar8 + 0x95a0);
            if (puVar6 == *(ulong **)(pIVar8 + 0x95a8)) {
              puVar6 = (ulong *)HandleScope::Extend(pIVar8);
            }
            *(ulong **)(pIVar8 + 0x95a0) = puVar6 + 1;
            *puVar6 = (ulong)puVar1;
          }
          else {
            puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),(ulong)local_68
                                        );
          }
          local_70 = (ulong *)SourceTextModule::LoadVariable(*(undefined8 *)this,puVar5,local_74);
          if (((*local_70 & 1) == 0) || ((int)*local_70 != *(int *)(*(long *)this + 0xa8))) {
            plVar7 = *(long **)(param_1 + 0x20);
            local_68 = puVar6;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_008589d0();
            }
            uVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_68,&local_70);
            if ((uVar3 & 1) != 0) {
              return;
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar2 >> 1);
    }
  }
  return;
}

