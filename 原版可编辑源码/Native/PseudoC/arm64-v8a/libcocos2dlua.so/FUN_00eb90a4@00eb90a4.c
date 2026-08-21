
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb90a4(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 local_90;
  long *plStack_88;
  long local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 00eb9128 with catch @ 00eb90dc */
  ogg_packet_release(param_2);
  if (-1 < *(int *)((long)param_1 + 0x4c)) {
    puVar26 = param_1 + 2;
LAB_00eb9100:
    plVar24 = (long *)param_1[1];
    if (plVar24 != (long *)0x0) {
      if (*(int *)(param_1 + 9) < 0) {
        lVar11 = plVar24[1];
        lStack_70 = plVar24[2];
      }
      else {
        lVar11 = (long)*(int *)(param_1 + 9) + 0x1b;
        while( true ) {
                    /* try { // try from 00eb9120 to 00fb9127 has its CatchHandler @ 00eb9174 */
          lVar13 = plVar24[2];
                    /* try { // try from 00eb9128 to 00fb91ab has its CatchHandler @ 00eb90dc */
          if (lVar11 < lVar13) break;
          lVar8 = *plVar24;
          plVar25 = (long *)plVar24[3];
          plVar27 = *(long **)(lVar8 + 0x18);
          iVar2 = *(int *)(lVar8 + 0x10) + -1;
          *(int *)(lVar8 + 0x10) = iVar2;
          if (iVar2 == 0) {
            *(int *)(plVar27 + 2) = (int)plVar27[2] + -1;
            *(long *)(lVar8 + 0x18) = *plVar27;
            *plVar27 = lVar8;
          }
          *(int *)(plVar27 + 2) = (int)plVar27[2] + -1;
                    /* catch() { ... } // from try @ 00eb9120 with catch @ 00eb9174 */
          plVar24[3] = plVar27[1];
          plVar27[1] = (long)plVar24;
          if (*(int *)((long)plVar27 + 0x14) != 0) {
            puVar16 = (undefined8 *)*plVar27;
            if ((undefined8 *)*plVar27 != (undefined8 *)0x0) {
              do {
                puVar30 = (undefined8 *)puVar16[3];
                if ((void *)*puVar16 != (void *)0x0) {
                  free((void *)*puVar16);
                }
                free(puVar16);
                puVar16 = puVar30;
              } while (puVar30 != (undefined8 *)0x0);
              *plVar27 = 0;
              goto joined_r0x00eb91bc;
            }
            *plVar27 = 0;
            do {
              plVar22 = (long *)plVar24[3];
              free(plVar24);
              plVar24 = plVar22;
joined_r0x00eb91bc:
            } while (plVar24 != (long *)0x0);
            plVar27[1] = 0;
            if ((int)plVar27[2] == 0) {
              free(plVar27);
            }
          }
          lVar11 = lVar11 - lVar13;
          plVar24 = plVar25;
          if (plVar25 == (long *)0x0) {
            *(undefined4 *)(param_1 + 9) = 0;
            param_1[0xb] = 0;
            *param_1 = 0;
            param_1[1] = 0;
            goto LAB_00eb9a80;
          }
        }
        lStack_70 = lVar13 - lVar11;
        lVar11 = plVar24[1] + lVar11;
        plVar24[1] = lVar11;
        plVar24[2] = lStack_70;
        param_1[1] = plVar24;
      }
      *(undefined4 *)(param_1 + 9) = 0;
      param_1[0xb] = 0;
      local_78 = 0;
      local_80 = *(long *)*plVar24 + lVar11;
      local_90 = plVar24;
      plStack_88 = plVar24;
      uVar23 = FUN_00eb71b4(&local_90,0x12);
      puVar16 = (undefined8 *)param_1[1];
      if (puVar16 == (undefined8 *)0x0) {
        puVar30 = (undefined8 *)0x0;
        lVar11 = _DAT_00000010;
LAB_00eb9284:
        lVar8 = 0;
        do {
          puVar16 = (undefined8 *)puVar16[3];
          lVar8 = lVar8 + lVar11;
          lVar11 = puVar16[2];
          lVar13 = lVar11 + lVar8;
        } while (lVar13 < 0x1b);
        lVar11 = *(long *)*puVar16 + puVar16[1];
      }
      else {
        lVar13 = puVar16[2];
        puVar30 = puVar16;
        lVar11 = lVar13;
        if (lVar13 < 0x1b) goto LAB_00eb9284;
        lVar8 = 0;
        lVar11 = *(long *)*puVar16 + puVar16[1];
      }
      *(uint *)(param_1 + 9) = (uint)*(byte *)((lVar11 - lVar8) + 0x1a);
      if (param_1[6] != (uVar23 & 0xffffffff)) {
        uVar7 = 1;
        if (param_1[6] != 0xffffffffffffffff) {
          uVar7 = 2;
        }
        *(undefined4 *)(param_1 + 10) = uVar7;
        if ((long *)param_1[3] != (long *)0x0) {
          uVar10 = (ulong)*(uint *)((long)param_1 + 0x4c);
          plVar25 = (long *)param_1[3];
          do {
            lVar12 = plVar25[2];
            if ((long)uVar10 < lVar12) {
              plVar25[1] = plVar25[1] + uVar10;
              plVar25[2] = lVar12 - uVar10;
              param_1[3] = plVar25;
              goto LAB_00eb93f4;
            }
            lVar9 = *plVar25;
            plVar27 = (long *)plVar25[3];
            plVar22 = *(long **)(lVar9 + 0x18);
            iVar2 = *(int *)(lVar9 + 0x10) + -1;
            *(int *)(lVar9 + 0x10) = iVar2;
            if (iVar2 == 0) {
              *(int *)(plVar22 + 2) = (int)plVar22[2] + -1;
              *(long *)(lVar9 + 0x18) = *plVar22;
              *plVar22 = lVar9;
            }
                    /* try { // try from 00eb9344 to 00fb934f has its CatchHandler @ 00eb93a0 */
                    /* try { // try from 00eb9350 to 00fb93d7 has its CatchHandler @ 00eb9280 */
            *(int *)(plVar22 + 2) = (int)plVar22[2] + -1;
            plVar25[3] = plVar22[1];
            plVar22[1] = (long)plVar25;
            if (*(int *)((long)plVar22 + 0x14) != 0) {
              puVar28 = (undefined8 *)*plVar22;
              if ((undefined8 *)*plVar22 != (undefined8 *)0x0) {
                do {
                  puVar29 = (undefined8 *)puVar28[3];
                  if ((void *)*puVar28 != (void *)0x0) {
                    free((void *)*puVar28);
                  }
                  free(puVar28);
                  puVar28 = puVar29;
                } while (puVar29 != (undefined8 *)0x0);
                *plVar22 = 0;
                goto joined_r0x00eb939c;
              }
              *plVar22 = 0;
              do {
                    /* catch() { ... } // from try @ 00eb9344 with catch @ 00eb93a0 */
                plVar6 = (long *)plVar25[3];
                free(plVar25);
                plVar25 = plVar6;
joined_r0x00eb939c:
              } while (plVar25 != (long *)0x0);
              plVar22[1] = 0;
              if ((int)plVar22[2] == 0) {
                free(plVar22);
              }
            }
            uVar10 = uVar10 - lVar12;
            plVar25 = plVar27;
          } while (plVar27 != (long *)0x0);
        }
        *puVar26 = 0;
        param_1[3] = 0;
LAB_00eb93f4:
        *(undefined4 *)((long)param_1 + 0x4c) = 0;
      }
      lVar12 = plVar24[2];
      if (lVar12 < 6) {
        lVar9 = 0;
        plVar25 = plVar24;
        do {
          plVar25 = (long *)plVar25[3];
          lVar9 = lVar9 + lVar12;
          lVar12 = plVar25[2];
        } while (lVar12 + lVar9 < 6);
        lVar12 = *(long *)*plVar25 + plVar25[1];
        lVar9 = 5 - lVar9;
      }
      else {
        lVar12 = *(long *)*plVar24 + plVar24[1];
        lVar9 = 5;
      }
      uVar17 = *(uint *)((long)param_1 + 0x4c);
      if ((*(byte *)(lVar12 + lVar9) & 1) == 0) {
        if (uVar17 != 0) {
          uVar10 = (ulong)uVar17;
          plVar25 = (long *)param_1[3];
          while (plVar27 = plVar25, plVar27 != (long *)0x0) {
            lVar12 = plVar27[2];
            uVar3 = uVar10 - lVar12;
            if ((long)uVar10 < lVar12) {
              plVar27[1] = plVar27[1] + uVar10;
              plVar27[2] = lVar12 - uVar10;
              param_1[3] = plVar27;
              goto LAB_00eb9614;
            }
            lVar12 = *plVar27;
            plVar25 = (long *)plVar27[3];
            plVar22 = *(long **)(lVar12 + 0x18);
            iVar2 = *(int *)(lVar12 + 0x10) + -1;
            *(int *)(lVar12 + 0x10) = iVar2;
            if (iVar2 == 0) {
              *(int *)(plVar22 + 2) = (int)plVar22[2] + -1;
              *(long *)(lVar12 + 0x18) = *plVar22;
              *plVar22 = lVar12;
            }
            *(int *)(plVar22 + 2) = (int)plVar22[2] + -1;
            plVar27[3] = plVar22[1];
            plVar22[1] = (long)plVar27;
            uVar10 = uVar3;
            if (*(int *)((long)plVar22 + 0x14) != 0) {
              puVar28 = (undefined8 *)*plVar22;
              if ((undefined8 *)*plVar22 != (undefined8 *)0x0) {
                do {
                  puVar29 = (undefined8 *)puVar28[3];
                  if ((void *)*puVar28 != (void *)0x0) {
                    free((void *)*puVar28);
                  }
                  free(puVar28);
                  puVar28 = puVar29;
                } while (puVar29 != (undefined8 *)0x0);
                *plVar22 = 0;
                goto joined_r0x00eb951c;
              }
              *plVar22 = 0;
              do {
                plVar6 = (long *)plVar27[3];
                free(plVar27);
                plVar27 = plVar6;
joined_r0x00eb951c:
              } while (plVar27 != (long *)0x0);
              plVar22[1] = 0;
              if ((int)plVar22[2] == 0) {
                free(plVar22);
              }
            }
          }
          *puVar26 = 0;
          param_1[3] = 0;
LAB_00eb9614:
          *(undefined4 *)((long)param_1 + 0x4c) = 0;
          if (*(int *)((long)param_1 + 0x54) == 0) {
            iVar2 = *(int *)(param_1 + 10);
joined_r0x00eb9788:
            if (iVar2 == 0) {
              *(undefined4 *)((long)param_1 + 0x54) = 2;
            }
          }
        }
      }
      else if (uVar17 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        uVar17 = 0;
        lVar12 = (long)*(int *)((long)param_1 + 0x5c);
        if ((long)*(int *)((long)param_1 + 0x5c) < (long)*(int *)(param_1 + 9)) {
          do {
            lVar9 = lVar12 + 1;
            lVar12 = lVar12 + 0x1b;
            *(int *)((long)param_1 + 0x5c) = (int)lVar9;
            if (lVar12 < lVar8) {
                    /* try { // try from 00eb95a0 to 00fb95a3 has its CatchHandler @ 00eb95e4 */
              lVar13 = puVar30[2];
              lVar8 = 0;
              lVar11 = *(long *)*puVar30 + puVar30[1];
              puVar16 = puVar30;
            }
            if (lVar13 <= lVar12) {
              lVar11 = puVar16[2];
              do {
                puVar16 = (undefined8 *)puVar16[3];
                lVar8 = lVar8 + lVar11;
                lVar11 = puVar16[2];
                lVar13 = lVar11 + lVar8;
              } while (lVar13 <= lVar12);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb95a0 with catch @ 00eb95e4
                        */
              lVar11 = *(long *)*puVar16 + puVar16[1];
            }
            uVar15 = (uint)*(byte *)(lVar11 + (lVar12 - lVar8));
            uVar17 = uVar17 + uVar15;
            *(uint *)(param_1 + 0xc) = uVar17;
            if (uVar15 != 0xff) {
              uVar17 = uVar17 | 0x80000000;
              *(uint *)(param_1 + 0xc) = uVar17;
              *(undefined4 *)(param_1 + 0xb) = 1;
              plVar25 = (long *)param_1[3];
              goto joined_r0x00eb9660;
            }
            lVar12 = lVar9;
          } while (lVar9 < *(int *)(param_1 + 9));
        }
        else {
          uVar17 = 0;
        }
        plVar25 = (long *)param_1[3];
joined_r0x00eb9660:
        if (plVar25 != (long *)0x0) {
          uVar10 = (ulong)(uVar17 & 0x7fffffff);
          do {
            lVar12 = plVar25[2];
            if ((long)uVar10 < lVar12) {
              plVar25[1] = plVar25[1] + uVar10;
              plVar25[2] = lVar12 - uVar10;
              param_1[3] = plVar25;
              goto LAB_00eb9768;
            }
            lVar9 = *plVar25;
            plVar27 = (long *)plVar25[3];
            plVar22 = *(long **)(lVar9 + 0x18);
            iVar2 = *(int *)(lVar9 + 0x10) + -1;
            *(int *)(lVar9 + 0x10) = iVar2;
            if (iVar2 == 0) {
              *(int *)(plVar22 + 2) = (int)plVar22[2] + -1;
              *(long *)(lVar9 + 0x18) = *plVar22;
              *plVar22 = lVar9;
            }
            *(int *)(plVar22 + 2) = (int)plVar22[2] + -1;
            plVar25[3] = plVar22[1];
            plVar22[1] = (long)plVar25;
            if (*(int *)((long)plVar22 + 0x14) != 0) {
              puVar28 = (undefined8 *)*plVar22;
              if ((undefined8 *)*plVar22 != (undefined8 *)0x0) {
                do {
                  puVar29 = (undefined8 *)puVar28[3];
                  if ((void *)*puVar28 != (void *)0x0) {
                    free((void *)*puVar28);
                  }
                  free(puVar28);
                  puVar28 = puVar29;
                } while (puVar29 != (undefined8 *)0x0);
                *plVar22 = 0;
                goto joined_r0x00eb9710;
              }
              *plVar22 = 0;
              do {
                plVar6 = (long *)plVar25[3];
                free(plVar25);
                plVar25 = plVar6;
joined_r0x00eb9710:
              } while (plVar25 != (long *)0x0);
              plVar22[1] = 0;
              if ((int)plVar22[2] == 0) {
                free(plVar22);
              }
            }
            uVar10 = uVar10 - lVar12;
            plVar25 = plVar27;
          } while (plVar27 != (long *)0x0);
        }
        *puVar26 = 0;
        param_1[3] = 0;
LAB_00eb9768:
        if (*(int *)((long)param_1 + 0x54) == 0) {
          iVar2 = *(int *)(param_1 + 10);
          goto joined_r0x00eb9788;
        }
      }
      iVar2 = *(int *)((long)param_1 + 0x5c);
      iVar1 = *(int *)(param_1 + 9);
      lVar12 = plVar24[2];
      if (iVar2 < iVar1) {
        lVar18 = 0;
        lVar14 = 0;
        lVar20 = *(long *)*plVar24 + plVar24[1];
        lVar9 = 6;
        plVar25 = plVar24;
        lVar19 = lVar12;
        if (6 < lVar12) goto LAB_00eb9818;
        do {
          lVar20 = plVar25[2];
          do {
            plVar25 = (long *)plVar25[3];
            lVar18 = lVar18 + lVar20;
            lVar20 = plVar25[2];
            lVar19 = lVar20 + lVar18;
          } while (lVar19 <= lVar9);
          lVar20 = *(long *)*plVar25 + plVar25[1];
LAB_00eb9818:
          do {
            if (lVar14 == 7) {
              uVar17 = 0;
              param_1[8] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(
                                                  undefined1 *)((lVar20 - lVar18) + 0xd),
                                                  local_90._6_1_),local_90._5_1_),local_90._4_1_),
                                                  local_90._3_1_),local_90._2_1_),local_90._1_1_),
                                    (undefined1)local_90);
              *(undefined4 *)(param_1 + 0xc) = 0;
              lVar9 = (long)iVar2;
              goto LAB_00eb986c;
            }
            lVar21 = lVar9 - lVar18;
            lVar9 = lVar9 + 1;
            *(undefined1 *)((long)&local_90 + lVar14) = *(undefined1 *)(lVar20 + lVar21);
            lVar14 = lVar14 + 1;
          } while (lVar9 < lVar19);
        } while( true );
      }
      goto LAB_00eb99b8;
    }
  }
