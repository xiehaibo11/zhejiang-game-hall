
/* v8::internal::Scope::LookupInScopeInfo(v8::internal::AstRawString const*, v8::internal::Scope*)
    */

long __thiscall
v8::internal::Scope::LookupInScopeInfo(Scope *this,AstRawString *param_1,Scope *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  AstRawString *pAVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined1 auStack_48 [4];
  undefined1 local_44 [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  uVar7 = **(undefined8 **)param_1;
  iVar1 = ScopeInfo::ContextSlotIndex
                    (**(undefined8 **)(this + 0x68),uVar7,local_24,local_28,local_44,auStack_48);
  if (iVar1 < 0) {
    if (this[0x80] == (Scope)0x3) {
      local_50 = **(undefined8 **)(this + 0x68);
      iVar1 = ScopeInfo::ModuleIndex((ScopeInfo *)&local_50,uVar7,local_24,local_28,local_44);
      if (iVar1 != 0) {
        uVar6 = 0x280;
        goto LAB_0149f2c4;
      }
    }
    local_50 = **(undefined8 **)(this + 0x68);
    iVar1 = ScopeInfo::FunctionContextSlotIndex((ScopeInfo *)&local_50,uVar7);
    if (-1 < iVar1) {
      lVar2 = DeclarationScope::DeclareFunctionVar((DeclarationScope *)this,param_1,param_2);
      *(int *)(lVar2 + 0x20) = iVar1;
      *(ushort *)(lVar2 + 0x28) = *(ushort *)(lVar2 + 0x28) & 0xfdff | 0x180;
      uVar4 = (ulong)(*(int *)(param_2 + 0x28) - 1U & *(uint *)(param_1 + 0x18) >> 3);
      plVar3 = (long *)(*(long *)(param_2 + 0x20) + uVar4 * 0x18);
      pAVar5 = (AstRawString *)*plVar3;
      while (pAVar5 != (AstRawString *)0x0) {
        if (pAVar5 == param_1) {
          if (param_1 == (AstRawString *)0x0) {
            return 0;
          }
          if (plVar3 == (long *)0x0) {
            return 0;
          }
          return plVar3[1];
        }
        uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(param_2 + 0x28) - 1U);
        plVar3 = (long *)(*(long *)(param_2 + 0x20) + uVar4 * 0x18);
        pAVar5 = (AstRawString *)*plVar3;
      }
    }
    lVar2 = 0;
  }
  else {
    uVar6 = 0x180;
LAB_0149f2c4:
    lVar2 = VariableMap::Declare
                      ((VariableMap *)(param_2 + 0x20),*(undefined8 *)this,this,param_1,local_24[0],
                       0,local_28[0],local_44[0],0,&local_50);
    *(int *)(lVar2 + 0x20) = iVar1;
    *(ushort *)(lVar2 + 0x28) = *(ushort *)(lVar2 + 0x28) & 0xfc7f | uVar6;
  }
  return lVar2;
}

