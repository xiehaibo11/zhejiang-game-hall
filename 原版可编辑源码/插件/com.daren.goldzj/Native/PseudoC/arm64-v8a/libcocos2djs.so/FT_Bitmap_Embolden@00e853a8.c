
int FT_Bitmap_Embolden(undefined8 *param_1,uint *param_2,long param_3,long param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  void *pvVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  byte *__s;
  void *__s_00;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  void *__src;
  ulong uVar27;
  int iVar28;
  void *pvVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if ((((param_2 == (uint *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
      (0x1fffffffff < param_3 + 0x20)) || (0x1fffffffff < param_4 + 0x20)) {
    return 6;
  }
  uVar17 = (uint)(param_4 + 0x20);
  uVar21 = (uint)(param_3 + 0x20);
  if ((int)(uVar17 | uVar21) >> 6 == 0) {
    return 0;
  }
  if ((int)(uVar17 | uVar21) < 0) {
    return 6;
  }
  uVar19 = (uint)*(byte *)((long)param_2 + 0x1a);
  iVar7 = (int)uVar21 >> 6;
  uVar17 = (int)uVar17 >> 6;
  iVar28 = iVar7;
  switch(*(byte *)((long)param_2 + 0x1a)) {
  case 1:
    iVar28 = 8;
    if ((int)uVar21 < 0x240) {
      iVar28 = iVar7;
    }
    uVar19 = 1;
    break;
  case 3:
  case 4:
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    iVar7 = FT_Bitmap_Convert(param_1,param_2,&local_90,1);
    if (iVar7 != 0) {
      return iVar7;
    }
    FUN_00e139fc(*param_1,*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 2) = uStack_88;
    *(undefined8 *)param_2 = local_90;
    *(undefined8 *)(param_2 + 6) = uStack_78;
    *(undefined8 *)(param_2 + 4) = uStack_80;
    uVar19 = (uint)*(byte *)((long)param_2 + 0x1a);
    *(undefined8 *)(param_2 + 8) = local_70;
    break;
  case 5:
    uVar19 = 5;
    iVar28 = iVar7 * 3;
    break;
  case 6:
    uVar17 = uVar17 * 3;
    uVar19 = 6;
    break;
  case 7:
    goto switchD_00e85470_caseD_7;
  }
  uVar12 = param_2[2];
  uVar21 = -uVar12;
  if (-1 < (int)uVar12) {
    uVar21 = uVar12;
  }
  if (5 < uVar19 - 1) {
    return 0x12;
  }
  uVar25 = *param_1;
  uVar12 = *param_2;
  uVar8 = param_2[1];
  switch(uVar19) {
  case 1:
    uVar19 = uVar8 + iVar28 + 7 >> 3;
    iVar7 = 1;
    break;
  default:
    uVar19 = uVar8 + iVar28;
    iVar7 = 8;
    break;
  case 3:
    uVar19 = uVar8 + iVar28 + 3 >> 2;
    iVar7 = 2;
    break;
  case 4:
    uVar19 = uVar8 + iVar28 + 1 >> 1;
    iVar7 = 4;
  }
  if ((uVar17 == 0) && (uVar19 <= uVar21)) {
    uVar19 = iVar7 * (uVar8 + iVar28);
    if ((uVar19 < uVar21 << 3) && (uVar12 != 0)) {
      pbVar18 = *(byte **)(param_2 + 4);
      if ((uVar19 & 7) == 0) {
        do {
          pbVar1 = pbVar18 + uVar21;
          pbVar18 = pbVar18 + (uVar19 >> 3);
          if (pbVar18 < pbVar1) {
            memset(pbVar18,0,(long)pbVar1 - (long)pbVar18);
          }
          uVar12 = uVar12 - 1;
          pbVar18 = pbVar1;
        } while (uVar12 != 0);
      }
      else {
        do {
          pbVar1 = pbVar18 + (uVar19 >> 3);
          pbVar18 = pbVar18 + uVar21;
          __s = pbVar1 + 1;
          *pbVar1 = *pbVar1 & (byte)(0xff00 >> (ulong)(uVar19 & 7));
          if (__s < pbVar18) {
            memset(__s,0,(long)pbVar18 - (long)__s);
          }
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    uVar21 = param_2[2];
  }
  else {
    __s_00 = (void *)FUN_00e1ea0c(uVar25,uVar19,0,uVar12 + uVar17,0,&local_90);
    if ((int)local_90 != 0) {
      return (int)local_90;
    }
    __src = *(void **)(param_2 + 4);
    uVar12 = iVar7 * uVar8 + 7 >> 3;
    uVar27 = (ulong)uVar12;
    uVar8 = *param_2 * uVar21;
    pvVar3 = (void *)((long)__src + (ulong)uVar8);
    uVar12 = uVar19 - uVar12;
    if ((int)param_2[2] < 1) {
      pvVar29 = __s_00;
      if (uVar8 != 0) {
        do {
          memcpy(pvVar29,__src,uVar27);
          __src = (void *)((long)__src + (ulong)uVar21);
          memset((void *)((long)pvVar29 + uVar27),0,(ulong)uVar12);
          pvVar29 = (void *)((long)((long)pvVar29 + uVar27) + (ulong)uVar12);
        } while (__src < pvVar3);
      }
      memset(pvVar29,0,(ulong)(uVar19 * uVar17));
    }
    else {
      memset(__s_00,0,(ulong)(uVar19 * uVar17));
      if (uVar8 != 0) {
        pvVar29 = (void *)((long)__s_00 + (ulong)(uVar19 * uVar17));
        do {
          memcpy(pvVar29,__src,uVar27);
          __src = (void *)((long)__src + (ulong)uVar21);
          memset((void *)((long)pvVar29 + uVar27),0,(ulong)uVar12);
          pvVar29 = (void *)((long)((long)pvVar29 + uVar27) + (ulong)uVar12);
        } while (__src < pvVar3);
      }
    }
    FUN_00e139fc(uVar25,*(undefined8 *)(param_2 + 4));
    uVar21 = -uVar19;
    if (-1 < (int)param_2[2]) {
      uVar21 = uVar19;
    }
    *(void **)(param_2 + 4) = __s_00;
    param_2[2] = uVar21;
  }
  if ((int)uVar21 < 1) {
    iVar7 = uVar21 * (*param_2 - 1);
    uVar21 = -uVar21;
    puVar20 = (undefined8 *)(*(long *)(param_2 + 4) + (ulong)(uint)-iVar7);
    if (*param_2 == 0) goto LAB_00e85a48;
LAB_00e85644:
    lVar23 = (long)(int)uVar21;
    uVar27 = (ulong)uVar21;
    uVar19 = 0;
    lVar22 = (long)iVar28;
    uVar24 = uVar27 & 0xffffffe0;
    do {
      if (0 < iVar28 && 0 < (int)uVar21) {
        lVar9 = (long)puVar20 + lVar23;
        lVar10 = lVar23 + -2;
        lVar13 = lVar23;
LAB_00e8568c:
        do {
          lVar11 = lVar13 + -1;
          bVar4 = *(byte *)((long)puVar20 + lVar11);
          uVar12 = (uint)bVar4;
          if (lVar11 < 1) {
            lVar13 = 0;
            lVar15 = lVar10;
            do {
              while (*(char *)((long)param_2 + 0x1a) == '\x01') {
                uVar12 = uVar12 | bVar4 >> (ulong)((int)lVar13 + 1U & 0x1f);
                *(char *)((long)puVar20 + lVar11) = (char)uVar12;
                lVar13 = lVar13 + 1;
                lVar15 = lVar15 + -1;
                if (lVar22 <= lVar13) goto LAB_00e857a0;
              }
              if (lVar15 < 0) break;
              uVar5 = (ushort)param_2[6];
              uVar12 = (uint)*(byte *)((long)puVar20 + lVar15) + (uVar12 & 0xff);
              if (uVar5 <= uVar12) goto LAB_00e857b4;
              *(char *)((long)puVar20 + lVar11) = (char)uVar12;
              if ((ushort)param_2[6] - 1 == (uVar12 & 0xff)) break;
              lVar13 = lVar13 + 1;
              lVar15 = lVar15 + -1;
            } while (lVar13 < lVar22);
          }
          else {
            lVar15 = 0;
            lVar26 = -2;
            do {
              if (*(char *)((long)param_2 + 0x1a) == '\x01') {
                uVar12 = uVar12 | bVar4 >> (ulong)((int)lVar15 + 1U & 0x1f);
                *(char *)((long)puVar20 + lVar11) = (char)uVar12;
                uVar12 = uVar12 | (uint)*(byte *)((long)puVar20 + lVar13 + -2) <<
                                  (ulong)((int)lVar26 + 9U & 0x1f);
                *(char *)((long)puVar20 + lVar11) = (char)uVar12;
              }
              else {
                if (lVar13 + lVar26 < 0) break;
                uVar5 = (ushort)param_2[6];
                uVar12 = (uint)*(byte *)(lVar9 + lVar26) + (uVar12 & 0xff);
                if (uVar5 <= uVar12) goto LAB_00e857b4;
                *(char *)((long)puVar20 + lVar11) = (char)uVar12;
                if ((ushort)param_2[6] - 1 == (uVar12 & 0xff)) break;
              }
              lVar15 = lVar15 + 1;
              lVar26 = lVar26 + -1;
            } while (lVar15 < lVar22);
          }
LAB_00e857a0:
          lVar10 = lVar10 + -1;
          lVar9 = lVar9 + -1;
          lVar13 = lVar11;
        } while (0 < lVar11);
      }
LAB_00e857cc:
      uVar12 = param_2[2];
      if (0 < (int)uVar17) {
        if ((int)uVar21 < 1) {
          uVar8 = uVar17 & 0xfffffffe;
          if (uVar17 < 2) {
            uVar8 = 1;
          }
          else {
            do {
              uVar8 = uVar8 - 2;
            } while (uVar8 != 0);
            uVar8 = uVar17 | 1;
            if (uVar17 == (uVar17 & 0xfffffffe)) goto LAB_00e858d4;
          }
          iVar7 = (uVar17 + 1) - uVar8;
          do {
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        else {
          iVar7 = 1;
          do {
            iVar6 = uVar12 * iVar7;
            uVar14 = 0;
            if (uVar21 < 0x20) {
LAB_00e85860:
              pbVar18 = (byte *)((long)puVar20 + uVar14);
              lVar9 = uVar27 - uVar14;
              do {
                lVar9 = lVar9 + -1;
                pbVar18[-(long)iVar6] = pbVar18[-(long)iVar6] | *pbVar18;
                pbVar18 = pbVar18 + 1;
              } while (lVar9 != 0);
            }
            else {
              if (((ulong)((long)puVar20 - (long)iVar6) < (long)puVar20 + uVar27) &&
                 (puVar20 < (undefined8 *)(((long)puVar20 + uVar27) - (long)iVar6))) {
                uVar14 = 0;
                goto LAB_00e85860;
              }
              uVar14 = uVar24;
              puVar16 = puVar20;
              do {
                puVar2 = (undefined8 *)((long)puVar16 - (long)iVar6);
                uVar30 = puVar16[1];
                uVar25 = *puVar16;
                uVar32 = puVar16[3];
                uVar31 = puVar16[2];
                uVar34 = puVar2[1];
                uVar33 = *puVar2;
                uVar36 = puVar2[3];
                uVar35 = puVar2[2];
                uVar14 = uVar14 - 0x20;
                puVar16 = puVar16 + 4;
                puVar2[1] = CONCAT17((byte)((ulong)uVar34 >> 0x38) | (byte)((ulong)uVar30 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar34 >> 0x30) |
                                              (byte)((ulong)uVar30 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar34 >> 0x28) |
                                                       (byte)((ulong)uVar30 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar34 >> 0x20) |
                                                                (byte)((ulong)uVar30 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar34 >>
                                                                               0x18) |
                                                                         (byte)((ulong)uVar30 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar34 >> 0x10) | (byte)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar34 >> 8) |
                                                           (byte)((ulong)uVar30 >> 8),
                                                           (byte)uVar34 | (byte)uVar30)))))));
                *puVar2 = CONCAT17((byte)((ulong)uVar33 >> 0x38) | (byte)((ulong)uVar25 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar33 >> 0x30) |
                                            (byte)((ulong)uVar25 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar33 >> 0x28) |
                                                     (byte)((ulong)uVar25 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar33 >> 0x20) |
                                                              (byte)((ulong)uVar25 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar33 >> 0x18)
                                                                       | (byte)((ulong)uVar25 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar33
                                                                                      >> 0x10) |
                                                                                (byte)((ulong)uVar25
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar33 >> 8) | (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar33 | (byte)uVar25)))))));
                puVar2[3] = CONCAT17((byte)((ulong)uVar36 >> 0x38) | (byte)((ulong)uVar32 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar36 >> 0x30) |
                                              (byte)((ulong)uVar32 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar36 >> 0x28) |
                                                       (byte)((ulong)uVar32 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar36 >> 0x20) |
                                                                (byte)((ulong)uVar32 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar36 >>
                                                                               0x18) |
                                                                         (byte)((ulong)uVar32 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar36 >> 0x10) | (byte)((ulong)uVar32 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar36 >> 8) |
                                                           (byte)((ulong)uVar32 >> 8),
                                                           (byte)uVar36 | (byte)uVar32)))))));
                puVar2[2] = CONCAT17((byte)((ulong)uVar35 >> 0x38) | (byte)((ulong)uVar31 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar35 >> 0x30) |
                                              (byte)((ulong)uVar31 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar35 >> 0x28) |
                                                       (byte)((ulong)uVar31 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar35 >> 0x20) |
                                                                (byte)((ulong)uVar31 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar35 >>
                                                                               0x18) |
                                                                         (byte)((ulong)uVar31 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar35 >> 0x10) | (byte)((ulong)uVar31 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar35 >> 8) |
                                                           (byte)((ulong)uVar31 >> 8),
                                                           (byte)uVar35 | (byte)uVar31)))))));
              } while (uVar14 != 0);
              uVar14 = uVar24;
              if (uVar24 != uVar27) goto LAB_00e85860;
            }
            uVar12 = param_2[2];
            iVar7 = iVar7 + 1;
          } while (iVar7 != uVar17 + 1);
        }
      }
LAB_00e858d4:
      uVar8 = *param_2;
      uVar19 = uVar19 + 1;
      puVar20 = (undefined8 *)((long)puVar20 + (long)(int)uVar12);
    } while (uVar19 < uVar8);
  }
  else {
    puVar20 = (undefined8 *)(*(long *)(param_2 + 4) + (long)(int)(uVar21 * uVar17));
    if (*param_2 != 0) goto LAB_00e85644;
LAB_00e85a48:
    uVar8 = 0;
  }
  *param_2 = uVar8 + uVar17;
  param_2[1] = param_2[1] + iVar28;
switchD_00e85470_caseD_7:
  return 0;
LAB_00e857b4:
  *(char *)((long)puVar20 + lVar11) = (char)uVar5 + -1;
  lVar10 = lVar10 + -1;
  lVar9 = lVar9 + -1;
  lVar13 = lVar11;
  if (lVar11 < 1) goto LAB_00e857cc;
  goto LAB_00e8568c;
}

