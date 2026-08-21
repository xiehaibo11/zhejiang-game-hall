
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df3c0c(void)

{
  int iVar1;
  
  if (PTR_LOOP_01d2b720 != VP8GetCPUInfo) {
    DAT_01d54658 = FUN_00df2b6c;
    DAT_01d546e0 = FUN_00df2c3c;
    DAT_01d546f8 = FUN_00df364c;
    DAT_01d54650 = FUN_00df3680;
    DAT_01d546f0 = FUN_00df36bc;
    DAT_01d54640 = FUN_00df37b8;
    DAT_01d54638 = FUN_00df38c8;
    DAT_01d546e8 = FUN_00df40a4;
    pcRam0000000001d54668 = FUN_00df3db8;
    _DAT_01d54660 = FUN_00df3db0;
    pcRam0000000001d54678 = FUN_00df3dc4;
    _DAT_01d54670 = FUN_00df3dbc;
    pcRam0000000001d546a8 = FUN_00df3e58;
    _DAT_01d546a0 = FUN_00df3e3c;
    pcRam0000000001d546b8 = FUN_00df3ebc;
    _DAT_01d546b0 = FUN_00df3e74;
    pcRam0000000001d54688 = FUN_00df3dd4;
    _DAT_01d54680 = FUN_00df3dcc;
    pcRam0000000001d54698 = FUN_00df3e20;
    _DAT_01d54690 = FUN_00df3e04;
    pcRam0000000001d546c8 = FUN_00df3fe8;
    _DAT_01d546c0 = FUN_00df3f58;
    pcRam0000000001d546d8 = FUN_00df3db0;
    _DAT_01d546d0 = FUN_00df3db0;
    DAT_01d54648 = FUN_00df40fc;
    if ((VP8GetCPUInfo != (undefined *)0x0) && (iVar1 = (*(code *)VP8GetCPUInfo)(5), iVar1 != 0)) {
      FUN_00df4150();
    }
    PTR_LOOP_01d2b720 = VP8GetCPUInfo;
  }
  return;
}

