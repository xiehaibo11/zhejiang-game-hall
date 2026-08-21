
undefined8 speex_lib_ctl(uint param_1,undefined8 *param_2)

{
  switch(param_1) {
  case 1:
  case 3:
    *(undefined4 *)param_2 = 1;
    return 0;
  default:
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown wb_mode_query request: ",(ulong)param_1);
    return 0xffffffff;
  case 5:
    *(undefined4 *)param_2 = 0xf;
    return 0;
  case 7:
    *param_2 = "";
    return 0;
  case 9:
    *param_2 = "speex-1.2beta3";
    return 0;
  }
}

