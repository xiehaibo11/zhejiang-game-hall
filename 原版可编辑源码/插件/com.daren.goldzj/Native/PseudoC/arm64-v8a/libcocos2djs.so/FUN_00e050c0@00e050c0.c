
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e050c0(void)

{
  if (PTR_LOOP_01d2b780 != VP8GetCPUInfo) {
    pcRam0000000001d548a8 = FUN_00e0514c;
    _DAT_01d548a0 = 0;
    pcRam0000000001d548b8 = FUN_00e05334;
    _DAT_01d548b0 = FUN_00e05214;
    pcRam0000000001d54888 = FUN_00e05434;
    _DAT_01d54880 = 0;
    pcRam0000000001d54898 = FUN_00e05820;
    _DAT_01d54890 = FUN_00e0562c;
    PTR_LOOP_01d2b780 = VP8GetCPUInfo;
  }
  return;
}

