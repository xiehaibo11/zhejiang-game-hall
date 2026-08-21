
void FUN_00dec6f4(void)

{
  if (PTR_LOOP_01d2b708 != VP8GetCPUInfo) {
    DAT_01d544c0 = FUN_00dec46c;
    DAT_01d544d0 = FUN_00dec568;
    DAT_01d544c8 = FUN_00dec788;
    DAT_01d544e0 = FUN_00dec834;
    DAT_01d544b8 = FUN_00decad4;
    DAT_01d544d8 = FUN_00decb4c;
    DAT_01d544b0 = FUN_00decba4;
    PTR_LOOP_01d2b708 = VP8GetCPUInfo;
  }
  return;
}

