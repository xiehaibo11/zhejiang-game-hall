
/* WARNING: Removing unreachable block (ram,0x0113c3a0) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0113c2f4(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
                    /* try { // try from 0113c30c to 0123c317 has its CatchHandler @ 0113c64c */
  pbVar6 = *(byte **)(param_1 + 0x388);
  pbVar9 = pbVar6;
  if (0 < param_3) {
    bVar4 = 0;
    pbVar15 = (byte *)0x0;
    pbVar9 = (byte *)(*(long *)(param_1 + 0x368) + *(long *)(param_1 + 0x370));
LAB_0113c344:
    pbVar7 = param_2 + 1;
    bVar1 = *param_2;
    lVar17 = 1;
    lVar14 = param_3 + -1;
    if (lVar14 == 0 || param_3 < 1) goto LAB_0113c5e0;
    do {
      lVar13 = param_3 + -1;
      lVar14 = lVar13;
      if (bVar1 != param_2[lVar17]) break;
      lVar14 = param_3 + -2;
      lVar17 = lVar17 + 1;
      param_3 = lVar13;
    } while (lVar14 != 0 && 0 < lVar13);
    pbVar7 = param_2 + lVar17;
joined_r0x0113c3b0:
    do {
      bVar3 = bVar4;
      if (lVar17 != 1) {
switchD_0113c544_caseD_3:
        bVar4 = bVar3;
        pbVar11 = pbVar15;
        pbVar16 = pbVar6;
        if (pbVar9 <= pbVar6 + 2) {
          if ((bVar4 | 2) == 3) {
            *(byte **)(param_1 + 0x390) =
                 pbVar15 + (*(long *)(param_1 + 0x390) - *(long *)(param_1 + 0x388));
            iVar5 = TIFFFlushData1(param_1);
            if (iVar5 == 0) {
              return 0xffffffff;
            }
            pbVar11 = *(byte **)(param_1 + 0x388);
            lVar13 = (long)pbVar6 - (long)pbVar15;
            pbVar16 = pbVar11;
            if (0 < lVar13) {
              pbVar8 = pbVar15 + (-1 - (long)pbVar6);
                    /* try { // try from 0113c484 to 0123c493 has its CatchHandler @ 0113c61c */
              pbVar16 = pbVar8;
              if ((long)pbVar8 < -1) {
                pbVar16 = (byte *)0xfffffffffffffffe;
              }
              pbVar10 = pbVar6 + (long)(pbVar16 + (2 - (long)pbVar15));
              if ((pbVar10 < (byte *)0x20) ||
                 (pbVar12 = (byte *)((ulong)pbVar10 & 0xffffffffffffffe0), pbVar12 == (byte *)0x0))
              {
LAB_0113c4e0:
                lVar13 = lVar13 + 1;
                do {
                  lVar13 = lVar13 + -1;
                  pbVar16 = pbVar11 + 1;
                  *pbVar11 = *pbVar15;
                  pbVar15 = pbVar15 + 1;
                  pbVar11 = pbVar16;
                } while (1 < lVar13);
              }
              else {
                if ((long)pbVar8 < -1) {
                  pbVar8 = (byte *)0xfffffffffffffffe;
                }
                    /* try { // try from 0113c4b4 to 0123c4cb has its CatchHandler @ 0113c5d8 */
                if ((pbVar11 < pbVar6 + (long)(pbVar8 + 2)) &&
                   (pbVar15 < pbVar11 + (long)(pbVar6 + (long)(pbVar8 + (2 - (long)pbVar15)))))
                goto LAB_0113c4e0;
                lVar13 = lVar13 - (long)pbVar12;
                pbVar16 = pbVar11 + (long)pbVar12;
                pbVar11 = pbVar11 + 0x10;
                pbVar6 = pbVar15 + 0x10;
                pbVar8 = pbVar12;
                do {
                  pbVar2 = pbVar6 + -8;
                  uVar18 = *(undefined8 *)(pbVar6 + -0x10);
                  uVar20 = *(undefined8 *)(pbVar6 + 8);
                  uVar19 = *(undefined8 *)pbVar6;
                  pbVar8 = pbVar8 + -0x20;
                  pbVar6 = pbVar6 + 0x20;
                  *(undefined8 *)(pbVar11 + -8) = *(undefined8 *)pbVar2;
                  *(undefined8 *)(pbVar11 + -0x10) = uVar18;
                  *(undefined8 *)(pbVar11 + 8) = uVar20;
                  *(undefined8 *)pbVar11 = uVar19;
                  pbVar11 = pbVar11 + 0x20;
                } while (pbVar8 != (byte *)0x0);
                pbVar15 = pbVar15 + (long)pbVar12;
                pbVar11 = pbVar16;
                if (pbVar10 != pbVar12) goto LAB_0113c4e0;
              }
              pbVar11 = *(byte **)(param_1 + 0x388);
            }
          }
          else {
            *(byte **)(param_1 + 0x390) =
                 pbVar6 + (*(long *)(param_1 + 0x390) - *(long *)(param_1 + 0x388));
            iVar5 = TIFFFlushData1(param_1);
            if (iVar5 == 0) {
              return 0xffffffff;
            }
            pbVar16 = *(byte **)(param_1 + 0x388);
          }
        }
        pbVar6 = pbVar16;
        pbVar15 = pbVar11;
        param_2 = pbVar7;
        param_3 = lVar14;
        if (3 < bVar4) goto joined_r0x0113c764;
        bVar3 = 2;
        switch(bVar4) {
        default:
          goto switchD_0113c6f8_caseD_0;
        case 1:
          goto switchD_0113c6f8_caseD_1;
        case 3:
          goto switchD_0113c544_caseD_3;
        }
      }
LAB_0113c5e0:
      pbVar11 = pbVar15;
      pbVar16 = pbVar6;
      if (pbVar9 <= pbVar6 + 2) {
                    /* catch() { ... } // from try @ 0113bf64 with catch @ 0113c5ec */
        if ((bVar4 | 2) == 3) {
                    /* catch() { ... } // from try @ 0113c158 with catch @ 0113c5fc */
                    /* catch() { ... } // from try @ 0113c04c with catch @ 0113c600 */
          *(byte **)(param_1 + 0x390) =
               pbVar15 + (*(long *)(param_1 + 0x390) - *(long *)(param_1 + 0x388));
          iVar5 = TIFFFlushData1(param_1);
                    /* catch() { ... } // from try @ 0113c0b4 with catch @ 0113c614
                       catch() { ... } // from try @ 0113c178 with catch @ 0113c614 */
          if (iVar5 == 0) {
            return 0xffffffff;
          }
                    /* catch() { ... } // from try @ 0113bfa8 with catch @ 0113c618
                       catch() { ... } // from try @ 0113c06c with catch @ 0113c618 */
          pbVar11 = *(byte **)(param_1 + 0x388);
                    /* catch() { ... } // from try @ 0113c484 with catch @ 0113c61c */
          lVar13 = (long)pbVar6 - (long)pbVar15;
          pbVar16 = pbVar11;
          if (0 < lVar13) {
            pbVar8 = pbVar15 + (-1 - (long)pbVar6);
                    /* catch() { ... } // from try @ 0113c120 with catch @ 0113c634 */
                    /* catch() { ... } // from try @ 0113c014 with catch @ 0113c638 */
            pbVar16 = pbVar8;
            if ((long)pbVar8 < -1) {
              pbVar16 = (byte *)0xfffffffffffffffe;
            }
            pbVar10 = pbVar6 + (long)(pbVar16 + (2 - (long)pbVar15));
                    /* catch() { ... } // from try @ 0113c30c with catch @ 0113c64c */
            if ((pbVar10 < (byte *)0x20) ||
               (pbVar12 = (byte *)((ulong)pbVar10 & 0xffffffffffffffe0), pbVar12 == (byte *)0x0)) {
LAB_0113c690:
              lVar13 = lVar13 + 1;
              do {
                lVar13 = lVar13 + -1;
                pbVar16 = pbVar11 + 1;
                *pbVar11 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                pbVar11 = pbVar16;
              } while (1 < lVar13);
            }
            else {
                    /* catch() { ... } // from try @ 0113c200 with catch @ 0113c660
                       catch() { ... } // from try @ 0113c3d4 with catch @ 0113c660 */
              if ((long)pbVar8 < -1) {
                pbVar8 = (byte *)0xfffffffffffffffe;
              }
              if ((pbVar11 < pbVar6 + (long)(pbVar8 + 2)) &&
                 (pbVar15 < pbVar11 + (long)(pbVar6 + (long)(pbVar8 + (2 - (long)pbVar15)))))
              goto LAB_0113c690;
              lVar13 = lVar13 - (long)pbVar12;
              pbVar16 = pbVar11 + (long)pbVar12;
              pbVar11 = pbVar11 + 0x10;
              pbVar6 = pbVar15 + 0x10;
              pbVar8 = pbVar12;
              do {
                pbVar2 = pbVar6 + -8;
                uVar18 = *(undefined8 *)(pbVar6 + -0x10);
                uVar20 = *(undefined8 *)(pbVar6 + 8);
                uVar19 = *(undefined8 *)pbVar6;
                pbVar8 = pbVar8 + -0x20;
                    /* catch() { ... } // from try @ 0113c964 with catch @ 0113c730 */
                pbVar6 = pbVar6 + 0x20;
                *(undefined8 *)(pbVar11 + -8) = *(undefined8 *)pbVar2;
                *(undefined8 *)(pbVar11 + -0x10) = uVar18;
                *(undefined8 *)(pbVar11 + 8) = uVar20;
                *(undefined8 *)pbVar11 = uVar19;
                pbVar11 = pbVar11 + 0x20;
              } while (pbVar8 != (byte *)0x0);
              pbVar15 = pbVar15 + (long)pbVar12;
              pbVar11 = pbVar16;
              if (pbVar10 != pbVar12) goto LAB_0113c690;
            }
            pbVar11 = *(byte **)(param_1 + 0x388);
          }
        }
        else {
          *(byte **)(param_1 + 0x390) =
               pbVar6 + (*(long *)(param_1 + 0x390) - *(long *)(param_1 + 0x388));
          iVar5 = TIFFFlushData1(param_1);
          if (iVar5 == 0) {
            return 0xffffffff;
          }
          pbVar16 = *(byte **)(param_1 + 0x388);
        }
      }
      pbVar6 = pbVar16;
      pbVar15 = pbVar11;
      param_2 = pbVar7;
      param_3 = lVar14;
      if (3 < bVar4) goto joined_r0x0113c764;
      switch(bVar4) {
      case 1:
        goto switchD_0113c6f8_caseD_1;
      case 3:
                    /* try { // try from 0113c5b4 to 0123c5bf has its CatchHandler @ 0113c5d4 */
                    /* try { // try from 0113c5c0 to 0123c5cb has its CatchHandler @ 0113c5d0 */
                    /* try { // try from 0113c5cc to 0123c723 has its CatchHandler @ 0113bf08 */
                    /* catch() { ... } // from try @ 0113c5c0 with catch @ 0113c5d0 */
                    /* catch() { ... } // from try @ 0113c5b4 with catch @ 0113c5d4 */
        if ((*(byte *)((long)pbVar6 + -2) == 0xff) && (bVar4 = *pbVar15, bVar4 < 0x7e)) {
          *pbVar15 = bVar4 + 2;
          bVar4 = bVar4 != 0x7d;
          lVar17 = 1;
          *(byte *)((long)pbVar6 + -2) = *(byte *)((long)pbVar6 + -1);
                    /* try { // try from 0113c3d4 to 0123c3df has its CatchHandler @ 0113c660 */
        }
        else {
          bVar4 = 2;
                    /* catch() { ... } // from try @ 0113c4b4 with catch @ 0113c5d8 */
          lVar17 = 1;
                    /* catch() { ... } // from try @ 0113c1b0 with catch @ 0113c5dc */
        }
        goto LAB_0113c5e0;
      }
switchD_0113c6f8_caseD_0:
      if (lVar17 < 2) {
        *pbVar6 = 0;
        pbVar6[1] = bVar1;
        bVar4 = 1;
        pbVar15 = pbVar6;
        goto joined_r0x0113c764;
      }
      if (lVar17 < 0x81) {
        pbVar6[1] = bVar1;
        *pbVar6 = 1 - (char)lVar17;
        bVar4 = 2;
        pbVar6 = pbVar6 + 2;
        param_2 = pbVar7;
        param_3 = lVar14;
        goto joined_r0x0113c764;
      }
      *pbVar6 = 0x81;
      pbVar6[1] = bVar1;
      pbVar6 = pbVar6 + 2;
      lVar17 = lVar17 + -0x80;
      bVar4 = 2;
    } while( true );
  }
