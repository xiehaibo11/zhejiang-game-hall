
void FUN_00e8259c(long *param_1,long param_2,long param_3,undefined8 *param_4,uint param_5,
                 char param_6)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long *plVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  uint *puVar27;
  uint uVar28;
  ulong uVar29;
  uint *puVar30;
  uint uVar31;
  byte *pbVar32;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  lVar24 = *param_1;
  if ((param_6 == '\0') && (*(char *)(param_1[1] + 0x18) == '\0')) {
    local_a0 = *param_4;
    local_78 = 0;
    local_80 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_98 = 0;
    FUN_00e8259c(param_1[1],param_2,param_3,&local_a0,param_5,1);
    if (*(char *)(param_4 + 1) != '\0') goto LAB_00e82600;
LAB_00e82d5c:
    uVar29 = *(long *)(param_3 + 0x28) + *(long *)(param_2 + 0x28);
    if (uVar29 < 0x61) {
      uVar26 = uVar29 + 7 >> 3;
      param_4[2] = uVar29;
      param_4[3] = uVar26;
      *(undefined2 *)(param_4 + 1) = 0x101;
      if (uVar29 != 0) {
        if (uVar26 == 0) {
          lVar14 = -1;
        }
        else {
          uVar26 = 0;
          do {
            *(undefined1 *)((long)param_4 + uVar26 + 0x20) = 0xff;
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulong)param_4[3]);
          lVar14 = param_4[3] - 1;
        }
        *(byte *)((long)param_4 + lVar14 + 0x20) =
             *(byte *)((long)param_4 + lVar14 + 0x20) & (byte)(-1 << (ulong)(-(int)uVar29 & 7));
        if (*(char *)(param_4 + 1) == '\0') goto LAB_00e8317c;
      }
      goto LAB_00e82600;
    }
    piVar19 = (int *)*param_4;
    if ((piVar19 == (int *)0x0) || (*piVar19 != 0)) {
LAB_00e8317c:
      cVar2 = *(char *)(lVar24 + 0xc);
    }
    else {
      *piVar19 = 0x12;
      cVar2 = *(char *)(lVar24 + 0xc);
    }
    if (cVar2 != '\0') {
      *(undefined4 *)*param_4 = 0;
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
  }
  else {
    if (*(char *)(param_4 + 1) == '\0') goto LAB_00e82d5c;
LAB_00e82600:
    param_1[4] = 0;
    uStack_88 = param_4[3];
    local_90 = param_4[2];
    local_78 = param_4[5];
    local_80 = param_4[4];
    uStack_98 = param_4[1];
    local_a0 = *param_4;
    uVar29 = *(ulong *)(param_2 + 0x28);
    if (uVar29 <= (ulong)param_4[2]) {
      pbVar11 = (byte *)&local_80;
      if (*(char *)(lVar24 + 0x141) != '\0') {
        uStack_b8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        local_b0 = 0;
        FUN_00e83fec(param_1,lVar24 + 0x178,&local_c0);
        FUN_00e83fec(param_1,&local_c0,lVar24 + 0x158);
      }
      if (uVar29 != 0) {
        uVar26 = 0;
        uVar23 = 0x80;
        piVar19 = (int *)(lVar24 + 0x198);
        pbVar32 = pbVar11;
LAB_00e82810:
        if ((uVar23 & *pbVar32) != 0) {
          uVar28 = *(uint *)((long)param_1 + 0x1c);
          uVar10 = *(ulong *)(param_2 + 0x28);
          uVar12 = uVar26;
          if (uVar10 <= uVar26) {
            piVar16 = *(int **)(param_2 + 8);
            if ((piVar16 == (int *)0x0) || (*piVar16 != 0)) {
              uVar12 = 0;
            }
            else {
              uVar12 = 0;
              *piVar16 = 0x82;
            }
          }
          pcVar13 = (char *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar12);
          iVar6 = *(int *)(pcVar13 + 8);
          iVar7 = iVar6 - *(int *)(pcVar13 + 4);
          uStack_b8 = uVar26;
          if (iVar7 == -0x150000) {
            uVar9 = 1;
LAB_00e828b4:
            uVar25 = iVar6 + param_5;
            local_c0 = (ulong)uVar9;
            local_a8 = (ulong)uVar28;
            if (*pcVar13 == '\0') goto LAB_00e828e4;
            iVar6 = *(int *)(pcVar13 + 0xc);
            uVar28 = uVar9 | 0x10;
            local_c0 = (ulong)uVar9 | 0x10;
            local_b0 = CONCAT44(iVar6,uVar25);
          }
          else {
            if (iVar7 != -0x140000) {
              if (-1 < iVar7) {
                iVar6 = *(int *)(pcVar13 + 4);
              }
              uVar9 = 4;
              goto LAB_00e828b4;
            }
            uVar9 = 0;
            local_c0 = 0;
            uVar25 = param_5;
LAB_00e828e4:
            local_a8 = (ulong)uVar28;
            local_b0 = (ulong)uVar25;
            iVar6 = FT_MulFix((long)(int)uVar25,(long)(int)uVar28);
            local_b0 = CONCAT44(iVar6,(undefined4)local_b0);
            uVar10 = *(ulong *)(param_2 + 0x28);
            uVar28 = uVar9;
          }
          uVar9 = *(uint *)((long)param_1 + 0x1c);
          uVar12 = uVar26;
          if (uVar10 <= uVar26) {
            piVar16 = *(int **)(param_2 + 8);
            if ((piVar16 == (int *)0x0) || (*piVar16 != 0)) {
              uVar12 = 0;
            }
            else {
              uVar12 = 0;
              *piVar16 = 0x82;
            }
          }
          pcVar13 = (char *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar12);
          iVar7 = *(int *)(pcVar13 + 4);
          iVar4 = *(int *)(pcVar13 + 8) - iVar7;
          uStack_d8 = uVar26;
          if (iVar4 == -0x140000) {
            uVar31 = 2;
LAB_00e8298c:
            local_e0 = (ulong)uVar31;
            local_c8 = (ulong)uVar9;
            uVar22 = iVar7 + *(int *)(lVar24 + 0x130) * 2 + param_5;
            if (*pcVar13 == '\0') goto LAB_00e82a58;
            iVar7 = *(int *)(pcVar13 + 0x10);
            uVar9 = uVar31 | 0x10;
            local_e0 = (ulong)uVar31 | 0x10;
            local_d0 = CONCAT44(iVar7,uVar22);
            uVar31 = uVar9;
            uVar9 = uVar28 | uVar9;
          }
          else {
            if (iVar4 != -0x150000) {
              if (-1 < iVar4) {
                iVar7 = *(int *)(pcVar13 + 8);
              }
              uVar31 = 8;
              goto LAB_00e8298c;
            }
            uVar31 = 0;
            local_e0 = 0;
            uVar22 = param_5;
LAB_00e82a58:
            local_d0 = (ulong)uVar22;
            local_c8 = (ulong)uVar9;
            iVar7 = FT_MulFix((long)(int)uVar22,(long)(int)uVar9);
            local_d0 = CONCAT44(iVar7,(undefined4)local_d0);
            uVar9 = uVar28;
          }
          if (uVar9 >> 4 == 0) {
            uVar12 = (ulong)*(uint *)(lVar24 + 0x13c);
            if (*(uint *)(lVar24 + 0x13c) != 0) {
              iVar4 = *(int *)(lVar24 + 0x14c);
              if ((uVar28 & 5) == 0) {
                if ((uVar31 & 0xaaaaaaaa) != 0) {
                  uVar10 = 0;
                  piVar16 = piVar19;
                  do {
                    if ((((char)piVar16[4] == '\0') &&
                        (iVar15 = *piVar16, iVar15 - iVar4 <= (int)uVar22)) &&
                       ((int)uVar22 <= piVar16[1] + iVar4)) goto LAB_00e82768;
                    uVar10 = uVar10 + 1;
                    piVar16 = piVar16 + 5;
                  } while (uVar10 < uVar12);
                }
              }
              else if ((uVar31 & 0xaaaaaaaa) == 0) {
                uVar10 = 0;
                piVar16 = piVar19;
                do {
                  if ((((char)piVar16[4] != '\0') && (*piVar16 - iVar4 <= (int)uVar25)) &&
                     (iVar15 = piVar16[1], (int)uVar25 <= iVar15 + iVar4)) goto LAB_00e8271c;
                  uVar10 = uVar10 + 1;
                  piVar16 = piVar16 + 5;
                } while (uVar10 < uVar12);
              }
              else {
                uVar10 = 0;
                piVar16 = piVar19;
                do {
                  iVar15 = *piVar16;
                  if ((char)piVar16[4] == '\0') {
                    if ((iVar15 - iVar4 <= (int)uVar22) && ((int)uVar22 <= piVar16[1] + iVar4))
                    goto LAB_00e82768;
                  }
                  else if ((iVar15 - iVar4 <= (int)uVar25) &&
                          (iVar15 = piVar16[1], (int)uVar25 <= iVar15 + iVar4)) goto LAB_00e8271c;
                  uVar10 = uVar10 + 1;
                  piVar16 = piVar16 + 5;
                } while (uVar10 < uVar12);
              }
            }
            goto LAB_00e82a94;
          }
          goto LAB_00e82a70;
        }
        goto LAB_00e82a94;
      }
LAB_00e82ab8:
      if (param_6 == '\0') {
        if (uVar29 != 0) {
          uVar26 = 0;
          uVar23 = 0x80;
          do {
            if ((uVar23 & *pbVar11) != 0) {
              uVar28 = *(uint *)((long)param_1 + 0x1c);
              uVar10 = *(ulong *)(param_2 + 0x28);
              uVar12 = uVar26;
              if (uVar10 <= uVar26) {
                piVar19 = *(int **)(param_2 + 8);
                if ((piVar19 == (int *)0x0) || (*piVar19 != 0)) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  *piVar19 = 0x82;
                }
              }
              pcVar13 = (char *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar12);
              iVar6 = *(int *)(pcVar13 + 8);
              iVar7 = iVar6 - *(int *)(pcVar13 + 4);
              uStack_b8 = uVar26;
              if (iVar7 == -0x150000) {
                uVar9 = 0x11;
                uVar25 = 1;
LAB_00e82bcc:
                uVar31 = iVar6 + param_5;
                local_c0 = (ulong)uVar25;
                local_a8 = (ulong)uVar28;
                if (*pcVar13 == '\0') goto LAB_00e82bf8;
                local_c0 = (ulong)uVar9;
                local_b0 = CONCAT44(*(undefined4 *)(pcVar13 + 0xc),uVar31);
              }
              else {
                if (iVar7 != -0x140000) {
                  uVar9 = 0x14;
                  if (-1 < iVar7) {
                    iVar6 = *(int *)(pcVar13 + 4);
                  }
                  uVar25 = 4;
                  goto LAB_00e82bcc;
                }
                local_c0 = 0;
                uVar31 = param_5;
LAB_00e82bf8:
                local_a8 = (ulong)uVar28;
                local_b0 = (ulong)uVar31;
                uVar8 = FT_MulFix((long)(int)uVar31,(long)(int)uVar28);
                local_b0 = CONCAT44(uVar8,(undefined4)local_b0);
                uVar10 = *(ulong *)(param_2 + 0x28);
              }
              uVar28 = *(uint *)((long)param_1 + 0x1c);
              uVar12 = uVar26;
              if (uVar10 <= uVar26) {
                piVar19 = *(int **)(param_2 + 8);
                if ((piVar19 == (int *)0x0) || (*piVar19 != 0)) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  *piVar19 = 0x82;
                }
              }
              pcVar13 = (char *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar12);
              iVar6 = *(int *)(pcVar13 + 4);
              iVar7 = *(int *)(pcVar13 + 8) - iVar6;
              uStack_d8 = uVar26;
              if (iVar7 == -0x140000) {
                uVar9 = 0x12;
                uVar25 = 2;
LAB_00e82ca0:
                local_e0 = (ulong)uVar25;
                local_c8 = (ulong)uVar28;
                uVar25 = iVar6 + *(int *)(lVar24 + 0x130) * 2 + param_5;
                if (*pcVar13 == '\0') goto LAB_00e82cdc;
                local_e0 = (ulong)uVar9;
                local_d0 = CONCAT44(*(undefined4 *)(pcVar13 + 0x10),uVar25);
              }
              else {
                if (iVar7 != -0x150000) {
                  uVar9 = 0x18;
                  if (-1 < iVar7) {
                    iVar6 = *(int *)(pcVar13 + 8);
                  }
                  uVar25 = 8;
                  goto LAB_00e82ca0;
                }
                local_e0 = 0;
                uVar25 = param_5;
LAB_00e82cdc:
                local_d0 = (ulong)uVar25;
                local_c8 = (ulong)uVar28;
                uVar8 = FT_MulFix((long)(int)uVar25,(long)(int)uVar28);
                local_d0 = CONCAT44(uVar8,(undefined4)local_d0);
              }
              FUN_00e83fec(param_1,&local_c0,&local_e0);
            }
            uVar12 = uVar26 & 7;
            uVar23 = uVar23 >> 1;
            uVar26 = uVar26 + 1;
            if (uVar12 == 7) {
              pbVar11 = pbVar11 + 1;
              uVar23 = 0x80;
            }
          } while (uVar29 != uVar26);
        }
      }
      else if ((((int)param_1[4] == 0) || (0 < (int)param_1[7])) ||
              ((int)param_1[(ulong)((int)param_1[4] - 1) * 4 + 7] < 0)) {
        uStack_b8 = 0;
        local_b0 = 0;
        local_c0 = 0x31;
        uStack_d8 = 0;
        local_e0 = 0;
        local_c8 = 0;
        local_d0 = 0;
        local_a8 = (ulong)*(uint *)((long)param_1 + 0x1c);
        FUN_00e83fec(param_1,&local_c0,&local_e0);
      }
      *(undefined8 *)(param_1[2] + 0x28) = 0;
      uVar29 = (ulong)*(uint *)(param_1 + 4);
      if (*(uint *)(param_1 + 4) != 0) {
        uVar26 = 0;
        do {
          uVar23 = *(uint *)(param_1 + uVar26 * 4 + 5);
          uVar12 = uVar26;
          if ((uVar23 & 0xc) != 0) {
            uVar12 = uVar26 + 1;
          }
          if ((uVar23 >> 4 & 1) == 0) {
            puVar30 = (uint *)((long)param_1 + uVar26 * 0x20 + 0x3c);
            uVar31 = *puVar30;
            puVar27 = (uint *)((long)param_1 + uVar12 * 0x20 + 0x3c);
            uVar22 = *puVar27;
            uVar28 = uVar31 & 0xffff;
            uVar25 = -(uVar22 & 0xffff);
            uVar9 = 0;
            if ((uVar31 & 0xffff) != 0) {
              uVar9 = 0x10000 - uVar28;
            }
            uVar1 = 0;
            if ((uVar22 & 0xffff) != 0) {
              uVar1 = 0x10000 - (uVar22 & 0xffff);
            }
            if (uVar1 <= uVar9) {
              uVar9 = uVar1;
            }
            if ((int)uVar25 < (int)-uVar28) {
              uVar25 = -uVar28;
            }
            if ((uVar12 < (int)uVar29 - 1) &&
               (lVar24 = uVar12 + 1,
               *(int *)((long)param_1 + lVar24 * 0x20 + 0x3c) < (int)(uVar22 + uVar9 + 0x8000))) {
              if ((uVar26 == 0) ||
                 (*(int *)((long)param_1 + uVar26 * 0x20 + 0x1c) <= (int)(uVar31 + uVar25 + -0x8000)
                 )) {
                if ((int)-uVar25 <= (int)uVar9) goto LAB_00e82f54;
                bVar3 = *(byte *)(param_1 + lVar24 * 4 + 5);
              }
              else {
                uVar25 = 0;
                bVar3 = *(byte *)(param_1 + lVar24 * 4 + 5);
              }
              if ((bVar3 >> 4 & 1) == 0) {
                uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar9 - uVar25);
                local_c0 = uVar12;
                FUN_00e831c0(param_1[2],&local_c0);
                *puVar30 = uVar25 + *puVar30;
              }
              else {
LAB_00e82f54:
                *puVar30 = uVar25 + uVar31;
              }
            }
            else {
              if ((uVar26 == 0) ||
                 (*(int *)((long)param_1 + uVar26 * 0x20 + 0x1c) <= (int)(uVar31 + uVar25 + -0x8000)
                 )) {
                if ((int)uVar9 <= (int)-uVar25) {
                  uVar25 = uVar9;
                }
                goto LAB_00e82f54;
              }
              *puVar30 = uVar9 + uVar31;
              uVar25 = uVar9;
            }
            if ((uVar23 & 0xc) != 0) {
              *puVar27 = *puVar27 + uVar25;
            }
          }
          if (uVar26 != 0) {
            lVar24 = uVar26 - 1;
            iVar6 = (int)param_1[uVar26 * 4 + 7] - (int)param_1[lVar24 * 4 + 7];
            if (iVar6 != 0) {
              uVar8 = FT_DivFix((long)(*(int *)((long)param_1 + uVar26 * 0x20 + 0x3c) -
                                      *(int *)((long)param_1 + lVar24 * 0x20 + 0x3c)),(long)iVar6);
              *(undefined4 *)(param_1 + lVar24 * 4 + 8) = uVar8;
            }
          }
          if ((uVar23 & 0xc) != 0) {
            lVar24 = uVar12 - 1;
            uVar26 = uVar26 + 1;
            iVar6 = (int)param_1[uVar12 * 4 + 7] - (int)param_1[lVar24 * 4 + 7];
            if (iVar6 != 0) {
              uVar8 = FT_DivFix((long)(*(int *)((long)param_1 + uVar12 * 0x20 + 0x3c) -
                                      *(int *)((long)param_1 + lVar24 * 0x20 + 0x3c)),(long)iVar6);
              *(undefined4 *)(param_1 + lVar24 * 4 + 8) = uVar8;
            }
          }
          uVar29 = (ulong)*(uint *)(param_1 + 4);
          uVar26 = uVar26 + 1;
        } while (uVar26 < uVar29);
        lVar24 = param_1[2];
        uVar29 = *(ulong *)(lVar24 + 0x28);
        if (uVar29 != 0) {
          lVar14 = *(long *)(lVar24 + 0x38);
          lVar17 = *(long *)(lVar24 + 0x10);
          uVar26 = uVar29 - 1;
          do {
            uVar12 = uVar26;
            if (uVar29 <= uVar26) {
              piVar19 = *(int **)(lVar24 + 8);
              if ((piVar19 == (int *)0x0) || (*piVar19 != 0)) {
                uVar12 = 0;
              }
              else {
                uVar12 = 0;
                *piVar19 = 0x82;
              }
            }
            plVar20 = (long *)(lVar14 + uVar12 * lVar17);
            lVar18 = *plVar20;
            piVar19 = (int *)((long)param_1 + lVar18 * 0x20 + 0x3c);
            iVar7 = (int)plVar20[1];
            iVar6 = iVar7 + *piVar19;
            if ((iVar6 + 0x8000 <= *(int *)((long)param_1 + lVar18 * 0x20 + 0x5c)) &&
               (*piVar19 = iVar6, (*(byte *)(param_1 + lVar18 * 4 + 5) & 0xc) != 0)) {
              *(int *)((long)param_1 + lVar18 * 0x20 + 0x1c) =
                   *(int *)((long)param_1 + lVar18 * 0x20 + 0x1c) + iVar7;
            }
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0xffffffffffffffff);
        }
      }
      if ((param_6 == '\0') && (uVar23 = *(uint *)(param_1 + 4), uVar23 != 0)) {
        uVar29 = 0;
        puVar27 = (uint *)(param_1 + 5);
        do {
          uVar28 = *puVar27;
          if ((uVar28 >> 5 & 1) == 0) {
            uVar26 = *(ulong *)(puVar27 + 2);
            if (*(ulong *)(param_2 + 0x28) <= uVar26) {
              piVar19 = *(int **)(param_2 + 8);
              uVar26 = 0;
              if (piVar19 != (int *)0x0) {
                if (*piVar19 == 0) {
                  *piVar19 = 0x82;
                  uVar28 = *puVar27;
                }
                uVar26 = 0;
              }
            }
            lVar24 = 0xc;
            if ((uVar28 & 10) != 0) {
              lVar24 = 0x10;
            }
            puVar21 = (undefined1 *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar26)
            ;
            *(uint *)(puVar21 + lVar24) = puVar27[5];
            *puVar21 = 1;
            uVar23 = *(uint *)(param_1 + 4);
          }
          uVar29 = uVar29 + 1;
          puVar27 = puVar27 + 8;
        } while (uVar29 < uVar23);
      }
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined1 *)((long)param_4 + 9) = 0;
      if (*(long *)(lVar5 + 0x28) == local_70) {
        return;
      }
      goto LAB_00e8315c;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
