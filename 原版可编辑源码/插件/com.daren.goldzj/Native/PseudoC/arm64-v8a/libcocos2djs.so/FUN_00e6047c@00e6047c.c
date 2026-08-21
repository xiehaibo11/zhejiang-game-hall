
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00e6047c(long *param_1,long param_2)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  uint *puVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  undefined1 uVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  uint uVar44;
  ulong uVar45;
  ulong uVar46;
  long lVar47;
  int iVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined8 uVar53;
  long lVar54;
  uint local_c4a4;
  uint local_c494;
  long local_c450 [9];
  int local_c408;
  ulong local_c400;
  int local_ba20;
  ulong local_ba18;
  undefined4 local_b038;
  uint *local_b030;
  undefined8 local_91d8;
  long alStack_91d0 [9];
  uint local_9188;
  undefined4 uStack_9184;
  uint local_9180 [2];
  long lStack_9178;
  undefined8 local_9170;
  undefined8 uStack_9168;
  undefined8 local_9160;
  undefined8 local_9158;
  undefined8 local_9150;
  uint local_9138;
  
  lVar12 = tpidr_el0;
  lVar32 = *(long *)(lVar12 + 0x28);
  uVar53 = *(undefined8 *)(param_2 + 0xa8);
  *(uint *)(param_1 + 9) = (uint)*(ushort *)(param_2 + 0x88);
  iVar17 = FT_Select_Charmap(param_2,0x756e6963);
  if (iVar17 != 0) goto LAB_00e61360;
  lVar49 = *(long *)(param_2 + 0xb8);
  puVar20 = (uint *)(param_1 + 0x917);
  memset(local_c450 + 1,0,0x1430);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *puVar20 = 0;
  pcVar19 = *(char **)((&PTR_DAT_01c97170)[*(uint *)(*param_1 + 8)] + 0x20);
  local_c450[0] = lVar49;
  do {
    cVar8 = *pcVar19;
    if (cVar8 == '\0') goto LAB_00e6057c;
    while (cVar8 == ' ') {
      pcVar19 = pcVar19 + 1;
      cVar8 = *pcVar19;
    }
    pcVar19 = (char *)FUN_00e62148(pcVar19,param_1,&local_91d8,local_9180);
  } while ((1 < local_9180[0]) || (CONCAT44(local_91d8._4_4_,(int)local_91d8) == 0));
  iVar17 = FT_Load_Glyph(param_2,CONCAT44(local_91d8._4_4_,(int)local_91d8),1);
  if ((iVar17 == 0) && (lVar49 = *(long *)(param_2 + 0x98), 0 < *(short *)(lVar49 + 0xca))) {
    memset(local_9180,0,0x9100);
    local_9138 = *(uint *)(param_1 + 9);
    local_b038 = 0;
    uStack_9168 = 0x10000;
    local_9170 = 0x10000;
    local_9158 = 0;
    local_9160 = 0;
    local_9150 = 0;
    local_b030 = local_9180;
    lStack_9178 = param_2;
    iVar17 = FUN_00e6266c(local_c450,lVar49 + 200);
    if (iVar17 != 0) goto LAB_00e6057c;
    local_9188 = 0;
    iVar17 = FUN_00e62d8c(local_c450,0);
    if (iVar17 != 0) goto LAB_00e6057c;
    FUN_00e63588(local_c450,0,0,0);
    if (0 < local_c408) {
      local_9188 = 0;
      uVar33 = local_c400 + (long)local_c408 * 0x50;
      do {
        uVar37 = *(ulong *)(local_c400 + 0x20);
        if ((((uVar37 != 0) && (local_c400 < uVar37)) && (local_c400 == *(ulong *)(uVar37 + 0x20)))
           && (local_9188 < 0x10)) {
          lVar54 = (long)*(short *)(local_c400 + 2) - (long)*(short *)(uVar37 + 2);
          uVar37 = (ulong)local_9188;
          lVar49 = -lVar54;
          if (-1 < lVar54) {
            lVar49 = lVar54;
          }
          local_9188 = local_9188 + 1;
          param_1[uVar37 * 3 + 0xd] = lVar49;
        }
        local_c400 = local_c400 + 0x50;
      } while (local_c400 < uVar33);
    }
    FUN_00e637c8(&local_9188,param_1 + 0xd,(ulong)local_9138 / 100);
    *(uint *)(param_1 + 0xc) = local_9188;
    local_9188 = 0;
    iVar17 = FUN_00e62d8c(local_c450,1);
    if (iVar17 != 0) goto LAB_00e6057c;
    FUN_00e63588(local_c450,0,0,1);
    if (0 < local_ba20) {
      local_9188 = 0;
      uVar33 = local_ba18 + (long)local_ba20 * 0x50;
      do {
        uVar37 = *(ulong *)(local_ba18 + 0x20);
        if (((uVar37 != 0) && (local_ba18 < uVar37)) &&
           ((local_ba18 == *(ulong *)(uVar37 + 0x20) && (local_9188 < 0x10)))) {
          lVar54 = (long)*(short *)(local_ba18 + 2) - (long)*(short *)(uVar37 + 2);
          uVar37 = (ulong)local_9188;
          lVar49 = -lVar54;
          if (-1 < lVar54) {
            lVar49 = lVar54;
          }
          local_9188 = local_9188 + 1;
          param_1[uVar37 * 3 + 0x918] = lVar49;
        }
        local_ba18 = local_ba18 + 0x50;
      } while (local_ba18 < uVar33);
    }
    FUN_00e637c8(&local_9188,param_1 + 0x918,(ulong)local_9138 / 100);
    *puVar20 = local_9188;
    if ((int)param_1[0xc] == 0) goto LAB_00e607a4;
LAB_00e60588:
    uVar33 = param_1[0xd];
  }
  else {
LAB_00e6057c:
    if ((int)param_1[0xc] != 0) goto LAB_00e60588;
LAB_00e607a4:
    uVar33 = (ulong)*(uint *)(param_1 + 9) * 0x32 >> 0xb;
  }
  param_1[0x3d] = (long)uVar33 / 5;
  param_1[0x3e] = uVar33;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  if (*puVar20 == 0) {
    uVar33 = (ulong)*(uint *)(param_1 + 9) * 0x32 >> 0xb;
  }
  else {
    uVar33 = param_1[0x918];
  }
  param_1[0x949] = uVar33;
  param_1[0x948] = (long)uVar33 / 5;
  *(undefined1 *)(param_1 + 0x94a) = 0;
  FUN_00e639fc(local_c450);
  puVar20 = (uint *)(&DAT_0197959c + (ulong)*(uint *)(*param_1 + 0xc) * 8);
  uVar31 = *puVar20;
  if (uVar31 == 0x1469) {
    uVar31 = *(uint *)((long)param_1 + 0x4a54);
  }
  else {
    uVar7 = *(uint *)(param_1 + 9);
    puVar2 = (uint *)((long)param_1 + 0x4a54);
    do {
      pcVar19 = &DAT_01978130 + uVar31;
      cVar8 = *pcVar19;
      if (cVar8 != '\0') {
        lVar49 = 0;
        lVar54 = 0;
        local_c4a4 = 0;
        local_c494 = 0;
joined_r0x00e608b4:
        while (cVar8 == ' ') {
          pcVar19 = pcVar19 + 1;
          cVar8 = *pcVar19;
        }
        pcVar19 = (char *)FUN_00e62148(pcVar19,param_1,&local_9188,&local_91d8);
        uVar31 = local_9188;
        iVar17 = (int)local_91d8;
        if ((int)local_91d8 != 0) {
          lVar43 = CONCAT44(uStack_9184,local_9188);
          iVar48 = 0;
          bVar13 = false;
          lVar47 = 0x7fffffff;
          if ((puVar20[1] & 1) != 0) {
            lVar47 = -0x80000000;
          }
LAB_00e60b88:
          lVar51 = lVar47;
          bVar14 = bVar13;
          if (((lVar43 != 0) && (iVar18 = FT_Load_Glyph(param_2,uVar31,1), iVar18 == 0)) &&
             (lVar41 = *(long *)(param_2 + 0x98), 2 < *(short *)(lVar41 + 0xca))) {
            if (0 < *(short *)(lVar41 + 200)) {
              lVar5 = *(long *)(lVar41 + 0xd0);
              lVar6 = *(long *)(lVar41 + 0xd8);
              uVar33 = 0;
              uVar38 = 0;
              uVar36 = 0;
              uVar25 = 0;
              lVar39 = 0;
              uVar37 = 0xffffffff;
              do {
                sVar10 = *(short *)(*(long *)(lVar41 + 0xe0) + uVar33 * 2);
                uVar44 = (uint)sVar10;
                if ((int)uVar25 < (int)sVar10) {
                  lVar24 = (long)(int)uVar25 + -1;
                  plVar27 = (long *)(lVar5 + 8 + (long)(int)uVar25 * 0x10);
                  lVar21 = (long)(int)uVar44;
                  uVar34 = uVar37;
                  if ((puVar20[1] & 3) == 0) {
                    do {
                      while( true ) {
                        lVar29 = *plVar27;
                        uVar22 = (uint)uVar34;
                        if (((int)uVar22 < 0) || (lVar29 < lVar39)) break;
                        if (lVar49 <= lVar29) {
                          lVar49 = lVar29;
                        }
                        lVar24 = lVar24 + 1;
                        plVar27 = plVar27 + 2;
                        if (lVar21 <= lVar24) goto LAB_00e60c9c;
                      }
                      if (lVar29 <= lVar54) {
                        lVar54 = lVar29;
                      }
                      uVar22 = (int)lVar24 + 1;
                      uVar34 = (ulong)uVar22;
                      lVar24 = lVar24 + 1;
                      plVar27 = plVar27 + 2;
                      lVar39 = lVar29;
                    } while (lVar24 < lVar21);
                  }
                  else {
                    do {
                      lVar29 = *plVar27;
                      if (((int)uVar34 < 0) || (lVar39 < lVar29)) {
                        if (lVar49 <= lVar29) {
                          lVar49 = lVar29;
                        }
                        uVar34 = (ulong)((int)lVar24 + 1);
                        lVar39 = lVar29;
                      }
                      else if (lVar29 <= lVar54) {
                        lVar54 = lVar29;
                      }
                      uVar22 = (uint)uVar34;
                      lVar24 = lVar24 + 1;
                      plVar27 = plVar27 + 2;
                    } while (lVar24 < lVar21);
                  }
LAB_00e60c9c:
                  if (uVar22 != (uint)uVar37) {
                    uVar38 = uVar25;
                    uVar36 = uVar44;
                  }
                  uVar37 = (ulong)uVar22;
                }
                uVar33 = uVar33 + 1;
                uVar25 = uVar44 + 1;
              } while (uVar33 != ((long)*(short *)(lVar41 + 200) & 0xffffffffU));
              uVar25 = (uint)uVar37;
              if ((int)uVar25 < 0) goto LAB_00e60e84;
              lVar41 = *(long *)(lVar5 + (-(uVar37 >> 0x1f) & 0xfffffff000000000 | uVar37 << 4));
              uVar44 = uVar25;
              if ((*(byte *)(lVar6 + (int)uVar25) & 3) != 1) {
                uVar44 = 0xffffffff;
              }
              uVar33 = (ulong)uVar44;
              uVar45 = uVar37;
              uVar34 = uVar33;
              do {
                uVar44 = (int)uVar45 - 1;
                if ((int)uVar45 <= (int)uVar38) {
                  uVar44 = uVar36;
                }
                lVar21 = *(long *)(lVar5 + (long)(int)uVar44 * 0x10 + 8) - lVar39;
                lVar24 = -lVar21;
                if (-1 < lVar21) {
                  lVar24 = lVar21;
                }
                uVar42 = uVar37;
                if (5 < lVar24) {
                  lVar29 = *(long *)(lVar5 + (long)(int)uVar44 * 0x10) - lVar41;
                  lVar21 = -lVar29;
                  if (-1 < lVar29) {
                    lVar21 = lVar29;
                  }
                  uVar46 = uVar45;
                  if (lVar21 <= lVar24 * 0x14) break;
                }
                bVar16 = (*(byte *)(lVar6 + (int)uVar44) & 3) != 1;
                uVar22 = uVar44;
                if (bVar16) {
                  uVar22 = (uint)uVar33;
                }
                uVar33 = (ulong)uVar22;
                uVar22 = uVar44;
                if (bVar16 || -1 < (int)(uint)uVar34) {
                  uVar22 = (uint)uVar34;
                }
                uVar34 = (ulong)uVar22;
                uVar45 = (ulong)uVar44;
                uVar46 = uVar37;
              } while (uVar44 != uVar25);
              do {
                uVar44 = uVar38;
                if ((int)uVar42 < (int)uVar36) {
                  uVar44 = (int)uVar42 + 1;
                }
                plVar27 = (long *)(lVar5 + (long)(int)uVar44 * 0x10);
                lVar21 = plVar27[1] - lVar39;
                lVar24 = -lVar21;
                if (-1 < lVar21) {
                  lVar24 = lVar21;
                }
                if (5 < lVar24) {
                  lVar29 = *plVar27 - lVar41;
                  lVar21 = -lVar29;
                  if (-1 < lVar29) {
                    lVar21 = lVar29;
                  }
                  uVar45 = uVar42;
                  if (lVar21 <= lVar24 * 0x14) break;
                }
                bVar16 = (*(byte *)(lVar6 + (int)uVar44) & 3) != 1;
                uVar22 = uVar44;
                if (bVar16) {
                  uVar22 = (uint)uVar34;
                }
                uVar34 = (ulong)uVar22;
                uVar22 = uVar44;
                if (bVar16 || -1 < (int)(uint)uVar33) {
                  uVar22 = (uint)uVar33;
                }
                uVar33 = (ulong)uVar22;
                uVar45 = uVar37;
                uVar42 = (ulong)uVar44;
              } while (uVar44 != uVar25);
              uVar9 = (ushort)puVar20[1];
              if ((uVar9 >> 4 & 1) == 0) {
LAB_00e60e0c:
                uVar44 = (uint)uVar34 | (uint)uVar33;
                uVar37 = uVar46;
              }
              else {
                lVar21 = *(long *)(lVar5 + (-(uVar45 >> 0x1f) & 0xfffffff000000000 | uVar45 << 4)) -
                         *(long *)(lVar5 + (-(uVar46 >> 0x1f) & 0xfffffff000000000 | uVar46 << 4));
                uVar42 = (ulong)*(uint *)(param_1 + 9) / 0x19;
                lVar24 = -lVar21;
                if (-1 < lVar21) {
                  lVar24 = lVar21;
                }
                if (((long)uVar42 <= lVar24) ||
                   (uVar44 = (uint)uVar46,
                   (int)(uVar36 - uVar38) < (int)((2 - uVar44) + (int)uVar45))) goto LAB_00e60e0c;
                do {
                  uVar22 = (int)uVar37 - 1;
                  if ((int)uVar37 <= (int)uVar38) {
                    uVar22 = uVar36;
                  }
                  uVar37 = (ulong)uVar22;
                  lVar24 = *(long *)(lVar5 + (-(ulong)(uVar22 >> 0x1f) & 0xfffffff000000000 |
                                             uVar37 << 4));
                } while ((lVar24 == lVar41) && (uVar22 != uVar25));
                if (uVar22 == uVar25) goto LAB_00e60ea8;
                uVar30 = false;
                uVar23 = 0;
                uVar26 = 0;
                uVar28 = uVar45;
                uVar37 = uVar45;
                do {
                  uVar25 = (uint)uVar28;
                  if ((bool)uVar30) {
                    lVar21 = (long)(int)uVar37;
                  }
                  else {
                    lVar21 = (long)(int)uVar25;
                    uVar30 = true;
                    uVar22 = uVar25;
                    if ((*(byte *)(lVar6 + lVar21) & 3) != 1) {
                      uVar22 = 0xffffffff;
                    }
                    uVar23 = (ulong)uVar22;
                    uVar26 = uVar23;
                    uVar37 = uVar28;
                  }
                  iVar18 = (int)uVar37;
                  plVar3 = (long *)(lVar5 + lVar21 * 0x10);
                  lVar21 = plVar3[1];
                  uVar22 = uVar38;
                  if ((int)uVar25 < (int)uVar36) {
                    uVar22 = uVar25 + 1;
                  }
                  uVar28 = (ulong)uVar22;
                  lVar11 = lVar39 - lVar21;
                  lVar29 = -lVar11;
                  if (-1 < lVar11) {
                    lVar29 = lVar11;
                  }
                  if ((long)(ulong)(*(uint *)(param_1 + 9) >> 2) < lVar29) {
                    uVar30 = false;
                  }
                  else {
                    plVar1 = (long *)(lVar5 + (long)(int)uVar22 * 0x10);
                    lVar11 = plVar1[1] - lVar21;
                    lVar29 = -lVar11;
                    if (-1 < lVar11) {
                      lVar29 = lVar11;
                    }
                    if (lVar29 < 6) {
                      lVar52 = *plVar3;
                      lVar40 = *plVar1;
                      lVar50 = lVar40 - lVar52;
                    }
                    else {
                      lVar40 = *plVar1;
                      lVar52 = *plVar3;
                      lVar50 = lVar40 - lVar52;
                      lVar11 = -lVar50;
                      if (-1 < lVar50) {
                        lVar11 = lVar50;
                      }
                      if (lVar11 <= lVar29 * 0x14) {
                        uVar30 = false;
                        goto joined_r0x00e60ac0;
                      }
                    }
                    bVar16 = (*(byte *)(lVar6 + (int)uVar22) & 3) != 1;
                    uVar25 = uVar22;
                    if (bVar16) {
                      uVar25 = (uint)uVar26;
                    }
                    uVar26 = (ulong)uVar25;
                    uVar25 = uVar22;
                    if (bVar16 || -1 < (int)(uint)uVar23) {
                      uVar25 = (uint)uVar23;
                    }
                    uVar23 = (ulong)uVar25;
                    if (lVar24 < lVar41 != lVar40 <= lVar52) {
                      lVar11 = -lVar50;
                      if (-1 < lVar50) {
                        lVar11 = lVar50;
                      }
                      if ((long)uVar42 <= lVar11) {
                        uVar34 = uVar26;
                        goto LAB_00e60af4;
                      }
                    }
                  }
joined_r0x00e60ac0:
                } while (uVar22 != uVar44);
                uVar44 = (uint)uVar34 | (uint)uVar33;
                uVar37 = uVar46;
              }
              goto joined_r0x00e60b60;
            }
            lVar39 = 0;
LAB_00e60e84:
            uVar9 = (ushort)puVar20[1];
            bVar14 = false;
            lVar41 = lVar39 - lVar47;
            goto joined_r0x00e60e6c;
          }
          goto LAB_00e60ea8;
        }
        goto LAB_00e60eec;
      }
      lVar54 = 0;
      lVar49 = 0;
      local_c494 = 0;
      local_c4a4 = 0;
LAB_00e60f2c:
      if (local_c4a4 != 0 || local_c494 != 0) {
        if (1 < local_c494) {
          uVar37 = 0;
          uVar33 = 1;
          do {
            lVar47 = local_c450[uVar33];
            uVar34 = uVar37;
            do {
              if (local_c450[uVar34 & 0xffffffff] <= lVar47) break;
              uVar45 = uVar34 - 1;
              local_c450[uVar34 + 1] = local_c450[uVar34 & 0xffffffff];
              local_c450[uVar34 & 0xffffffff] = lVar47;
              uVar34 = uVar45;
            } while ((int)uVar45 != -1);
            uVar33 = uVar33 + 1;
            uVar37 = uVar37 + 1;
          } while (uVar33 != local_c494);
        }
        if (1 < local_c4a4) {
          uVar37 = 0;
          uVar33 = 1;
          do {
            lVar47 = *(long *)(local_9180 + uVar33 * 2);
            uVar34 = uVar37;
            do {
              if (*(long *)(local_9180 + (uVar34 & 0xffffffff) * 2) <= lVar47) break;
              uVar45 = uVar34 - 1;
              (&lStack_9178)[uVar34] = *(long *)(local_9180 + (uVar34 & 0xffffffff) * 2);
              *(long *)(local_9180 + (uVar34 & 0xffffffff) * 2) = lVar47;
              uVar34 = uVar45;
            } while ((int)uVar45 != -1);
            uVar33 = uVar33 + 1;
            uVar37 = uVar37 + 1;
          } while (uVar33 != local_c4a4);
        }
        uVar33 = (ulong)*puVar2;
        plVar27 = param_1 + uVar33 * 9 + 0x94b;
        plVar3 = param_1 + uVar33 * 9 + 0x94e;
        *puVar2 = *puVar2 + 1;
        if (local_c4a4 == 0) {
          lVar47 = local_c450[local_c494 >> 1];
LAB_00e61084:
          *plVar3 = lVar47;
          *plVar27 = lVar47;
LAB_00e6108c:
          uVar31 = (uint)(ushort)puVar20[1];
        }
        else {
          lVar47 = *(long *)(local_9180 + (ulong)(local_c4a4 >> 1) * 2);
          if (local_c494 == 0) goto LAB_00e61084;
          *plVar27 = lVar47;
          lVar43 = local_c450[local_c494 >> 1];
          *plVar3 = lVar43;
          if (lVar43 == lVar47) goto LAB_00e6108c;
          uVar31 = (uint)(ushort)puVar20[1];
          if (lVar47 <= lVar43 != (((ushort)puVar20[1] & 3) != 0)) {
            lVar43 = lVar43 + lVar47;
            if (lVar43 < 0) {
              lVar43 = lVar43 + 1;
            }
            *plVar3 = lVar43 >> 1;
            *plVar27 = lVar43 >> 1;
          }
        }
        param_1[uVar33 * 9 + 0x951] = lVar49;
        param_1[uVar33 * 9 + 0x952] = lVar54;
        *(uint *)(param_1 + uVar33 * 9 + 0x953) = (uVar31 & 1) << 1;
        uVar9 = (ushort)puVar20[1];
        if ((uVar9 & 0xe) != 0) {
          uVar31 = (uVar9 & 2 | uVar31 & 1) << 1 | (uVar9 >> 2 & 1) << 3;
          if ((uVar9 & 8) != 0) {
            uVar31 = uVar31 | 0x10;
          }
          *(uint *)(param_1 + uVar33 * 9 + 0x953) = uVar31;
        }
      }
      puVar20 = puVar20 + 2;
      uVar31 = *puVar20;
    } while (uVar31 != 0x1469);
    uVar31 = *puVar2;
  }
  uVar15 = (int)((ulong)local_9170 >> 0x20);
  if (uVar31 != 0) {
    uVar33 = (ulong)uVar31;
    if (uVar31 < 4) {
      uVar34 = 0;
LAB_00e61190:
      lVar49 = uVar33 - uVar34;
      plVar27 = param_1 + uVar34 * 9 + 0x94b;
      puVar35 = &local_91d8 + uVar34;
      do {
        *puVar35 = plVar27;
        lVar49 = lVar49 + -1;
        plVar27 = plVar27 + 9;
        puVar35 = puVar35 + 1;
      } while (lVar49 != 0);
    }
    else {
      lVar54 = 1;
      lVar49 = 0;
      uVar34 = uVar33 & 0xfffffffc;
      plVar27 = alStack_91d0 + 1;
      uVar37 = uVar34;
      do {
        lVar47 = lVar49 * 9;
        lVar43 = lVar54 * 9;
        lVar51 = lVar49 * 9;
        lVar41 = lVar54 * 9;
        lVar49 = lVar49 + 4;
        lVar54 = lVar54 + 4;
        uVar37 = uVar37 - 4;
        plVar27[-1] = (long)(param_1 + lVar43 + 0x94b);
        plVar27[-2] = (long)(param_1 + lVar47 + 0x94b);
        plVar27[1] = (long)(param_1 + lVar41 + 0x95d);
        *plVar27 = (long)(param_1 + lVar51 + 0x95d);
        plVar27 = plVar27 + 4;
      } while (uVar37 != 0);
      if (uVar34 != uVar33) goto LAB_00e61190;
    }
    if (1 < uVar31) {
      uVar34 = 0;
      uVar37 = 1;
      do {
        lVar49 = (&local_91d8)[uVar37];
        uVar45 = uVar34;
        do {
          lVar47 = (&local_91d8)[uVar45 & 0xffffffff];
          lVar54 = 0x18;
          if ((*(byte *)(lVar47 + 0x40) & 6) != 0) {
            lVar54 = 0;
          }
          lVar43 = 0x18;
          if ((*(byte *)(lVar49 + 0x40) & 6) != 0) {
            lVar43 = 0;
          }
          if (*(long *)(lVar47 + lVar54) <= *(long *)(lVar49 + lVar43)) break;
          lVar49 = alStack_91d0[uVar45];
          uVar42 = uVar45 - 1;
          alStack_91d0[uVar45] = lVar47;
          (&local_91d8)[uVar45 & 0xffffffff] = lVar49;
          uVar45 = uVar42;
        } while ((int)uVar42 != -1);
        uVar37 = uVar37 + 1;
        uVar34 = uVar34 + 1;
      } while (uVar37 != uVar33);
    }
    uVar15 = local_9170._4_4_;
    if (uVar31 - 1 != 0) {
      uVar33 = (ulong)(uVar31 - 1);
      uVar31 = *(uint *)(CONCAT44(local_91d8._4_4_,(int)local_91d8) + 0x40);
      plVar27 = alStack_91d0;
      lVar49 = CONCAT44(local_91d8._4_4_,(int)local_91d8);
      do {
        lVar47 = *plVar27;
        lVar54 = 0;
        if ((uVar31 & 6) != 0) {
          lVar54 = 0x18;
        }
        uVar31 = *(uint *)(lVar47 + 0x40);
        lVar43 = 0;
        if ((uVar31 & 6) != 0) {
          lVar43 = 0x18;
        }
        if (*(long *)(lVar47 + lVar43) < *(long *)(lVar49 + lVar54)) {
          *(long *)(lVar49 + lVar54) = *(long *)(lVar47 + lVar43);
        }
        uVar33 = uVar33 - 1;
        plVar27 = plVar27 + 1;
        lVar49 = lVar47;
      } while (uVar33 != 0);
    }
  }
  local_9170._4_4_ = uVar15;
  bVar13 = false;
  puVar20 = local_9180;
  local_c450[0] = 0;
  local_9170 = CONCAT44(local_9170._4_4_,0x392038);
  lStack_9178._0_1_ = '4';
  lStack_9178._1_1_ = ' ';
  lStack_9178._2_1_ = '5';
  lStack_9178._3_1_ = ' ';
  lStack_9178._4_1_ = '6';
  lStack_9178._5_1_ = ' ';
  lStack_9178._6_1_ = '7';
  lStack_9178._7_1_ = ' ';
  local_9180 = (uint  [2])0x2033203220312030;
  lVar49 = 0;
  do {
    while ((puVar20 = (uint *)FUN_00e62148(puVar20,param_1,&local_91d8,&local_9188), 1 < local_9188
           || (lVar54 = CONCAT44(local_91d8._4_4_,(int)local_91d8),
              FT_Get_Advance(*(undefined8 *)param_1[8],(int)local_91d8,0x803,local_c450),
              lVar54 == 0))) {
LAB_00e61338:
      if ((char)*puVar20 == '\0') goto LAB_00e61354;
    }
    if (bVar13) {
      if (local_c450[0] == lVar49) goto LAB_00e61338;
      uVar30 = 0;
      goto LAB_00e61358;
    }
    bVar13 = true;
    lVar49 = local_c450[0];
  } while ((char)*puVar20 != '\0');
