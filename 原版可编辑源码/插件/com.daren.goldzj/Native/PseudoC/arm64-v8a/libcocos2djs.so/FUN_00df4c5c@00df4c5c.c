
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00df4c5c(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (PTR_LOOP_01d2b738 != VP8GetCPUInfo) {
    pcRam0000000001d54728 = FUN_00df68e4;
    _DAT_01d54720 = FUN_00df61a4;
    DAT_01d54738 = FUN_00df77b4;
    _DAT_01d54730 = FUN_00df7074;
    pcRam0000000001d54758 = FUN_00df68e4;
    _DAT_01d54750 = FUN_00df8e78;
    pcRam0000000001d54768 = FUN_00df7f44;
    _DAT_01d54760 = FUN_00df77b4;
    pcRam0000000001d54748 = FUN_00df86dc;
    DAT_01d54740 = FUN_00df7f44;
    DAT_01d54770 = FUN_00df86dc;
    if ((VP8GetCPUInfo != (undefined *)0x0) && (iVar1 = (*(code *)VP8GetCPUInfo)(5), iVar1 != 0)) {
      FUN_00df9654();
    }
    PTR_LOOP_01d2b738 = VP8GetCPUInfo;
  }
  FUN_00dfe734();
  lVar2 = 0x18;
  if (param_1 == 0) {
    lVar2 = 0x20;
  }
  return *(undefined8 *)(&DAT_01d54720 + lVar2);
}

