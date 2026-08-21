
void FUN_00e0dbc4(long param_1,long *param_2)

{
  bool bVar1;
  short *psVar2;
  short *psVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  undefined2 *puVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ushort *puVar32;
  int *piVar33;
  ushort *puVar34;
  ushort auStack_20 [4];
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  short local_4;
  short local_2;
  
  lVar14 = *param_2;
  uVar31 = *(uint *)(param_2[2] + 0x14);
  lVar19 = *(long *)param_2[2];
  *(undefined8 *)(param_1 + 0x14a4) = 0x23d00000000;
  if ((int)uVar31 < 1) {
    uVar23 = 0;
    uVar15 = 0xffffffff;
  }
  else {
    uVar20 = 0;
    puVar24 = (undefined2 *)(lVar14 + 2);
    uVar15 = 0xffffffff;
    do {
      if (puVar24[-1] == 0) {
        *puVar24 = 0;
      }
      else {
        lVar11 = (long)*(int *)(param_1 + 0x14a4) + 1;
        *(int *)(param_1 + 0x14a4) = (int)lVar11;
        *(int *)(param_1 + lVar11 * 4 + 0xbb0) = (int)uVar20;
        *(undefined1 *)(param_1 + 0x14ac + uVar20) = 0;
        uVar15 = uVar20 & 0xffffffff;
      }
      uVar25 = (uint)uVar15;
      uVar20 = uVar20 + 1;
      puVar24 = puVar24 + 2;
    } while (uVar31 != uVar20);
    uVar23 = *(uint *)(param_1 + 0x14a4);
    if (1 < (int)uVar23) goto LAB_00e0dd1c;
  }
  if (lVar19 == 0) {
    do {
      uVar25 = (uint)uVar15;
      uVar30 = 0;
      if ((int)uVar25 < 2) {
        uVar30 = uVar25 + 1;
      }
      *(int *)(param_1 + 0x14a4) = (int)((long)(int)uVar23 + 1);
      *(uint *)(param_1 + ((long)(int)uVar23 + 1) * 4 + 0xbb0) = uVar30;
      *(undefined2 *)(lVar14 + (-(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar30 << 2))
           = 1;
      *(undefined1 *)(param_1 + (int)uVar30 + 0x14ac) = 0;
      uVar23 = *(uint *)(param_1 + 0x14a4);
      if ((int)uVar25 < 2) {
        uVar25 = uVar25 + 1;
      }
      uVar15 = (ulong)uVar25;
      *(long *)(param_1 + 0x1708) = *(long *)(param_1 + 0x1708) + -1;
    } while ((int)uVar23 < 2);
  }
  else {
    do {
      uVar25 = (uint)uVar15;
      uVar30 = 0;
      if ((int)uVar25 < 2) {
        uVar30 = uVar25 + 1;
      }
      *(int *)(param_1 + 0x14a4) = (int)((long)(int)uVar23 + 1);
      uVar20 = -(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar30 << 2;
      *(uint *)(param_1 + ((long)(int)uVar23 + 1) * 4 + 0xbb0) = uVar30;
      *(undefined2 *)(lVar14 + uVar20) = 1;
      *(undefined1 *)(param_1 + (int)uVar30 + 0x14ac) = 0;
      *(long *)(param_1 + 0x1708) = *(long *)(param_1 + 0x1708) + -1;
      uVar23 = *(uint *)(param_1 + 0x14a4);
      if ((int)uVar25 < 2) {
        uVar25 = uVar25 + 1;
      }
      uVar15 = (ulong)uVar25;
      *(ulong *)(param_1 + 0x1710) =
           *(long *)(param_1 + 0x1710) - (ulong)*(ushort *)(lVar19 + uVar20 + 2);
    } while ((int)uVar23 < 2);
  }
LAB_00e0dd1c:
  uVar30 = uVar23;
  if ((int)uVar23 < 0) {
    uVar30 = uVar23 + 1;
  }
  uVar15 = (long)((ulong)uVar30 << 0x20) >> 0x21;
  *(uint *)(param_2 + 1) = uVar25;
  do {
    iVar28 = *(int *)(param_1 + uVar15 * 4 + 0xbb0);
    uVar17 = (uint)uVar15;
    uVar30 = uVar17 * 2;
    if ((int)uVar30 <= (int)uVar23) {
      uVar20 = uVar15 & 0xffffffff;
      do {
        uVar10 = uVar30;
        if ((int)uVar30 < (int)uVar23) {
          lVar19 = (long)*(int *)(param_1 + 0xbb0 + (long)(int)(uVar30 | 1) * 4);
          lVar11 = (long)*(int *)(param_1 + 0xbb0 + (long)(int)uVar30 * 4);
          uVar5 = *(ushort *)(lVar14 + lVar19 * 4);
          uVar6 = *(ushort *)(lVar14 + lVar11 * 4);
          if ((uVar5 < uVar6) ||
             ((uVar5 == uVar6 &&
              (*(byte *)(param_1 + 0x14ac + lVar19) <= *(byte *)(param_1 + 0x14ac + lVar11))))) {
            uVar10 = uVar30 | 1;
          }
        }
        uVar23 = *(uint *)(param_1 + (long)(int)uVar10 * 4 + 0xbb0);
        uVar5 = *(ushort *)(lVar14 + (long)iVar28 * 4);
        uVar6 = *(ushort *)
                 (lVar14 + (-(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar23 << 2));
        uVar17 = (uint)uVar20;
        if ((uVar5 < uVar6) ||
           ((uVar5 == uVar6 &&
            (*(byte *)(param_1 + iVar28 + 0x14ac) <= *(byte *)(param_1 + (int)uVar23 + 0x14ac)))))
        break;
        *(uint *)(param_1 + (long)(int)uVar17 * 4 + 0xbb0) = uVar23;
        uVar23 = *(uint *)(param_1 + 0x14a4);
        uVar30 = uVar10 * 2;
        uVar20 = (ulong)uVar10;
        uVar17 = uVar10;
      } while ((int)uVar30 <= (int)uVar23);
    }
    *(int *)(param_1 + (long)(int)uVar17 * 4 + 0xbb0) = iVar28;
    if ((long)uVar15 < 2) {
      iVar28 = *(int *)(param_1 + 0x14a4);
      lVar19 = (long)(int)uVar31;
      do {
        iVar12 = iVar28 + -1;
        iVar29 = *(int *)(param_1 + 0xbb4);
        *(int *)(param_1 + 0x14a4) = iVar12;
        iVar26 = *(int *)(param_1 + (long)iVar28 * 4 + 0xbb0);
        *(int *)(param_1 + 0xbb4) = iVar26;
        if (iVar28 < 3) {
          uVar23 = 1;
        }
        else {
          uVar31 = 2;
          uVar23 = 1;
          do {
            uVar30 = uVar31;
            if ((int)uVar31 < iVar12) {
              lVar27 = (long)*(int *)(param_1 + 0xbb0 + (long)(int)(uVar31 | 1) * 4);
              lVar11 = (long)*(int *)(param_1 + 0xbb0 + (long)(int)uVar31 * 4);
              uVar5 = *(ushort *)(lVar14 + lVar27 * 4);
              uVar6 = *(ushort *)(lVar14 + lVar11 * 4);
              if ((uVar5 < uVar6) ||
                 ((uVar5 == uVar6 &&
                  (*(byte *)(param_1 + 0x14ac + lVar27) <= *(byte *)(param_1 + 0x14ac + lVar11)))))
              {
                uVar30 = uVar31 | 1;
              }
            }
            uVar31 = *(uint *)(param_1 + (long)(int)uVar30 * 4 + 0xbb0);
            uVar5 = *(ushort *)(lVar14 + (long)iVar26 * 4);
            uVar6 = *(ushort *)
                     (lVar14 + (-(ulong)(uVar31 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar31 << 2))
            ;
            if ((uVar5 < uVar6) ||
               ((uVar5 == uVar6 &&
                (*(byte *)(param_1 + iVar26 + 0x14ac) <= *(byte *)(param_1 + (int)uVar31 + 0x14ac)))
               )) break;
            *(uint *)(param_1 + (long)(int)uVar23 * 4 + 0xbb0) = uVar31;
            iVar12 = *(int *)(param_1 + 0x14a4);
            uVar31 = uVar30 * 2;
            uVar23 = uVar30;
          } while ((int)uVar31 <= iVar12);
        }
        lVar11 = param_1 + 0xbb0;
        *(int *)(lVar11 + (long)(int)uVar23 * 4) = iVar26;
        iVar28 = *(int *)(param_1 + 0xbb4);
        psVar2 = (short *)(lVar14 + (long)iVar29 * 4);
        lVar27 = (long)*(int *)(param_1 + 0x14a8) + -1;
        *(int *)(param_1 + 0x14a8) = (int)lVar27;
        *(int *)(lVar11 + lVar27 * 4) = iVar29;
        psVar3 = (short *)(lVar14 + (long)iVar28 * 4);
        lVar27 = (long)*(int *)(param_1 + 0x14a8) + -1;
        *(int *)(param_1 + 0x14a8) = (int)lVar27;
        *(int *)(lVar11 + lVar27 * 4) = iVar28;
        puVar34 = (ushort *)(lVar14 + lVar19 * 4);
        lVar11 = param_1 + 0x14ac;
        *puVar34 = *psVar3 + *psVar2;
        if (*(byte *)(lVar11 + iVar29) < *(byte *)(lVar11 + iVar28)) {
          iVar29 = iVar28;
        }
        pbVar4 = (byte *)(lVar11 + lVar19);
        *pbVar4 = *(char *)(lVar11 + iVar29) + 1;
        uVar18 = (undefined4)lVar19;
        psVar3[1] = (short)lVar19;
        psVar2[1] = (short)lVar19;
        iVar28 = *(int *)(param_1 + 0x14a4);
        lVar19 = lVar19 + 1;
        *(undefined4 *)(param_1 + 0xbb4) = uVar18;
        if (iVar28 < 2) {
          uVar23 = 1;
        }
        else {
          uVar31 = 2;
          uVar23 = 1;
          do {
            uVar30 = uVar31;
            if ((int)uVar31 < iVar28) {
              lVar27 = (long)*(int *)(param_1 + 0xbb0 + (long)(int)(uVar31 | 1) * 4);
              lVar11 = (long)*(int *)(param_1 + 0xbb0 + (long)(int)uVar31 * 4);
              uVar5 = *(ushort *)(lVar14 + lVar27 * 4);
              uVar6 = *(ushort *)(lVar14 + lVar11 * 4);
              if ((uVar5 < uVar6) ||
                 ((uVar5 == uVar6 &&
                  (*(byte *)(param_1 + 0x14ac + lVar27) <= *(byte *)(param_1 + 0x14ac + lVar11)))))
              {
                uVar30 = uVar31 | 1;
              }
            }
            uVar31 = *(uint *)(param_1 + (long)(int)uVar30 * 4 + 0xbb0);
            uVar5 = *puVar34;
            uVar6 = *(ushort *)
                     (lVar14 + (-(ulong)(uVar31 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar31 << 2))
            ;
            if ((uVar5 < uVar6) ||
               ((uVar5 == uVar6 && (*pbVar4 <= *(byte *)(param_1 + (int)uVar31 + 0x14ac))))) break;
            *(uint *)(param_1 + (long)(int)uVar23 * 4 + 0xbb0) = uVar31;
            iVar28 = *(int *)(param_1 + 0x14a4);
            uVar31 = uVar30 * 2;
            uVar23 = uVar30;
          } while ((int)uVar31 <= iVar28);
        }
        *(undefined4 *)(param_1 + (long)(int)uVar23 * 4 + 0xbb0) = uVar18;
        iVar28 = *(int *)(param_1 + 0x14a4);
        if (iVar28 < 2) {
          lVar19 = (long)*(int *)(param_1 + 0x14a8) + -1;
          *(int *)(param_1 + 0x14a8) = (int)lVar19;
          *(undefined4 *)(param_1 + 0xbb0 + lVar19 * 4) = *(undefined4 *)(param_1 + 0xbb4);
          plVar21 = (long *)param_2[2];
          iVar26 = *(int *)(param_1 + 0x14a8);
          lVar19 = (long)iVar26;
          lVar16 = *param_2;
          iVar28 = (int)param_2[1];
          lVar11 = *plVar21;
          lVar27 = plVar21[1];
          iVar29 = (int)plVar21[2];
          iVar12 = (int)plVar21[3];
          lVar22 = (long)iVar12;
          *(undefined8 *)(param_1 + 0xba8) = 0;
          *(undefined8 *)(param_1 + 0xba0) = 0;
          *(undefined8 *)(param_1 + 0xb98) = 0;
          *(undefined8 *)(param_1 + 0xb90) = 0;
          *(undefined2 *)(lVar16 + (long)*(int *)(param_1 + 0xbb0 + lVar19 * 4) * 4 + 2) = 0;
          if (iVar26 < 0x23c) {
            plVar21 = (long *)(param_1 + 0x1708);
            iVar26 = 0;
            if (lVar11 == 0) {
              lVar19 = lVar19 + 0x2ed;
              do {
                iVar7 = *(int *)(param_1 + lVar19 * 4);
                lVar11 = lVar16 + (long)iVar7 * 4;
                uVar5 = *(ushort *)(lVar16 + (ulong)*(ushort *)(lVar11 + 2) * 4 + 2);
                if ((int)(uint)uVar5 < iVar12) {
                  iVar8 = uVar5 + 1;
                }
                else {
                  iVar26 = iVar26 + 1;
                  iVar8 = iVar12;
                }
                *(short *)(lVar11 + 2) = (short)iVar8;
                if (iVar7 <= iVar28) {
                  lVar11 = param_1 + (long)iVar8 * 2;
                  *(short *)(lVar11 + 0xb90) = *(short *)(lVar11 + 0xb90) + 1;
                  if (iVar7 < iVar29) {
                    iVar13 = 0;
                  }
                  else {
                    iVar13 = *(int *)(lVar27 + (long)(iVar7 - iVar29) * 4);
                  }
                  *plVar21 = *plVar21 +
                             (ulong)*(ushort *)(lVar16 + (long)iVar7 * 4) * (long)(iVar13 + iVar8);
                }
                lVar19 = lVar19 + 1;
              } while (lVar19 != 0x529);
            }
            else {
              lVar19 = lVar19 + 0x2ed;
              do {
                iVar7 = *(int *)(param_1 + lVar19 * 4);
                lVar9 = lVar16 + (long)iVar7 * 4;
                uVar5 = *(ushort *)(lVar16 + (ulong)*(ushort *)(lVar9 + 2) * 4 + 2);
                if ((int)(uint)uVar5 < iVar12) {
                  iVar8 = uVar5 + 1;
                }
                else {
                  iVar26 = iVar26 + 1;
                  iVar8 = iVar12;
                }
                *(short *)(lVar9 + 2) = (short)iVar8;
                if (iVar7 <= iVar28) {
                  lVar9 = param_1 + (long)iVar8 * 2;
                  *(short *)(lVar9 + 0xb90) = *(short *)(lVar9 + 0xb90) + 1;
                  if (iVar7 < iVar29) {
                    iVar13 = 0;
                  }
                  else {
                    iVar13 = *(int *)(lVar27 + (long)(iVar7 - iVar29) * 4);
                  }
                  lVar9 = (long)iVar7 * 4;
                  uVar15 = (ulong)*(ushort *)(lVar16 + lVar9);
                  *(ulong *)(param_1 + 0x1710) =
                       uVar15 * (long)(int)(iVar13 + (uint)*(ushort *)(lVar11 + lVar9 + 2)) +
                       *(long *)(param_1 + 0x1710);
                  *plVar21 = uVar15 * (long)(iVar13 + iVar8) + *plVar21;
                }
                lVar19 = lVar19 + 1;
              } while (lVar19 != 0x529);
            }
            if (iVar26 != 0) {
              puVar34 = (ushort *)(param_1 + lVar22 * 2 + 0xb90);
              lVar19 = (lVar22 << 0x20) + 0x100000000;
              lVar11 = lVar19;
              puVar32 = puVar34;
              do {
                do {
                  puVar32 = puVar32 + -1;
                  lVar11 = lVar11 + -0x100000000;
                } while (*puVar32 == 0);
                lVar11 = param_1 + (lVar11 >> 0x1f);
                *puVar32 = *puVar32 - 1;
                iVar29 = iVar26 + -2;
                *(short *)(lVar11 + 0xb90) = *(short *)(lVar11 + 0xb90) + 2;
                uVar5 = *puVar34;
                *puVar34 = uVar5 - 1;
                bVar1 = 1 < iVar26;
                lVar11 = lVar19;
                puVar32 = puVar34;
                iVar26 = iVar29;
              } while (iVar29 != 0 && bVar1);
              if (iVar12 != 0) {
                iVar29 = 0x23d;
                uVar31 = (uint)(ushort)(uVar5 - 1);
                while( true ) {
                  for (; uVar31 != 0; uVar31 = uVar31 - 1) {
                    piVar33 = (int *)(param_1 + 0xbac + (long)iVar29 * 4);
                    do {
                      iVar26 = *piVar33;
                      iVar29 = iVar29 + -1;
                      piVar33 = piVar33 + -1;
                    } while (iVar28 < iVar26);
                    puVar34 = (ushort *)(lVar16 + (long)iVar26 * 4 + 2);
                    uVar5 = *puVar34;
                    if ((uint)lVar22 != (uint)uVar5) {
                      *plVar21 = *plVar21 +
                                 (lVar22 - (ulong)uVar5) *
                                 (ulong)*(ushort *)(lVar16 + (long)iVar26 * 4);
                      *puVar34 = (ushort)lVar22;
                    }
                  }
                  lVar22 = lVar22 + -1;
                  if ((int)lVar22 == 0) break;
                  uVar31 = (uint)*(ushort *)(param_1 + lVar22 * 2 + 0xb90);
                }
              }
            }
          }
          auStack_20[1] = *(short *)(param_1 + 0xb90) * 2;
          auStack_20[2] = (auStack_20[1] + *(short *)(param_1 + 0xb92)) * 2;
          auStack_20[3] = (auStack_20[2] + *(short *)(param_1 + 0xb94)) * 2;
          local_18 = (auStack_20[3] + *(short *)(param_1 + 0xb96)) * 2;
          local_16 = (local_18 + *(short *)(param_1 + 0xb98)) * 2;
          local_14 = (local_16 + *(short *)(param_1 + 0xb9a)) * 2;
          local_12 = (local_14 + *(short *)(param_1 + 0xb9c)) * 2;
          local_10 = (local_12 + *(short *)(param_1 + 0xb9e)) * 2;
          local_e = (local_10 + *(short *)(param_1 + 0xba0)) * 2;
          local_c = (local_e + *(short *)(param_1 + 0xba2)) * 2;
          local_a = (local_c + *(short *)(param_1 + 0xba4)) * 2;
          local_8 = (local_a + *(short *)(param_1 + 0xba6)) * 2;
          local_6 = (local_8 + *(short *)(param_1 + 0xba8)) * 2;
          local_4 = (local_6 + *(short *)(param_1 + 0xbaa)) * 2;
          local_2 = (local_4 + *(short *)(param_1 + 0xbac)) * 2;
          if (-1 < (int)uVar25) {
            uVar15 = 0;
            do {
              uVar5 = *(ushort *)(lVar14 + uVar15 * 4 + 2);
              if (uVar5 != 0) {
                uVar23 = (uint)auStack_20[uVar5];
                uVar31 = 0;
                iVar28 = uVar5 + 1;
                auStack_20[uVar5] = auStack_20[uVar5] + 1;
                do {
                  iVar28 = iVar28 + -1;
                  uVar30 = uVar31 | uVar23 & 1;
                  uVar23 = uVar23 >> 1;
                  uVar31 = uVar30 << 1;
                } while (1 < iVar28);
                *(short *)(lVar14 + uVar15 * 4) = (short)uVar30;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar25 + 1);
          }
          return;
        }
      } while( true );
    }
    uVar23 = *(uint *)(param_1 + 0x14a4);
    uVar15 = uVar15 - 1;
  } while( true );
}

