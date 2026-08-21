
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::ScopeInfo::VariableIsSynthetic(v8::internal::String) */

uint v8::internal::ScopeInfo::VariableIsSynthetic(ulong param_1)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  uint local_30 [2];
  ulong local_28;
  
  if (*(int *)(param_1 + 7) != 0) {
    local_30[1] = 0;
    uVar4 = param_1 & 0xffffffff00000000;
    local_30[0] = (uint)*(ushort *)((uVar4 | *(uint *)(param_1 - 1)) + 7);
    local_38 = param_1;
    local_28 = param_1;
    sVar1 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (local_30,&local_28,local_30 + 1);
    if (sVar1 != 0x2e) {
      local_30[1] = 0;
      local_30[0] = (uint)*(ushort *)((uVar4 | *(uint *)(param_1 - 1)) + 7);
      local_28 = param_1;
      sVar1 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (local_30,&local_28,local_30 + 1);
      if ((sVar1 != 0x23) && (uVar3 = *(ulong *)(uVar4 + 0xa48), (int)uVar3 != (int)param_1)) {
        if ((*(ushort *)((uVar4 | 7) + (ulong)*(uint *)(param_1 - 1)) < 0x20) &&
           (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x20)) {
          uVar2 = 0;
        }
        else {
          uVar2 = String::SlowEquals((String *)&local_38);
        }
        goto LAB_0112aa98;
      }
    }
  }
  uVar2 = 1;
LAB_0112aa98:
  return uVar2 & 1;
}

