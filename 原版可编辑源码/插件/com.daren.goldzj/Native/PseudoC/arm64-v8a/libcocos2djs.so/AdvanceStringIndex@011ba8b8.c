
/* v8::internal::RegExpUtils::AdvanceStringIndex(v8::internal::Handle<v8::internal::String>,
   unsigned long, bool) */

long v8::internal::RegExpUtils::AdvanceStringIndex(ulong *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint local_38;
  undefined4 local_34;
  ulong local_18;
  
  local_18 = *param_1;
  iVar1 = *(int *)(local_18 + 7);
  if ((param_2 < (ulong)(long)iVar1) && ((param_3 & 1) != 0)) {
    local_34 = (undefined4)param_2;
    local_38 = (uint)*(ushort *)
                      ((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)) + 7);
    uVar2 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_38,&local_18,&local_34);
    if (((uVar2 >> 10 & 0x3f) == 0x36) && (param_2 + 1 < (ulong)(long)iVar1)) {
      local_18 = *param_1;
      local_34 = (undefined4)(param_2 + 1);
      local_38 = (uint)*(ushort *)
                        ((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)) + 7);
      uVar2 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (&local_38,&local_18,&local_34);
      if ((uVar2 >> 10 & 0x3f) == 0x37) {
        return param_2 + 2;
      }
    }
  }
  return param_2 + 1;
}