LAB_00e8315c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00e82768:
  if (*(char *)(lVar24 + 0x140) == '\0') {
    uVar9 = iVar7 + 0x8000U & 0xffff0000;
    if ((*(int *)(lVar24 + 0x148) <= (int)(uVar22 - iVar15)) &&
       (uVar25 = *(int *)(lVar24 + (uVar10 & 0xffffffff) * 0x14 + 0x1a4) + 0x10000,
       (int)uVar9 <= (int)uVar25)) {
      uVar9 = uVar25;
    }
    iVar4 = uVar9 - iVar7;
  }
  else {
    iVar4 = *(int *)(lVar24 + (uVar10 & 0xffffffff) * 0x14 + 0x1a4) - iVar7;
  }
joined_r0x00e82788:
  if (uVar28 != 0) {
    local_b0 = CONCAT44(iVar6 + iVar4,(undefined4)local_b0);
    local_c0._4_4_ = (undefined4)(local_c0 >> 0x20);
    local_c0 = CONCAT44(local_c0._4_4_,uVar28) | 0x10;
  }
  if (uVar31 != 0) {
    local_d0 = CONCAT44(iVar7 + iVar4,(undefined4)local_d0);
    local_e0._4_4_ = (undefined4)(local_e0 >> 0x20);
    local_e0 = CONCAT44(local_e0._4_4_,uVar31) | 0x10;
  }
