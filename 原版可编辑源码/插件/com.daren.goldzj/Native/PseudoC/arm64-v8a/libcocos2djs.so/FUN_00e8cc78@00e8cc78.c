
void FUN_00e8cc78(undefined8 *param_1,long *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long *local_b8;
  undefined8 local_90;
  long *plStack_88;
  long local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ogg_packet_release(param_2);
  if (-1 < *(int *)((long)param_1 + 0x4c)) {
    puVar25 = param_1 + 2;
LAB_00e8ccdc:
    plVar23 = (long *)param_1[1];
    if (plVar23 != (long *)0x0) {
      if (*(int *)(param_1 + 9) < 0) {
        local_b8 = plVar23 + 2;
        lStack_70 = *local_b8;
        plVar24 = plVar23 + 1;
        lVar13 = *plVar24;
      }
      else {
        lVar13 = (long)*(int *)(param_1 + 9) + 0x1b;
        while( true ) {
          lVar8 = plVar23[2];
          if (lVar13 < lVar8) break;
          lVar9 = *plVar23;
          plVar24 = (long *)plVar23[3];
          plVar27 = *(long **)(lVar9 + 0x18);
          iVar7 = *(int *)(lVar9 + 0x10) + -1;
          *(int *)(lVar9 + 0x10) = iVar7;
          if (iVar7 == 0) {
            *(int *)(plVar27 + 2) = (int)plVar27[2] + -1;
            *(long *)(lVar9 + 0x18) = *plVar27;
            *plVar27 = lVar9;
          }
          *(int *)(plVar27 + 2) = (int)plVar27[2] + -1;
          plVar23[3] = plVar27[1];
          plVar27[1] = (long)plVar23;
          if (*(int *)((long)plVar27 + 0x14) != 0) {
            puVar17 = (undefined8 *)*plVar27;
            if ((undefined8 *)*plVar27 == (undefined8 *)0x0) {
              *plVar27 = 0;
              goto LAB_00e8cd8c;
            }
            do {
              puVar26 = (undefined8 *)puVar17[3];
              if ((void *)*puVar17 != (void *)0x0) {
                free((void *)*puVar17);
              }
              free(puVar17);
              puVar17 = puVar26;
            } while (puVar26 != (undefined8 *)0x0);
            *plVar27 = 0;
            while (plVar23 != (long *)0x0) {
LAB_00e8cd8c:
              plVar29 = (long *)plVar23[3];
              free(plVar23);
              plVar23 = plVar29;
            }
            plVar27[1] = 0;
            if ((int)plVar27[2] == 0) {
              free(plVar27);
            }
          }
          lVar13 = lVar13 - lVar8;
          plVar23 = plVar24;
          if (plVar24 == (long *)0x0) {
            *(undefined4 *)(param_1 + 9) = 0;
            param_1[0xb] = 0;
            *param_1 = 0;
            param_1[1] = 0;
            goto LAB_00e8d654;
          }
        }
        lStack_70 = lVar8 - lVar13;
        local_b8 = plVar23 + 2;
        *local_b8 = lStack_70;
        plVar24 = plVar23 + 1;
        lVar13 = *plVar24 + lVar13;
        *plVar24 = lVar13;
        param_1[1] = plVar23;
      }
      *(undefined4 *)(param_1 + 9) = 0;
      param_1[0xb] = 0;
      local_78 = 0;
      local_80 = *(long *)*plVar23 + lVar13;
      local_90 = plVar23;
      plStack_88 = plVar23;
      uVar22 = FUN_00e8b020(&local_90,0x12);
      puVar26 = (undefined8 *)param_1[1];
      puVar17 = puVar26;
      if ((puVar26 == (undefined8 *)0x0) || (lVar13 = puVar26[2], lVar13 < 0x1b)) {
        lVar9 = puVar26[2];
        lVar8 = 0;
        do {
          puVar17 = (undefined8 *)puVar17[3];
          lVar8 = lVar8 + lVar9;
          lVar9 = puVar17[2];
          lVar13 = lVar9 + lVar8;
        } while (lVar13 < 0x1b);
        plVar27 = (long *)*puVar17;
        lVar9 = puVar17[1];
      }
      else {
        plVar27 = (long *)*puVar26;
        lVar9 = puVar26[1];
        lVar8 = 0;
      }
      lVar9 = *plVar27 + lVar9;
      *(uint *)(param_1 + 9) = (uint)*(byte *)(lVar9 + (0x1a - lVar8));
      if (param_1[6] != (uVar22 & 0xffffffff)) {
        uVar6 = 1;
        if (param_1[6] != 0xffffffffffffffff) {
          uVar6 = 2;
        }
        *(undefined4 *)(param_1 + 10) = uVar6;
        if ((long *)param_1[3] != (long *)0x0) {
          uVar11 = (ulong)*(uint *)((long)param_1 + 0x4c);
          plVar27 = (long *)param_1[3];
          do {
            while( true ) {
              lVar14 = plVar27[2];
              if ((long)uVar11 < lVar14) {
                plVar27[1] = plVar27[1] + uVar11;
                plVar27[2] = lVar14 - uVar11;
                param_1[3] = plVar27;
                goto LAB_00e8cfe8;
              }
              lVar10 = *plVar27;
              plVar29 = (long *)plVar27[3];
              plVar5 = *(long **)(lVar10 + 0x18);
              iVar7 = *(int *)(lVar10 + 0x10) + -1;
              *(int *)(lVar10 + 0x10) = iVar7;
              if (iVar7 == 0) {
                *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
                *(long *)(lVar10 + 0x18) = *plVar5;
                *plVar5 = lVar10;
              }
              *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
              plVar27[3] = plVar5[1];
              plVar5[1] = (long)plVar27;
              if (*(int *)((long)plVar5 + 0x14) != 0) break;
LAB_00e8cfa0:
              uVar11 = uVar11 - lVar14;
              plVar27 = plVar29;
              if (plVar29 == (long *)0x0) goto LAB_00e8cfbc;
            }
            puVar31 = (undefined8 *)*plVar5;
            if ((undefined8 *)*plVar5 == (undefined8 *)0x0) {
              *plVar5 = 0;
              goto LAB_00e8cf7c;
            }
            do {
              puVar30 = (undefined8 *)puVar31[3];
              if ((void *)*puVar31 != (void *)0x0) {
                free((void *)*puVar31);
              }
              free(puVar31);
              puVar31 = puVar30;
            } while (puVar30 != (undefined8 *)0x0);
            *plVar5 = 0;
            while (plVar27 != (long *)0x0) {
LAB_00e8cf7c:
              plVar28 = (long *)plVar27[3];
              free(plVar27);
              plVar27 = plVar28;
            }
            plVar5[1] = 0;
            if ((int)plVar5[2] != 0) goto LAB_00e8cfa0;
            free(plVar5);
            uVar11 = uVar11 - lVar14;
            plVar27 = plVar29;
          } while (plVar29 != (long *)0x0);
        }
LAB_00e8cfbc:
        *puVar25 = 0;
        param_1[3] = 0;
LAB_00e8cfe8:
        *(undefined4 *)((long)param_1 + 0x4c) = 0;
      }
      lVar14 = *local_b8;
      if (lVar14 < 6) {
        lVar10 = 0;
        plVar27 = plVar23;
        do {
          plVar27 = (long *)plVar27[3];
          lVar10 = lVar10 + lVar14;
          lVar14 = plVar27[2];
        } while (lVar14 + lVar10 < 6);
        lVar14 = *(long *)*plVar27 + plVar27[1];
        lVar10 = 5 - lVar10;
      }
      else {
        lVar14 = *(long *)*plVar23 + *plVar24;
        lVar10 = 5;
      }
      uVar18 = *(uint *)((long)param_1 + 0x4c);
      uVar11 = (ulong)uVar18;
      if ((*(byte *)(lVar14 + lVar10) & 1) == 0) {
        if (uVar18 != 0) {
          plVar27 = (long *)param_1[3];
joined_r0x00e8d064:
          uVar12 = uVar11;
          plVar29 = plVar27;
          if (plVar27 != (long *)0x0) {
            do {
              lVar14 = plVar29[2];
              uVar11 = uVar12 - lVar14;
              if ((long)uVar12 < lVar14) {
                plVar29[1] = plVar29[1] + uVar12;
                plVar29[2] = lVar14 - uVar12;
                param_1[3] = plVar29;
                goto LAB_00e8d310;
              }
              lVar14 = *plVar29;
              plVar27 = (long *)plVar29[3];
              plVar5 = *(long **)(lVar14 + 0x18);
              iVar7 = *(int *)(lVar14 + 0x10) + -1;
              *(int *)(lVar14 + 0x10) = iVar7;
              if (iVar7 == 0) {
                *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
                *(long *)(lVar14 + 0x18) = *plVar5;
                *plVar5 = lVar14;
              }
              *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
              plVar29[3] = plVar5[1];
              plVar5[1] = (long)plVar29;
              if (*(int *)((long)plVar5 + 0x14) != 0) {
                puVar31 = (undefined8 *)*plVar5;
                if ((undefined8 *)*plVar5 == (undefined8 *)0x0) {
                  *plVar5 = 0;
                  goto LAB_00e8d104;
                }
                do {
                  puVar30 = (undefined8 *)puVar31[3];
                  if ((void *)*puVar31 != (void *)0x0) {
                    free((void *)*puVar31);
                  }
                  free(puVar31);
                  puVar31 = puVar30;
                } while (puVar30 != (undefined8 *)0x0);
                *plVar5 = 0;
                while (plVar29 != (long *)0x0) {
LAB_00e8d104:
                  plVar28 = (long *)plVar29[3];
                  free(plVar29);
                  plVar29 = plVar28;
                }
                plVar5[1] = 0;
                if ((int)plVar5[2] == 0) goto LAB_00e8d134;
              }
              uVar12 = uVar11;
              plVar29 = plVar27;
              if (plVar27 == (long *)0x0) break;
            } while( true );
          }
          *puVar25 = 0;
          param_1[3] = 0;
LAB_00e8d310:
          iVar7 = *(int *)((long)param_1 + 0x54);
          *(undefined4 *)((long)param_1 + 0x4c) = 0;
          goto LAB_00e8d318;
        }
      }
      else if (uVar18 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        uVar18 = 0;
        lVar14 = (long)*(int *)((long)param_1 + 0x5c);
        do {
          if (*(int *)(param_1 + 9) <= lVar14) goto LAB_00e8d1f4;
          lVar10 = lVar14 + 0x1b;
          *(int *)((long)param_1 + 0x5c) = (int)(lVar14 + 1);
          if (lVar10 < lVar8) {
            lVar13 = puVar26[2];
            lVar8 = 0;
            lVar9 = *(long *)*puVar26 + puVar26[1];
            puVar17 = puVar26;
          }
          if (lVar13 <= lVar10) {
            lVar9 = puVar17[2];
            do {
              puVar17 = (undefined8 *)puVar17[3];
              lVar8 = lVar8 + lVar9;
              lVar9 = puVar17[2];
              lVar13 = lVar9 + lVar8;
            } while (lVar13 <= lVar10);
            lVar9 = *(long *)*puVar17 + puVar17[1];
          }
          uVar16 = (uint)*(byte *)(lVar9 + (lVar10 - lVar8));
          uVar18 = uVar18 + uVar16;
          *(uint *)(param_1 + 0xc) = uVar18;
          lVar14 = lVar14 + 1;
        } while (uVar16 == 0xff);
        uVar18 = uVar18 | 0x80000000;
        *(uint *)(param_1 + 0xc) = uVar18;
        *(undefined4 *)(param_1 + 0xb) = 1;
LAB_00e8d1f4:
        if ((long *)param_1[3] != (long *)0x0) {
          uVar11 = (ulong)(uVar18 & 0x7fffffff);
          plVar27 = (long *)param_1[3];
          do {
            while( true ) {
              lVar14 = plVar27[2];
              if ((long)uVar11 < lVar14) {
                plVar27[1] = plVar27[1] + uVar11;
                plVar27[2] = lVar14 - uVar11;
                param_1[3] = plVar27;
                iVar7 = *(int *)((long)param_1 + 0x54);
                goto LAB_00e8d318;
              }
              lVar10 = *plVar27;
              plVar29 = (long *)plVar27[3];
              plVar5 = *(long **)(lVar10 + 0x18);
              iVar7 = *(int *)(lVar10 + 0x10) + -1;
              *(int *)(lVar10 + 0x10) = iVar7;
              if (iVar7 == 0) {
                *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
                *(long *)(lVar10 + 0x18) = *plVar5;
                *plVar5 = lVar10;
              }
              *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
              plVar27[3] = plVar5[1];
              plVar5[1] = (long)plVar27;
              if (*(int *)((long)plVar5 + 0x14) != 0) break;
LAB_00e8d2c4:
              uVar11 = uVar11 - lVar14;
              plVar27 = plVar29;
              if (plVar29 == (long *)0x0) goto LAB_00e8d2e0;
            }
            puVar31 = (undefined8 *)*plVar5;
            if ((undefined8 *)*plVar5 == (undefined8 *)0x0) {
              *plVar5 = 0;
              goto LAB_00e8d2a0;
            }
            do {
              puVar30 = (undefined8 *)puVar31[3];
              if ((void *)*puVar31 != (void *)0x0) {
                free((void *)*puVar31);
              }
              free(puVar31);
              puVar31 = puVar30;
            } while (puVar30 != (undefined8 *)0x0);
            *plVar5 = 0;
            while (plVar27 != (long *)0x0) {
LAB_00e8d2a0:
              plVar28 = (long *)plVar27[3];
              free(plVar27);
              plVar27 = plVar28;
            }
            plVar5[1] = 0;
            if ((int)plVar5[2] != 0) goto LAB_00e8d2c4;
            free(plVar5);
            uVar11 = uVar11 - lVar14;
            plVar27 = plVar29;
          } while (plVar29 != (long *)0x0);
        }
LAB_00e8d2e0:
        *puVar25 = 0;
        param_1[3] = 0;
        iVar7 = *(int *)((long)param_1 + 0x54);
LAB_00e8d318:
        if ((iVar7 == 0) && (*(int *)(param_1 + 10) == 0)) {
          *(undefined4 *)((long)param_1 + 0x54) = 2;
        }
      }
      iVar7 = *(int *)((long)param_1 + 0x5c);
      iVar2 = *(int *)(param_1 + 9);
      lVar14 = *local_b8;
      if (iVar7 < iVar2) {
        lVar19 = 0;
        lVar15 = 0;
        lVar1 = *(long *)*plVar23 + *plVar24;
        lVar10 = 6;
        plVar27 = plVar23;
        lVar20 = lVar14;
        plVar29 = local_90;
        if (6 < lVar14) goto joined_r0x00e8d3a8;
        do {
          lVar20 = plVar27[2];
          do {
            plVar27 = (long *)plVar27[3];
            lVar19 = lVar19 + lVar20;
            lVar20 = plVar27[2];
          } while (lVar20 + lVar19 <= lVar10);
          lVar1 = *(long *)*plVar27 + plVar27[1];
          lVar20 = lVar20 + lVar19;
          plVar29 = local_90;
joined_r0x00e8d3a8:
          do {
            local_90 = plVar29;
            if (lVar15 == 7) {
              local_90._6_1_ = (undefined1)((ulong)plVar29 >> 0x30);
              local_90._5_1_ = (undefined1)((ulong)plVar29 >> 0x28);
              local_90._4_1_ = (undefined1)((ulong)plVar29 >> 0x20);
              local_90._3_1_ = (undefined1)((ulong)plVar29 >> 0x18);
              local_90._2_1_ = (undefined1)((ulong)plVar29 >> 0x10);
              local_90._1_1_ = (undefined1)((ulong)plVar29 >> 8);
              local_90._0_1_ = SUB81(plVar29,0);
              uVar18 = 0;
              param_1[8] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(
                                                  undefined1 *)(lVar1 + (0xd - lVar19)),
                                                  local_90._6_1_),local_90._5_1_),local_90._4_1_),
                                                  local_90._3_1_),local_90._2_1_),local_90._1_1_),
                                    (undefined1)local_90);
              *(undefined4 *)(param_1 + 0xc) = 0;
              lVar10 = (long)iVar7;
              goto LAB_00e8d420;
            }
            lVar21 = lVar10 - lVar19;
            lVar10 = lVar10 + 1;
            *(undefined1 *)((long)&local_90 + lVar15) = *(undefined1 *)(lVar1 + lVar21);
            lVar15 = lVar15 + 1;
            plVar29 = local_90;
          } while (lVar10 < lVar20);
        } while( true );
      }
      goto LAB_00e8d55c;
    }
    goto LAB_00e8d654;
  }
  iVar7 = *(int *)(param_1 + 10);
  if (iVar7 != 0) goto LAB_00e8d678;
