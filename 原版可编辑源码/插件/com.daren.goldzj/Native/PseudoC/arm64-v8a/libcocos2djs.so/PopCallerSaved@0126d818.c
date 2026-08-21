
/* v8::internal::TurboAssembler::PopCallerSaved(v8::internal::SaveFPRegsMode,
   v8::internal::Register) */

int v8::internal::TurboAssembler::PopCallerSaved
              (undefined8 param_1,int param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong local_40;
  undefined8 uStack_38;
  
  if (param_2 == 1) {
    auVar4 = CPURegList::GetCallerSavedV(0x40);
    PopCPURegList(param_1,auVar4._0_8_,auVar4._8_8_);
    uVar3 = CPURegList::GetCallerSavedV(0x40);
    iVar1 = CountSetBits(uVar3,0x40);
    iVar1 = iVar1 << 3;
  }
  else {
    iVar1 = 0;
  }
  auVar4 = CPURegList::GetCallerSaved(0x40);
  uStack_38 = auVar4._8_8_;
  local_40 = auVar4._0_8_;
  if ((param_4 != 2) && (auVar4._12_4_ == param_4)) {
    local_40 = local_40 & (1L << (param_3 & 0x3f) ^ 0xffffffffffffffffU);
  }
  CPURegList::Align((CPURegList *)&local_40);
  PopCPURegList(param_1,local_40,uStack_38);
  iVar2 = CountSetBits(local_40,0x40);
  return iVar1 + iVar2 * 8;
}