LAB_00e61354:
  uVar30 = 1;
LAB_00e61358:
  *(undefined1 *)(param_1 + 7) = uVar30;
LAB_00e61360:
  FT_Set_Charmap(param_2,uVar53);
  if (*(long *)(lVar12 + 0x28) == lVar32) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00e60af4:
  do {
    uVar25 = uVar38;
    if ((int)uVar28 < (int)uVar36) {
      uVar25 = (int)uVar28 + 1;
    }
    uVar28 = (ulong)uVar25;
    lVar39 = *(long *)(lVar5 + (long)(int)uVar25 * 0x10 + 8) - lVar21;
    lVar41 = -lVar39;
    if (-1 < lVar39) {
      lVar41 = lVar39;
    }
    uVar22 = (uint)uVar23;
    lVar39 = lVar21;
    if (5 < lVar41) {
      lVar24 = *plVar27 - lVar52;
      lVar41 = -lVar24;
      if (-1 < lVar24) {
        lVar41 = lVar24;
      }
      if (lVar41 <= lVar29 * 0x14) {
        uVar4 = uVar25 - 1;
        if ((int)uVar25 <= (int)uVar38) {
          uVar4 = uVar36;
        }
        uVar44 = (uint)uVar34 | uVar22;
        uVar33 = uVar23;
        goto joined_r0x00e60b80;
      }
    }
    uVar4 = uVar25;
    if ((*(byte *)(lVar6 + (int)uVar25) & 3) != 1 || -1 < (int)uVar22) {
      uVar4 = uVar22;
    }
    uVar23 = (ulong)uVar4;
    uVar34 = uVar28;
  } while (uVar25 != uVar44);
  uVar44 = uVar44 | uVar4;
  uVar33 = uVar23;
  uVar45 = uVar46;
  uVar34 = uVar46;
