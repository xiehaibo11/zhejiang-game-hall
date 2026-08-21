
/* v8::internal::ClassScope::ClassScope(v8::internal::Isolate*, v8::internal::Zone*,
   v8::internal::AstValueFactory*, v8::internal::Handle<v8::internal::ScopeInfo>) */

void __thiscall
v8::internal::ClassScope::ClassScope
          (ClassScope *this,Isolate *param_1,undefined8 param_2,AstValueFactory *param_3,
          undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  Zone *pZVar7;
  long lVar8;
  ClassScope *pCVar9;
  undefined8 local_48;
  
  Scope::Scope((Scope *)this,param_2,0,param_5);
  pCVar9 = this + 0x88;
  *(undefined8 *)pCVar9 = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 1;
  local_48 = *param_5;
  uVar2 = ScopeInfo::HasClassBrand((ScopeInfo *)&local_48);
  if ((uVar2 & 1) != 0) {
    uVar3 = Scope::LookupInScopeInfo
                      ((Scope *)this,*(AstRawString **)(*(long *)(param_3 + 0x38) + 0xa8),
                       (Scope *)this);
    uVar2 = *(ulong *)(this + 0x88);
    if (uVar2 < 8) {
      pZVar7 = *(Zone **)this;
      puVar5 = *(undefined8 **)(pZVar7 + 0x10);
      if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar5) < 0x30) {
        puVar5 = (undefined8 *)Zone::NewExpand(pZVar7,0x30);
      }
      else {
        *(undefined8 **)(pZVar7 + 0x10) = puVar5 + 6;
      }
      pZVar7 = *(Zone **)this;
      *puVar5 = 0;
      puVar5[1] = puVar5;
      puVar6 = *(undefined8 **)(pZVar7 + 0x10);
      if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar6) < 0xc0) {
        puVar6 = (undefined8 *)Zone::NewExpand(pZVar7,0xc0);
        puVar5[2] = puVar6;
      }
      else {
        *(undefined8 **)(pZVar7 + 0x10) = puVar6 + 0x18;
        puVar5[2] = puVar6;
      }
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Out of memory: HashMap::Initialize");
      }
      *(undefined4 *)(puVar5 + 3) = 8;
      *puVar6 = 0;
      if (1 < *(uint *)(puVar5 + 3)) {
        uVar2 = 1;
        lVar8 = 0x18;
        do {
          uVar2 = uVar2 + 1;
          *(undefined8 *)(puVar5[2] + lVar8) = 0;
          lVar8 = lVar8 + 0x18;
        } while (uVar2 < *(uint *)(puVar5 + 3));
      }
      *(undefined4 *)((long)puVar5 + 0x1c) = 0;
      puVar5[5] = 0;
      uVar2 = *(ulong *)pCVar9 & 7 | (ulong)puVar5;
      *(ulong *)pCVar9 = uVar2;
    }
    *(undefined8 *)((uVar2 & 0xfffffffffffffff8) + 0x28) = uVar3;
  }
  local_48 = *param_5;
  uVar2 = ScopeInfo::HasSavedClassVariableIndex((ScopeInfo *)&local_48);
  if ((uVar2 & 1) != 0) {
    local_48 = *param_5;
    iVar1 = ScopeInfo::SavedClassVariableContextLocalIndex((ScopeInfo *)&local_48);
    local_48 = *param_5;
    uVar2 = ScopeInfo::ContextLocalName((ScopeInfo *)&local_48,iVar1);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(param_1 + 0x95a0);
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar2;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
    }
    lVar8 = AstValueFactory::GetString(param_3,puVar4);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 200);
    }
    lVar8 = VariableMap::Declare
                      ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,lVar8,1,0,0,1,0,
                       &local_48);
    if (local_48._0_1_ != (ScopeInfo)0x0) {
      **(long **)(this + 0x40) = lVar8;
      *(long *)(this + 0x40) = lVar8 + 0x18;
    }
    *(long *)(this + 0x90) = lVar8;
    *(undefined4 *)(lVar8 + 0x24) = 0xffffffff;
    lVar8 = *(long *)(this + 0x90);
    *(int *)(lVar8 + 0x20) = iVar1 + 2;
    *(ushort *)(lVar8 + 0x28) = *(ushort *)(lVar8 + 0x28) & 0xfdff | 0x180;
  }
  return;
}

