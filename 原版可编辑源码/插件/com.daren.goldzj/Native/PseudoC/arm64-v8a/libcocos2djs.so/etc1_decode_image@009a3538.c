
void etc1_decode_image(long param_1,long param_2,int param_3,int param_4,uint param_5,int param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  byte *__dest;
  undefined8 uVar8;
  byte *__src;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte abStack_98 [48];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if ((param_5 & 0xfffffffe) == 2) {
    uVar3 = param_4 + 3U & 0xfffffffc;
    if (uVar3 != 0) {
      uVar2 = param_3 + 3U & 0xfffffffc;
                    /* try { // try from 009a35a8 to 00aa368b has its CatchHandler @ 009a33c8 */
      uVar14 = 0;
      do {
        uVar6 = param_4 - (int)uVar14;
        if (3 < uVar6) {
          uVar6 = 4;
        }
        if (uVar2 != 0) {
          uVar11 = 0;
          lVar13 = param_1;
          do {
            uVar10 = param_3 - (int)uVar11;
            if (3 < uVar10) {
              uVar10 = 4;
            }
            etc1_decode_block(lVar13,abStack_98);
            lVar13 = lVar13 + 8;
                    /* catch() { ... } // from try @ 009a3448 with catch @ 009a361c */
                    /* catch() { ... } // from try @ 009a343c with catch @ 009a3620 */
            if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 009a341c with catch @ 009a3624 */
              uVar12 = 0;
                    /* catch() { ... } // from try @ 009a3454 with catch @ 009a3634 */
              do {
                __src = abStack_98 + uVar12 * 0xc;
                __dest = (byte *)(param_2 + (ulong)((int)uVar11 * param_5) +
                                 (ulong)(uint)(((int)uVar12 + (int)uVar14) * param_6));
                if (param_5 == 3) {
                  memcpy(__dest,__src,(ulong)(uVar10 * 3));
                }
                else if (uVar10 != 0) {
                  uVar9 = 0;
                  do {
                    bVar4 = *__src;
                    bVar5 = __src[1];
                    pbVar1 = __src + 2;
                    uVar9 = uVar9 + 1;
                    /* try { // try from 009a368c to 00aa36db has its CatchHandler @ 009a368c
                       catch() { ... } // from try @ 009a368c with catch @ 009a368c
                       catch() { ... } // from try @ 009a3794 with catch @ 009a368c */
                    __src = __src + 3;
                    *__dest = *pbVar1 >> 3 | (bVar5 >> 2) << 5;
                    __dest[1] = bVar4 & 0xf8 | (byte)(((uint)bVar5 << 3) >> 8);
                    __dest = __dest + 2;
                  } while (uVar9 < uVar10);
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar6);
            }
            uVar11 = uVar11 + 4;
          } while (uVar11 < uVar2);
                    /* try { // try from 009a36dc to 00aa36f3 has its CatchHandler @ 009a385c */
          param_1 = param_1 + (ulong)(uVar2 - 4 >> 2) * 8 + 8;
        }
        uVar14 = uVar14 + 4;
      } while (uVar14 < uVar3);
    }
    uVar8 = 0;
  }
  else {
    uVar8 = 0xffffffff;
  }
                    /* try { // try from 009a3708 to 00aa371b has its CatchHandler @ 009a3858 */
  if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 009a371c to 00aa372b has its CatchHandler @ 009a382c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