joined_r0x00e60b60:
  uVar4 = (uint)uVar45;
  iVar18 = (int)uVar37;
joined_r0x00e60b80:
  if ((int)uVar44 < 0) {
LAB_00e60e44:
    if (((*(byte *)(lVar6 + iVar18) & 3) == 1) && ((*(byte *)(lVar6 + (int)uVar4) & 3) == 1))
    goto LAB_00e60e64;
    if ((uVar9 >> 2 & 1) != 0) goto LAB_00e60ea8;
    bVar14 = true;
    lVar41 = lVar39 - lVar47;
  }
  else {
    lVar5 = *(long *)(lVar5 + (-(uVar34 >> 0x1f) & 0xfffffff000000000 | uVar34 << 4)) -
            *(long *)(lVar5 + (-(uVar33 >> 0x1f) & 0xfffffff000000000 | uVar33 << 4));
    lVar41 = -lVar5;
    if (-1 < lVar5) {
      lVar41 = lVar5;
    }
    if (lVar41 <= (long)((ulong)(uVar7 >> 1) / 7)) goto LAB_00e60e44;
LAB_00e60e64:
    bVar14 = false;
    lVar41 = lVar39 - lVar47;
  }
joined_r0x00e60e6c:
  lVar51 = lVar39;
  if ((uVar9 & 1) == 0) {
    if (lVar41 < 0 == SBORROW8(lVar39,lVar47)) {
      lVar51 = lVar47;
      bVar14 = bVar13;
    }
  }
  else if (lVar39 == lVar47 || lVar41 < 0 != SBORROW8(lVar39,lVar47)) {
    lVar51 = lVar47;
    bVar14 = bVar13;
  }
LAB_00e60ea8:
  iVar48 = iVar48 + 1;
  lVar47 = lVar51;
  bVar13 = bVar14;
  if (iVar48 == iVar17) goto code_r0x00e60eb4;
  goto LAB_00e60b88;
code_r0x00e60eb4:
  if ((lVar51 != -0x80000000) && (lVar51 != 0x7fffffff)) {
    if (!bVar14) {
      *(long *)(local_9180 + (ulong)local_c4a4 * 2) = lVar51;
      cVar8 = *pcVar19;
      local_c4a4 = local_c4a4 + 1;
      goto joined_r0x00e60f14;
    }
    local_c450[local_c494] = lVar51;
    local_c494 = local_c494 + 1;
  }
LAB_00e60eec:
  cVar8 = *pcVar19;
joined_r0x00e60f14:
  if (cVar8 == '\0') goto LAB_00e60f2c;
  goto joined_r0x00e608b4;
}

