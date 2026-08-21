
undefined4 ASN1_INTEGER_get_uint64(ulong *param_1,uint *param_2)

{
  uint uVar1;
  int func;
  int reason;
  int line;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
                    /* catch() { ... } // from try @ 00b8b0e0 with catch @ 00b8b2d8 */
    func = 0xe6;
    reason = 0x43;
    line = 0x179;
  }
  else if ((param_2[1] & 0xfffffeff) == 2) {
    if ((param_2[1] >> 8 & 1) == 0) {
      uVar1 = *param_2;
      lVar2 = (long)(int)uVar1;
                    /* catch() { ... } // from try @ 00b8b160 with catch @ 00b8b2b4 */
      if (uVar1 < 9) {
        pbVar3 = *(byte **)(param_2 + 2);
        *param_1 = 0;
        if (pbVar3 == (byte *)0x0) {
          return 0;
        }
        if (uVar1 == 0) {
          return 1;
        }
        uVar4 = 0;
        do {
          *param_1 = uVar4 << 8;
          lVar2 = lVar2 + -1;
          uVar4 = (ulong)*pbVar3 | uVar4 << 8;
          *param_1 = uVar4;
          pbVar3 = pbVar3 + 1;
        } while (lVar2 != 0);
        return 1;
      }
      func = 0xe1;
      reason = 0xdf;
                    /* catch() { ... } // from try @ 00b8b14c with catch @ 00b8b2cc */
      line = 0xe6;
                    /* catch() { ... } // from try @ 00b8b02c with catch @ 00b8b2d0 */
    }
    else {
      func = 0xe6;
      reason = 0xe2;
      line = 0x181;
    }
  }
  else {
    func = 0xe6;
    reason = 0xe1;
    line = 0x17d;
  }
  ERR_put_error(0xd,func,reason,"crypto/asn1/a_int.c",line);
  return 0;
}

