
undefined8 FUN_00a0f908(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  if (param_3 < 0x80) {
                    /* catch() { ... } // from try @ 00a0f808 with catch @ 00a0f910 */
    *param_2 = (char)param_3;
    return 1;
  }
  return 0xffffffff;
}

