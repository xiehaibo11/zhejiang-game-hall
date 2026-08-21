
undefined8 FUN_00a15320(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
                    /* catch() { ... } // from try @ 00a14f40 with catch @ 00a15320 */
  bVar1 = *param_3;
                    /* catch() { ... } // from try @ 00a14f08 with catch @ 00a15328 */
                    /* catch() { ... } // from try @ 00a1525c with catch @ 00a15338 */
                    /* catch() { ... } // from try @ 00a15208 with catch @ 00a1533c
                       catch() { ... } // from try @ 00a15274 with catch @ 00a1533c */
  if ((bVar1 - 0x21 < 8) || ((bVar1 - 0x30 & 0xff) < 0x45)) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
                    /* catch() { ... } // from try @ 00a14fe4 with catch @ 00a15358
                       catch() { ... } // from try @ 00a15014 with catch @ 00a15358 */
    if (param_3[1] - 0x21 < 0x5e) {
      iVar2 = (uint)param_3[1] + (uint)bVar1 * 0x5e;
      uVar3 = iVar2 - 0xc3f;
      if (uVar3 < 0x582) {
        if (0x2b1 < uVar3) {
          return 0xffffffff;
        }
        puVar4 = (ushort *)(&DAT_01303206 + (ulong)uVar3 * 2);
      }
      else {
        if (0x3c < uVar3 >> 7) {
          return 0xffffffff;
        }
        puVar4 = (ushort *)(&DAT_0130376a + (ulong)(iVar2 - 0x11c1) * 2);
      }
      if (*puVar4 != 0xfffd) {
        *param_2 = (uint)*puVar4;
        return 2;
      }
    }
  }
                    /* catch() { ... } // from try @ 00a14fec with catch @ 00a15340 */
  return 0xffffffff;
}

