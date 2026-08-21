
/* v8::internal::Variable*
   v8::internal::Scope::Lookup<(v8::internal::Scope::ScopeLookupMode)0>(v8::internal::VariableProxy*,
   v8::internal::Scope*, v8::internal::Scope*, v8::internal::Scope*, bool) */

Variable *
v8::internal::Scope::Lookup<(v8::internal::Scope::ScopeLookupMode)0>
          (VariableProxy *param_1,Scope *param_2,Scope *param_3,Scope *param_4,bool param_5)

{
  Scope SVar1;
  long lVar2;
  Scope *pSVar3;
  long lVar4;
  Variable *pVVar6;
  VariableProxy *pVVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auStack_14 [4];
  VariableProxy *pVVar5;
  
  pVVar7 = param_1 + 8;
  do {
    pVVar5 = pVVar7;
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      pVVar5 = (VariableProxy *)(*(long *)pVVar7 + 8);
    }
    lVar4 = *(long *)pVVar5;
    uVar9 = (ulong)(*(int *)(param_2 + 0x28) - 1U & *(uint *)(lVar4 + 0x18) >> 3);
    plVar8 = (long *)(*(long *)(param_2 + 0x20) + uVar9 * 0x18);
    lVar2 = *plVar8;
    while (lVar2 != 0) {
      if (lVar2 == lVar4) {
        if ((((lVar4 != 0) && (plVar8 != (long *)0x0)) &&
            (pVVar6 = (Variable *)plVar8[1], pVVar6 != (Variable *)0x0)) &&
           ((param_2[0x80] != (Scope)0x1 || ((*(ushort *)(pVVar6 + 0x28) & 0xf) != 4)))) {
          if (param_5 == false) {
            return pVVar6;
          }
          if (((*(ushort *)(pVVar6 + 0x28) & 0xf) - 4 & 0xff) < 3) {
            return pVVar6;
          }
          *(ushort *)(pVVar6 + 0x28) = *(ushort *)(pVVar6 + 0x28) | 0x400;
          return pVVar6;
        }
        break;
      }
      uVar9 = (ulong)((int)uVar9 + 1U & *(int *)(param_2 + 0x28) - 1U);
      plVar8 = (long *)(*(long *)(param_2 + 0x20) + uVar9 * 0x18);
      lVar2 = *plVar8;
    }
    pSVar3 = *(Scope **)(param_2 + 8);
    SVar1 = param_2[0x80];
    if (pSVar3 == param_3) {
      if (SVar1 == (Scope)0x4) {
        if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
          pVVar7 = (VariableProxy *)(*(long *)pVVar7 + 8);
        }
        pVVar6 = (Variable *)
                 VariableMap::Declare
                           ((VariableMap *)(param_2 + 0x20),*(undefined8 *)param_2,param_2,
                            *(undefined8 *)pVVar7,5,0,1,0,0,auStack_14);
      }
      else {
        pVVar6 = (Variable *)0x0;
      }
      return pVVar6;
    }
    if (SVar1 == (Scope)0x7) {
      pVVar6 = (Variable *)LookupWith(param_1,param_2,param_3,param_4,param_5);
      return pVVar6;
    }
    if (((*(ushort *)(param_2 + 0x81) ^ 0xffff) & 0x104) == 0) {
      pVVar6 = (Variable *)LookupSloppyEval(param_1,param_2,param_3,param_4,param_5);
      return pVVar6;
    }
    param_5 = (bool)(param_5 | SVar1 == (Scope)0x2);
    param_2 = pSVar3;
    if (*(long *)(pSVar3 + 0x68) != 0) {
      pVVar6 = Lookup<(v8::internal::Scope::ScopeLookupMode)1>(param_1,pSVar3,param_3,pSVar3,false);
      return pVVar6;
    }
  } while( true );
}

