
/* v8::internal::TurboAssembler::RequiredStackSizeForCallerSaved(v8::internal::SaveFPRegsMode,
   v8::internal::Register) const */

int v8::internal::TurboAssembler::RequiredStackSizeForCallerSaved
              (undefined8 param_1,int param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong local_40;
  undefined8 uStack_38;
  
  auVar4 = CPURegList::GetCallerSaved(0x40);
  uStack_38 = auVar4._8_8_;
  local_40 = auVar4._0_8_;
  if ((param_4 != 2) && (auVar4._12_4_ == param_4)) {
    local_40 = local_40 & (1L << (param_3 & 0x3f) ^ 0xffffffffffffffffU);
  }
  CPURegList::Align((CPURegList *)&local_40);
  iVar1 = CountSetBits(local_40,0x40);
  iVar1 = iVar1 * 8;
  if (param_2 == 1) {
    uVar3 = CPURegList::GetCallerSavedV(0x40);
    iVar2 = CountSetBits(uVar3,0x40);
    iVar1 = iVar1 + iVar2 * 8;
  }
  return iVar1;
}