LAB_00e82a70:
  FUN_00e83fec(param_1,&local_c0,&local_e0);
  *pbVar32 = *pbVar32 & ((byte)uVar23 ^ 0xff);
LAB_00e82a94:
  uVar12 = uVar26 & 7;
  uVar23 = uVar23 >> 1;
  uVar26 = uVar26 + 1;
  if (uVar12 == 7) {
    pbVar32 = pbVar32 + 1;
    uVar23 = 0x80;
  }
  if (uVar26 == uVar29) goto LAB_00e82ab8;
  goto LAB_00e82810;
LAB_00e8271c:
  if (*(char *)(lVar24 + 0x140) == '\0') {
    uVar9 = iVar6 + 0x8000U & 0xffff0000;
    if ((*(int *)(lVar24 + 0x148) <= (int)(iVar15 - uVar25)) &&
       (uVar25 = *(int *)(lVar24 + (uVar10 & 0xffffffff) * 0x14 + 0x1a4) - 0x10000,
       (int)uVar25 <= (int)uVar9)) {
      uVar9 = uVar25;
    }
    iVar4 = uVar9 - iVar6;
  }
  else {
    iVar4 = *(int *)(lVar24 + (uVar10 & 0xffffffff) * 0x14 + 0x1a4) - iVar6;
  }
  goto joined_r0x00e82788;
}

