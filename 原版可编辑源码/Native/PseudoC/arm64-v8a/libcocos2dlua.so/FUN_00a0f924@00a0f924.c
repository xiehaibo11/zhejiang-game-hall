
undefined8 FUN_00a0f924(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = (uint)*param_3;
  if (-1 < (char)*param_3) {
                    /* catch() { ... } // from try @ 00a0f854 with catch @ 00a0f930 */
    *param_2 = uVar1;
    return 1;
  }
  if (0xc1 < uVar1) {
    if (uVar1 < 0xe0) {
                    /* catch() { ... } // from try @ 00a0f834 with catch @ 00a0f958 */
      if (param_4 < 2) {
                    /* catch() { ... } // from try @ 00a0f798 with catch @ 00a0f95c */
        return 0xfffffffe;
      }
                    /* catch() { ... } // from try @ 00a0f888 with catch @ 00a0f97c */
                    /* catch() { ... } // from try @ 00a0f77c with catch @ 00a0f980 */
      if ((param_3[1] ^ 0x80) < 0x40) {
        *param_2 = (uVar1 & 0x1f) << 6 | param_3[1] ^ 0x80;
        return 2;
      }
    }
    else if (uVar1 < 0xf0) {
      if (param_4 < 3) {
        return 0xfffffffe;
      }
      if (((((char)param_3[1] < -0x40) && ((char)param_3[2] < -0x40)) &&
          ((uVar2 = (uint)param_3[1], 0xe0 < uVar1 || (0x9f < uVar2)))) &&
         ((uVar1 != 0xed || (uVar2 < 0xa0)))) {
        *param_2 = (uVar1 & 0xf) << 0xc | (uVar2 ^ 0x80) << 6 | param_3[2] ^ 0x80;
        return 3;
      }
    }
    else if (uVar1 < 0xf8) {
      if (param_4 < 4) {
        return 0xfffffffe;
      }
      if (((((char)param_3[1] < -0x40) && ((char)param_3[2] < -0x40)) && ((char)param_3[3] < -0x40))
         && ((uVar2 = (uint)param_3[1], 0xf0 < uVar1 || (0x8f < uVar2)))) {
        if ((uVar1 < 0xf4) || ((uVar3 = 0xffffffff, uVar1 == 0xf4 && (uVar2 < 0x90)))) {
          uVar3 = 4;
          *param_2 = (uVar1 & 7) << 0x12 | (uVar2 ^ 0x80) << 0xc |
                     (((int)(char)param_3[2] ^ 0x80U) & 0xff) << 6 | param_3[3] ^ 0x80;
        }
        return uVar3;
      }
    }
  }
                    /* catch() { ... } // from try @ 00a0f840 with catch @ 00a0f948 */
  return 0xffffffff;
}

