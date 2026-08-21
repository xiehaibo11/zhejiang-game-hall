
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
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint local_e4;
  undefined8 local_a8;
  byte local_a0 [48];
  long local_70;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcb770 with catch @ 00fcb7a4
                        */
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
                    /* catch() { ... } // from try @ 00fcb7f0 with catch @ 00fcb7b8 */
  if ((param_4 & 0xfffffffe) == 2) {
    uVar2 = param_3 + 3U & 0xfffffffc;
    if (uVar2 != 0) {
                    /* try { // try from 00fcb7e8 to 010cb7ef has its CatchHandler @ 00fcb840 */
                    /* try { // try from 00fcb7f0 to 010cb85b has its CatchHandler @ 00fcb7b8 */
      uVar1 = param_2 + 3U & 0xfffffffc;
      uVar15 = 0;
      local_e4 = 0;
      do {
        uVar7 = param_3 - uVar15;
        if (3 < uVar7) {
          uVar7 = 4;
        }
                    /* catch() { ... } // from try @ 00fcb8a0 with catch @ 00fcb85c */
        if (uVar1 != 0) {
          uVar4 = *(ushort *)(&DAT_0144c458 + (ulong)uVar7 * 2);
          uVar12 = 0;
          uVar16 = 0;
          puVar11 = param_6;
          do {
            uVar8 = param_2 - (int)uVar16;
            if (3 < uVar8) {
              uVar8 = 4;
            }
            uVar5 = *(ushort *)(&DAT_0144c462 + (ulong)uVar8 * 2);
            if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 00fcb898 with catch @ 00fcb8f4 */
              uVar17 = 0;
                    /* try { // try from 00fcb910 to 010cb947 has its CatchHandler @ 00fcb910
                       catch() { ... } // from try @ 00fcb910 with catch @ 00fcb910
                       catch() { ... } // from try @ 00fcb9a4 with catch @ 00fcb910 */
              uVar18 = local_e4;
              do {
                    /* try { // try from 00fcb948 to 010cb95f has its CatchHandler @ 00fcb9cc */
                __dest = local_a0 + (uint)((int)uVar17 * 0xc);
                if (param_4 == 3) {
                  memcpy(__dest,(void *)(param_1 + (ulong)((int)uVar16 * param_4) +
                                        (ulong)((uVar15 + (int)uVar17) * param_5)),
                         (ulong)(uVar8 * 3));
                }
                else if (uVar8 != 0) {
                  uVar13 = 0;
                  pbVar14 = (byte *)(param_1 + 1 + (ulong)uVar12 + (ulong)uVar18);
                  do {
                    bVar6 = pbVar14[-1];
                    bVar3 = *pbVar14;
                    uVar13 = uVar13 + 1;
                    pbVar14 = pbVar14 + param_4;
                    /* try { // try from 00fcb998 to 010cb9a3 has its CatchHandler @ 00fcb9b0 */
                    *__dest = bVar3 & 0xf8 | bVar3 >> 5;
                    __dest[2] = bVar6 << 3 | bVar6 >> 2 & 7;
                    /* try { // try from 00fcb9a4 to 010cb9df has its CatchHandler @ 00fcb910 */
                    __dest[1] = (byte)(CONCAT11(bVar3,bVar6) >> 3) & 0xfc | bVar3 >> 1 & 3;
                    __dest = __dest + 3;
                  } while (uVar13 < uVar8);
                }
                uVar17 = uVar17 + 1;
                uVar18 = uVar18 + param_5;
              } while (uVar17 < uVar7);
            }
            etc1_encode_block(local_a0,uVar5 & uVar4,&local_a8);
                    /* try { // try from 00fcb898 to 010cb89f has its CatchHandler @ 00fcb8f4 */
            uVar16 = uVar16 + 4;
                    /* try { // try from 00fcb8a0 to 010cb90f has its CatchHandler @ 00fcb85c */
            param_6 = puVar11 + 1;
            *puVar11 = local_a8;
            uVar12 = uVar12 + param_4 * 4;
            puVar11 = param_6;
          } while (uVar16 < uVar1);
        }
        uVar15 = uVar15 + 4;
        local_e4 = local_e4 + param_5 * 4;
                    /* catch() { ... } // from try @ 00fcb7e8 with catch @ 00fcb840 */
      } while (uVar15 < uVar2);
    }
    uVar10 = 0;
  }
  else {
    uVar10 = 0xffffffff;
  }
                    /* catch() { ... } // from try @ 00fcb948 with catch @ 00fcb9cc */
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

