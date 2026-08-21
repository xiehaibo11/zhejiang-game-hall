
void etc1_encode_image(long param_1,int param_2,int param_3,uint param_4,int param_5,
                      undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  byte *__dest;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint local_e4;
  undefined8 local_a8;
  byte abStack_a0 [48];
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
                    /* try { // try from 009a32e4 to 00aa33c7 has its CatchHandler @ 009a3184 */
  if ((param_4 & 0xfffffffe) == 2) {
    uVar2 = param_3 + 3U & 0xfffffffc;
    if (uVar2 != 0) {
      uVar1 = param_2 + 3U & 0xfffffffc;
      uVar15 = 0;
      local_e4 = 0;
                    /* catch() { ... } // from try @ 009a3204 with catch @ 009a3358 */
      do {
                    /* catch() { ... } // from try @ 009a31f8 with catch @ 009a335c */
        uVar7 = param_3 - (int)uVar15;
                    /* catch() { ... } // from try @ 009a31d8 with catch @ 009a3360 */
        if (3 < uVar7) {
          uVar7 = 4;
        }
                    /* catch() { ... } // from try @ 009a3210 with catch @ 009a3370 */
        if (uVar1 != 0) {
          uVar4 = *(ushort *)(&DAT_01889d78 + (ulong)uVar7 * 2);
          uVar12 = 0;
          uVar16 = 0;
          puVar11 = param_6;
          do {
            uVar8 = param_2 - (int)uVar16;
            if (3 < uVar8) {
              uVar8 = 4;
            }
            uVar5 = *(ushort *)(&DAT_01889d82 + (ulong)uVar8 * 2);
                    /* try { // try from 009a33c8 to 00aa341b has its CatchHandler @ 009a33c8
                       catch() { ... } // from try @ 009a33c8 with catch @ 009a33c8
                       catch() { ... } // from try @ 009a35a8 with catch @ 009a33c8 */
            if (uVar7 != 0) {
              uVar17 = 0;
              uVar18 = local_e4;
              do {
                __dest = abStack_a0 + uVar17 * 0xc;
                if (param_4 == 3) {
                    /* try { // try from 009a341c to 00aa3433 has its CatchHandler @ 009a3624 */
                  memcpy(__dest,(void *)(param_1 + (ulong)((int)uVar16 * param_4) +
                                        (ulong)(uint)(((int)uVar17 + (int)uVar15) * param_5)),
                         (ulong)(uVar8 * 3));
                }
                else if (uVar8 != 0) {
                  uVar13 = 0;
                  pbVar14 = (byte *)(param_1 + 1 + (ulong)uVar12 + (ulong)uVar18);
                  do {
                    bVar6 = pbVar14[-1];
                    bVar3 = *pbVar14;
                    /* try { // try from 009a343c to 00aa3447 has its CatchHandler @ 009a3620 */
                    uVar13 = uVar13 + 1;
                    pbVar14 = pbVar14 + param_4;
                    /* try { // try from 009a3448 to 00aa3453 has its CatchHandler @ 009a361c */
                    /* try { // try from 009a3454 to 00aa35a7 has its CatchHandler @ 009a3634 */
                    *__dest = bVar3 & 0xf8 | bVar3 >> 5;
                    __dest[2] = bVar6 << 3 | bVar6 >> 2 & 7;
                    __dest[1] = (byte)(CONCAT11(bVar3,bVar6) >> 3) & 0xfc | bVar3 >> 1 & 3;
                    __dest = __dest + 3;
                  } while (uVar13 < uVar8);
                }
                uVar17 = uVar17 + 1;
                uVar18 = uVar18 + param_5;
              } while (uVar17 < uVar7);
            }
            etc1_encode_block(abStack_a0,uVar5 & uVar4,&local_a8);
            uVar16 = uVar16 + 4;
            *puVar11 = local_a8;
            uVar12 = uVar12 + param_4 * 4;
            puVar11 = puVar11 + 1;
          } while (uVar16 < uVar1);
          param_6 = param_6 + (ulong)(uVar1 - 4 >> 2) + 1;
        }
        uVar15 = uVar15 + 4;
        local_e4 = local_e4 + param_5 * 4;
      } while (uVar15 < uVar2);
    }
    uVar10 = 0;
  }
  else {
    uVar10 = 0xffffffff;
  }
  if (*(long *)(lVar9 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

