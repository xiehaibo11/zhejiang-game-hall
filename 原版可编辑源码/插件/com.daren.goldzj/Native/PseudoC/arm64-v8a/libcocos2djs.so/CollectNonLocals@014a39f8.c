
/* v8::internal::Scope::CollectNonLocals(v8::internal::DeclarationScope*, v8::internal::Isolate*,
   v8::internal::ParseInfo*, v8::internal::Handle<v8::internal::StringSet>*) */

void __thiscall
v8::internal::Scope::CollectNonLocals
          (Scope *this,DeclarationScope *param_1,Isolate *param_2,ParseInfo *param_3,Handle *param_4
          )

{
  Scope *pSVar1;
  Variable *pVVar2;
  undefined8 uVar3;
  ParseInfo *extraout_x1;
  VariableProxy *pVVar4;
  VariableProxy *pVVar5;
  ModuleScope *this_00;
  ModuleScope *pMVar6;
  VariableProxy *pVVar7;
  VariableProxy *pVVar8;
  VariableProxy *pVVar9;
  
  pSVar1 = this;
  do {
    this_00 = (ModuleScope *)pSVar1;
    if (this_00[0x80] == (ModuleScope)0x3) {
      ModuleScope::AllocateModuleVariables(this_00);
    }
    pMVar6 = this_00;
    if ((((byte)this_00[0x82] & 1) != 0) && ((char)this_00[0x83] < '\0')) {
      pMVar6 = *(ModuleScope **)(this_00 + 8);
    }
    pVVar5 = (VariableProxy *)(this_00 + 0x48);
    pVVar7 = *(VariableProxy **)pVVar5;
    pVVar8 = pVVar5;
    if ((pVVar7 != (VariableProxy *)0x0) && (((byte)pVVar7[5] >> 1 & 1) != 0)) {
      do {
        pVVar8 = pVVar7;
        pVVar7 = *(VariableProxy **)(pVVar8 + 0x10);
        if (pVVar7 == (VariableProxy *)0x0) break;
      } while (((byte)pVVar7[5] >> 1 & 1) != 0);
      pVVar8 = pVVar8 + 0x10;
    }
    pVVar9 = *(VariableProxy **)(this_00 + 0x50);
    while (pVVar8 != pVVar9) {
      pVVar2 = Lookup<(v8::internal::Scope::ScopeLookupMode)0>
                         (pVVar7,(Scope *)pMVar6,*(Scope **)(param_1 + 8),(Scope *)0x0,false);
      if (pVVar2 == (Variable *)0x0) {
        pVVar4 = pVVar7 + 8;
        if (((byte)pVVar7[5] & 1) != 0) {
          pVVar4 = (VariableProxy *)(*(long *)pVVar4 + 8);
        }
        uVar3 = StringSet::Add(param_2,*(undefined8 *)param_4,**(undefined8 **)pVVar4);
        *(undefined8 *)param_4 = uVar3;
      }
      else {
        ResolveTo((Scope *)this_00,extraout_x1,pVVar7,pVVar2);
        if ((pMVar6 != this_00) && (2 < ((*(ushort *)(pVVar2 + 0x28) & 0xf) - 4 & 0xff))) {
          *(ushort *)(pVVar2 + 0x28) = *(ushort *)(pVVar2 + 0x28) | 0x400;
        }
      }
      pVVar8 = (VariableProxy *)(*(long *)pVVar8 + 0x10);
      pVVar7 = *(VariableProxy **)pVVar8;
      if ((pVVar7 != (VariableProxy *)0x0) && (((byte)pVVar7[5] >> 1 & 1) != 0)) {
        do {
          pVVar8 = pVVar7;
          pVVar7 = *(VariableProxy **)(pVVar8 + 0x10);
          if (pVVar7 == (VariableProxy *)0x0) break;
        } while (((byte)pVVar7[5] >> 1 & 1) != 0);
        pVVar8 = pVVar8 + 0x10;
      }
    }
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(VariableProxy **)(this_00 + 0x50) = pVVar5;
    pSVar1 = (Scope *)*(ModuleScope **)(this_00 + 0x10);
    if (*(ModuleScope **)(this_00 + 0x10) == (ModuleScope *)0x0) {
      while( true ) {
        if (*(ModuleScope **)(this_00 + 0x18) != (ModuleScope *)0x0) break;
        if (this_00 == (ModuleScope *)this) {
          return;
        }
        this_00 = *(ModuleScope **)(this_00 + 8);
      }
      pSVar1 = (Scope *)*(ModuleScope **)(this_00 + 0x18);
      if (this_00 == (ModuleScope *)this) {
        return;
      }
    }
  } while( true );
}