LAB_00eb9a80:
  iVar2 = *(int *)(param_1 + 10);
  if ((iVar2 == 0) || (*(uint *)(param_1 + 10) = (uint)(*(int *)(param_1 + 0xb) == 0), iVar2 != 2))
  {
    iVar2 = *(int *)((long)param_1 + 0x54);
    if ((iVar2 == 0) ||
       (*(uint *)((long)param_1 + 0x54) = (uint)(*(int *)(param_1 + 0xb) == 0), iVar2 != 2)) {
      uVar17 = *(uint *)((long)param_1 + 0x4c);
      if (-1 < (int)uVar17) {
        uVar5 = 0;
        goto LAB_00eb9e80;
      }
      if ((param_2 != (long *)0x0) || (param_3 != 0)) {
        if (param_2 != (long *)0x0) {
          param_2[2] = (long)*(int *)((long)param_1 + 0x24);
          iVar2 = *(int *)(param_1 + 0xc);
          if ((*(int *)(param_1 + 4) == 0) || (iVar2 != 0)) {
            param_2[3] = 0;
            if (-1 < iVar2) goto LAB_00eb9b2c;
            lVar11 = -1;
          }
          else {
            param_2[3] = (long)*(int *)(param_1 + 4);
LAB_00eb9b2c:
            lVar11 = param_1[8];
          }
          param_2[4] = lVar11;
          param_2[5] = param_1[7];
        }
        if (param_3 == 0) {
          if (param_2 == (long *)0x0) goto LAB_00eb9e7c;
          uVar23 = (ulong)uVar17 & 0x7fffffff;
          plVar24 = (long *)0x0;
          if (((int)uVar23 != 0) && (plVar25 = (long *)param_1[3], plVar25 != (long *)0x0)) {
            plVar27 = (long *)0x0;
            plVar22 = (long *)0x0;
            do {
              lVar11 = *(long *)(*plVar25 + 0x18);
              plVar6 = *(long **)(lVar11 + 8);
              *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
              if (plVar6 == (long *)0x0) {
                plVar6 = malloc(0x20);
              }
              else {
                *(long *)(lVar11 + 8) = plVar6[3];
              }
              plVar6[1] = 0;
              plVar6[2] = 0;
              plVar6[3] = 0;
              plVar24 = plVar6;
              if (plVar27 != (long *)0x0) {
                plVar27[3] = (long)plVar6;
                plVar24 = plVar22;
              }
              lVar13 = plVar25[1];
              lVar11 = *plVar25;
              plVar6[2] = uVar23;
              plVar6[1] = lVar13;
              *plVar6 = lVar11;
              uVar10 = plVar25[2];
              if ((long)uVar23 <= plVar25[2]) {
                uVar10 = uVar23;
              }
              plVar6[2] = uVar10;
              plVar25 = (long *)plVar25[3];
              plVar22 = plVar24;
            } while ((plVar25 != (long *)0x0) &&
                    (uVar23 = uVar23 - uVar10, plVar27 = plVar6, uVar23 != 0));
            for (; plVar22 != (long *)0x0; plVar22 = (long *)plVar22[3]) {
              *(int *)(*plVar22 + 0x10) = *(int *)(*plVar22 + 0x10) + 1;
            }
          }
          *param_2 = (long)plVar24;
                    /* try { // try from 00eb9e5c to 00fb9e67 has its CatchHandler @ 00eb9f2c */
          param_2[1] = (ulong)*(uint *)((long)param_1 + 0x4c) & 0x7fffffff;
        }
        else {
          puVar26 = (undefined8 *)param_1[1];
          if (puVar26 == (undefined8 *)0x0) {
            lVar13 = 0;
            lVar11 = 0;
            if (param_2 != (long *)0x0) goto LAB_00eb9b64;
LAB_00eb9c68:
            plVar24 = (long *)param_1[3];
            if (plVar24 != (long *)0x0) {
              uVar23 = (ulong)*(uint *)((long)param_1 + 0x4c) & 0x7fffffff;
              do {
                lVar8 = plVar24[2];
                if ((long)uVar23 < lVar8) {
                  plVar24[1] = plVar24[1] + uVar23;
                  plVar24[2] = lVar8 - uVar23;
                  param_1[3] = plVar24;
                  goto LAB_00eb9d80;
                }
                lVar12 = *plVar24;
                plVar27 = (long *)plVar24[3];
                plVar25 = *(long **)(lVar12 + 0x18);
                iVar2 = *(int *)(lVar12 + 0x10) + -1;
                *(int *)(lVar12 + 0x10) = iVar2;
                if (iVar2 == 0) {
                  *(int *)(plVar25 + 2) = (int)plVar25[2] + -1;
                  *(long *)(lVar12 + 0x18) = *plVar25;
                  *plVar25 = lVar12;
                }
                *(int *)(plVar25 + 2) = (int)plVar25[2] + -1;
                plVar24[3] = plVar25[1];
                plVar25[1] = (long)plVar24;
                if (*(int *)((long)plVar25 + 0x14) != 0) {
                  puVar16 = (undefined8 *)*plVar25;
                  if ((undefined8 *)*plVar25 != (undefined8 *)0x0) {
                    do {
                      puVar30 = (undefined8 *)puVar16[3];
                      if ((void *)*puVar16 != (void *)0x0) {
                        free((void *)*puVar16);
                      }
                      free(puVar16);
                      puVar16 = puVar30;
                    } while (puVar30 != (undefined8 *)0x0);
                    *plVar25 = 0;
                    goto joined_r0x00eb9d24;
                  }
                  *plVar25 = 0;
                  do {
                    plVar22 = (long *)plVar24[3];
                    free(plVar24);
                    plVar24 = plVar22;
joined_r0x00eb9d24:
                  } while (plVar24 != (long *)0x0);
                  plVar25[1] = 0;
                  if ((int)plVar25[2] == 0) {
                    free(plVar25);
                  }
                }
                uVar23 = uVar23 - lVar8;
                plVar24 = plVar27;
              } while (plVar27 != (long *)0x0);
            }
            param_1[2] = 0;
            param_1[3] = 0;
          }
          else {
            lVar11 = puVar26[2];
            lVar13 = *(long *)*puVar26 + puVar26[1];
            if (param_2 == (long *)0x0) goto LAB_00eb9c68;
LAB_00eb9b64:
            lVar8 = FUN_00eb86dc(param_1 + 3,param_1 + 2,
                                 *(uint *)((long)param_1 + 0x4c) & 0x7fffffff);
            *param_2 = lVar8;
            param_2[1] = (ulong)*(uint *)((long)param_1 + 0x4c) & 0x7fffffff;
          }
LAB_00eb9d80:
          lVar8 = 0;
          uVar17 = 0;
          *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 *)(param_1 + 0xc) = 0;
          puVar16 = puVar26;
          lVar12 = (long)*(int *)((long)param_1 + 0x5c);
          do {
            if (*(int *)(param_1 + 9) <= lVar12) goto joined_r0x00eb9e44;
            lVar9 = lVar12 + 0x1b;
            *(int *)((long)param_1 + 0x5c) = (int)(lVar12 + 1);
            if (lVar9 < lVar8) {
              lVar11 = puVar26[2];
              lVar8 = 0;
              lVar13 = *(long *)*puVar26 + puVar26[1];
              puVar16 = puVar26;
            }
            if (lVar11 <= lVar9) {
              lVar13 = puVar16[2];
              do {
                puVar16 = (undefined8 *)puVar16[3];
                lVar8 = lVar8 + lVar13;
                lVar13 = puVar16[2];
                lVar11 = lVar13 + lVar8;
              } while (lVar11 <= lVar9);
              lVar13 = *(long *)*puVar16 + puVar16[1];
            }
            uVar15 = (uint)*(byte *)(lVar13 + (lVar9 - lVar8));
            uVar17 = uVar17 + uVar15;
            *(uint *)(param_1 + 0xc) = uVar17;
            lVar12 = lVar12 + 1;
          } while (uVar15 == 0xff);
                    /* try { // try from 00eb9e30 to 00fb9e37 has its CatchHandler @ 00eb9f2c */
                    /* try { // try from 00eb9e38 to 00fb9e5b has its CatchHandler @ 00eb9dc8 */
          *(uint *)(param_1 + 0xc) = uVar17 | 0x80000000;
          *(undefined4 *)(param_1 + 0xb) = 1;
        }
joined_r0x00eb9e44:
        if (param_3 != 0) {
          *(undefined4 *)((long)param_1 + 0x24) = 0;
          param_1[7] = param_1[7] + 1;
        }
      }
LAB_00eb9e7c:
      uVar5 = 1;
      goto LAB_00eb9e80;
    }
    lVar11 = param_1[7];
    uVar5 = 0xfffffff5;
  }
  else {
    lVar11 = param_1[7];
    uVar5 = 0xfffffff6;
  }
  param_1[7] = lVar11 + 1;
