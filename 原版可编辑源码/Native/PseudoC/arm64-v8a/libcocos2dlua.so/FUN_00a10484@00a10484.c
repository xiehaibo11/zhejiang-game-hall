
undefined8 FUN_00a10484(undefined8 param_1,undefined1 *param_2,uint param_3,ulong param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_3 >> 0x10 < 0x11) && ((param_3 & 0xfffff800) != 0xd800)) {
                    /* catch() { ... } // from try @ 00a10280 with catch @ 00a104a8 */
    if (param_4 < 4) {
                    /* catch() { ... } // from try @ 00a1026c with catch @ 00a104c8 */
      return 0xfffffffe;
    }
    param_2[1] = (char)(param_3 >> 0x10);
    uVar1 = 4;
    *param_2 = 0;
    param_2[3] = (char)param_3;
    param_2[2] = (char)(param_3 >> 8);
  }
  return uVar1;
}

