
void FUN_010fcfa8(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint7 uVar4;
  uint7 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint7 uVar8;
  uint7 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  char *pcVar17;
  ulong *puVar18;
  char *pcVar19;
  ulong *puVar20;
  char *pcVar21;
  char *pcVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  byte bVar26;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  ulong uVar27;
  byte bVar34;
  byte bVar35;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  ulong uVar36;
  byte bVar43;
  ulong uVar44;
  ulong uVar45;
  
  if (0 < param_5) {
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar13 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar2 = uVar3 & 0xf;
      lVar14 = uVar13 - uVar2;
      do {
                    /* try { // try from 010fcfd4 to 011fcfdb has its CatchHandler @ 010fd0bc */
                    /* try { // try from 010fcfdc to 011fcfe7 has its CatchHandler @ 010fd0b8 */
        lVar15 = (ulong)param_3 * 8;
        puVar20 = *(ulong **)(*param_2 + lVar15);
        puVar18 = *(ulong **)(param_2[1] + lVar15);
        puVar16 = *(ulong **)(param_2[2] + lVar15);
        pcVar22 = (char *)*param_4;
        param_3 = param_3 + 1;
        if ((uVar3 < 0x10) || (lVar14 == 0)) {
LAB_010fd0b0:
                    /* catch() { ... } // from try @ 010fd014 with catch @ 010fd0b0 */
          lVar15 = 0;
LAB_010fd0b4:
                    /* catch() { ... } // from try @ 010fd00c with catch @ 010fd0b4 */
                    /* catch() { ... } // from try @ 010fcfdc with catch @ 010fd0b8 */
                    /* catch() { ... } // from try @ 010fcfd4 with catch @ 010fd0bc */
                    /* catch() { ... } // from try @ 010fcf94 with catch @ 010fd0c0 */
          lVar23 = uVar13 - lVar15;
          pcVar17 = (char *)((long)puVar16 + lVar15);
          pcVar19 = (char *)((long)puVar18 + lVar15);
          pcVar21 = (char *)((long)puVar20 + lVar15);
          do {
                    /* catch() { ... } // from try @ 010fcf8c with catch @ 010fd0c4 */
            cVar28 = *pcVar21;
                    /* catch() { ... } // from try @ 010fcf30 with catch @ 010fd0c8 */
            cVar29 = *pcVar19;
            cVar30 = *pcVar17;
            lVar23 = lVar23 + -1;
            pcVar22[1] = cVar29;
            *pcVar22 = cVar28 + cVar29 + -0x80;
            pcVar22[2] = cVar29 + cVar30 + -0x80;
            pcVar22 = pcVar22 + 3;
            pcVar17 = pcVar17 + 1;
            pcVar19 = pcVar19 + 1;
            pcVar21 = pcVar21 + 1;
          } while (lVar23 != 0);
        }
        else {
                    /* try { // try from 010fd00c to 011fd013 has its CatchHandler @ 010fd0b4 */
          puVar10 = (ulong *)(pcVar22 + uVar13 * 3);
                    /* try { // try from 010fd014 to 011fd01f has its CatchHandler @ 010fd0b0 */
                    /* try { // try from 010fd048 to 011fd063 has its CatchHandler @ 010fd0ac */
                    /* try { // try from 010fd064 to 011fd06f has its CatchHandler @ 010fd0a8 */
          if ((pcVar22 < (char *)((long)puVar20 + uVar13) && puVar20 < puVar10) ||
             ((pcVar22 < (char *)((long)puVar18 + uVar13) && puVar18 < puVar10 ||
              (pcVar22 < (char *)((long)puVar16 + uVar13) && puVar16 < puVar10))))
          goto LAB_010fd0b0;
          pcVar17 = pcVar22 + uVar13 * 3 + (ulong)uVar2 * -3;
                    /* try { // try from 010fd070 to 011fd1e7 has its CatchHandler @ 010fcd78 */
          lVar15 = lVar14;
          puVar10 = puVar16;
          puVar11 = puVar18;
          puVar12 = puVar20;
          do {
            uVar25 = puVar12[1];
            uVar24 = *puVar12;
            uVar36 = puVar11[1];
            uVar27 = *puVar11;
            uVar45 = puVar10[1];
            uVar44 = *puVar10;
            lVar15 = lVar15 + -0x10;
            uVar8 = (uint7)uVar24 | 0x80808080;
            uVar4 = (uint7)uVar24 | 0x808080808080;
            uVar9 = (uint7)uVar25 | 0x80808080;
            uVar5 = (uint7)uVar25 | 0x808080808080;
            bVar26 = (byte)uVar27;
            cVar28 = (char)(uVar27 >> 8);
            cVar29 = (char)(uVar27 >> 0x10);
            cVar30 = (char)(uVar27 >> 0x18);
            cVar31 = (char)(uVar27 >> 0x20);
            cVar32 = (char)(uVar27 >> 0x28);
            cVar33 = (char)(uVar27 >> 0x30);
            bVar34 = (byte)(uVar27 >> 0x38);
            bVar35 = (byte)uVar36;
            cVar37 = (char)(uVar36 >> 8);
            cVar38 = (char)(uVar36 >> 0x10);
            cVar39 = (char)(uVar36 >> 0x18);
            cVar40 = (char)(uVar36 >> 0x20);
            cVar41 = (char)(uVar36 >> 0x28);
            cVar42 = (char)(uVar36 >> 0x30);
            bVar43 = (byte)(uVar36 >> 0x38);
            uVar6 = uVar27 | 0x8080808080;
            uVar7 = uVar36 | 0x8080808080;
            *pcVar22 = (char)uVar8 + bVar26;
            pcVar22[1] = bVar26;
            pcVar22[2] = (bVar26 | 0x80) + (char)uVar44;
            pcVar22[3] = (char)(uVar8 >> 8) + cVar28;
            pcVar22[4] = cVar28;
            pcVar22[5] = (char)(uVar6 >> 8) + (char)(uVar44 >> 8);
            pcVar22[6] = (char)(uVar8 >> 0x10) + cVar29;
            pcVar22[7] = cVar29;
            pcVar22[8] = (char)(uVar6 >> 0x10) + (char)(uVar44 >> 0x10);
            pcVar22[9] = (char)(uVar8 >> 0x18) + cVar30;
            pcVar22[10] = cVar30;
            pcVar22[0xb] = (char)(uVar6 >> 0x18) + (char)(uVar44 >> 0x18);
            pcVar22[0xc] = (char)(uVar4 >> 0x20) + cVar31;
            pcVar22[0xd] = cVar31;
            pcVar22[0xe] = (char)(uVar6 >> 0x20) + (char)(uVar44 >> 0x20);
            pcVar22[0xf] = (char)(uVar4 >> 0x28) + cVar32;
            pcVar22[0x10] = cVar32;
            pcVar22[0x11] = (char)((uVar27 | 0x80808080808080) >> 0x28) + (char)(uVar44 >> 0x28);
            pcVar22[0x12] = ((byte)(uVar24 >> 0x30) | 0x80) + cVar33;
            pcVar22[0x13] = cVar33;
            pcVar22[0x14] = (char)((uVar27 | 0x80808080808080) >> 0x30) + (char)(uVar44 >> 0x30);
            pcVar22[0x15] = ((byte)(uVar24 >> 0x38) | 0x80) + bVar34;
            pcVar22[0x16] = bVar34;
            pcVar22[0x17] = (bVar34 | 0x80) + (char)(uVar44 >> 0x38);
            pcVar22[0x18] = (char)uVar9 + bVar35;
            pcVar22[0x19] = bVar35;
            pcVar22[0x1a] = (bVar35 | 0x80) + (char)uVar45;
            pcVar22[0x1b] = (char)(uVar9 >> 8) + cVar37;
            pcVar22[0x1c] = cVar37;
            pcVar22[0x1d] = (char)(uVar7 >> 8) + (char)(uVar45 >> 8);
            pcVar22[0x1e] = (char)(uVar9 >> 0x10) + cVar38;
            pcVar22[0x1f] = cVar38;
            pcVar22[0x20] = (char)(uVar7 >> 0x10) + (char)(uVar45 >> 0x10);
            pcVar22[0x21] = (char)(uVar9 >> 0x18) + cVar39;
            pcVar22[0x22] = cVar39;
            pcVar22[0x23] = (char)(uVar7 >> 0x18) + (char)(uVar45 >> 0x18);
            pcVar22[0x24] = (char)(uVar5 >> 0x20) + cVar40;
            pcVar22[0x25] = cVar40;
            pcVar22[0x26] = (char)(uVar7 >> 0x20) + (char)(uVar45 >> 0x20);
            pcVar22[0x27] = (char)(uVar5 >> 0x28) + cVar41;
            pcVar22[0x28] = cVar41;
            pcVar22[0x29] = (char)((uVar36 | 0x80808080808080) >> 0x28) + (char)(uVar45 >> 0x28);
            pcVar22[0x2a] = ((byte)(uVar25 >> 0x30) | 0x80) + cVar42;
            pcVar22[0x2b] = cVar42;
            pcVar22[0x2c] = (char)((uVar36 | 0x80808080808080) >> 0x30) + (char)(uVar45 >> 0x30);
            pcVar22[0x2d] = ((byte)(uVar25 >> 0x38) | 0x80) + bVar43;
            pcVar22[0x2e] = bVar43;
            pcVar22[0x2f] = (bVar43 | 0x80) + (char)(uVar45 >> 0x38);
            pcVar22 = pcVar22 + 0x30;
            puVar10 = puVar10 + 2;
            puVar11 = puVar11 + 2;
            puVar12 = puVar12 + 2;
          } while (lVar15 != 0);
                    /* catch() { ... } // from try @ 010fd064 with catch @ 010fd0a8 */
          lVar15 = lVar14;
          pcVar22 = pcVar17;
          if (uVar2 != 0) goto LAB_010fd0b4;
        }
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
                    /* catch() { ... } // from try @ 010fcf28 with catch @ 010fd10c */
  return;
}

