
undefined8 FUN_010f7058(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  byte *pbVar22;
  undefined8 uVar23;
  
                    /* try { // try from 010f7074 to 011f708b has its CatchHandler @ 010f70a4 */
  lVar16 = param_1[0x46];
  uVar23 = *(undefined8 *)param_1[5];
  *(undefined8 *)(lVar16 + 0xd0) = ((undefined8 *)param_1[5])[1];
  *(undefined8 *)(lVar16 + 200) = uVar23;
  if ((*(int *)((long)param_1 + 0x13c) != 0) && (*(int *)(lVar16 + 0x38) == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f7074 with catch @ 010f70a4
                        */
    FUN_010f9ae8(lVar16,*(undefined4 *)(lVar16 + 0x3c));
  }
  lVar14 = param_1[0x3a];
  if (*(int *)((long)param_1 + 0x1cc) <= (int)lVar14) {
    uVar15 = 0;
    uVar2 = *(uint *)(param_1 + 0x3b);
    lVar18 = param_1[0x3c];
    lVar9 = *param_2;
    lVar21 = (long)*(int *)((long)param_1 + 0x1cc);
    do {
      sVar4 = *(short *)(lVar9 + (long)*(int *)(lVar18 + lVar21 * 4) * 2);
      if (sVar4 == 0) {
LAB_010f73a0:
        uVar15 = uVar15 + 1;
      }
      else {
        if (sVar4 < 0) {
          uVar20 = -(int)sVar4 >> (uVar2 & 0x1f);
          uVar5 = ~uVar20;
        }
        else {
          uVar20 = (int)sVar4 >> (uVar2 & 0x1f);
                    /* try { // try from 010f7124 to 011f714f has its CatchHandler @ 010f7160 */
          uVar5 = uVar20;
        }
                    /* catch() { ... } // from try @ 010f7344 with catch @ 010f739c */
        if (uVar20 == 0) goto LAB_010f73a0;
        iVar7 = *(int *)(lVar16 + 0xe4);
        if (iVar7 != 0) {
          iVar6 = -1;
          uVar19 = 0xfffffff0;
          do {
            iVar7 = iVar7 >> 1;
            iVar6 = iVar6 + 1;
            uVar8 = (int)uVar19 + 0x10;
            uVar19 = (ulong)uVar8;
          } while (iVar7 != 0);
          if (0xe < iVar6) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f7124 with catch @ 010f7160
                        */
            puVar10 = (undefined8 *)**(long **)(lVar16 + 0xd8);
            *(undefined4 *)(puVar10 + 5) = 0x29;
            (*(code *)*puVar10)();
          }
          lVar11 = lVar16 + (long)*(int *)(lVar16 + 0xe0) * 8;
          if (*(int *)(lVar16 + 0xc0) == 0) {
            lVar11 = *(long *)(lVar11 + 0x60);
            FUN_010f97a4(lVar16,*(undefined4 *)(lVar11 + (long)(int)uVar8 * 4),
                         *(undefined1 *)(lVar11 + (int)uVar8 + 0x400));
          }
          else {
            lVar11 = *(long *)(lVar11 + 0xa0);
            uVar19 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
            *(long *)(lVar11 + uVar19) = *(long *)(lVar11 + uVar19) + 1;
                    /* try { // try from 010f7198 to 011f7233 has its CatchHandler @ 010f7198
                       catch() { ... } // from try @ 010f7198 with catch @ 010f7198
                       catch() { ... } // from try @ 010f7240 with catch @ 010f7198 */
          }
          if (iVar6 != 0) {
            FUN_010f97a4(lVar16,*(undefined4 *)(lVar16 + 0xe4),iVar6);
          }
          iVar7 = *(int *)(lVar16 + 0xe8);
          *(undefined4 *)(lVar16 + 0xe4) = 0;
          if ((iVar7 != 0) && (*(int *)(lVar16 + 0xc0) == 0)) {
            pbVar22 = *(byte **)(lVar16 + 0xf0);
            do {
              iVar3 = *(int *)(lVar16 + 0x20);
              iVar6 = iVar3 + 1;
              uVar19 = ((ulong)*pbVar22 & 1) << ((ulong)(0x17 - iVar3) & 0x3f) |
                       *(ulong *)(lVar16 + 0x18);
              if (7 < iVar6) {
                iVar6 = -2 - iVar3;
                if (iVar6 < -0xf) {
                  iVar6 = -0x10;
                }
                iVar17 = iVar3 + 9;
                uVar8 = iVar17 + iVar6;
                do {
                  puVar12 = *(undefined1 **)(lVar16 + 200);
                  *(undefined1 **)(lVar16 + 200) = puVar12 + 1;
                  *puVar12 = (char)(uVar19 >> 0x10);
                  lVar11 = *(long *)(lVar16 + 0xd0) + -1;
                  *(long *)(lVar16 + 0xd0) = lVar11;
                    /* try { // try from 010f7234 to 011f723f has its CatchHandler @ 010f72bc */
                  if (lVar11 == 0) {
                    puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                    /* try { // try from 010f7240 to 011f7313 has its CatchHandler @ 010f7198 */
                    iVar6 = (*(code *)puVar10[3])();
                    if (iVar6 == 0) {
                      puVar13 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                      *(undefined4 *)(puVar13 + 5) = 0x19;
                      (*(code *)*puVar13)();
                    }
                    uVar23 = *puVar10;
                    *(undefined8 *)(lVar16 + 0xd0) = puVar10[1];
                    *(undefined8 *)(lVar16 + 200) = uVar23;
                  }
                  if ((((uint)uVar19 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                    puVar12 = *(undefined1 **)(lVar16 + 200);
                    *(undefined1 **)(lVar16 + 200) = puVar12 + 1;
                    *puVar12 = 0;
                    lVar11 = *(long *)(lVar16 + 0xd0) + -1;
                    *(long *)(lVar16 + 0xd0) = lVar11;
                    if (lVar11 == 0) {
                      puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                      iVar6 = (*(code *)puVar10[3])();
                      if (iVar6 == 0) {
                        puVar13 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                    /* catch() { ... } // from try @ 010f7234 with catch @ 010f72bc */
                        *(undefined4 *)(puVar13 + 5) = 0x19;
                        (*(code *)*puVar13)();
                      }
                      uVar23 = *puVar10;
                      *(undefined8 *)(lVar16 + 0xd0) = puVar10[1];
                      *(undefined8 *)(lVar16 + 200) = uVar23;
                    }
                  }
                  iVar17 = iVar17 + -8;
                  uVar19 = uVar19 << 8;
                } while (0xf < iVar17);
                iVar6 = (iVar3 + -7) - (uVar8 & 0xfffffff8);
              }
              *(ulong *)(lVar16 + 0x18) = uVar19;
              *(int *)(lVar16 + 0x20) = iVar6;
              do {
                iVar7 = iVar7 + -1;
                if (iVar7 == 0) goto LAB_010f7310;
                pbVar22 = pbVar22 + 1;
              } while (*(int *)(lVar16 + 0xc0) != 0);
            } while( true );
          }
LAB_010f7310:
          *(undefined4 *)(lVar16 + 0xe8) = 0;
                    /* catch() { ... } // from try @ 010f734c with catch @ 010f7314 */
        }
        if (0xf < (int)uVar15) {
          uVar8 = 0xffffffe0;
          iVar7 = uVar15 + 0x10;
          if (-0x20 < (int)~uVar15) {
            uVar8 = ~uVar15;
          }
          uVar8 = iVar7 + uVar8;
          do {
                    /* try { // try from 010f7344 to 011f734b has its CatchHandler @ 010f739c */
                    /* try { // try from 010f734c to 011f73b7 has its CatchHandler @ 010f7314 */
            lVar11 = lVar16 + (long)*(int *)(lVar16 + 0xe0) * 8;
            if (*(int *)(lVar16 + 0xc0) == 0) {
              lVar11 = *(long *)(lVar11 + 0x60);
              FUN_010f97a4(lVar16,*(undefined4 *)(lVar11 + 0x3c0),*(undefined1 *)(lVar11 + 0x4f0));
            }
            else {
              lVar11 = *(long *)(lVar11 + 0xa0);
              *(long *)(lVar11 + 0x780) = *(long *)(lVar11 + 0x780) + 1;
            }
            iVar7 = iVar7 + -0x10;
          } while (0x1f < iVar7);
          uVar15 = (uVar15 - 0x10) - (uVar8 & 0xfffffff0);
        }
        iVar7 = 0;
        do {
          uVar20 = (int)uVar20 >> 1;
          iVar7 = iVar7 + 1;
        } while (uVar20 != 0);
        if (10 < iVar7) {
          puVar10 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar10 + 5) = 6;
          (*(code *)*puVar10)();
        }
        uVar15 = iVar7 + uVar15 * 0x10;
        lVar11 = lVar16 + (long)*(int *)(lVar16 + 0xe0) * 8;
        if (*(int *)(lVar16 + 0xc0) == 0) {
          lVar11 = *(long *)(lVar11 + 0x60);
                    /* try { // try from 010f741c to 011f7447 has its CatchHandler @ 010f7458 */
          FUN_010f97a4(lVar16,*(undefined4 *)(lVar11 + (long)(int)uVar15 * 4),
                       *(undefined1 *)(lVar11 + (int)uVar15 + 0x400));
        }
        else {
          lVar11 = *(long *)(lVar11 + 0xa0);
          uVar19 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar15 << 3;
          *(long *)(lVar11 + uVar19) = *(long *)(lVar11 + uVar19) + 1;
        }
        FUN_010f97a4(lVar16,uVar5,iVar7);
        uVar15 = 0;
      }
      bVar1 = lVar21 < (int)lVar14;
      lVar21 = lVar21 + 1;
    } while (bVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f741c with catch @ 010f7458
                        */
    if ((0 < (int)uVar15) &&
       (iVar7 = *(int *)(lVar16 + 0xe4) + 1, *(int *)(lVar16 + 0xe4) = iVar7, iVar7 == 0x7fff)) {
      lVar14 = lVar16 + (long)*(int *)(lVar16 + 0xe0) * 8;
      if (*(int *)(lVar16 + 0xc0) == 0) {
        lVar14 = *(long *)(lVar14 + 0x60);
                    /* try { // try from 010f7490 to 011f752b has its CatchHandler @ 010f7490
                       catch() { ... } // from try @ 010f7490 with catch @ 010f7490
                       catch() { ... } // from try @ 010f7538 with catch @ 010f7490 */
        FUN_010f97a4(lVar16,*(undefined4 *)(lVar14 + 0x380),*(undefined1 *)(lVar14 + 0x4e0));
      }
      else {
        lVar14 = *(long *)(lVar14 + 0xa0);
        *(long *)(lVar14 + 0x700) = *(long *)(lVar14 + 0x700) + 1;
      }
      FUN_010f97a4(lVar16,*(undefined4 *)(lVar16 + 0xe4),0xe);
      iVar7 = *(int *)(lVar16 + 0xe8);
      *(undefined4 *)(lVar16 + 0xe4) = 0;
      if ((iVar7 != 0) && (*(int *)(lVar16 + 0xc0) == 0)) {
        pbVar22 = *(byte **)(lVar16 + 0xf0);
        do {
          iVar3 = *(int *)(lVar16 + 0x20);
          iVar6 = iVar3 + 1;
          uVar19 = ((ulong)*pbVar22 & 1) << ((ulong)(0x17 - iVar3) & 0x3f) |
                   *(ulong *)(lVar16 + 0x18);
          if (7 < iVar6) {
            iVar6 = -2 - iVar3;
            if (iVar6 < -0xf) {
              iVar6 = -0x10;
            }
            iVar17 = iVar3 + 9;
            uVar15 = iVar17 + iVar6;
            do {
              puVar12 = *(undefined1 **)(lVar16 + 200);
              *(undefined1 **)(lVar16 + 200) = puVar12 + 1;
              *puVar12 = (char)(uVar19 >> 0x10);
                    /* try { // try from 010f752c to 011f7537 has its CatchHandler @ 010f75b4 */
              lVar14 = *(long *)(lVar16 + 0xd0) + -1;
              *(long *)(lVar16 + 0xd0) = lVar14;
                    /* try { // try from 010f7538 to 011f760b has its CatchHandler @ 010f7490 */
              if (lVar14 == 0) {
                puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                iVar6 = (*(code *)puVar10[3])();
                if (iVar6 == 0) {
                  puVar13 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                  *(undefined4 *)(puVar13 + 5) = 0x19;
                  (*(code *)*puVar13)();
                }
                uVar23 = *puVar10;
                *(undefined8 *)(lVar16 + 0xd0) = puVar10[1];
                *(undefined8 *)(lVar16 + 200) = uVar23;
              }
              if ((((uint)uVar19 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                puVar12 = *(undefined1 **)(lVar16 + 200);
                *(undefined1 **)(lVar16 + 200) = puVar12 + 1;
                *puVar12 = 0;
                lVar14 = *(long *)(lVar16 + 0xd0) + -1;
                *(long *)(lVar16 + 0xd0) = lVar14;
                if (lVar14 == 0) {
                  puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                  iVar6 = (*(code *)puVar10[3])();
                  if (iVar6 == 0) {
                    puVar13 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                    /* catch() { ... } // from try @ 010f752c with catch @ 010f75b4 */
                    *(undefined4 *)(puVar13 + 5) = 0x19;
                    (*(code *)*puVar13)();
                  }
                  uVar23 = *puVar10;
                  *(undefined8 *)(lVar16 + 0xd0) = puVar10[1];
                  *(undefined8 *)(lVar16 + 200) = uVar23;
                }
              }
              iVar17 = iVar17 + -8;
              uVar19 = uVar19 << 8;
            } while (0xf < iVar17);
            iVar6 = (iVar3 + -7) - (uVar15 & 0xfffffff8);
          }
          *(ulong *)(lVar16 + 0x18) = uVar19;
          *(int *)(lVar16 + 0x20) = iVar6;
          do {
            iVar7 = iVar7 + -1;
            if (iVar7 == 0) goto LAB_010f760c;
            pbVar22 = pbVar22 + 1;
          } while (*(int *)(lVar16 + 0xc0) != 0);
        } while( true );
      }
LAB_010f760c:
                    /* catch() { ... } // from try @ 010f7644 with catch @ 010f760c */
      *(undefined4 *)(lVar16 + 0xe8) = 0;
    }
  }
  uVar23 = *(undefined8 *)(lVar16 + 200);
  puVar10 = (undefined8 *)param_1[5];
  puVar10[1] = *(undefined8 *)(lVar16 + 0xd0);
  *puVar10 = uVar23;
  iVar7 = *(int *)((long)param_1 + 0x13c);
  if (iVar7 != 0) {
    iVar6 = *(int *)(lVar16 + 0x38);
    if (*(int *)(lVar16 + 0x38) == 0) {
                    /* try { // try from 010f763c to 011f7643 has its CatchHandler @ 010f768c */
      *(int *)(lVar16 + 0x38) = iVar7;
      *(uint *)(lVar16 + 0x3c) = *(int *)(lVar16 + 0x3c) + 1U & 7;
      iVar6 = iVar7;
    }
                    /* try { // try from 010f7644 to 011f76a7 has its CatchHandler @ 010f760c */
    *(int *)(lVar16 + 0x38) = iVar6 + -1;
  }
  return 1;
}

