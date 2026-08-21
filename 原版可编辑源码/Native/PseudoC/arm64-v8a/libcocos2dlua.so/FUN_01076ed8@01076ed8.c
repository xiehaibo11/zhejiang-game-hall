
undefined8 FUN_01076ed8(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  byte *pbVar23;
  
  pbVar23 = *(byte **)(param_1 + 0x160);
  pbVar9 = *(byte **)(param_1 + 0x168);
  lVar22 = *(long *)(param_1 + 0x18);
  uVar21 = 0;
  do {
    uVar8 = uVar21 + 1;
    uVar13 = FT_GlyphLoader_CheckSubGlyphs(lVar22,uVar8);
    if ((int)uVar13 != 0) {
      return uVar13;
    }
                    /* try { // try from 01076f1c to 01176f23 has its CatchHandler @ 01077050 */
    if (pbVar9 < pbVar23 + 4) {
      return 0x15;
    }
    lVar14 = *(long *)(lVar22 + 0xa0);
    puVar18 = (uint *)(lVar14 + (ulong)uVar21 * 0x30);
    puVar16 = puVar18 + 2;
    puVar16[0] = 0;
    puVar16[1] = 0;
    bVar10 = pbVar23[1];
    *(ushort *)(puVar18 + 1) = CONCAT11(*pbVar23,bVar10);
    uVar12 = (bVar10 & 1) * 2;
    *puVar18 = (uint)CONCAT11(pbVar23[2],pbVar23[3]);
    if ((bVar10 >> 3 & 1) == 0) {
      if ((bVar10 >> 6 & 1) == 0) {
                    /* try { // try from 01076f74 to 01176f77 has its CatchHandler @ 01077018 */
        uVar20 = (ulong)(bVar10 >> 4 & 8 | uVar12 + 2);
      }
      else {
        uVar20 = (ulong)(uVar12 + 6);
      }
    }
    else {
      uVar20 = (ulong)(uVar12 | 4);
                    /* try { // try from 01076f84 to 01176f93 has its CatchHandler @ 0107701c */
    }
                    /* try { // try from 01076f94 to 0117708b has its CatchHandler @ 01076e70 */
    if (pbVar9 < pbVar23 + 4 + uVar20) {
      return 0x15;
    }
    if ((bVar10 & 1) == 0) {
      *puVar16 = (int)(char)pbVar23[4];
      pbVar1 = pbVar23 + 5;
      pbVar23 = pbVar23 + 6;
      puVar18[3] = (int)(char)*pbVar1;
      if ((bVar10 >> 3 & 1) != 0) goto LAB_01076fbc;
LAB_01077010:
      if ((bVar10 >> 6 & 1) == 0) {
        if ((char)bVar10 < '\0') {
          bVar11 = *pbVar23;
          pbVar1 = pbVar23 + 1;
          pbVar2 = pbVar23 + 2;
          pbVar3 = pbVar23 + 3;
          pbVar4 = pbVar23 + 4;
          pbVar5 = pbVar23 + 5;
          pbVar6 = pbVar23 + 6;
          pbVar7 = pbVar23 + 7;
          pbVar23 = pbVar23 + 8;
          uVar19 = -(ulong)(bVar11 >> 7) & 0xfffffffffffc0000 | (ulong)CONCAT11(bVar11,*pbVar1) << 2
          ;
          uVar15 = -(ulong)(*pbVar2 >> 7) & 0xfffffffffffc0000 |
                   (ulong)CONCAT11(*pbVar2,*pbVar3) << 2;
          uVar17 = -(ulong)(*pbVar4 >> 7) & 0xfffffffffffc0000 |
                   (ulong)CONCAT11(*pbVar4,*pbVar5) << 2;
          uVar20 = -(ulong)(*pbVar6 >> 7) & 0xfffffffffffc0000 |
                   (ulong)CONCAT11(*pbVar6,*pbVar7) << 2;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01076f74 with catch @ 01077018
                        */
          uVar17 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01076f84 with catch @ 0107701c
                        */
          uVar15 = 0;
          uVar19 = 0x10000;
          uVar20 = 0x10000;
        }
      }
      else {
        bVar11 = *pbVar23;
        pbVar1 = pbVar23 + 1;
        pbVar2 = pbVar23 + 2;
        pbVar3 = pbVar23 + 3;
        uVar17 = 0;
        uVar15 = 0;
        pbVar23 = pbVar23 + 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01076f1c with catch @ 01077050
                        */
        uVar19 = -(ulong)(bVar11 >> 7) & 0xfffffffffffc0000 | (ulong)CONCAT11(bVar11,*pbVar1) << 2;
        uVar20 = -(ulong)(*pbVar2 >> 7) & 0xfffffffffffc0000 | (ulong)CONCAT11(*pbVar2,*pbVar3) << 2
        ;
      }
    }
    else {
      *puVar16 = (int)CONCAT11(pbVar23[4],pbVar23[5]);
      pbVar1 = pbVar23 + 6;
      pbVar2 = pbVar23 + 7;
      pbVar23 = pbVar23 + 8;
      puVar18[3] = (int)CONCAT11(*pbVar1,*pbVar2);
      if ((bVar10 >> 3 & 1) == 0) goto LAB_01077010;
LAB_01076fbc:
      bVar11 = *pbVar23;
      pbVar1 = pbVar23 + 1;
      uVar17 = 0;
      uVar15 = 0;
      pbVar23 = pbVar23 + 2;
      uVar19 = -(ulong)(bVar11 >> 7) & 0xfffffffffffc0000 | (ulong)CONCAT11(bVar11,*pbVar1) << 2;
      uVar20 = uVar19;
    }
    lVar14 = lVar14 + (ulong)uVar21 * 0x30;
    *(ulong *)(lVar14 + 0x10) = uVar19;
    *(ulong *)(lVar14 + 0x18) = uVar17;
    *(ulong *)(lVar14 + 0x20) = uVar15;
    *(ulong *)(lVar14 + 0x28) = uVar20;
    uVar21 = uVar8;
    if ((bVar10 & 0x20) == 0) {
      *(uint *)(lVar22 + 0x98) = uVar8;
                    /* try { // try from 010770b4 to 011770fb has its CatchHandler @ 010770b4
                       catch() { ... } // from try @ 010770b4 with catch @ 010770b4
                       catch() { ... } // from try @ 01077134 with catch @ 010770b4 */
      lVar22 = FT_Stream_Pos(*(undefined8 *)(param_1 + 0x30));
      *(byte **)(param_1 + 0x128) = pbVar23 + (lVar22 - (long)pbVar9);
      *(byte **)(param_1 + 0x160) = pbVar23;
      return 0;
    }
  } while( true );
}

