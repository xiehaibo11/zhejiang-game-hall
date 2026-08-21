
void FUN_010efa98(long param_1,int *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  short *psVar9;
  long lVar10;
  int iVar11;
  short *psVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  short *psVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  iVar6 = *param_2;
  iVar21 = param_2[1];
  iVar19 = param_2[2];
  iVar16 = param_2[3];
  iVar14 = param_2[4];
  iVar17 = param_2[5];
  lVar13 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
  lVar20 = (long)iVar19;
  lVar18 = (long)iVar16;
  lVar15 = (long)iVar14;
  if (((iVar6 < iVar21) && (iVar19 <= iVar16)) && (iVar14 <= iVar17)) {
    lVar7 = (long)iVar6;
    do {
      lVar10 = lVar20;
      do {
        psVar9 = (short *)(*(long *)(lVar13 + lVar7 * 8) + lVar10 * 0x40 + lVar15 * 2);
        iVar11 = iVar14 + -1;
        do {
          if (*psVar9 != 0) {
            iVar6 = (int)lVar7;
            *param_2 = iVar6;
            goto LAB_010efb2c;
          }
          iVar11 = iVar11 + 1;
          psVar9 = psVar9 + 1;
        } while (iVar11 < iVar17);
        bVar1 = lVar10 < lVar18;
        lVar10 = lVar10 + 1;
      } while (bVar1);
      bVar1 = lVar7 < iVar21;
      lVar7 = lVar7 + 1;
    } while (bVar1);
  }
LAB_010efb2c:
  if (((iVar6 < iVar21) && (iVar19 <= iVar16)) && (iVar14 <= iVar17)) {
    lVar7 = (long)iVar21;
    do {
      lVar10 = lVar20;
      do {
        psVar9 = (short *)(*(long *)(lVar13 + lVar7 * 8) + lVar10 * 0x40 + lVar15 * 2);
        iVar11 = iVar14 + -1;
        do {
          if (*psVar9 != 0) {
            iVar21 = (int)lVar7;
            param_2[1] = iVar21;
            goto LAB_010efb9c;
          }
          iVar11 = iVar11 + 1;
          psVar9 = psVar9 + 1;
        } while (iVar11 < iVar17);
        bVar1 = lVar10 < lVar18;
        lVar10 = lVar10 + 1;
      } while (bVar1);
      bVar1 = iVar6 < lVar7;
      lVar7 = lVar7 + -1;
    } while (bVar1);
  }
LAB_010efb9c:
  if (((iVar19 < iVar16) && (iVar6 <= iVar21)) && (iVar14 <= iVar17)) {
    lVar7 = (long)iVar6;
    do {
      psVar9 = (short *)(*(long *)(lVar13 + lVar7 * 8) + lVar20 * 0x40 + lVar15 * 2);
      iVar11 = iVar14 + -1;
      do {
        if (*psVar9 != 0) {
          iVar19 = (int)lVar20;
          param_2[2] = iVar19;
          goto LAB_010efc10;
        }
        iVar11 = iVar11 + 1;
        psVar9 = psVar9 + 1;
      } while (iVar11 < iVar17);
      bVar1 = lVar7 < iVar21;
      lVar7 = lVar7 + 1;
    } while ((bVar1) || (bVar1 = lVar20 < lVar18, lVar7 = (long)iVar6, lVar20 = lVar20 + 1, bVar1));
  }
LAB_010efc10:
  if ((iVar19 < iVar16) && ((iVar6 <= iVar21 && (iVar14 <= iVar17)))) {
    lVar20 = (long)iVar6;
    do {
      psVar9 = (short *)(*(long *)(lVar13 + lVar20 * 8) + lVar18 * 0x40 + lVar15 * 2);
      iVar11 = iVar14 + -1;
      do {
        if (*psVar9 != 0) {
          iVar16 = (int)lVar18;
          param_2[3] = iVar16;
          goto LAB_010efc88;
        }
        iVar11 = iVar11 + 1;
        psVar9 = psVar9 + 1;
      } while (iVar11 < iVar17);
      bVar1 = lVar20 < iVar21;
      lVar20 = lVar20 + 1;
    } while ((bVar1) || (bVar1 = iVar19 < lVar18, lVar20 = (long)iVar6, lVar18 = lVar18 + -1, bVar1)
            );
  }
LAB_010efc88:
                    /* try { // try from 010efc9c to 011efca3 has its CatchHandler @ 010efe40 */
  if ((iVar14 < iVar17) && ((iVar6 <= iVar21 && (iVar19 <= iVar16)))) {
                    /* try { // try from 010efca4 to 011efd6f has its CatchHandler @ 010efa90 */
    lVar20 = (long)iVar6;
    do {
      psVar9 = (short *)(*(long *)(lVar13 + lVar20 * 8) + (long)iVar19 * 0x40 + lVar15 * 2);
      iVar11 = iVar19 + -1;
      do {
        if (*psVar9 != 0) {
          iVar14 = (int)lVar15;
          param_2[4] = iVar14;
          goto LAB_010efd04;
        }
        iVar11 = iVar11 + 1;
        psVar9 = psVar9 + 0x20;
      } while (iVar11 < iVar16);
      bVar1 = lVar20 < iVar21;
      lVar20 = lVar20 + 1;
    } while ((bVar1) || (bVar1 = lVar15 < iVar17, lVar20 = (long)iVar6, lVar15 = lVar15 + 1, bVar1))
    ;
  }
LAB_010efd04:
  if ((iVar14 < iVar17) && ((iVar6 <= iVar21 && (iVar19 <= iVar16)))) {
    lVar20 = (long)iVar6;
    lVar18 = (long)iVar17;
    do {
      psVar9 = (short *)(*(long *)(lVar13 + lVar20 * 8) + (long)iVar19 * 0x40 + lVar18 * 2);
      iVar11 = iVar19 + -1;
      do {
        if (*psVar9 != 0) {
          iVar17 = (int)lVar18;
          param_2[5] = iVar17;
          goto LAB_010efd80;
        }
        iVar11 = iVar11 + 1;
        psVar9 = psVar9 + 0x20;
      } while (iVar11 < iVar16);
      bVar1 = lVar20 < iVar21;
      lVar20 = lVar20 + 1;
    } while ((bVar1) ||
            (bVar1 = iVar14 < lVar18, lVar20 = (long)iVar6, lVar18 = lVar18 + -1, bVar1
                    /* try { // try from 010efd70 to 011efd73 has its CatchHandler @ 010efe3c */));
  }
LAB_010efd80:
  iVar11 = (iVar16 - iVar19) * 0xc;
  iVar4 = (iVar21 - iVar6) * 0x10;
  iVar5 = (iVar17 - iVar14) * 8;
  *(long *)(param_2 + 6) =
       (long)iVar11 * (long)iVar11 + (long)iVar4 * (long)iVar4 + (long)iVar5 * (long)iVar5;
  if (iVar21 < iVar6) {
    lVar20 = 0;
  }
  else {
    lVar20 = 0;
    if ((iVar19 <= iVar16) && (iVar14 <= iVar17)) {
      iVar11 = iVar14;
      if (iVar14 <= iVar17) {
        iVar11 = iVar17;
      }
      uVar2 = (ulong)(uint)(iVar11 - iVar14) + 1;
      uVar3 = (iVar11 - iVar14) + 1U & 3;
      lVar15 = uVar2 - uVar3;
      lVar20 = 0;
      lVar18 = (long)iVar6;
      do {
        lVar10 = *(long *)(lVar13 + lVar18 * 8);
        psVar9 = (short *)(lVar10 + (long)iVar19 * 0x40 + ((long)iVar14 + 2) * 2);
        lVar7 = (long)iVar19;
        do {
          psVar12 = (short *)(lVar10 + lVar7 * 0x40 + (long)iVar14 * 2);
          iVar6 = iVar14;
                    /* catch() { ... } // from try @ 010efd70 with catch @ 010efe3c */
          if ((uVar2 < 4) || (lVar15 == 0)) {
LAB_010efecc:
                    /* try { // try from 010efecc to 011efed7 has its CatchHandler @ 010eff64 */
            iVar6 = iVar6 + -1;
            do {
              iVar6 = iVar6 + 1;
                    /* try { // try from 010efedc to 011efee3 has its CatchHandler @ 010eff4c */
              if (*psVar12 != 0) {
                lVar20 = lVar20 + 1;
              }
              psVar12 = psVar12 + 1;
            } while (iVar6 < iVar17);
          }
          else {
                    /* catch() { ... } // from try @ 010efc9c with catch @ 010efe40 */
            lVar23 = 0;
            psVar12 = psVar12 + lVar15;
            lVar24 = 0;
            lVar25 = 0;
            lVar8 = lVar15;
            psVar22 = psVar9;
            do {
                    /* try { // try from 010efe5c to 011efe9b has its CatchHandler @ 010efe5c
                       catch() { ... } // from try @ 010efe5c with catch @ 010efe5c
                       catch() { ... } // from try @ 010efef4 with catch @ 010efe5c */
              lVar8 = lVar8 + -4;
                    /* try { // try from 010efe9c to 011efec7 has its CatchHandler @ 010eff10 */
              lVar20 = lVar20 + (ulong)(~-(psVar22[-2] == 0) & 1);
              lVar23 = lVar23 + (ulong)(~-(psVar22[-1] == 0) & 1);
              lVar24 = lVar24 + (ulong)(~-(*psVar22 == 0) & 1);
              lVar25 = lVar25 + (ulong)(~-(psVar22[1] == 0) & 1);
              psVar22 = psVar22 + 4;
            } while (lVar8 != 0);
            lVar20 = lVar24 + lVar20 + lVar25 + lVar23;
            iVar6 = iVar14 + (int)lVar15;
            if (uVar3 != 0) goto LAB_010efecc;
          }
                    /* try { // try from 010efee8 to 011efeef has its CatchHandler @ 010eff34 */
                    /* try { // try from 010efef0 to 011efef3 has its CatchHandler @ 010eff20 */
          psVar9 = psVar9 + 0x20;
                    /* try { // try from 010efef4 to 011effb7 has its CatchHandler @ 010efe5c */
          bVar1 = lVar7 < iVar16;
          lVar7 = lVar7 + 1;
        } while (bVar1);
        bVar1 = lVar18 < iVar21;
        lVar18 = lVar18 + 1;
      } while (bVar1);
    }
  }
  *(long *)(param_2 + 8) = lVar20;
                    /* catch() { ... } // from try @ 010efe9c with catch @ 010eff10 */
  return;
}

