
undefined8 FUN_00a53a70(undefined8 param_1,uint *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_w1;
  uint uVar3;
  
  if (param_3 == 0) {
    uVar2 = 0x2b;
  }
  else {
    uVar3 = 0;
                    /* try { // try from 00a53aa8 to 00b53abf has its CatchHandler @ 00a53af0 */
    do {
                    /* try { // try from 00a53ac0 to 00b53b03 has its CatchHandler @ 00a53a64 */
      uVar2 = FUN_00a189c8(param_1,param_2,4);
      if ((int)uVar2 != 0) {
        if ((int)uVar2 != 4) {
          return uVar2;
        }
        if (DAT_01d38c08 != '\x01') {
          iVar1 = FUN_00a18e40();
                    /* catch() { ... } // from try @ 00a53aa8 with catch @ 00a53af0 */
          FUN_00a22d58(param_1,"WARNING: Using weak random seed\n");
                    /* try { // try from 00a53b04 to 00b53b53 has its CatchHandler @ 00a53b04
                       catch() { ... } // from try @ 00a53b04 with catch @ 00a53b04
                       catch() { ... } // from try @ 00a53c0c with catch @ 00a53b04 */
          DAT_01d38c0c = (extraout_w1 + iVar1 + DAT_01d38c0c) * -0x7f82434b + 0xa70427df;
          DAT_01d38c08 = '\x01';
        }
        DAT_01d38c0c = DAT_01d38c0c * 0x41c64e6d + 0x3039;
        *param_2 = DAT_01d38c0c >> 0x10 | DAT_01d38c0c * 0x10000;
      }
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
    } while (uVar3 < param_3);
    uVar2 = 0;
                    /* try { // try from 00a53b54 to 00b53b6b has its CatchHandler @ 00a53cd4 */
  }
  return uVar2;
}

