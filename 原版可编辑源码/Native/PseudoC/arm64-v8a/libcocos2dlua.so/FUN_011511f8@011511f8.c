
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011511f8(void)

{
  int iVar1;
  
  if (PTR_LOOP_01781680 != VP8GetCPUInfo) {
    pcRam0000000001796200 = FUN_01152d8c;
    _DAT_017961f8 = FUN_0115264c;
    DAT_01796210 = FUN_01153c5c;
    _DAT_01796208 = FUN_0115351c;
    pcRam0000000001796230 = FUN_01152d8c;
    _DAT_01796228 = FUN_01155320;
    pcRam0000000001796240 = FUN_011543ec;
    _DAT_01796238 = FUN_01153c5c;
    pcRam0000000001796220 = FUN_01154b84;
    DAT_01796218 = FUN_011543ec;
    DAT_01796248 = FUN_01154b84;
    if ((VP8GetCPUInfo != (undefined *)0x0) && (iVar1 = (*(code *)VP8GetCPUInfo)(5), iVar1 != 0)) {
      FUN_01155afc();
    }
    PTR_LOOP_01781680 = VP8GetCPUInfo;
  }
  return;
}

