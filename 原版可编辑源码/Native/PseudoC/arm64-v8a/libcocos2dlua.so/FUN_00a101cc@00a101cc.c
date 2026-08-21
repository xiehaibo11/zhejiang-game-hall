
undefined8 FUN_00a101cc(undefined8 param_1,uint *param_2,undefined1 *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  bVar1 = param_3[1] & 0xfc;
  if (bVar1 != 0xdc) {
    uVar2 = (uint)CONCAT11(param_3[1],*param_3);
    if (bVar1 != 0xd8) {
      *param_2 = uVar2;
      return 2;
    }
    if (param_4 < 4) {
      return 0xfffffffe;
    }
    if ((param_3[3] & 0xfc) == 0xdc) {
                    /* try { // try from 00a1021c to 00b10257 has its CatchHandler @ 00a1021c
                       catch() { ... } // from try @ 00a1021c with catch @ 00a1021c
                       catch() { ... } // from try @ 00a10314 with catch @ 00a1021c */
      *param_2 = (uint)CONCAT11(param_3[3],param_3[2]) + uVar2 * 0x400 + 0xfca02400;
      return 4;
    }
  }
  return 0xffffffff;
}

