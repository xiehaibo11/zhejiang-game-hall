
/* WARNING: Removing unreachable block (ram,0x010f7bb4) */

undefined8 FUN_010f7894(long param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  uint *local_180;
  long *local_170;
  int aiStack_160 [64];
  
  lVar16 = *(long *)(param_1 + 0x230);
  uVar26 = **(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(lVar16 + 0xd0) = (*(undefined8 **)(param_1 + 0x28))[1];
  *(undefined8 *)(lVar16 + 200) = uVar26;
  if ((*(int *)(param_1 + 0x13c) != 0) && (*(int *)(lVar16 + 0x38) == 0)) {
    FUN_010f9ae8(lVar16,*(undefined4 *)(lVar16 + 0x3c));
  }
  iVar5 = *(int *)(param_1 + 0x1d0);
  iVar8 = *(int *)(param_1 + 0x1cc);
  if (iVar5 < iVar8) {
    uVar17 = 0;
LAB_010f7918:
    if (uVar17 == 0) goto LAB_010f7bc0;
  }
  else {
                    /* try { // try from 010f7b44 to 011f7c17 has its CatchHandler @ 010f7ab8 */
    uVar17 = *(uint *)(param_1 + 0x1d8);
    lVar14 = *(long *)(param_1 + 0x1e0);
    lVar15 = *param_2;
    lVar10 = (long)iVar8;
    iVar7 = 0;
    do {
      sVar4 = *(short *)(lVar15 + (long)*(int *)(lVar14 + lVar10 * 4) * 2);
      iVar6 = -(int)sVar4;
      if (-1 < sVar4) {
        iVar6 = (int)sVar4;
      }
      iVar6 = iVar6 >> (uVar17 & 0x1f);
      iVar3 = (int)lVar10;
      if (iVar6 != 1) {
        iVar3 = iVar7;
      }
      aiStack_160[lVar10] = iVar6;
      bVar1 = lVar10 < iVar5;
      lVar10 = lVar10 + 1;
      iVar7 = iVar3;
    } while (bVar1);
    plVar2 = (long *)(lVar16 + 0xf0);
    if (iVar5 < iVar8) {
      uVar17 = 0;
      goto LAB_010f7918;
    }
    uVar17 = 0;
    uVar22 = 0;
    pbVar19 = (byte *)(*(long *)(lVar16 + 0xf0) + (ulong)*(uint *)(lVar16 + 0xe8));
    lVar10 = (long)iVar8;
    do {
      iVar8 = aiStack_160[lVar10];
                    /* try { // try from 010f7c50 to 011f7c63 has its CatchHandler @ 010f7d50 */
      if (iVar8 == 0) {
        uVar22 = uVar22 + 1;
      }
      else {
        if (iVar3 < lVar10) {
          uVar18 = (ulong)uVar17;
        }
        else {
          uVar18 = (ulong)uVar17;
          uVar23 = uVar22;
          if (0xf < (int)uVar22) {
            do {
              iVar7 = *(int *)(lVar16 + 0xe4);
              if (iVar7 != 0) {
                iVar6 = -1;
                uVar18 = 0xfffffff0;
                do {
                  iVar7 = iVar7 >> 1;
                  iVar6 = iVar6 + 1;
                  uVar22 = (int)uVar18 + 0x10;
                  uVar18 = (ulong)uVar22;
                } while (iVar7 != 0);
                if (0xe < iVar6) {
                  puVar9 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                  *(undefined4 *)(puVar9 + 5) = 0x29;
                  (*(code *)*puVar9)();
                }
                lVar13 = lVar16 + (long)*(int *)(lVar16 + 0xe0) * 8;
                if (*(int *)(lVar16 + 0xc0) == 0) {
                  lVar13 = *(long *)(lVar13 + 0x60);
                  FUN_010f97a4(lVar16,*(undefined4 *)(lVar13 + (long)(int)uVar22 * 4),
                               *(undefined1 *)(lVar13 + (int)uVar22 + 0x400));
                }
                else {
                  lVar13 = *(long *)(lVar13 + 0xa0);
                  uVar18 = -(ulong)(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3;
                  *(long *)(lVar13 + uVar18) = *(long *)(lVar13 + uVar18) + 1;
                }
                if (iVar6 != 0) {
                  FUN_010f97a4(lVar16,*(undefined4 *)(lVar16 + 0xe4),iVar6);
                }
                    /* try { // try from 010f7cf8 to 011f7d03 has its CatchHandler @ 010f7d4c */
                iVar7 = *(int *)(lVar16 + 0xe8);
                *(undefined4 *)(lVar16 + 0xe4) = 0;
                    /* try { // try from 010f7d04 to 011f7d63 has its CatchHandler @ 010f7c18 */
                if ((iVar7 != 0) && (*(int *)(lVar16 + 0xc0) == 0)) {
                  pbVar20 = (byte *)*plVar2;
                  do {
                    iVar25 = *(int *)(lVar16 + 0x20);
                    iVar6 = iVar25 + 1;
                    uVar18 = ((ulong)*pbVar20 & 1) << ((ulong)(0x17 - iVar25) & 0x3f) |
                             *(ulong *)(lVar16 + 0x18);
                    if (7 < iVar6) {
                      iVar6 = -2 - iVar25;
                    /* try { // try from 010f7d8c to 011f7e7f has its CatchHandler @ 010f7ea4 */
                      if (iVar6 < -0xf) {
                        iVar6 = -0x10;
                      }
                      iVar24 = iVar25 + 9;
                      uVar22 = iVar24 + iVar6;
                      do {
                        puVar11 = *(undefined1 **)(lVar16 + 200);
                        *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                        *puVar11 = (char)(uVar18 >> 0x10);
                        lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                        *(long *)(lVar16 + 0xd0) = lVar13;
                        if (lVar13 == 0) {
                          puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                          iVar6 = (*(code *)puVar9[3])();
                          if (iVar6 == 0) {
                            puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                            *(undefined4 *)(puVar12 + 5) = 0x19;
                            (*(code *)*puVar12)();
                          }
                          uVar26 = *puVar9;
                          *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                          *(undefined8 *)(lVar16 + 200) = uVar26;
                        }
                        if ((((uint)uVar18 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                          puVar11 = *(undefined1 **)(lVar16 + 200);
                          *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                          *puVar11 = 0;
                          lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                          *(long *)(lVar16 + 0xd0) = lVar13;
                          if (lVar13 == 0) {
                            puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                            iVar6 = (*(code *)puVar9[3])();
                            if (iVar6 == 0) {
                              puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                              *(undefined4 *)(puVar12 + 5) = 0x19;
                              (*(code *)*puVar12)();
                            }
                            uVar26 = *puVar9;
                            *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                            *(undefined8 *)(lVar16 + 200) = uVar26;
                          }
                        }
                        iVar24 = iVar24 + -8;
                        uVar18 = uVar18 << 8;
                      } while (0xf < iVar24);
                      iVar6 = (iVar25 + -7) - (uVar22 & 0xfffffff8);
                    }
                    *(ulong *)(lVar16 + 0x18) = uVar18;
                    *(int *)(lVar16 + 0x20) = iVar6;
                    do {
                      iVar7 = iVar7 + -1;
                      if (iVar7 == 0) goto LAB_010f7e68;
                      pbVar20 = pbVar20 + 1;
                    } while (*(int *)(lVar16 + 0xc0) != 0);
                  } while( true );
                }
LAB_010f7e68:
                *(undefined4 *)(lVar16 + 0xe8) = 0;
              }
              lVar13 = lVar16 + (long)*(int *)(lVar16 + 0xe0) * 8;
              if (*(int *)(lVar16 + 0xc0) == 0) {
                lVar13 = *(long *)(lVar13 + 0x60);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f7d8c with catch @ 010f7ea4
                        */
                FUN_010f97a4(lVar16,*(undefined4 *)(lVar13 + 0x3c0),*(undefined1 *)(lVar13 + 0x4f0))
                ;
                if ((uVar17 != 0) && (iVar7 = 0, *(int *)(lVar16 + 0xc0) == 0)) {
                  while( true ) {
                    if (iVar7 == 0) {
                      iVar6 = *(int *)(lVar16 + 0x20);
                      iVar7 = iVar6 + 1;
                      uVar18 = ((ulong)*pbVar19 & 1) << ((ulong)(0x17 - iVar6) & 0x3f) |
                               *(ulong *)(lVar16 + 0x18);
                      if (7 < iVar7) {
                        iVar7 = -2 - iVar6;
                        if (iVar7 < -0xf) {
                          iVar7 = -0x10;
                        }
                        iVar25 = iVar6 + 9;
                        uVar22 = iVar25 + iVar7;
                        do {
                          puVar11 = *(undefined1 **)(lVar16 + 200);
                          *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                          *puVar11 = (char)(uVar18 >> 0x10);
                          lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                          *(long *)(lVar16 + 0xd0) = lVar13;
                          if (lVar13 == 0) {
                            puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                            iVar7 = (*(code *)puVar9[3])();
                            if (iVar7 == 0) {
                              puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                              *(undefined4 *)(puVar12 + 5) = 0x19;
                              (*(code *)*puVar12)();
                            }
                            uVar26 = *puVar9;
                            *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                            *(undefined8 *)(lVar16 + 200) = uVar26;
                          }
                          if ((((uint)uVar18 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                            puVar11 = *(undefined1 **)(lVar16 + 200);
                            *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                            *puVar11 = 0;
                            lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                            *(long *)(lVar16 + 0xd0) = lVar13;
                            if (lVar13 == 0) {
                              puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                              iVar7 = (*(code *)puVar9[3])();
                              if (iVar7 == 0) {
                                puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                                *(undefined4 *)(puVar12 + 5) = 0x19;
                                (*(code *)*puVar12)();
                              }
                              uVar26 = *puVar9;
                              *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                              *(undefined8 *)(lVar16 + 200) = uVar26;
                            }
                          }
                          iVar25 = iVar25 + -8;
                          uVar18 = uVar18 << 8;
                        } while (0xf < iVar25);
                        iVar7 = (iVar6 + -7) - (uVar22 & 0xfffffff8);
                      }
                      *(ulong *)(lVar16 + 0x18) = uVar18;
                      *(int *)(lVar16 + 0x20) = iVar7;
                    }
                    if (uVar17 == 1) break;
                    uVar17 = uVar17 - 1;
                    iVar7 = *(int *)(lVar16 + 0xc0);
                    pbVar19 = pbVar19 + 1;
                  }
                }
              }
              else {
                lVar13 = *(long *)(lVar13 + 0xa0);
                *(long *)(lVar13 + 0x780) = *(long *)(lVar13 + 0x780) + 1;
              }
              uVar22 = uVar23 - 0x10;
              uVar17 = 0;
              uVar18 = 0;
              pbVar19 = (byte *)*plVar2;
              bVar1 = 0x1f < (int)uVar23;
              uVar23 = uVar22;
            } while (bVar1);
          }
        }
        if (iVar8 < 2) {
          iVar8 = *(int *)(lVar16 + 0xe4);
          if (iVar8 != 0) {
            iVar7 = -1;
            uVar21 = 0xfffffff0;
            do {
              iVar8 = iVar8 >> 1;
              iVar7 = iVar7 + 1;
              uVar17 = (int)uVar21 + 0x10;
              uVar21 = (ulong)uVar17;
            } while (iVar8 != 0);
            if (0xe < iVar7) {
              puVar9 = (undefined8 *)**(long **)(lVar16 + 0xd8);
              *(undefined4 *)(puVar9 + 5) = 0x29;
              (*(code *)*puVar9)();
            }
            lVar13 = lVar16 + (long)*(int *)(lVar16 + 0xe0) * 8;
            if (*(int *)(lVar16 + 0xc0) == 0) {
              lVar13 = *(long *)(lVar13 + 0x60);
              FUN_010f97a4(lVar16,*(undefined4 *)(lVar13 + (long)(int)uVar17 * 4),
                           *(undefined1 *)(lVar13 + (int)uVar17 + 0x400));
            }
            else {
              lVar13 = *(long *)(lVar13 + 0xa0);
              uVar21 = -(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3;
              *(long *)(lVar13 + uVar21) = *(long *)(lVar13 + uVar21) + 1;
            }
            if (iVar7 != 0) {
              FUN_010f97a4(lVar16,*(undefined4 *)(lVar16 + 0xe4),iVar7);
            }
            iVar8 = *(int *)(lVar16 + 0xe8);
            *(undefined4 *)(lVar16 + 0xe4) = 0;
            if ((iVar8 != 0) && (*(int *)(lVar16 + 0xc0) == 0)) {
              pbVar20 = (byte *)*plVar2;
              do {
                iVar6 = *(int *)(lVar16 + 0x20);
                iVar7 = iVar6 + 1;
                uVar21 = ((ulong)*pbVar20 & 1) << ((ulong)(0x17 - iVar6) & 0x3f) |
                         *(ulong *)(lVar16 + 0x18);
                if (7 < iVar7) {
                  iVar7 = -2 - iVar6;
                  if (iVar7 < -0xf) {
                    iVar7 = -0x10;
                  }
                  iVar25 = iVar6 + 9;
                  uVar17 = iVar25 + iVar7;
                  do {
                    puVar11 = *(undefined1 **)(lVar16 + 200);
                    *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                    *puVar11 = (char)(uVar21 >> 0x10);
                    lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                    *(long *)(lVar16 + 0xd0) = lVar13;
                    if (lVar13 == 0) {
                      puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                      iVar7 = (*(code *)puVar9[3])();
                      if (iVar7 == 0) {
                        puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                        *(undefined4 *)(puVar12 + 5) = 0x19;
                        (*(code *)*puVar12)();
                      }
                      uVar26 = *puVar9;
                      *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                      *(undefined8 *)(lVar16 + 200) = uVar26;
                    }
                    if ((((uint)uVar21 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                      puVar11 = *(undefined1 **)(lVar16 + 200);
                      *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                      *puVar11 = 0;
                      lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                      *(long *)(lVar16 + 0xd0) = lVar13;
                      if (lVar13 == 0) {
                        puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                        iVar7 = (*(code *)puVar9[3])();
                        if (iVar7 == 0) {
                          puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                          *(undefined4 *)(puVar12 + 5) = 0x19;
                          (*(code *)*puVar12)();
                        }
                        uVar26 = *puVar9;
                        *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                        *(undefined8 *)(lVar16 + 200) = uVar26;
                      }
                    }
                    iVar25 = iVar25 + -8;
                    uVar21 = uVar21 << 8;
                  } while (0xf < iVar25);
                  iVar7 = (iVar6 + -7) - (uVar17 & 0xfffffff8);
                }
                *(ulong *)(lVar16 + 0x18) = uVar21;
                *(int *)(lVar16 + 0x20) = iVar7;
                do {
                  iVar8 = iVar8 + -1;
                  if (iVar8 == 0) goto LAB_010f8284;
                  pbVar20 = pbVar20 + 1;
                } while (*(int *)(lVar16 + 0xc0) != 0);
              } while( true );
            }
LAB_010f8284:
            *(undefined4 *)(lVar16 + 0xe8) = 0;
          }
          uVar17 = uVar22 << 4 | 1;
          lVar13 = lVar16 + (long)*(int *)(lVar16 + 0xe0) * 8;
          if (*(int *)(lVar16 + 0xc0) == 0) {
            lVar13 = *(long *)(lVar13 + 0x60);
            FUN_010f97a4(lVar16,*(undefined4 *)(lVar13 + (long)(int)uVar17 * 4),
                         *(undefined1 *)(lVar13 + (int)uVar17 + 0x400));
            if (*(int *)(lVar16 + 0xc0) == 0) {
              iVar7 = *(int *)(lVar16 + 0x20);
              iVar8 = iVar7 + 1;
              uVar21 = (ulong)(*(ushort *)(lVar15 + (long)*(int *)(lVar14 + lVar10 * 4) * 2) >> 0xf
                              ^ 1) << ((ulong)(0x17 - iVar7) & 0x3f) | *(ulong *)(lVar16 + 0x18);
              if (iVar8 < 8) {
                iVar6 = 0;
              }
              else {
                iVar8 = -2 - iVar7;
                if (iVar8 < -0xf) {
                  iVar8 = -0x10;
                }
                iVar6 = iVar7 + 9;
                uVar17 = iVar6 + iVar8;
                do {
                  puVar11 = *(undefined1 **)(lVar16 + 200);
                  *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                  *puVar11 = (char)(uVar21 >> 0x10);
                  lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                  *(long *)(lVar16 + 0xd0) = lVar13;
                  if (lVar13 == 0) {
                    puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                    iVar8 = (*(code *)puVar9[3])();
                    if (iVar8 == 0) {
                      puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                      *(undefined4 *)(puVar12 + 5) = 0x19;
                      (*(code *)*puVar12)();
                    }
                    uVar26 = *puVar9;
                    *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                    *(undefined8 *)(lVar16 + 200) = uVar26;
                  }
                  if ((((uint)uVar21 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                    puVar11 = *(undefined1 **)(lVar16 + 200);
                    *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                    *puVar11 = 0;
                    lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                    *(long *)(lVar16 + 0xd0) = lVar13;
                    if (lVar13 == 0) {
                      puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                      iVar8 = (*(code *)puVar9[3])();
                      if (iVar8 == 0) {
                        puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                        *(undefined4 *)(puVar12 + 5) = 0x19;
                        (*(code *)*puVar12)();
                      }
                      uVar26 = *puVar9;
                      *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                      *(undefined8 *)(lVar16 + 200) = uVar26;
                    }
                  }
                  iVar6 = iVar6 + -8;
                  uVar21 = uVar21 << 8;
                } while (0xf < iVar6);
                iVar6 = *(int *)(lVar16 + 0xc0);
                iVar8 = (iVar7 + -7) - (uVar17 & 0xfffffff8);
              }
              *(ulong *)(lVar16 + 0x18) = uVar21;
              *(int *)(lVar16 + 0x20) = iVar8;
              if (((int)uVar18 != 0) && (iVar6 == 0)) {
                do {
                  iVar7 = *(int *)(lVar16 + 0x20);
                  iVar8 = iVar7 + 1;
                  uVar21 = ((ulong)*pbVar19 & 1) << ((ulong)(0x17 - iVar7) & 0x3f) |
                           *(ulong *)(lVar16 + 0x18);
                  if (7 < iVar8) {
                    iVar8 = -2 - iVar7;
                    if (iVar8 < -0xf) {
                      iVar8 = -0x10;
                    }
                    iVar6 = iVar7 + 9;
                    uVar17 = iVar6 + iVar8;
                    do {
                      puVar11 = *(undefined1 **)(lVar16 + 200);
                      *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                      *puVar11 = (char)(uVar21 >> 0x10);
                      lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                    /* catch() { ... } // from try @ 010f8524 with catch @ 010f84f8 */
                      *(long *)(lVar16 + 0xd0) = lVar13;
                      if (lVar13 == 0) {
                        puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                        iVar8 = (*(code *)puVar9[3])();
                        if (iVar8 == 0) {
                    /* try { // try from 010f851c to 011f8523 has its CatchHandler @ 010f8560 */
                          puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                    /* try { // try from 010f8524 to 011f857b has its CatchHandler @ 010f84f8 */
                          *(undefined4 *)(puVar12 + 5) = 0x19;
                          (*(code *)*puVar12)();
                        }
                        uVar26 = *puVar9;
                        *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                        *(undefined8 *)(lVar16 + 200) = uVar26;
                      }
                      if ((((uint)uVar21 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                        puVar11 = *(undefined1 **)(lVar16 + 200);
                        *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
                        *puVar11 = 0;
                        lVar13 = *(long *)(lVar16 + 0xd0) + -1;
                        *(long *)(lVar16 + 0xd0) = lVar13;
                        if (lVar13 == 0) {
                    /* catch() { ... } // from try @ 010f851c with catch @ 010f8560 */
                          puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                          iVar8 = (*(code *)puVar9[3])();
                          if (iVar8 == 0) {
                            puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                            *(undefined4 *)(puVar12 + 5) = 0x19;
                            (*(code *)*puVar12)();
                          }
                          uVar26 = *puVar9;
                          *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                          *(undefined8 *)(lVar16 + 200) = uVar26;
                        }
                      }
                      iVar6 = iVar6 + -8;
                      uVar21 = uVar21 << 8;
                    } while (0xf < iVar6);
                    iVar8 = (iVar7 + -7) - (uVar17 & 0xfffffff8);
                  }
                  *(ulong *)(lVar16 + 0x18) = uVar21;
                  *(int *)(lVar16 + 0x20) = iVar8;
                  uVar17 = (uint)uVar18;
                  do {
                    uVar17 = uVar17 - 1;
                    if (uVar17 == 0) goto LAB_010f85a8;
                    uVar18 = (ulong)uVar17;
                    pbVar19 = pbVar19 + 1;
                  } while (*(int *)(lVar16 + 0xc0) != 0);
                } while( true );
              }
            }
          }
          else {
            lVar13 = *(long *)(lVar13 + 0xa0);
            uVar18 = -(ulong)((uVar22 & 0xfffffff) >> 0x1b) & 0xfffffff800000000 |
                     (ulong)uVar17 << 3;
            *(long *)(lVar13 + uVar18) = *(long *)(lVar13 + uVar18) + 1;
          }
LAB_010f85a8:
                    /* catch() { ... } // from try @ 010f85dc with catch @ 010f85ac */
          uVar22 = 0;
          uVar17 = 0;
          pbVar19 = (byte *)*plVar2;
        }
        else {
          uVar17 = (int)uVar18 + 1;
          pbVar19[uVar18] = (byte)iVar8 & 1;
        }
      }
      bVar1 = lVar10 < iVar5;
      lVar10 = lVar10 + 1;
    } while (bVar1);
                    /* try { // try from 010f85d4 to 011f85db has its CatchHandler @ 010f8620 */
    if ((int)uVar22 < 1) goto LAB_010f7918;
  }
  local_170 = (long *)(lVar16 + 0xf0);
  local_180 = (uint *)(lVar16 + 0xe8);
  iVar5 = *(int *)(lVar16 + 0xe4) + 1;
  *(int *)(lVar16 + 0xe4) = iVar5;
  uVar22 = *local_180;
  *local_180 = uVar22 + uVar17;
  if ((0x3a9 < uVar22 + uVar17 || iVar5 == 0x7fff) && (iVar5 != 0)) {
    iVar8 = -1;
    uVar18 = 0xfffffff0;
    do {
      iVar5 = iVar5 >> 1;
      iVar8 = iVar8 + 1;
      uVar17 = (int)uVar18 + 0x10;
      uVar18 = (ulong)uVar17;
    } while (iVar5 != 0);
    if (0xe < iVar8) {
      puVar9 = (undefined8 *)**(long **)(lVar16 + 0xd8);
      *(undefined4 *)(puVar9 + 5) = 0x29;
      (*(code *)*puVar9)();
    }
    lVar10 = lVar16 + (long)*(int *)(lVar16 + 0xe0) * 8;
    if (*(int *)(lVar16 + 0xc0) == 0) {
      lVar10 = *(long *)(lVar10 + 0x60);
      FUN_010f97a4(lVar16,*(undefined4 *)(lVar10 + (long)(int)uVar17 * 4),
                   *(undefined1 *)(lVar10 + (int)uVar17 + 0x400));
    }
    else {
      lVar10 = *(long *)(lVar10 + 0xa0);
      uVar18 = -(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3;
      *(long *)(lVar10 + uVar18) = *(long *)(lVar10 + uVar18) + 1;
    }
    if (iVar8 != 0) {
      FUN_010f97a4(lVar16,*(undefined4 *)(lVar16 + 0xe4),iVar8);
    }
    *(undefined4 *)(lVar16 + 0xe4) = 0;
    uVar17 = *local_180;
    if ((uVar17 != 0) && (*(int *)(lVar16 + 0xc0) == 0)) {
      pbVar19 = (byte *)*local_170;
      do {
        iVar8 = *(int *)(lVar16 + 0x20);
        iVar5 = iVar8 + 1;
        uVar18 = ((ulong)*pbVar19 & 1) << ((ulong)(0x17 - iVar8) & 0x3f) | *(ulong *)(lVar16 + 0x18)
        ;
        if (7 < iVar5) {
                    /* try { // try from 010f7a64 to 011f7a6b has its CatchHandler @ 010f7a9c */
          iVar5 = -2 - iVar8;
                    /* try { // try from 010f7a6c to 011f7ab7 has its CatchHandler @ 010f7a30 */
          if (iVar5 < -0xf) {
            iVar5 = -0x10;
          }
          iVar7 = iVar8 + 9;
          uVar22 = iVar7 + iVar5;
          do {
            puVar11 = *(undefined1 **)(lVar16 + 200);
            *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
            *puVar11 = (char)(uVar18 >> 0x10);
            lVar10 = *(long *)(lVar16 + 0xd0) + -1;
                    /* catch() { ... } // from try @ 010f7a64 with catch @ 010f7a9c */
            *(long *)(lVar16 + 0xd0) = lVar10;
            if (lVar10 == 0) {
              puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
              iVar5 = (*(code *)puVar9[3])();
              if (iVar5 == 0) {
                    /* try { // try from 010f7ab8 to 011f7b37 has its CatchHandler @ 010f7ab8
                       catch() { ... } // from try @ 010f7ab8 with catch @ 010f7ab8
                       catch() { ... } // from try @ 010f7b44 with catch @ 010f7ab8 */
                puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                *(undefined4 *)(puVar12 + 5) = 0x19;
                (*(code *)*puVar12)();
              }
              uVar26 = *puVar9;
              *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
              *(undefined8 *)(lVar16 + 200) = uVar26;
            }
            if ((((uint)uVar18 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
              puVar11 = *(undefined1 **)(lVar16 + 200);
              *(undefined1 **)(lVar16 + 200) = puVar11 + 1;
              *puVar11 = 0;
              lVar10 = *(long *)(lVar16 + 0xd0) + -1;
              *(long *)(lVar16 + 0xd0) = lVar10;
              if (lVar10 == 0) {
                puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xd8) + 0x28);
                iVar5 = (*(code *)puVar9[3])();
                if (iVar5 == 0) {
                  puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd8);
                  *(undefined4 *)(puVar12 + 5) = 0x19;
                  (*(code *)*puVar12)();
                }
                uVar26 = *puVar9;
                *(undefined8 *)(lVar16 + 0xd0) = puVar9[1];
                *(undefined8 *)(lVar16 + 200) = uVar26;
              }
            }
            iVar7 = iVar7 + -8;
                    /* try { // try from 010f7b38 to 011f7b43 has its CatchHandler @ 010f7bc0 */
            uVar18 = uVar18 << 8;
          } while (0xf < iVar7);
          iVar5 = (iVar8 + -7) - (uVar22 & 0xfffffff8);
        }
        *(ulong *)(lVar16 + 0x18) = uVar18;
        *(int *)(lVar16 + 0x20) = iVar5;
        do {
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_010f7bb8;
          pbVar19 = pbVar19 + 1;
        } while (*(int *)(lVar16 + 0xc0) != 0);
      } while( true );
    }
LAB_010f7bb8:
    *local_180 = 0;
  }
LAB_010f7bc0:
                    /* catch() { ... } // from try @ 010f7b38 with catch @ 010f7bc0 */
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  uVar26 = *(undefined8 *)(lVar16 + 200);
  puVar9[1] = *(undefined8 *)(lVar16 + 0xd0);
  *puVar9 = uVar26;
  iVar5 = *(int *)(param_1 + 0x13c);
  if (iVar5 != 0) {
    iVar8 = *(int *)(lVar16 + 0x38);
    if (*(int *)(lVar16 + 0x38) == 0) {
      *(int *)(lVar16 + 0x38) = iVar5;
      *(uint *)(lVar16 + 0x3c) = *(int *)(lVar16 + 0x3c) + 1U & 7;
      iVar8 = iVar5;
    }
    *(int *)(lVar16 + 0x38) = iVar8 + -1;
  }
                    /* try { // try from 010f7c18 to 011f7c4f has its CatchHandler @ 010f7c18
                       catch() { ... } // from try @ 010f7c18 with catch @ 010f7c18
                       catch() { ... } // from try @ 010f7d04 with catch @ 010f7c18 */
  return 1;
}

