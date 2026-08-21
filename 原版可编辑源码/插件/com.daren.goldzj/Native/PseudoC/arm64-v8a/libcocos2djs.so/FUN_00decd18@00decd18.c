
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00decd18(void)

{
  int iVar1;
  
  if (PTR_LOOP_01d2b718 != VP8GetCPUInfo) {
    FUN_00defbe4();
    DAT_01d54510 = FUN_00decfe4;
    DAT_01d545e0 = FUN_00ded204;
    DAT_01d544f0 = FUN_00ded250;
    DAT_01d545d8 = FUN_00ded298;
    DAT_01d545d0 = FUN_00ded4a8;
    DAT_01d54518 = FUN_00ded540;
    DAT_01d545c8 = FUN_00ded7cc;
    DAT_01d544f8 = FUN_00ded7f0;
    DAT_01d54500 = FUN_00ded81c;
    DAT_01d54630 = FUN_00ded890;
    DAT_01d54508 = FUN_00ded900;
    DAT_01d545c0 = FUN_00ded9a0;
    DAT_01d54520 = FUN_00deda38;
    DAT_01d544e8 = FUN_00dedab8;
    DAT_01d545b8 = FUN_00dedb2c;
    DAT_01d54528 = FUN_00dedbd0;
    DAT_01d545e8 = FUN_00dedc5c;
    DAT_01d54628 = FUN_00dede50;
    pcRam0000000001d54538 = FUN_00dee070;
    _DAT_01d54530 = FUN_00dee010;
    pcRam0000000001d54548 = FUN_00dee1d4;
    DAT_01d54540 = FUN_00dee138;
    pcRam0000000001d54558 = FUN_00dee324;
    DAT_01d54550 = FUN_00dee250;
    pcRam0000000001d54568 = FUN_00dee4e8;
    DAT_01d54560 = FUN_00dee414;
    pcRam0000000001d54578 = FUN_00dee6c4;
    _DAT_01d54570 = FUN_00dee5dc;
    DAT_01d545b0 = FUN_00deec5c;
    pcRam0000000001d54588 = FUN_00dee8b4;
    _DAT_01d54580 = FUN_00dee764;
    pcRam0000000001d54598 = FUN_00dee9f4;
    _DAT_01d54590 = FUN_00dee9ac;
    pcRam0000000001d545a8 = FUN_00deeb8c;
    _DAT_01d545a0 = FUN_00deeabc;
    pcRam0000000001d545f8 = FUN_00deed54;
    _DAT_01d545f0 = FUN_00deeca4;
    pcRam0000000001d54608 = FUN_00def06c;
    _DAT_01d54600 = FUN_00def044;
    DAT_01d54620 = FUN_00def1b4;
    pcRam0000000001d54618 = FUN_00def144;
    _DAT_01d54610 = FUN_00def0d4;
    if ((VP8GetCPUInfo != (undefined *)0x0) && (iVar1 = (*(code *)VP8GetCPUInfo)(5), iVar1 != 0)) {
      FUN_00defbe8();
    }
    PTR_LOOP_01d2b718 = VP8GetCPUInfo;
  }
  return;
}

