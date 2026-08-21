
void FUN_00df4820(void)

{
  int iVar1;
  
  if (PTR_LOOP_01d2b728 != VP8GetCPUInfo) {
    DAT_01d54708 = FUN_00df4458;
    DAT_01d54710 = FUN_00df4540;
    DAT_01d54700 = FUN_00df45ec;
    DAT_01d54718 = FUN_00df4694;
    if ((VP8GetCPUInfo != (undefined *)0x0) && (iVar1 = (*(code *)VP8GetCPUInfo)(5), iVar1 != 0)) {
      FUN_00df48b0();
    }
    PTR_LOOP_01d2b728 = VP8GetCPUInfo;
  }
  return;
}

