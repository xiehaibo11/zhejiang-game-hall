
undefined8 FUN_00b8b098(ulong *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int func;
  int reason;
  int line;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
                    /* try { // try from 00b8b0e0 to 00c8b147 has its CatchHandler @ 00b8b2d8 */
    func = 0xe3;
    reason = 0x43;
    line = 0x15a;
  }
  else if ((param_2[1] & 0xfffffeff) == param_3) {
    uVar1 = *param_2;
    lVar2 = (long)(int)uVar1;
    if (uVar1 < 9) {
      if (*(byte **)(param_2 + 2) == (byte *)0x0) {
                    /* try { // try from 00b8b16c to 00c8b323 has its CatchHandler @ 00b8af34 */
        return 0;
      }
      if (uVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        pbVar3 = *(byte **)(param_2 + 2);
        do {
          lVar2 = lVar2 + -1;
          uVar4 = (ulong)*pbVar3 | uVar4 << 8;
          pbVar3 = pbVar3 + 1;
        } while (lVar2 != 0);
      }
      if ((param_2[1] >> 8 & 1) == 0) {
        if (-1 < (long)uVar4) {
LAB_00b8b1a8:
          *param_1 = uVar4;
          return 1;
        }
                    /* try { // try from 00b8b14c to 00c8b157 has its CatchHandler @ 00b8b2cc */
        func = 0xe0;
        reason = 0xdf;
                    /* try { // try from 00b8b160 to 00c8b16b has its CatchHandler @ 00b8b2b4 */
        line = 0x127;
      }
      else {
        if (uVar4 < 0x8000000000000001) {
          uVar4 = -uVar4;
          goto LAB_00b8b1a8;
        }
        func = 0xe0;
        reason = 0xe0;
        line = 0x121;
      }
    }
    else {
      func = 0xe1;
      reason = 0xdf;
      line = 0xe6;
    }
  }
  else {
    func = 0xe3;
    reason = 0xe1;
    line = 0x15e;
  }
  ERR_put_error(0xd,func,reason,"crypto/asn1/a_int.c",line);
  return 0;
}

