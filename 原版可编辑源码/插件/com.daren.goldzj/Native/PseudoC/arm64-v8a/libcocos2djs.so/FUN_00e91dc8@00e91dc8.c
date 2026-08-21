
bool FUN_00e91dc8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  int iVar8;
  void *pvVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ushort *puVar16;
  int iVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  int aiStack_60 [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x58) == 4) {
      lVar21 = *(long *)(param_1 + 0x60);
      pvVar9 = malloc(lVar21 << 3 | 4);
      *(void **)(param_1 + 8) = pvVar9;
      if (pvVar9 != (void *)0x0) {
        iVar8 = FUN_00e92ce8(param_2,lVar21,pvVar9,param_3,param_1,param_4,param_5);
        bVar7 = iVar8 != 0;
        goto LAB_00e91f30;
      }
    }
    else if (*(long *)(param_1 + 0x48) < 0x10000000) {
      lVar21 = -((*(long *)(param_1 + 0x60) << 3 | 4U) + 0xf & 0xfffffffffffffff0);
      puVar19 = (undefined4 *)((long)aiStack_60 + lVar21);
      iVar8 = FUN_00e92ce8(param_2,*(long *)(param_1 + 0x60),puVar19,param_3,param_1,param_4,param_5
                          );
      if (iVar8 == 0) {
        iVar8 = *(int *)(param_1 + 0x5c);
        lVar22 = *(long *)(param_1 + 0x48);
        lVar12 = (long)iVar8 + 1;
        iVar17 = 0;
        iVar11 = (int)lVar12;
        if (iVar11 != 0) {
          iVar17 = 0x7fffffff / iVar11;
        }
        if (lVar22 <= iVar17) {
          iVar17 = *(int *)(param_1 + 0x58);
          lVar12 = lVar22 * lVar12;
          if (iVar17 != 0) {
            iVar11 = 0;
            if (iVar17 != 0) {
              iVar11 = 0x7fffffff / iVar17;
            }
            if (lVar12 - iVar11 != 0 && iVar11 <= lVar12) goto LAB_00e91f2c;
          }
          pbVar10 = malloc((lVar12 + -2) * (long)iVar17);
          *(byte **)(param_1 + 8) = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            if (iVar8 == 1) {
              if (iVar17 == 1) {
                if ((2 < lVar22 * 2) &&
                   (*pbVar10 = (byte)((uint)*puVar19 >> 0x18) & 0x80 | (byte)*puVar19,
                   3 < *(long *)(param_1 + 0x48) * 2)) {
                  lVar21 = 1;
                  do {
                    *(byte *)(*(long *)(param_1 + 8) + lVar21) =
                         (byte)((uint)puVar19[lVar21] >> 0x18) & 0x80 | (byte)puVar19[lVar21];
                    lVar21 = lVar21 + 1;
                    bVar7 = false;
                  } while (lVar21 < *(long *)(param_1 + 0x48) * 2 + -2);
                  goto LAB_00e91f30;
                }
              }
              else if ((iVar17 == 2) && (uVar13 = lVar22 * 2 - 2, 0 < (long)uVar13)) {
                if (uVar13 < 8) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = uVar13 & 0xfffffffffffffff8;
                  puVar15 = (ulong *)(&stack0xffffffffffffffb0 + lVar21);
                  pbVar18 = pbVar10 + 8;
                  uVar20 = uVar14;
                  do {
                    uVar25 = puVar15[-1];
                    uVar23 = puVar15[-2];
                    uVar28 = puVar15[1];
                    uVar26 = *puVar15;
                    puVar15 = puVar15 + 4;
                    uVar20 = uVar20 - 8;
                    uVar29 = uVar23 & 0xffffffff;
                    uVar30 = uVar26 & 0xffffffff;
                    uVar24 = uVar25 & 0xffffffff;
                    uVar27 = uVar28 & 0xffffffff;
                    *(ulong *)(pbVar18 + -8) =
                         CONCAT26(CONCAT11((byte)(uVar25 >> 0x38) & 0x80 | (byte)(uVar25 >> 0x28),
                                           (char)(uVar25 >> 0x20)),
                                  CONCAT24(CONCAT11((byte)(uVar24 >> 0x18) & 0x80 |
                                                    (byte)(uVar24 >> 8),(char)uVar24),
                                           CONCAT22(CONCAT11((byte)(uVar23 >> 0x38) & 0x80 |
                                                             (byte)(uVar23 >> 0x28),
                                                             (char)(uVar23 >> 0x20)),
                                                    CONCAT11((byte)(uVar29 >> 0x18) & 0x80 |
                                                             (byte)(uVar29 >> 8),(char)uVar29))));
                    *(ulong *)pbVar18 =
                         CONCAT26(CONCAT11((byte)(uVar28 >> 0x38) & 0x80 | (byte)(uVar28 >> 0x28),
                                           (char)(uVar28 >> 0x20)),
                                  CONCAT24(CONCAT11((byte)(uVar27 >> 0x18) & 0x80 |
                                                    (byte)(uVar27 >> 8),(char)uVar27),
                                           CONCAT22(CONCAT11((byte)(uVar26 >> 0x38) & 0x80 |
                                                             (byte)(uVar26 >> 0x28),
                                                             (char)(uVar26 >> 0x20)),
                                                    CONCAT11((byte)(uVar30 >> 0x18) & 0x80 |
                                                             (byte)(uVar30 >> 8),(char)uVar30))));
                    pbVar18 = pbVar18 + 0x10;
                  } while (uVar20 != 0);
                  if (uVar13 == uVar14) goto LAB_00e92200;
                }
                lVar21 = uVar13 - uVar14;
                bVar7 = false;
                puVar16 = (ushort *)(pbVar10 + uVar14 * 2);
                puVar19 = puVar19 + uVar14;
                do {
                  lVar21 = lVar21 + -1;
                  *puVar16 = (ushort)((uint)*puVar19 >> 0x10) & 0x8000 | (ushort)*puVar19;
                  puVar16 = puVar16 + 1;
                  puVar19 = puVar19 + 1;
                } while (lVar21 != 0);
                goto LAB_00e91f30;
              }
            }
            else {
              lVar21 = lVar22 * 3 + -2;
              iVar8 = (int)lVar22 * 2 + -4;
              if (iVar17 == 1) {
                if (-1 < iVar8) {
                  lVar12 = (long)iVar8;
                  do {
                    iVar8 = puVar19[lVar12];
                    iVar17 = (puVar19 + lVar12)[1];
                    bVar4 = (byte)((uint)iVar17 >> 8);
                    if (iVar8 < 0) {
                      bVar3 = (byte)((uint)iVar8 >> 8);
                      if (iVar17 < 0) {
                        lVar22 = lVar21 + -4;
                        pbVar10[lVar22] = bVar3 | 0x80;
                        pbVar10[lVar21 + -3] = bVar4 | 0x80;
                        pbVar10[lVar21 + -2] = (byte)iVar8;
                      }
                      else {
                        uVar1 = puVar19[(uint)(iVar17 << 1)];
                        lVar22 = lVar21 + -3;
                        pbVar10[lVar22] = bVar3 | 0x80;
                        pbVar10[lVar21 + -2] = (byte)uVar1;
                        iVar17 = iVar8;
                      }
                    }
                    else if (iVar17 < 0) {
                      lVar22 = lVar21 + -3;
                      pbVar10[lVar22] = (byte)puVar19[(uint)(iVar8 << 1)];
                      pbVar10[lVar21 + -2] = bVar4 | 0x80;
                    }
                    else {
                      iVar17 = puVar19[(uint)(iVar17 << 1)];
                      lVar22 = lVar21 + -2;
                      pbVar10[lVar22] = (byte)puVar19[(uint)(iVar8 << 1)];
                    }
                    bVar7 = false;
                    puVar19[lVar12] = (int)lVar22;
                    lVar12 = lVar12 + -2;
                    pbVar10[lVar21 + -1] = (byte)iVar17;
                    lVar21 = lVar22;
                  } while (-1 < lVar12);
                  goto LAB_00e91f30;
                }
              }
              else if (-1 < iVar8) {
                lVar12 = (long)iVar8;
                do {
                  iVar8 = puVar19[lVar12];
                  iVar17 = (puVar19 + lVar12)[1];
                  uVar6 = (ushort)((uint)iVar17 >> 0x10);
                  if (iVar8 < 0) {
                    uVar5 = (ushort)((uint)iVar8 >> 0x10);
                    if (iVar17 < 0) {
                      lVar22 = lVar21 + -4;
                      *(ushort *)(pbVar10 + lVar22 * 2) = uVar5 | 0x8000;
                      *(ushort *)(pbVar10 + lVar21 * 2 + -6) = uVar6 | 0x8000;
                      *(short *)(pbVar10 + lVar21 * 2 + -4) = (short)iVar8;
                    }
                    else {
                      uVar1 = puVar19[(uint)(iVar17 << 1)];
                      lVar22 = lVar21 + -3;
                      *(ushort *)(pbVar10 + lVar22 * 2) = uVar5 | 0x8000;
                      *(short *)(pbVar10 + lVar21 * 2 + -4) = (short)uVar1;
                      iVar17 = iVar8;
                    }
                  }
                  else if (iVar17 < 0) {
                    lVar22 = lVar21 + -3;
                    *(short *)(pbVar10 + lVar22 * 2) = (short)puVar19[(uint)(iVar8 << 1)];
                    *(ushort *)(pbVar10 + lVar21 * 2 + -4) = uVar6 | 0x8000;
                  }
                  else {
                    iVar17 = puVar19[(uint)(iVar17 << 1)];
                    lVar22 = lVar21 + -2;
                    *(short *)(pbVar10 + lVar22 * 2) = (short)puVar19[(uint)(iVar8 << 1)];
                  }
                  bVar7 = false;
                  puVar19[lVar12] = (int)lVar22;
                  lVar12 = lVar12 + -2;
                  *(short *)(pbVar10 + lVar21 * 2 + -2) = (short)iVar17;
                  lVar21 = lVar22;
                } while (-1 < lVar12);
                goto LAB_00e91f30;
              }
            }
LAB_00e92200:
            bVar7 = false;
            goto LAB_00e91f30;
          }
        }
      }
    }
  }
LAB_00e91f2c:
  bVar7 = true;
LAB_00e91f30:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}

