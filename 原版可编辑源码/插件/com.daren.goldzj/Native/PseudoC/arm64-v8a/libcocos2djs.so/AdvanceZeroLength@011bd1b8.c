
/* v8::internal::RegExpGlobalCache::AdvanceZeroLength(int) */

int __thiscall
v8::internal::RegExpGlobalCache::AdvanceZeroLength(RegExpGlobalCache *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_38;
  int local_34;
  ulong local_18;
  
  iVar1 = param_1 + 1;
  iVar2 = iVar1;
  if (((*(uint *)((**(ulong **)(this + 0x20) & 0xffffffff00000000 |
                  (ulong)*(uint *)(**(ulong **)(this + 0x20) + 0xb)) + 0xf) >> 5 & 1) != 0) &&
     (local_18 = **(ulong **)(this + 0x28), iVar1 < *(int *)(local_18 + 7))) {
    local_38 = (uint)*(ushort *)
                      ((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)) + 7);
    local_34 = param_1;
    uVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_38,&local_18,&local_34);
    if ((uVar3 >> 10 & 0x3f) == 0x36) {
      local_18 = **(ulong **)(this + 0x28);
      local_38 = (uint)*(ushort *)
                        ((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)) + 7);
      local_34 = iVar1;
      uVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (&local_38,&local_18,&local_34);
      iVar2 = param_1 + 2;
      if ((uVar3 >> 10 & 0x3f) != 0x37) {
        iVar2 = iVar1;
      }
    }
  }
  return iVar2;
}

