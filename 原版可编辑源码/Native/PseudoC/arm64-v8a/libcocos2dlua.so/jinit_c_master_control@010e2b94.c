
void jinit_c_master_control(long *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  int *piVar19;
  undefined8 *puVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  uint *puVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  long lVar29;
  undefined8 uVar30;
  uint local_a88 [640];
  int local_88 [10];
  
  puVar10 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x3e] = (long)puVar10;
  puVar10[2] = FUN_010e3988;
  puVar10[1] = FUN_010e394c;
  *puVar10 = FUN_010e3758;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  if (param_2 == 0) {
    jpeg_calc_jpeg_dimensions(param_1);
    iVar11 = *(int *)((long)param_1 + 0x1dc);
  }
  else {
    iVar11 = (int)param_1[0x2d];
    if (iVar11 != *(int *)((long)param_1 + 0x16c)) {
      puVar14 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar14 + 5) = 7;
      *(int *)((long)puVar14 + 0x2c) = iVar11;
      *(undefined4 *)(puVar14 + 6) = *(undefined4 *)((long)param_1 + 0x16c);
      (*(code *)*puVar14)(param_1);
      iVar11 = (int)param_1[0x2d];
    }
    *(int *)((long)param_1 + 0x1dc) = iVar11;
  }
  if (0xf < iVar11 - 1U) {
    puVar14 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar14 + 5) = 7;
    *(int *)((long)puVar14 + 0x2c) = iVar11;
    *(undefined4 *)(puVar14 + 6) = *(undefined4 *)((long)param_1 + 0x1dc);
    (*(code *)*puVar14)(param_1);
    iVar11 = *(int *)((long)param_1 + 0x1dc);
  }
  puVar15 = jpeg_natural_order2;
  switch(iVar11) {
  case 2:
    break;
  case 3:
    puVar15 = jpeg_natural_order3;
    break;
  case 4:
    puVar15 = jpeg_natural_order4;
    break;
  case 5:
    puVar15 = jpeg_natural_order5;
    break;
  case 6:
    puVar15 = jpeg_natural_order6;
    break;
  case 7:
    puVar15 = (undefined1 *)&jpeg_natural_order7;
    break;
  default:
    puVar15 = jpeg_natural_order;
  }
  param_1[0x3c] = (long)puVar15;
  uVar13 = *(uint *)((long)param_1 + 0x54);
  iVar24 = iVar11 * iVar11 + -1;
  if (7 < iVar11) {
    iVar24 = 0x3f;
  }
  *(int *)(param_1 + 0x3d) = iVar24;
  if (((uVar13 == 0) || ((int)param_1[10] == 0)) || (*(int *)((long)param_1 + 0x5c) < 1)) {
    puVar14 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar14 + 5) = 0x21;
    (*(code *)*puVar14)(param_1);
    uVar13 = *(uint *)((long)param_1 + 0x54);
  }
  if ((0xffdc < uVar13) || (0xffdc < *(uint *)(param_1 + 10))) {
    puVar14 = (undefined8 *)*param_1;
    puVar14[5] = 0xffdc0000002a;
    (*(code *)*puVar14)(param_1);
  }
  lVar23 = param_1[0xb];
  if (4 < (int)lVar23 - 8U) {
    puVar14 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar14 + 5) = 0x10;
    *(int *)((long)puVar14 + 0x2c) = (int)lVar23;
    (*(code *)*puVar14)(param_1);
  }
  iVar11 = *(int *)((long)param_1 + 0x5c);
  if (10 < iVar11) {
    puVar14 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar14 + 5) = 0x1b;
    *(int *)((long)puVar14 + 0x2c) = iVar11;
    *(undefined4 *)(puVar14 + 6) = 10;
    (*(code *)*puVar14)(param_1);
    iVar11 = *(int *)((long)param_1 + 0x5c);
  }
  param_1[0x2c] = 0x100000001;
  if (iVar11 < 1) {
    iVar24 = 1;
  }
  else {
    iVar21 = 0;
    iVar24 = 1;
    iVar16 = 1;
    piVar19 = (int *)(param_1[0xd] + 0xc);
    do {
      iVar18 = piVar19[-1];
      if ((3 < iVar18 - 1U) || (3 < *piVar19 - 1U)) {
        puVar14 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar14 + 5) = 0x13;
        (*(code *)*puVar14)(param_1);
        iVar16 = (int)param_1[0x2c];
        iVar18 = piVar19[-1];
        iVar24 = *(int *)((long)param_1 + 0x164);
        iVar11 = *(int *)((long)param_1 + 0x5c);
      }
      if (iVar16 <= iVar18) {
        iVar16 = iVar18;
      }
      *(int *)(param_1 + 0x2c) = iVar16;
      iVar21 = iVar21 + 1;
      if (iVar24 <= *piVar19) {
        iVar24 = *piVar19;
      }
      *(int *)((long)param_1 + 0x164) = iVar24;
      piVar19 = piVar19 + 0x18;
    } while (iVar21 < iVar11);
    if (0 < iVar11) {
      lVar23 = param_1[0xd];
      iVar11 = 0;
      do {
        *(int *)(lVar23 + 4) = iVar11;
        iVar21 = (int)param_1[0x2d];
        iVar24 = 8;
        if ((int)param_1[0x26] == 0) {
          iVar24 = 4;
        }
        if (iVar24 < iVar21) {
          iVar16 = 1;
        }
        else {
          iVar16 = 1;
          do {
            iVar18 = iVar16 * 2;
            iVar6 = iVar18 * *(int *)(lVar23 + 8);
            iVar7 = 0;
            if (iVar6 != 0) {
              iVar7 = (int)param_1[0x2c] / iVar6;
            }
          } while (((int)param_1[0x2c] == iVar7 * iVar6) &&
                  (iVar16 = iVar18, iVar18 * iVar21 <= iVar24));
        }
        iVar16 = iVar16 * iVar21;
        *(int *)(lVar23 + 0x24) = iVar16;
        iVar21 = *(int *)((long)param_1 + 0x16c);
        if (iVar24 < iVar21) {
          iVar18 = 1;
        }
        else {
          iVar18 = 1;
          do {
            iVar6 = iVar18 * 2;
            iVar7 = iVar6 * *(int *)(lVar23 + 0xc);
            iVar8 = 0;
            if (iVar7 != 0) {
              iVar8 = *(int *)((long)param_1 + 0x164) / iVar7;
            }
          } while ((*(int *)((long)param_1 + 0x164) == iVar8 * iVar7) &&
                  (iVar18 = iVar6, iVar6 * iVar21 <= iVar24));
        }
        iVar18 = iVar18 * iVar21;
        *(int *)(lVar23 + 0x28) = iVar18;
        if (iVar18 * 2 < iVar16) {
          *(int *)(lVar23 + 0x24) = iVar18 * 2;
        }
        else if (iVar16 * 2 < iVar18) {
          *(int *)(lVar23 + 0x28) = iVar16 * 2;
        }
        uVar9 = jdiv_round_up((long)*(int *)(lVar23 + 8) * (ulong)*(uint *)(param_1 + 10),
                              (long)*(int *)((long)param_1 + 0x1dc) * (long)(int)param_1[0x2c]);
        *(undefined4 *)(lVar23 + 0x1c) = uVar9;
        uVar9 = jdiv_round_up((long)*(int *)(lVar23 + 0xc) * (ulong)*(uint *)((long)param_1 + 0x54),
                              (long)*(int *)((long)param_1 + 0x1dc) *
                              (long)*(int *)((long)param_1 + 0x164));
        *(undefined4 *)(lVar23 + 0x20) = uVar9;
        uVar9 = jdiv_round_up((long)*(int *)(lVar23 + 0x24) * (long)*(int *)(lVar23 + 8) *
                              (ulong)*(uint *)(param_1 + 10),
                              (long)*(int *)((long)param_1 + 0x1dc) * (long)(int)param_1[0x2c]);
        *(undefined4 *)(lVar23 + 0x2c) = uVar9;
        uVar9 = jdiv_round_up((long)*(int *)(lVar23 + 0x28) * (long)*(int *)(lVar23 + 0xc) *
                              (ulong)*(uint *)((long)param_1 + 0x54),
                              (long)*(int *)((long)param_1 + 0x1dc) *
                              (long)*(int *)((long)param_1 + 0x164));
        *(undefined4 *)(lVar23 + 0x30) = uVar9;
        *(undefined4 *)(lVar23 + 0x34) = 0;
        iVar11 = iVar11 + 1;
        lVar23 = lVar23 + 0x60;
      } while (iVar11 < *(int *)((long)param_1 + 0x5c));
      iVar24 = *(int *)((long)param_1 + 0x164);
    }
  }
  uVar9 = jdiv_round_up(*(undefined4 *)((long)param_1 + 0x54),
                        (long)*(int *)((long)param_1 + 0x1dc) * (long)iVar24);
  puVar25 = (uint *)param_1[0x23];
  *(undefined4 *)(param_1 + 0x2e) = uVar9;
  if (puVar25 == (uint *)0x0) {
    *(undefined4 *)((long)param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x22) = 1;
    iVar11 = (int)param_1[0x25];
  }
  else {
    if ((int)param_1[0x22] < 1) {
      puVar14 = (undefined8 *)*param_1;
      puVar14[5] = 0x14;
      (*(code *)*puVar14)(param_1);
      puVar25 = (uint *)param_1[0x23];
    }
    if ((puVar25[5] == 0) && (puVar25[6] == 0x3f)) {
      iVar24 = *(int *)((long)param_1 + 0x5c);
      *(undefined4 *)((long)param_1 + 0x15c) = 0;
      if (iVar24 < 1) {
        iVar11 = 0;
      }
      else {
        memset(local_88,0,(ulong)(iVar24 - 1) * 4 + 4);
        iVar11 = 0;
      }
    }
    else {
      iVar24 = *(int *)((long)param_1 + 0x5c);
      iVar11 = 1;
      *(undefined4 *)((long)param_1 + 0x15c) = 1;
      if (0 < iVar24) {
        memset(local_a88,0xff,(ulong)(iVar24 - 1) * 0x100 + 0x100);
        iVar11 = 1;
      }
    }
    if (0 < (int)param_1[0x22]) {
      iVar11 = 1;
      do {
        uVar13 = *puVar25;
        uVar26 = (ulong)uVar13;
        if (uVar13 - 1 < 4) {
LAB_010e3104:
          uVar22 = 0;
          do {
            uVar3 = puVar25[uVar22 + 1];
            if (((int)uVar3 < 0) || (*(int *)((long)param_1 + 0x5c) <= (int)uVar3)) {
              puVar14 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar14 + 5) = 0x14;
              *(int *)((long)puVar14 + 0x2c) = iVar11;
              (*(code *)*puVar14)(param_1);
            }
            if ((0 < (long)uVar22) && ((int)uVar3 <= (int)puVar25[uVar22])) {
              puVar14 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar14 + 5) = 0x14;
              *(int *)((long)puVar14 + 0x2c) = iVar11;
              (*(code *)*puVar14)(param_1);
            }
            uVar22 = uVar22 + 1;
          } while (uVar26 != uVar22);
          bVar1 = true;
        }
        else {
          puVar14 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar14 + 5) = 0x1b;
          *(uint *)((long)puVar14 + 0x2c) = uVar13;
          *(undefined4 *)(puVar14 + 6) = 4;
          (*(code *)*puVar14)(param_1);
          if (0 < (int)uVar13) goto LAB_010e3104;
          bVar1 = false;
        }
        uVar4 = puVar25[7];
        uVar3 = puVar25[5];
        lVar12 = (long)(int)uVar3;
        uVar2 = puVar25[6];
        lVar23 = (long)(int)uVar2;
        uVar5 = puVar25[8];
        if (*(int *)((long)param_1 + 0x15c) == 0) {
          if ((uVar2 != 0x3f) || ((uVar4 != 0 || uVar3 != 0) || uVar5 != 0)) {
            puVar14 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar14 + 5) = 0x12;
            *(int *)((long)puVar14 + 0x2c) = iVar11;
            (*(code *)*puVar14)(param_1);
          }
          if (bVar1) {
            uVar22 = 0;
            do {
              uVar13 = puVar25[uVar22 + 1];
              if (local_88[(int)uVar13] != 0) {
                puVar14 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar14 + 5) = 0x14;
                *(int *)((long)puVar14 + 0x2c) = iVar11;
                (*(code *)*puVar14)(param_1);
              }
              uVar22 = uVar22 + 1;
              local_88[(int)uVar13] = 1;
            } while (uVar26 != uVar22);
          }
        }
        else {
          if ((((uVar3 < 0x40) && (uVar5 < 0xb)) && (uVar4 < 0xb)) &&
             (((int)uVar3 <= (int)uVar2 && ((int)uVar2 < 0x40)))) {
            if (uVar3 == 0) goto LAB_010e31a8;
LAB_010e3260:
            if (uVar13 != 1) goto LAB_010e3268;
          }
          else {
            puVar14 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar14 + 5) = 0x12;
            *(int *)((long)puVar14 + 0x2c) = iVar11;
            (*(code *)*puVar14)(param_1);
            if (uVar3 != 0) goto LAB_010e3260;
LAB_010e31a8:
            if (uVar2 != 0) {
LAB_010e3268:
              puVar14 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar14 + 5) = 0x12;
              *(int *)((long)puVar14 + 0x2c) = iVar11;
              (*(code *)*puVar14)(param_1);
            }
          }
          if (bVar1) {
            if (uVar3 == 0) {
              uVar22 = 0;
              lVar23 = lVar23 + 1;
              do {
                if (-1 < (int)uVar2) {
                  lVar12 = (long)(int)puVar25[uVar22 + 1];
                  if (uVar5 == uVar4 - 1) {
                    if (uVar4 == 0) {
                      puVar28 = local_a88 + lVar12 * 0x40;
                      lVar12 = lVar23;
                      do {
                        if (0 < (int)*puVar28) {
                          puVar14 = (undefined8 *)*param_1;
                          *(undefined4 *)(puVar14 + 5) = 0x12;
                          *(int *)((long)puVar14 + 0x2c) = iVar11;
                          (*(code *)*puVar14)(param_1);
                        }
                        lVar12 = lVar12 + -1;
                        *puVar28 = uVar5;
                        puVar28 = puVar28 + 1;
                      } while (lVar12 != 0);
                    }
                    else {
                      lVar27 = lVar23;
                      puVar28 = local_a88 + lVar12 * 0x40;
                      do {
                        if (((int)*puVar28 < 0) || (uVar4 != *puVar28)) {
                          puVar14 = (undefined8 *)*param_1;
                          *(undefined4 *)(puVar14 + 5) = 0x12;
                          *(int *)((long)puVar14 + 0x2c) = iVar11;
                          (*(code *)*puVar14)(param_1);
                        }
                        lVar27 = lVar27 + -1;
                        *puVar28 = uVar5;
                        puVar28 = puVar28 + 1;
                      } while (lVar27 != 0);
                    }
                  }
                  else if (uVar4 == 0) {
                    puVar28 = local_a88 + lVar12 * 0x40;
                    lVar12 = lVar23;
                    do {
                      if (-1 < (int)*puVar28) {
                        puVar14 = (undefined8 *)*param_1;
                        *(undefined4 *)(puVar14 + 5) = 0x12;
                        *(int *)((long)puVar14 + 0x2c) = iVar11;
                        (*(code *)*puVar14)(param_1);
                      }
                      lVar12 = lVar12 + -1;
                      *puVar28 = uVar5;
                      puVar28 = puVar28 + 1;
                    } while (lVar12 != 0);
                  }
                  else {
                    puVar28 = local_a88 + lVar12 * 0x40;
                    lVar12 = lVar23;
                    do {
                      puVar14 = (undefined8 *)*param_1;
                      *(undefined4 *)(puVar14 + 5) = 0x12;
                      *(int *)((long)puVar14 + 0x2c) = iVar11;
                      (*(code *)*puVar14)(param_1);
                      lVar12 = lVar12 + -1;
                      *puVar28 = uVar5;
                      puVar28 = puVar28 + 1;
                    } while (lVar12 != 0);
                  }
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 != uVar26);
            }
            else {
              uVar22 = 0;
              do {
                lVar27 = (long)(int)puVar25[uVar22 + 1];
                if ((int)local_a88[lVar27 * 0x40] < 0) {
                  puVar14 = (undefined8 *)*param_1;
                  *(undefined4 *)(puVar14 + 5) = 0x12;
                  *(int *)((long)puVar14 + 0x2c) = iVar11;
                  (*(code *)*puVar14)(param_1);
                }
                if ((int)uVar3 <= (int)uVar2) {
                  if (uVar5 == uVar4 - 1) {
                    lVar29 = lVar12;
                    if (uVar4 == 0) {
                      do {
                        if (0 < (int)local_a88[lVar27 * 0x40 + lVar29]) {
                          puVar14 = (undefined8 *)*param_1;
                          *(undefined4 *)(puVar14 + 5) = 0x12;
                          *(int *)((long)puVar14 + 0x2c) = iVar11;
                          (*(code *)*puVar14)(param_1);
                        }
                        local_a88[lVar27 * 0x40 + lVar29] = uVar5;
                        bVar1 = lVar29 < lVar23;
                        lVar29 = lVar29 + 1;
                      } while (bVar1);
                    }
                    else {
                      do {
                        if (((int)local_a88[lVar27 * 0x40 + lVar29] < 0) ||
                           (uVar4 != local_a88[lVar27 * 0x40 + lVar29])) {
                          puVar14 = (undefined8 *)*param_1;
                          *(undefined4 *)(puVar14 + 5) = 0x12;
                          *(int *)((long)puVar14 + 0x2c) = iVar11;
                          (*(code *)*puVar14)(param_1);
                        }
                        local_a88[lVar27 * 0x40 + lVar29] = uVar5;
                        bVar1 = lVar29 < lVar23;
                        lVar29 = lVar29 + 1;
                      } while (bVar1);
                    }
                  }
                  else {
                    lVar29 = lVar12;
                    if (uVar4 == 0) {
                      do {
                        if (-1 < (int)local_a88[lVar27 * 0x40 + lVar29]) {
                          puVar14 = (undefined8 *)*param_1;
                          *(undefined4 *)(puVar14 + 5) = 0x12;
                          *(int *)((long)puVar14 + 0x2c) = iVar11;
                          (*(code *)*puVar14)(param_1);
                        }
                        local_a88[lVar27 * 0x40 + lVar29] = uVar5;
                        bVar1 = lVar29 < lVar23;
                        lVar29 = lVar29 + 1;
                      } while (bVar1);
                    }
                    else {
                      do {
                        puVar14 = (undefined8 *)*param_1;
                        *(undefined4 *)(puVar14 + 5) = 0x12;
                        *(int *)((long)puVar14 + 0x2c) = iVar11;
                        (*(code *)*puVar14)(param_1);
                        local_a88[lVar27 * 0x40 + lVar29] = uVar5;
                        bVar1 = lVar29 < lVar23;
                        lVar29 = lVar29 + 1;
                      } while (bVar1);
                    }
                  }
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 != uVar26);
            }
          }
        }
        puVar25 = puVar25 + 9;
        bVar1 = iVar11 < (int)param_1[0x22];
        iVar11 = iVar11 + 1;
      } while (bVar1);
      iVar11 = *(int *)((long)param_1 + 0x15c);
      iVar24 = *(int *)((long)param_1 + 0x5c);
    }
    if (iVar11 == 0) {
      if (0 < iVar24) {
        lVar23 = 0;
        do {
          if (local_88[lVar23] == 0) {
            puVar14 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar14 + 5) = 0x2e;
            (*(code *)*puVar14)(param_1);
            iVar24 = *(int *)((long)param_1 + 0x5c);
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 < iVar24);
      }
    }
    else if (0 < iVar24) {
      lVar23 = 0;
      puVar25 = local_a88;
      do {
        if ((int)*puVar25 < 0) {
          puVar14 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar14 + 5) = 0x2e;
          (*(code *)*puVar14)(param_1);
          iVar24 = *(int *)((long)param_1 + 0x5c);
        }
        lVar23 = lVar23 + 1;
        puVar25 = puVar25 + 0x40;
      } while (lVar23 < iVar24);
    }
    if (*(int *)((long)param_1 + 0x1dc) < 8) {
      if ((int)param_1[0x22] < 1) {
        *(undefined4 *)(param_1 + 0x22) = 0;
        iVar11 = (int)param_1[0x25];
        goto joined_r0x010e35b4;
      }
      puVar17 = (undefined8 *)param_1[0x23];
      uVar26 = 0;
      uVar13 = 0;
      puVar14 = puVar17;
      do {
        lVar23 = (long)(int)uVar13;
        if (uVar26 != uVar13) {
          puVar20 = (undefined8 *)((long)puVar17 + lVar23 * 0x24);
          *(undefined4 *)(puVar20 + 4) = *(undefined4 *)(puVar14 + 4);
          uVar30 = puVar14[2];
          puVar20[3] = puVar14[3];
          puVar20[2] = uVar30;
          uVar30 = *puVar14;
          puVar20[1] = puVar14[1];
          *puVar20 = uVar30;
        }
        iVar11 = (int)param_1[0x3d];
        if (*(int *)((long)puVar17 + lVar23 * 0x24 + 0x14) <= iVar11) {
          piVar19 = (int *)((long)puVar17 + lVar23 * 0x24 + 0x18);
          if (iVar11 < *piVar19) {
            *piVar19 = iVar11;
          }
          uVar13 = uVar13 + 1;
        }
        uVar26 = uVar26 + 1;
        puVar14 = (undefined8 *)((long)puVar14 + 0x24);
      } while ((long)uVar26 < (long)(int)param_1[0x22]);
      *(uint *)(param_1 + 0x22) = uVar13;
    }
    iVar11 = (int)param_1[0x25];
  }
joined_r0x010e35b4:
  if (iVar11 == 0) {
    if ((*(int *)((long)param_1 + 0x124) == 0) &&
       ((*(int *)((long)param_1 + 0x15c) != 0 || (*(int *)((long)param_1 + 0x1dc) - 2U < 6)))) {
      iVar11 = 1;
      *(undefined4 *)(param_1 + 0x25) = 1;
    }
    else {
      iVar11 = 0;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x124) = 0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(puVar10 + 4) = 0;
  }
  else {
    uVar9 = 1;
    if (iVar11 == 0) {
      uVar9 = 2;
    }
    *(undefined4 *)(puVar10 + 4) = uVar9;
  }
  *(undefined4 *)((long)puVar10 + 0x2c) = 0;
  *(undefined4 *)((long)puVar10 + 0x24) = 0;
  *(int *)(puVar10 + 5) = (int)param_1[0x22] << (iVar11 != 0);
  return;
}