LAB_00e8d69c:
  iVar7 = *(int *)((long)param_1 + 0x54);
  if ((iVar7 == 0) ||
     (*(uint *)((long)param_1 + 0x54) = (uint)(*(int *)(param_1 + 0xb) == 0), iVar7 != 2)) {
    uVar18 = *(uint *)((long)param_1 + 0x4c);
    if (-1 < (int)uVar18) {
      uVar4 = 0;
      goto LAB_00e8da68;
    }
    if ((param_2 != (long *)0x0) || (param_3 != 0)) {
      if (param_2 != (long *)0x0) {
        param_2[2] = (long)*(int *)((long)param_1 + 0x24);
        iVar7 = *(int *)(param_1 + 0xc);
        if ((*(int *)(param_1 + 4) == 0) || (iVar7 != 0)) {
          param_2[3] = 0;
          if (-1 < iVar7) goto LAB_00e8d718;
          lVar13 = -1;
        }
        else {
          param_2[3] = (long)*(int *)(param_1 + 4);
LAB_00e8d718:
          lVar13 = param_1[8];
        }
        param_2[4] = lVar13;
        param_2[5] = param_1[7];
      }
      if (param_3 == 0) {
        if (param_2 == (long *)0x0) goto LAB_00e8da64;
        uVar22 = (ulong)(uVar18 & 0x7fffffff);
        plVar23 = (long *)0x0;
        if (((uVar18 & 0x7fffffff) != 0) && (plVar24 = (long *)param_1[3], plVar24 != (long *)0x0))
        {
          plVar27 = (long *)0x0;
          plVar29 = (long *)0x0;
          do {
            lVar13 = *(long *)(*plVar24 + 0x18);
            plVar5 = *(long **)(lVar13 + 8);
            *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + 1;
            if (plVar5 == (long *)0x0) {
              plVar5 = malloc(0x20);
              plVar23 = plVar5 + 3;
            }
            else {
              plVar23 = plVar5 + 3;
              *(long *)(lVar13 + 8) = *plVar23;
            }
            plVar5[1] = 0;
            plVar5[2] = 0;
            *plVar23 = 0;
            plVar23 = plVar5;
            if (plVar27 != (long *)0x0) {
              plVar27[3] = (long)plVar5;
              plVar23 = plVar29;
            }
            lVar8 = plVar24[1];
            lVar13 = *plVar24;
            plVar5[2] = uVar22;
            plVar5[1] = lVar8;
            *plVar5 = lVar13;
            uVar11 = plVar24[2];
            if ((long)uVar22 <= plVar24[2]) {
              uVar11 = uVar22;
            }
            plVar5[2] = uVar11;
            plVar24 = (long *)plVar24[3];
            plVar29 = plVar23;
          } while ((plVar24 != (long *)0x0) &&
                  (uVar22 = uVar22 - uVar11, plVar27 = plVar5, uVar22 != 0));
          for (; plVar29 != (long *)0x0; plVar29 = (long *)plVar29[3]) {
            *(int *)(*plVar29 + 0x10) = *(int *)(*plVar29 + 0x10) + 1;
          }
        }
        *param_2 = (long)plVar23;
        param_2[1] = (ulong)*(uint *)((long)param_1 + 0x4c) & 0x7fffffff;
      }
      else {
        puVar25 = (undefined8 *)param_1[1];
        if (puVar25 == (undefined8 *)0x0) {
          lVar13 = 0;
          lVar8 = 0;
        }
        else {
          lVar13 = puVar25[2];
          lVar8 = *(long *)*puVar25 + puVar25[1];
        }
        puVar17 = param_1 + 3;
        if (param_2 == (long *)0x0) {
          if ((long *)*puVar17 != (long *)0x0) {
            uVar22 = (ulong)uVar18 & 0x7fffffff;
            plVar23 = (long *)*puVar17;
            do {
              while( true ) {
                lVar9 = plVar23[2];
                if ((long)uVar22 < lVar9) {
                  plVar23[1] = plVar23[1] + uVar22;
                  plVar23[2] = lVar9 - uVar22;
                  *puVar17 = plVar23;
                  goto LAB_00e8d978;
                }
                lVar14 = *plVar23;
                plVar24 = (long *)plVar23[3];
                plVar27 = *(long **)(lVar14 + 0x18);
                iVar7 = *(int *)(lVar14 + 0x10) + -1;
                *(int *)(lVar14 + 0x10) = iVar7;
                if (iVar7 == 0) {
                  *(int *)(plVar27 + 2) = (int)plVar27[2] + -1;
                  *(long *)(lVar14 + 0x18) = *plVar27;
                  *plVar27 = lVar14;
                }
                *(int *)(plVar27 + 2) = (int)plVar27[2] + -1;
                plVar23[3] = plVar27[1];
                plVar27[1] = (long)plVar23;
                if (*(int *)((long)plVar27 + 0x14) != 0) break;
LAB_00e8d930:
                uVar22 = uVar22 - lVar9;
                plVar23 = plVar24;
                if (plVar24 == (long *)0x0) goto LAB_00e8d94c;
              }
              puVar26 = (undefined8 *)*plVar27;
              if ((undefined8 *)*plVar27 == (undefined8 *)0x0) {
                *plVar27 = 0;
                goto LAB_00e8d910;
              }
              do {
                puVar31 = (undefined8 *)puVar26[3];
                if ((void *)*puVar26 != (void *)0x0) {
                  free((void *)*puVar26);
                }
                free(puVar26);
                puVar26 = puVar31;
              } while (puVar31 != (undefined8 *)0x0);
              *plVar27 = 0;
              while (plVar23 != (long *)0x0) {
LAB_00e8d910:
                plVar29 = (long *)plVar23[3];
                free(plVar23);
                plVar23 = plVar29;
              }
              plVar27[1] = 0;
              if ((int)plVar27[2] != 0) goto LAB_00e8d930;
              free(plVar27);
              uVar22 = uVar22 - lVar9;
              plVar23 = plVar24;
            } while (plVar24 != (long *)0x0);
          }
LAB_00e8d94c:
          param_1[2] = 0;
          param_1[3] = 0;
        }
        else {
          lVar9 = FUN_00e8c4a8(puVar17,param_1 + 2,(ulong)uVar18 & 0x7fffffff);
          *param_2 = lVar9;
          param_2[1] = (ulong)*(uint *)((long)param_1 + 0x4c) & 0x7fffffff;
        }
LAB_00e8d978:
        lVar9 = 0;
        uVar18 = 0;
        *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0xc) = 0;
        puVar17 = puVar25;
        lVar14 = (long)*(int *)((long)param_1 + 0x5c);
        do {
          if (*(int *)(param_1 + 9) <= lVar14) goto joined_r0x00e8da4c;
          lVar10 = lVar14 + 0x1b;
          *(int *)((long)param_1 + 0x5c) = (int)(lVar14 + 1);
          if (lVar10 < lVar9) {
            lVar13 = puVar25[2];
            lVar9 = 0;
            lVar8 = *(long *)*puVar25 + puVar25[1];
            puVar17 = puVar25;
          }
          if (lVar13 <= lVar10) {
            lVar8 = puVar17[2];
            do {
              puVar17 = (undefined8 *)puVar17[3];
              lVar9 = lVar9 + lVar8;
              lVar8 = puVar17[2];
              lVar13 = lVar8 + lVar9;
            } while (lVar13 <= lVar10);
            lVar8 = *(long *)*puVar17 + puVar17[1];
          }
          uVar16 = (uint)*(byte *)(lVar8 + (lVar10 - lVar9));
          uVar18 = uVar18 + uVar16;
          *(uint *)(param_1 + 0xc) = uVar18;
          lVar14 = lVar14 + 1;
        } while (uVar16 == 0xff);
        *(uint *)(param_1 + 0xc) = uVar18 | 0x80000000;
        *(undefined4 *)(param_1 + 0xb) = 1;
      }
joined_r0x00e8da4c:
      if (param_3 != 0) {
        *(undefined4 *)((long)param_1 + 0x24) = 0;
        param_1[7] = param_1[7] + 1;
      }
    }
