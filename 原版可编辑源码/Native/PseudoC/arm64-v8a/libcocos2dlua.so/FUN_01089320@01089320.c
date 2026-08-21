
long FUN_01089320(byte *param_1,byte *param_2,long param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  uVar7 = 0;
  bVar4 = false;
  lVar14 = 0;
                    /* try { // try from 01089350 to 0118939b has its CatchHandler @ 01089350
                       catch() { ... } // from try @ 01089350 with catch @ 01089350
                       catch() { ... } // from try @ 010893c0 with catch @ 01089350 */
  lVar13 = 0;
  uVar9 = 4;
  bVar3 = bVar4;
  uVar16 = uVar9;
  pbVar10 = param_1;
joined_r0x01089394:
  do {
    while (pbVar11 = pbVar10, 0xccccccb < (long)uVar7) {
      while( true ) {
        bVar4 = bVar3;
        if ((uVar16 != 0) && (pbVar11 = pbVar11 + 1, param_2 <= pbVar11)) goto LAB_01089600;
        bVar2 = *pbVar11;
        uVar18 = bVar2 >> (ulong)(uVar16 & 0x1f) & 0xf;
        uVar9 = 4 - uVar16;
        uVar16 = uVar9;
        if (uVar18 == 0xe) break;
        if (9 < uVar18) goto LAB_01089460;
        lVar14 = lVar14 + 1;
      }
      bVar4 = true;
      param_1 = pbVar11;
      bVar3 = bVar4;
      pbVar10 = pbVar11;
    }
    pbVar11 = param_1;
    if (uVar7 == 0) {
      do {
                    /* catch() { ... } // from try @ 0108939c with catch @ 010893d8 */
        if ((uVar9 != 0) && (pbVar11 = pbVar11 + 1, param_2 <= pbVar11)) goto LAB_01089548;
        bVar2 = *pbVar11;
        bVar5 = bVar2 >> (ulong)(uVar9 & 0x1f);
        uVar18 = bVar5 & 0xf;
        uVar9 = 4 - uVar9;
        if (uVar18 == 0xe) goto LAB_010893c4;
        if (9 < uVar18) {
          uVar7 = 0;
          goto LAB_01089460;
        }
      } while ((bVar5 & 0xf) == 0);
    }
    else {
                    /* try { // try from 0108939c to 011893bf has its CatchHandler @ 010893d8 */
      if ((uVar9 != 0) && (pbVar11 = param_1 + 1, param_2 <= pbVar11)) {
LAB_01089548:
        lVar17 = 0;
        goto LAB_01089604;
      }
      bVar2 = *pbVar11;
      uVar18 = bVar2 >> (ulong)(uVar9 & 0x1f) & 0xf;
      uVar9 = 4 - uVar9;
                    /* try { // try from 010893c0 to 011893eb has its CatchHandler @ 01089350 */
      if (uVar18 == 0xe) {
LAB_010893c4:
        bVar4 = true;
        param_1 = pbVar11;
        goto joined_r0x01089394;
      }
      if (9 < uVar18) break;
    }
    lVar13 = lVar13 + 1;
    uVar7 = (ulong)uVar18 + uVar7 * 10;
    param_1 = pbVar11;
    bVar3 = bVar4;
    uVar16 = uVar9;
    pbVar10 = pbVar11;
  } while( true );
LAB_01089460:
  uVar16 = (uint)bVar2;
  if (uVar18 == 10) {
    lVar15 = 0;
    do {
      if (uVar7 == 0) {
        do {
          if (8 < lVar15) {
            do {
              if (uVar9 != 0) {
                pbVar11 = pbVar11 + 1;
                if (param_2 <= pbVar11) goto LAB_01089600;
                uVar16 = (uint)*pbVar11;
              }
              uVar18 = uVar16 >> (ulong)(uVar9 & 0x1f) & 0xf;
              uVar9 = 4 - uVar9;
              if (9 < uVar18) goto LAB_01089554;
            } while (uVar18 != 0);
          }
          else {
            if (uVar9 != 0) {
              pbVar11 = pbVar11 + 1;
              if (param_2 <= pbVar11) goto LAB_01089600;
              uVar16 = (uint)*pbVar11;
            }
            uVar18 = uVar16 >> (ulong)(uVar9 & 0x1f) & 0xf;
            uVar9 = 4 - uVar9;
            if (9 < uVar18) {
LAB_01089554:
              uVar7 = 0;
              goto LAB_01089558;
            }
            if (uVar18 != 0) goto LAB_01089478;
          }
          lVar14 = lVar14 + -1;
        } while( true );
      }
      if (0xccccccb < (long)uVar7 || 8 < lVar15) goto LAB_010896ec;
      if (uVar9 != 0) {
        pbVar11 = pbVar11 + 1;
        if (param_2 <= pbVar11) goto LAB_01089600;
        uVar16 = (uint)*pbVar11;
      }
      uVar18 = uVar16 >> (ulong)(uVar9 & 0x1f) & 0xf;
      uVar9 = 4 - uVar9;
      if (9 < uVar18) goto LAB_01089558;
LAB_01089478:
      lVar15 = lVar15 + 1;
      uVar7 = (ulong)uVar18 + uVar7 * 10;
    } while( true );
  }
  lVar15 = 0;
  goto LAB_01089558;
LAB_010896ec:
  do {
    if (uVar9 != 0) {
      pbVar11 = pbVar11 + 1;
      if (param_2 <= pbVar11) goto LAB_01089600;
      uVar16 = (uint)*pbVar11;
    }
                    /* try { // try from 01089708 to 01189777 has its CatchHandler @ 010897b8 */
    uVar18 = uVar16 >> (ulong)(uVar9 & 0x1f) & 0xf;
    uVar9 = 4 - uVar9;
  } while (uVar18 < 10);
LAB_01089558:
  if (uVar18 - 0xb < 2) {
    lVar17 = 0;
    do {
      if (uVar9 != 0) {
        pbVar11 = pbVar11 + 1;
        if (param_2 <= pbVar11) goto LAB_01089600;
        uVar16 = (uint)*pbVar11;
      }
      uVar1 = uVar16 >> (ulong)(uVar9 & 0x1f) & 0xf;
      if (9 < uVar1) {
        bVar3 = false;
        goto LAB_01089620;
      }
      lVar17 = (ulong)uVar1 + lVar17 * 10;
      uVar9 = 4 - uVar9;
    } while (lVar17 < 0x3e9);
    bVar6 = false;
    do {
      bVar3 = bVar6;
      if (uVar9 != 0) {
        pbVar11 = pbVar11 + 1;
        if (param_2 <= pbVar11) goto LAB_01089600;
        uVar16 = (uint)*pbVar11;
      }
      uVar1 = uVar9 & 0x1f;
      uVar9 = 4 - uVar9;
      bVar6 = true;
    } while ((uVar16 >> (ulong)uVar1 & 0xe) < 10);
LAB_01089620:
    lVar12 = -lVar17;
    if (uVar18 != 0xc) {
      lVar12 = lVar17;
    }
  }
  else {
    bVar3 = false;
    lVar12 = 0;
  }
  lVar17 = 0;
  if (uVar7 == 0) goto LAB_01089604;
  if (bVar3) {
    if (uVar18 != 0xc) {
LAB_0108967c:
      lVar17 = 0x7fffffff;
      goto LAB_01089604;
    }
  }
  else {
    lVar12 = lVar14 + param_3 + lVar12;
    if (param_4 != (long *)0x0) {
      lVar15 = lVar15 + lVar13;
      lVar12 = lVar12 + lVar13;
      if (5 < lVar15) {
        lVar13 = 0;
        if (*(long *)(&UNK_0145f000 + lVar15 * 8) != 0) {
          lVar13 = (long)uVar7 / *(long *)(&UNK_0145f000 + lVar15 * 8);
        }
        if (lVar13 < 0x8000) {
          lVar17 = FT_DivFix();
                    /* try { // try from 01089778 to 011897f3 has its CatchHandler @ 010896a4 */
          *param_4 = lVar12 + -5;
        }
        else {
                    /* catch() { ... } // from try @ 01089778 with catch @ 010896a4 */
          lVar17 = FT_DivFix(uVar7,(&DAT_0145f008)[lVar15]);
          *param_4 = lVar12 + -4;
        }
        goto LAB_01089604;
      }
      if (0x7fff < (long)uVar7) {
        lVar17 = FT_DivFix(uVar7,10);
        *param_4 = (1 - lVar15) + lVar12;
        goto LAB_01089604;
      }
      if (lVar12 < 1) {
LAB_01089780:
        lVar12 = lVar12 - lVar15;
      }
      else {
        lVar13 = lVar12;
        if (4 < lVar12) {
          lVar13 = 5;
        }
        if (lVar13 - lVar15 < 1) goto LAB_01089780;
        lVar12 = lVar12 - lVar13;
        uVar7 = (&DAT_0145f028)[lVar13 - lVar15] * uVar7;
        if (0x7fff < (long)uVar7) {
          uVar7 = uVar7 / 10;
          lVar12 = lVar12 + 1;
        }
      }
      *param_4 = lVar12;
      lVar17 = uVar7 << 0x10;
      goto LAB_01089604;
    }
    lVar14 = lVar12 + lVar13;
    if (5 < lVar14) goto LAB_0108967c;
    if (lVar14 < -5) goto LAB_01089600;
    if (lVar14 < 0) {
      uVar8 = 0;
      if ((&DAT_0145f028)[-lVar14] != 0) {
        uVar8 = (long)uVar7 / (long)(&DAT_0145f028)[-lVar14];
      }
      lVar15 = lVar15 + lVar13;
                    /* catch() { ... } // from try @ 010896dc with catch @ 010897a8 */
      if (lVar15 == 10) goto LAB_010896cc;
LAB_010897b0:
      if (lVar15 < 1) {
                    /* catch() { ... } // from try @ 01089854 with catch @ 010897f4
                       catch() { ... } // from try @ 0108988c with catch @ 010897f4 */
        lVar17 = 0x7fffffff;
        if ((long)((&DAT_0145f028)[-lVar15] * uVar8) < 0x8000) {
          lVar17 = (&DAT_0145f028)[-lVar15] * uVar8 * 0x10000;
        }
        goto LAB_01089604;
      }
    }
    else {
      lVar15 = lVar15 - lVar12;
      uVar8 = uVar7;
      if (lVar15 != 10) goto LAB_010897b0;
LAB_010896cc:
      uVar8 = (long)uVar8 / 10;
                    /* try { // try from 010896dc to 011896eb has its CatchHandler @ 010897a8 */
      lVar15 = 9;
    }
                    /* catch() { ... } // from try @ 01089708 with catch @ 010897b8 */
    lVar13 = 0;
    if ((&DAT_0145f028)[lVar15] != 0) {
      lVar13 = (long)uVar8 / (long)(&DAT_0145f028)[lVar15];
    }
    if (lVar13 < 0x8000) {
      lVar17 = FT_DivFix();
      goto LAB_01089604;
    }
  }
LAB_01089600:
  lVar17 = 0;
LAB_01089604:
  lVar13 = -lVar17;
  if (!bVar4) {
    lVar13 = lVar17;
  }
  return lVar13;
}

