
bool FUN_00ebe338(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *__ptr;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ushort *puVar14;
  long lVar15;
  ulong *puVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  
  if (param_2 == 0) {
    return true;
  }
  if (*(int *)(param_1 + 0x58) == 4) {
    lVar20 = *(long *)(param_1 + 0x60);
    pvVar8 = malloc(lVar20 << 3 | 4);
    *(void **)(param_1 + 8) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      return true;
    }
    iVar7 = FUN_00ebf254(param_2,lVar20,pvVar8,param_3,param_1,param_4,param_5);
    return iVar7 != 0;
  }
  if (0xfffffff < *(long *)(param_1 + 0x48)) {
    return true;
  }
  lVar20 = *(long *)(param_1 + 0x60);
  __ptr = calloc(lVar20 << 1 | 1,4);
  if (__ptr == (undefined4 *)0x0) {
    return true;
  }
  iVar7 = FUN_00ebf254(param_2,lVar20,__ptr,param_3,param_1,param_4,param_5);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0x5c);
    lVar21 = *(long *)(param_1 + 0x48);
    lVar20 = (long)iVar7 + 1;
    iVar12 = 0;
    iVar10 = (int)lVar20;
    if (iVar10 != 0) {
      iVar12 = 0x7fffffff / iVar10;
    }
    if (lVar21 <= iVar12) {
      iVar12 = *(int *)(param_1 + 0x58);
      lVar20 = lVar21 * lVar20;
      if (iVar12 != 0) {
        iVar10 = 0;
        if (iVar12 != 0) {
          iVar10 = 0x7fffffff / iVar12;
        }
        if (lVar20 - iVar10 != 0 && iVar10 <= lVar20) goto LAB_00ebe490;
      }
      pbVar9 = malloc((lVar20 + -2) * (long)iVar12);
      *(byte **)(param_1 + 8) = pbVar9;
      if (pbVar9 != (byte *)0x0) {
        if (iVar7 == 1) {
          if (iVar12 == 1) {
            if ((2 < lVar21 * 2) &&
               (*pbVar9 = (byte)((uint)*__ptr >> 0x18) & 0x80 | (byte)*__ptr,
               3 < *(long *)(param_1 + 0x48) * 2)) {
              lVar20 = 1;
              do {
                *(byte *)(*(long *)(param_1 + 8) + lVar20) =
                     (byte)((uint)__ptr[lVar20] >> 0x18) & 0x80 | (byte)__ptr[lVar20];
                lVar20 = lVar20 + 1;
              } while (lVar20 < *(long *)(param_1 + 0x48) * 2 + -2);
            }
          }
          else if ((iVar12 == 2) && (uVar13 = lVar21 * 2 - 2, 0 < (long)uVar13)) {
            if (uVar13 < 8) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar13 & 0xfffffffffffffff8;
              puVar16 = (ulong *)(__ptr + 4);
              pbVar18 = pbVar9 + 8;
              uVar19 = uVar11;
              do {
                uVar24 = puVar16[-1];
                uVar22 = puVar16[-2];
                uVar27 = puVar16[1];
                uVar25 = *puVar16;
                puVar16 = puVar16 + 4;
                uVar19 = uVar19 - 8;
                uVar28 = uVar22 & 0xffffffff;
                uVar29 = uVar25 & 0xffffffff;
                uVar23 = uVar24 & 0xffffffff;
                uVar26 = uVar27 & 0xffffffff;
                *(ulong *)(pbVar18 + -8) =
                     CONCAT26(CONCAT11((byte)(uVar24 >> 0x38) & 0x80 | (byte)(uVar24 >> 0x28),
                                       (char)(uVar24 >> 0x20)),
                              CONCAT24(CONCAT11((byte)(uVar23 >> 0x18) & 0x80 | (byte)(uVar23 >> 8),
                                                (char)uVar23),
                                       CONCAT22(CONCAT11((byte)(uVar22 >> 0x38) & 0x80 |
                                                         (byte)(uVar22 >> 0x28),
                                                         (char)(uVar22 >> 0x20)),
                                                CONCAT11((byte)(uVar28 >> 0x18) & 0x80 |
                                                         (byte)(uVar28 >> 8),(char)uVar28))));
                *(ulong *)pbVar18 =
                     CONCAT26(CONCAT11((byte)(uVar27 >> 0x38) & 0x80 | (byte)(uVar27 >> 0x28),
                                       (char)(uVar27 >> 0x20)),
                              CONCAT24(CONCAT11((byte)(uVar26 >> 0x18) & 0x80 | (byte)(uVar26 >> 8),
                                                (char)uVar26),
                                       CONCAT22(CONCAT11((byte)(uVar25 >> 0x38) & 0x80 |
                                                         (byte)(uVar25 >> 0x28),
                                                         (char)(uVar25 >> 0x20)),
                                                CONCAT11((byte)(uVar29 >> 0x18) & 0x80 |
                                                         (byte)(uVar29 >> 8),(char)uVar29))));
                pbVar18 = pbVar18 + 0x10;
              } while (uVar19 != 0);
              if (uVar13 == uVar11) goto LAB_00ebe75c;
            }
            lVar20 = uVar11 + lVar21 * -2 + 2;
            puVar14 = (ushort *)(pbVar9 + uVar11 * 2);
            puVar17 = __ptr + uVar11;
            do {
              bVar6 = lVar20 != -1;
              lVar20 = lVar20 + 1;
              *puVar14 = (ushort)((uint)*puVar17 >> 0x10) & 0x8000 | (ushort)*puVar17;
              puVar14 = puVar14 + 1;
              puVar17 = puVar17 + 1;
            } while (bVar6);
          }
        }
        else {
          lVar20 = lVar21 * 3 + -2;
          iVar7 = (int)lVar21 * 2 + -4;
          if (iVar12 == 1) {
            if (-1 < iVar7) {
              lVar21 = (long)iVar7;
              do {
                iVar7 = __ptr[lVar21];
                iVar12 = (__ptr + lVar21)[1];
                bVar2 = (byte)((uint)iVar12 >> 8);
                if (iVar7 < 0) {
                  bVar3 = (byte)((uint)iVar7 >> 8);
                  if (iVar12 < 0) {
                    lVar15 = lVar20 + -4;
                    pbVar9[lVar15] = bVar3 | 0x80;
                    pbVar9[lVar20 + -3] = bVar2 | 0x80;
                    pbVar9[lVar20 + -2] = (byte)iVar7;
                  }
                  else {
                    uVar1 = __ptr[(uint)(iVar12 << 1)];
                    lVar15 = lVar20 + -3;
                    pbVar9[lVar15] = bVar3 | 0x80;
                    pbVar9[lVar20 + -2] = (byte)uVar1;
                    iVar12 = iVar7;
                  }
                }
                else if (iVar12 < 0) {
                  lVar15 = lVar20 + -3;
                  pbVar9[lVar15] = (byte)__ptr[(uint)(iVar7 << 1)];
                  pbVar9[lVar20 + -2] = bVar2 | 0x80;
                }
                else {
                  iVar12 = __ptr[(uint)(iVar12 << 1)];
                  lVar15 = lVar20 + -2;
                  pbVar9[lVar15] = (byte)__ptr[(uint)(iVar7 << 1)];
                }
                __ptr[lVar21] = (int)lVar15;
                lVar21 = lVar21 + -2;
                pbVar9[lVar20 + -1] = (byte)iVar12;
                lVar20 = lVar15;
              } while (-1 < lVar21);
            }
          }
          else if (-1 < iVar7) {
            lVar21 = (long)iVar7;
            do {
              iVar7 = __ptr[lVar21];
              iVar12 = (__ptr + lVar21)[1];
              uVar4 = (ushort)((uint)iVar12 >> 0x10);
              if (iVar7 < 0) {
                uVar5 = (ushort)((uint)iVar7 >> 0x10);
                if (iVar12 < 0) {
                  lVar15 = lVar20 + -4;
                  *(ushort *)(pbVar9 + lVar15 * 2) = uVar5 | 0x8000;
                  *(ushort *)(pbVar9 + lVar20 * 2 + -6) = uVar4 | 0x8000;
                  *(short *)(pbVar9 + lVar20 * 2 + -4) = (short)iVar7;
                }
                else {
                  uVar1 = __ptr[(uint)(iVar12 << 1)];
                  lVar15 = lVar20 + -3;
                  *(ushort *)(pbVar9 + lVar15 * 2) = uVar5 | 0x8000;
                  *(short *)(pbVar9 + lVar20 * 2 + -4) = (short)uVar1;
                  iVar12 = iVar7;
                }
              }
              else if (iVar12 < 0) {
                lVar15 = lVar20 + -3;
                *(short *)(pbVar9 + lVar15 * 2) = (short)__ptr[(uint)(iVar7 << 1)];
                *(ushort *)(pbVar9 + lVar20 * 2 + -4) = uVar4 | 0x8000;
              }
              else {
                iVar12 = __ptr[(uint)(iVar12 << 1)];
                lVar15 = lVar20 + -2;
                *(short *)(pbVar9 + lVar15 * 2) = (short)__ptr[(uint)(iVar7 << 1)];
              }
              __ptr[lVar21] = (int)lVar15;
              lVar21 = lVar21 + -2;
              *(short *)(pbVar9 + lVar20 * 2 + -2) = (short)iVar12;
              lVar20 = lVar15;
            } while (-1 < lVar21);
          }
        }
LAB_00ebe75c:
        free(__ptr);
        return false;
      }
    }
  }
LAB_00ebe490:
  free(__ptr);
  return true;
}