LAB_00e8da64:
    uVar4 = 1;
    goto LAB_00e8da68;
  }
  lVar13 = param_1[7];
  uVar4 = 0xfffffff5;
LAB_00e8d6c4:
  param_1[7] = lVar13 + 1;
LAB_00e8da68:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
LAB_00e8d134:
  free(plVar5);
  goto joined_r0x00e8d064;
  while (lVar10 = lVar15, lVar15 < iVar2) {
LAB_00e8d420:
    lVar15 = lVar10 + 1;
    lVar10 = lVar10 + 0x1b;
    *(int *)((long)param_1 + 0x5c) = (int)lVar15;
    if (lVar10 < lVar8) {
      lVar13 = puVar26[2];
      lVar8 = 0;
      lVar9 = *(long *)*puVar26 + puVar26[1];
      puVar17 = puVar26;
    }
    if (lVar13 <= lVar10) {
      lVar9 = puVar17[2];
      do {
        puVar17 = (undefined8 *)puVar17[3];
        lVar8 = lVar8 + lVar9;
        lVar9 = puVar17[2];
        lVar13 = lVar9 + lVar8;
      } while (lVar13 <= lVar10);
      lVar9 = *(long *)*puVar17 + puVar17[1];
    }
    uVar16 = (uint)*(byte *)(lVar9 + (lVar10 - lVar8));
    uVar18 = uVar18 + uVar16;
    *(uint *)(param_1 + 0xc) = uVar18;
    if (uVar16 != 0xff) {
      uVar18 = uVar18 | 0x80000000;
      *(uint *)(param_1 + 0xc) = uVar18;
      *(undefined4 *)(param_1 + 0xb) = 1;
      break;
    }
  }
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + uVar18;
  lVar10 = (long)(int)lVar15;
  do {
    if (iVar2 <= lVar10) goto LAB_00e8d55c;
    lVar15 = lVar10 + 0x1b;
    *(int *)((long)param_1 + 0x5c) = (int)(lVar10 + 1);
    if (lVar15 < lVar8) {
      lVar13 = puVar26[2];
      lVar8 = 0;
      lVar9 = *(long *)*puVar26 + puVar26[1];
      puVar17 = puVar26;
    }
    if (lVar13 <= lVar15) {
      lVar9 = puVar17[2];
      do {
        puVar17 = (undefined8 *)puVar17[3];
        lVar8 = lVar8 + lVar9;
        lVar9 = puVar17[2];
        lVar13 = lVar9 + lVar8;
      } while (lVar13 <= lVar15);
      lVar9 = *(long *)*puVar17 + puVar17[1];
    }
    uVar18 = (uint)*(byte *)(lVar9 + (lVar15 - lVar8));
    uVar16 = uVar16 + uVar18;
    *(uint *)(param_1 + 0xc) = uVar16;
    lVar10 = lVar10 + 1;
  } while (uVar18 == 0xff);
  *(uint *)(param_1 + 0xc) = uVar16 | 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 1;
