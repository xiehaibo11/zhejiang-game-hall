
/* v8::internal::Variable*
   v8::internal::Scope::Lookup<(v8::internal::Scope::ScopeLookupMode)1>(v8::internal::VariableProxy*,
   v8::internal::Scope*, v8::internal::Scope*, v8::internal::Scope*, bool) */

Variable *
v8::internal::Scope::Lookup<(v8::internal::Scope::ScopeLookupMode)1>
          (VariableProxy *param_1,Scope *param_2,Scope *param_3,Scope *param_4,bool param_5)

{
  Variable *pVVar1;
  uint uVar2;
  long lVar3;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  VariableProxy *pVVar8;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  VariableProxy *pVVar4;
  
  uVar2 = *(uint *)(param_1 + 4);
  pVVar8 = param_1 + 8;
  pVVar4 = pVVar8;
  if ((uVar2 >> 8 & 1) != 0) {
    pVVar4 = (VariableProxy *)(*(long *)pVVar8 + 8);
  }
  lVar3 = *(long *)pVVar4;
  uVar6 = (ulong)(*(int *)(param_4 + 0x28) - 1U & *(uint *)(lVar3 + 0x18) >> 3);
  plVar5 = (long *)(*(long *)(param_4 + 0x20) + uVar6 * 0x18);
  lVar7 = *plVar5;
  do {
    if (lVar7 == 0) {
LAB_0149efc0:
      while( true ) {
        pVVar4 = pVVar8;
        if ((uVar2 >> 8 & 1) != 0) {
          pVVar4 = (VariableProxy *)(*(long *)pVVar8 + 8);
        }
        if ((*(ushort *)(param_2 + 0x81) >> 5 & 1) != 0) {
          pVVar1 = (Variable *)
                   VariableMap::Declare
                             ((VariableMap *)(param_4 + 0x20),*(undefined8 *)param_4,param_4,
                              *(AstRawString **)pVVar4,4,0,1,0,0,auStack_58);
          *(undefined4 *)(pVVar1 + 0x20) = 0xffffffff;
          *(ushort *)(pVVar1 + 0x28) = *(ushort *)(pVVar1 + 0x28) & 0xfc7f | 0x200;
          return pVVar1;
        }
        pVVar1 = (Variable *)LookupInScopeInfo(param_2,*(AstRawString **)pVVar4,param_4);
        if (pVVar1 != (Variable *)0x0) {
          if (param_2[0x80] != (Scope)0x1) {
            return pVVar1;
          }
          if ((*(ushort *)(pVVar1 + 0x28) & 0xf) != 4) {
            return pVVar1;
          }
        }
        if (*(Scope **)(param_2 + 8) == param_3) {
          if (((byte)param_1[5] & 1) != 0) {
            pVVar8 = (VariableProxy *)(*(long *)pVVar8 + 8);
          }
          pVVar1 = (Variable *)
                   VariableMap::Declare
                             ((VariableMap *)(param_4 + 0x20),*(undefined8 *)param_2,param_2,
                              *(undefined8 *)pVVar8,5,0,1,0,0,auStack_54);
          return pVVar1;
        }
        if (param_2[0x80] == (Scope)0x7) break;
        if (((*(ushort *)(param_2 + 0x81) ^ 0xffff) & 0x104) == 0) {
          pVVar1 = (Variable *)LookupSloppyEval(param_1,param_2,param_3,param_4,param_5);
          return pVVar1;
        }
        uVar2 = *(uint *)(param_1 + 4);
        param_5 = (bool)(param_5 | param_2[0x80] == (Scope)0x2);
        param_2 = *(Scope **)(param_2 + 8);
      }
      pVVar1 = (Variable *)LookupWith(param_1,param_2,param_3,param_4,param_5);
      return pVVar1;
    }
    if (lVar7 == lVar3) {
      if (((lVar3 != 0) && (plVar5 != (long *)0x0)) && ((Variable *)plVar5[1] != (Variable *)0x0)) {
        return (Variable *)plVar5[1];
      }
      goto LAB_0149efc0;
    }
    uVar6 = (ulong)((int)uVar6 + 1U & *(int *)(param_4 + 0x28) - 1U);
    plVar5 = (long *)(*(long *)(param_4 + 0x20) + uVar6 * 0x18);
    lVar7 = *plVar5;
  } while( true );
}