LAB_0113c7ec:
  *(byte **)(param_1 + 0x388) = pbVar6;
  *(byte **)(param_1 + 0x390) = pbVar6 + (*(long *)(param_1 + 0x390) - (long)pbVar9);
  return 1;
switchD_0113c6f8_caseD_1:
  if (lVar17 < 2) {
    bVar4 = *pbVar15 + 1 != 0x7f;
    *pbVar15 = (byte)(*pbVar15 + 1);
    *pbVar6 = bVar1;
    pbVar6 = pbVar6 + 1;
    param_2 = pbVar7;
    param_3 = lVar14;
    goto joined_r0x0113c764;
  }
  if (lVar17 < 0x81) goto LAB_0113c7b8;
  *pbVar6 = 0x81;
  pbVar6[1] = bVar1;
  pbVar6 = pbVar6 + 2;
  lVar17 = lVar17 + -0x80;
  bVar4 = 3;
  goto joined_r0x0113c3b0;
LAB_0113c7b8:
  pbVar6[1] = bVar1;
  *pbVar6 = 1 - (char)lVar17;
  bVar4 = 3;
joined_r0x0113c764:
  pbVar6 = pbVar6 + 2;
  param_2 = pbVar7;
  param_3 = lVar14;
joined_r0x0113c764:
  if (param_3 < 1) goto LAB_0113c7d8;
  goto LAB_0113c344;
LAB_0113c7d8:
  pbVar9 = *(byte **)(param_1 + 0x388);
  goto LAB_0113c7ec;
}