LAB_00e8d55c:
  param_1[6] = (uVar22 & 0xffffffff) + 1;
  if (lVar14 < 6) {
    lVar13 = 0;
    lVar8 = lVar14;
    plVar24 = plVar23;
    do {
      plVar24 = (long *)plVar24[3];
      lVar13 = lVar13 + lVar8;
      lVar8 = plVar24[2];
    } while (lVar8 + lVar13 < 6);
    lVar8 = 0;
    *(uint *)(param_1 + 4) = *(byte *)(*(long *)*plVar24 + plVar24[1] + (5 - lVar13)) & 4;
    do {
      plVar23 = (long *)plVar23[3];
      lVar8 = lVar8 + lVar14;
      lVar14 = plVar23[2];
    } while (lVar14 + lVar8 < 6);
    lVar13 = *(long *)*plVar23 + plVar23[1];
    lVar8 = 5 - lVar8;
  }
  else {
    lVar13 = *(long *)*plVar23 + *plVar24;
    *(uint *)(param_1 + 4) = *(byte *)(lVar13 + 5) & 4;
    lVar8 = 5;
  }
  *(uint *)((long)param_1 + 0x24) = *(byte *)(lVar13 + lVar8) & 2;
  if (*(int *)((long)param_1 + 0x4c) < 0) goto LAB_00e8d654;
  goto LAB_00e8ccdc;
LAB_00e8d654:
  iVar7 = *(int *)(param_1 + 10);
  if (iVar7 == 0) goto LAB_00e8d69c;
LAB_00e8d678:
  *(uint *)(param_1 + 10) = (uint)(*(int *)(param_1 + 0xb) == 0);
  if (iVar7 != 2) goto LAB_00e8d69c;
  lVar13 = param_1[7];
  uVar4 = 0xfffffff6;
  goto LAB_00e8d6c4;
}

