
void FUN_010e6a14(long param_1,long param_2,long *param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long *plVar27;
  
  uVar25 = *(uint *)(param_1 + 0x164);
  uVar26 = (ulong)uVar25;
  lVar17 = *(long *)(param_1 + 0x220) + (long)*(int *)(param_2 + 4);
  bVar2 = *(byte *)(lVar17 + 0x90);
  bVar3 = *(byte *)(lVar17 + 0x9a);
  uVar24 = (ulong)bVar3;
  uVar4 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  uVar23 = (uint)bVar2;
  if (0 < (int)uVar25) {
    uVar10 = *(uint *)(param_1 + 0x30);
    uVar5 = uVar4 * uVar23;
    if (0 < (int)(uVar5 - uVar10)) {
      iVar14 = uVar10 + ~uVar5;
                    /* try { // try from 010e6a8c to 011e6a93 has its CatchHandler @ 010e6b54 */
      if (iVar14 < -1) {
        iVar14 = -2;
      }
                    /* try { // try from 010e6a9c to 011e6aa7 has its CatchHandler @ 010e6b44 */
      plVar27 = param_3;
      do {
        memset((void *)(*plVar27 + (ulong)uVar10),
               (uint)*(byte *)((long)(*plVar27 + (ulong)uVar10) + -1),
               (ulong)(((uVar5 + 1) - uVar10) + iVar14) + 1);
        uVar26 = uVar26 - 1;
                    /* try { // try from 010e6abc to 011e6ac7 has its CatchHandler @ 010e6b58 */
        plVar27 = plVar27 + 1;
      } while (uVar26 != 0);
      uVar25 = *(uint *)(param_1 + 0x164);
    }
  }
                    /* try { // try from 010e6ac8 to 011e6b9f has its CatchHandler @ 010e698c */
  if (0 < (int)uVar25) {
    uVar19 = uVar24 * bVar2;
    uVar26 = (ulong)(uVar4 - 1) + 1;
    uVar1 = (ulong)(uVar23 - 1) + 1;
    uVar7 = 0;
    if ((uint)uVar19 != 0) {
      uVar7 = (undefined1)((uint)(uVar19 >> 1) / (uint)uVar19);
    }
    lVar17 = 0;
    lVar18 = 0;
    lVar20 = uVar26 - (uVar4 & 0x1f);
    lVar21 = uVar1 - ((ulong)bVar2 & 1);
    do {
      if (uVar4 != 0) {
        puVar8 = *(undefined1 **)(param_4 + lVar17 * 8);
        if (bVar3 == 0) {
          if ((uVar26 < 0x20) || (lVar20 == 0)) {
            iVar14 = 0;
          }
          else {
            puVar9 = (undefined8 *)(puVar8 + 0x10);
            lVar11 = lVar20;
            do {
              puVar9[-1] = CONCAT17(uVar7,CONCAT16(uVar7,CONCAT15(uVar7,CONCAT14(uVar7,CONCAT13(
                                                  uVar7,CONCAT12(uVar7,CONCAT11(uVar7,uVar7)))))));
              puVar9[-2] = CONCAT17(uVar7,CONCAT16(uVar7,CONCAT15(uVar7,CONCAT14(uVar7,CONCAT13(
                                                  uVar7,CONCAT12(uVar7,CONCAT11(uVar7,uVar7)))))));
              puVar9[1] = CONCAT17(uVar7,CONCAT16(uVar7,CONCAT15(uVar7,CONCAT14(uVar7,CONCAT13(uVar7
                                                  ,CONCAT12(uVar7,CONCAT11(uVar7,uVar7)))))));
              *puVar9 = CONCAT17(uVar7,CONCAT16(uVar7,CONCAT15(uVar7,CONCAT14(uVar7,CONCAT13(uVar7,
                                                  CONCAT12(uVar7,CONCAT11(uVar7,uVar7)))))));
              lVar11 = lVar11 + -0x20;
              puVar9 = puVar9 + 4;
            } while (lVar11 != 0);
            iVar14 = (int)lVar20;
            puVar8 = puVar8 + lVar20;
            if ((uVar4 & 0x1f) == 0) goto LAB_010e6c18;
          }
          iVar14 = uVar4 - iVar14;
          do {
            iVar14 = iVar14 + -1;
            *puVar8 = uVar7;
            puVar8 = puVar8 + 1;
          } while (iVar14 != 0);
        }
        else {
          uVar10 = 0;
          uVar25 = 0;
          do {
            if (uVar23 == 0) {
              lVar11 = 0;
            }
            else {
              uVar12 = 0;
              lVar11 = 0;
              do {
                pbVar13 = (byte *)(param_3[uVar12 + lVar18] + (ulong)uVar10);
                if ((uVar1 < 2) || (lVar21 == 0)) {
                  iVar14 = 0;
LAB_010e6b84:
                  iVar14 = uVar23 - iVar14;
                  do {
                    iVar14 = iVar14 + -1;
                    lVar11 = lVar11 + (ulong)*pbVar13;
                    pbVar13 = pbVar13 + 1;
                  } while (iVar14 != 0);
                }
                else {
                    /* catch() { ... } // from try @ 010e6a9c with catch @ 010e6b44 */
                  lVar15 = 0;
                  pbVar13 = pbVar13 + lVar21;
                    /* catch() { ... } // from try @ 010e6a8c with catch @ 010e6b54 */
                  pbVar16 = (byte *)(param_3[uVar12 + lVar18] + (ulong)uVar10 + 1);
                  lVar22 = lVar21;
                  do {
                    /* catch() { ... } // from try @ 010e6abc with catch @ 010e6b58 */
                    lVar22 = lVar22 + -2;
                    lVar11 = lVar11 + (ulong)pbVar16[-1];
                    lVar15 = lVar15 + (ulong)*pbVar16;
                    pbVar16 = pbVar16 + 2;
                  } while (lVar22 != 0);
                  lVar11 = lVar15 + lVar11;
                  iVar14 = (int)lVar21;
                  if ((bVar2 & 1) != 0) goto LAB_010e6b84;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 != uVar24);
            }
            uVar25 = uVar25 + 1;
            uVar6 = 0;
            if (uVar19 != 0) {
              uVar6 = (undefined1)((long)(lVar11 + (uVar19 >> 1)) / (long)uVar19);
            }
            *puVar8 = uVar6;
            uVar10 = uVar10 + uVar23;
            puVar8 = puVar8 + 1;
          } while (uVar25 != uVar4);
        }
      }
LAB_010e6c18:
      lVar18 = lVar18 + uVar24;
      lVar17 = lVar17 + 1;
    } while (lVar18 < *(int *)(param_1 + 0x164));
  }
  return;
}

