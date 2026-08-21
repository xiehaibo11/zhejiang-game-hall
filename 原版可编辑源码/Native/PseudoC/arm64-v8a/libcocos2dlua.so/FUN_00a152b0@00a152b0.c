
undefined8 FUN_00a152b0(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if (param_3 < 0x80) {
    if (param_3 == 0x5c) {
      return 0xffffffff;
    }
    if (param_3 == 0x7e) {
      return 0xffffffff;
    }
    *param_2 = (char)param_3;
  }
  else {
    if (param_3 == 0x203e) {
      cVar1 = '~';
    }
    else if (param_3 == 0xa5) {
      cVar1 = '\\';
    }
    else {
      if (0x3e < param_3 - 0xff61) {
        return 0xffffffff;
      }
                    /* catch() { ... } // from try @ 00a150ec with catch @ 00a15308 */
      cVar1 = (char)param_3 + '@';
    }
                    /* catch() { ... } // from try @ 00a1522c with catch @ 00a1530c */
    *param_2 = cVar1;
  }
                    /* catch() { ... } // from try @ 00a14fb4 with catch @ 00a15310 */
  return 1;
}