LAB_00eb9e80:
                    /* try { // try from 00eb9e90 to 00fb9e97 has its CatchHandler @ 00eb9f28 */
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* try { // try from 00eb9e98 to 00fb9eb7 has its CatchHandler @ 00eb9dc8 */
  return;
  while (lVar9 = lVar14, lVar14 != iVar1) {
LAB_00eb986c:
    lVar14 = lVar9 + 1;
    lVar9 = lVar9 + 0x1b;
    *(int *)((long)param_1 + 0x5c) = (int)lVar14;
    if (lVar9 < lVar8) {
      lVar13 = puVar30[2];
      lVar8 = 0;
      lVar11 = *(long *)*puVar30 + puVar30[1];
      puVar16 = puVar30;
    }
    if (lVar13 <= lVar9) {
      lVar11 = puVar16[2];
      do {
        puVar16 = (undefined8 *)puVar16[3];
        lVar8 = lVar8 + lVar11;
        lVar11 = puVar16[2];
        lVar13 = lVar11 + lVar8;
      } while (lVar13 <= lVar9);
      lVar11 = *(long *)*puVar16 + puVar16[1];
    }
    uVar15 = (uint)*(byte *)(lVar11 + (lVar9 - lVar8));
    uVar17 = uVar17 + uVar15;
    *(uint *)(param_1 + 0xc) = uVar17;
    if (uVar15 != 0xff) {
      uVar17 = uVar17 | 0x80000000;
      *(uint *)(param_1 + 0xc) = uVar17;
      *(undefined4 *)(param_1 + 0xb) = 1;
      break;
    }
  }
  uVar15 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + uVar17;
  lVar9 = (long)(int)lVar14;
  do {
    if (iVar1 <= lVar9) goto LAB_00eb99b8;
    lVar14 = lVar9 + 0x1b;
    *(int *)((long)param_1 + 0x5c) = (int)(lVar9 + 1);
    if (lVar14 < lVar8) {
      lVar13 = puVar30[2];
      lVar8 = 0;
      lVar11 = *(long *)*puVar30 + puVar30[1];
      puVar16 = puVar30;
    }
    if (lVar13 <= lVar14) {
      lVar11 = puVar16[2];
      do {
        puVar16 = (undefined8 *)puVar16[3];
        lVar8 = lVar8 + lVar11;
        lVar11 = puVar16[2];
        lVar13 = lVar11 + lVar8;
      } while (lVar13 <= lVar14);
      lVar11 = *(long *)*puVar16 + puVar16[1];
    }
    uVar17 = (uint)*(byte *)(lVar11 + (lVar14 - lVar8));
    uVar15 = uVar15 + uVar17;
    *(uint *)(param_1 + 0xc) = uVar15;
    lVar9 = lVar9 + 1;
  } while (uVar17 == 0xff);
  *(uint *)(param_1 + 0xc) = uVar15 | 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 1;
LAB_00eb99b8:
  param_1[6] = (uVar23 & 0xffffffff) + 1;
  if (lVar12 < 6) {
    lVar11 = 0;
    lVar13 = lVar12;
    plVar25 = plVar24;
    do {
      plVar25 = (long *)plVar25[3];
      lVar11 = lVar11 + lVar13;
      lVar13 = plVar25[2];
    } while (lVar13 + lVar11 < 6);
    lVar13 = 0;
    *(uint *)(param_1 + 4) = *(byte *)(((*(long *)*plVar25 + plVar25[1]) - lVar11) + 5) & 4;
    do {
      plVar24 = (long *)plVar24[3];
      lVar13 = lVar13 + lVar12;
      lVar12 = plVar24[2];
    } while (lVar12 + lVar13 < 6);
    lVar11 = *(long *)*plVar24 + plVar24[1];
    lVar13 = 5 - lVar13;
  }
  else {
    lVar11 = *(long *)*plVar24 + plVar24[1];
    *(uint *)(param_1 + 4) = *(byte *)(lVar11 + 5) & 4;
    lVar13 = 5;
  }
  *(uint *)((long)param_1 + 0x24) = *(byte *)(lVar11 + lVar13) & 2;
  if (*(int *)((long)param_1 + 0x4c) < 0) goto LAB_00eb9a80;
  goto LAB_00eb9100;
}

