
/* v8::internal::Scope::ResolvePreparsedVariable(v8::internal::VariableProxy*, v8::internal::Scope*,
   v8::internal::Scope*) */

void v8::internal::Scope::ResolvePreparsedVariable
               (VariableProxy *param_1,Scope *param_2,Scope *param_3)

{
  ushort uVar1;
  long lVar2;
  Variable *this;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  VariableProxy *pVVar3;
  
  if (param_2 != param_3) {
    do {
      pVVar3 = param_1 + 8;
      if (((byte)param_1[5] & 1) != 0) {
        pVVar3 = (VariableProxy *)(*(long *)(param_1 + 8) + 8);
      }
      lVar2 = *(long *)pVVar3;
      uVar5 = (ulong)(*(int *)(param_2 + 0x28) - 1U & *(uint *)(lVar2 + 0x18) >> 3);
      plVar4 = (long *)(*(long *)(param_2 + 0x20) + uVar5 * 0x18);
      lVar6 = *plVar4;
      while (lVar6 != 0) {
        if (lVar6 == lVar2) {
          if (((lVar2 != 0) && (plVar4 != (long *)0x0)) &&
             (this = (Variable *)plVar4[1], this != (Variable *)0x0)) {
            uVar1 = *(ushort *)(this + 0x28);
            *(ushort *)(this + 0x28) = uVar1 | 0x800;
            if (2 < ((uVar1 & 0xf) - 4 & 0xff)) {
              *(ushort *)(this + 0x28) = uVar1 | 0xc00;
              if (-1 < (char)param_1[4]) {
                return;
              }
              Variable::SetMaybeAssigned(this);
              return;
            }
          }
          break;
        }
        uVar5 = (ulong)((int)uVar5 + 1U & *(int *)(param_2 + 0x28) - 1U);
        plVar4 = (long *)(*(long *)(param_2 + 0x20) + uVar5 * 0x18);
        lVar6 = *plVar4;
      }
      param_2 = *(Scope **)(param_2 + 8);
    } while (param_2 != param_3);
  }
  return;
}

