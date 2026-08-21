
/* v8::internal::ScopeIterator::SetModuleVariableValue(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::ScopeIterator::SetModuleVariableValue
          (ScopeIterator *this,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  Isolate *pIVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  local_50 = **(undefined8 **)(this + 0x28);
  local_48 = Context::scope_info((Context *)&local_50);
  iVar1 = ScopeInfo::ModuleIndex((ScopeInfo *)&local_48,*param_2,auStack_34,auStack_38,auStack_3c);
  iVar2 = SourceTextModuleDescriptor::GetCellIndexKind(iVar1);
  if (iVar2 == 1) {
    local_48 = **(undefined8 **)(this + 0x28);
    uVar3 = Context::module((Context *)&local_48);
    pIVar6 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar3;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar3);
    }
    SourceTextModule::StoreVariable(puVar4,iVar1,param_3);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

