
undefined8 FUN_00a14ad4(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 == 0xa0) {
    cVar1 = -0x60;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14acc with catch @ 00a14b0c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14a20 with catch @ 00a14b10
                        */
    if ((0x5f < param_3 - 0xe80) || (cVar1 = (&DAT_013029ae)[param_3 - 0xe80], cVar1 == '\0')) {
      return 0xffffffff;
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14a58 with catch @ 00a14b18
                        */
  *param_2 = cVar1;
  return 1;
}

