
int FUN_00e33738(long param_1,uint param_2,short *param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *__dest;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  int iVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  char *pcVar36;
  undefined1 *puVar37;
  ulong uVar38;
  long lVar39;
  uint *puVar40;
  undefined8 uVar41;
  long lVar42;
  ushort *local_160;
  ushort *local_138;
  uint local_124;
  long local_110;
  ulong local_f8;
  ulong local_d0;
  long *local_b8;
  ushort *local_a8;
  ulong local_98;
  uint local_74;
  uint local_70;
  int local_6c [3];
  
  plVar31 = *(long **)(param_1 + 0xc0);
  puVar40 = *(uint **)(param_1 + 0x4c0);
  lVar30 = plVar31[7];
  local_74 = 0;
  if (puVar40 == (uint *)0x0) {
    return 6;
  }
  if (*(char *)(param_1 + 0x4b9) == '\0') {
    return 6;
  }
  if ((puVar40[0x1e] <= param_2) ||
     (*(long *)(*(long *)(puVar40 + 0x20) + (ulong)param_2 * 8) ==
      *(long *)(*(long *)(puVar40 + 0x20) + (ulong)(param_2 + 1) * 8))) {
    return 0;
  }
  uVar38 = (ulong)param_4;
  puVar7 = (undefined8 *)FUN_00e13bcc(lVar30,0x10,0,uVar38,0,local_6c);
  puVar37 = (undefined1 *)0x0;
  puVar8 = (undefined8 *)0x0;
  if (local_6c[0] != 0) goto LAB_00e339c8;
  puVar8 = (undefined8 *)FUN_00e13bcc(lVar30,0x10,0,uVar38,0,local_6c);
  if (local_6c[0] != 0) {
    puVar37 = (undefined1 *)0x0;
    goto LAB_00e339c8;
  }
  puVar37 = (undefined1 *)FUN_00e13bcc(lVar30,1,0,uVar38,0,local_6c);
  if (local_6c[0] != 0) goto LAB_00e339c8;
  lVar32 = *(long *)(*(long *)(puVar40 + 0x20) + (ulong)param_2 * 8);
  lVar35 = *(long *)(*(long *)(puVar40 + 0x20) + (ulong)(param_2 + 1) * 8);
  local_6c[0] = FUN_00e1bb5c(plVar31,lVar32);
  if (local_6c[0] != 0) goto LAB_00e339c8;
  uVar33 = lVar35 - lVar32;
  local_6c[0] = FUN_00e1d718(plVar31,uVar33);
  if (local_6c[0] != 0) goto LAB_00e339c8;
  lVar32 = plVar31[8];
  lVar35 = *plVar31;
  __dest = (void *)FUN_00e13bcc(lVar30,8,0,*puVar40,0,local_6c);
  if (local_6c[0] == 0) {
    lVar34 = FUN_00e13bcc(lVar30,8,0,*puVar40,0,local_6c);
    if (local_6c[0] != 0) {
      lVar39 = 0;
      local_160 = (ushort *)0x0;
      goto LAB_00e33990;
    }
    lVar39 = FUN_00e13bcc(lVar30,8,0,*puVar40,0,local_6c);
    if (local_6c[0] != 0) {
LAB_00e33988:
      local_160 = (ushort *)0x0;
      goto LAB_00e33990;
    }
    uVar4 = FUN_00e1d970(plVar31);
    uVar9 = FUN_00e1d970(plVar31);
    if (uVar33 < (uVar9 & 0xffff)) {
LAB_00e33978:
      local_6c[0] = 8;
      goto LAB_00e33988;
    }
    uVar1 = uVar4 & 0xfff;
    if (uVar33 < uVar1 << 2) goto LAB_00e33978;
    local_f8 = (lVar32 - lVar35) + (uVar9 & 0xffff);
    if ((uVar4 & 0xffff) >> 0xf == 0) {
      local_160 = (ushort *)0x0;
    }
    else {
      lVar42 = *plVar31;
      lVar35 = plVar31[8];
      lVar32 = lVar42 + local_f8;
      if ((ulong)(plVar31[9] - lVar42) <= local_f8) {
        lVar32 = plVar31[9];
      }
      plVar31[8] = lVar32;
      local_160 = (ushort *)FUN_00e2fe8c(plVar31,*(undefined8 *)(puVar40 + 0x22),&local_74);
      lVar22 = *plVar31;
      local_f8 = plVar31[8] - lVar22;
      lVar32 = lVar22 + (lVar35 - lVar42);
      if ((ulong)(plVar31[9] - lVar22) <= (ulong)(lVar35 - lVar42)) {
        lVar32 = plVar31[9];
      }
      plVar31[8] = lVar32;
    }
    plVar10 = (long *)FUN_00e13bcc(lVar30,8,0,uVar38,0,local_6c);
    local_b8 = (long *)0x0;
    if ((local_6c[0] == 0) &&
       (local_b8 = (long *)FUN_00e13bcc(lVar30,8,0,uVar38,0,local_6c), uVar4 = local_74,
       local_6c[0] == 0)) {
      if (param_4 != 0) {
        puVar13 = *(undefined8 **)(param_3 + 4);
        if (param_4 < 4) {
          uVar33 = 0;
        }
        else {
          uVar33 = 0;
          if ((puVar13 + uVar38 * 2 + -1 <= puVar7 || puVar7 + uVar38 * 2 + -1 <= puVar13) &&
             (puVar13 + uVar38 * 2 <= puVar7 + 1 || puVar7 + uVar38 * 2 <= puVar13 + 1)) {
            uVar33 = uVar38 & 0xfffffffc;
            plVar20 = puVar13 + 4;
            plVar19 = puVar7 + 4;
            uVar9 = uVar33;
            do {
              plVar29 = plVar20 + -4;
              lVar32 = *plVar20;
              lVar42 = plVar20[1];
              lVar35 = plVar20[2];
              lVar22 = plVar20[3];
              lVar26 = plVar20[-3];
              lVar14 = plVar20[-2];
              lVar24 = plVar20[-1];
              plVar20 = plVar20 + 8;
              uVar9 = uVar9 - 4;
              plVar19[-4] = *plVar29 << 0x10;
              plVar19[-3] = lVar26 << 0x10;
              plVar19[-2] = lVar14 << 0x10;
              plVar19[-1] = lVar24 << 0x10;
              *plVar19 = lVar32 << 0x10;
              plVar19[1] = lVar42 << 0x10;
              plVar19[2] = lVar35 << 0x10;
              plVar19[3] = lVar22 << 0x10;
              plVar19 = plVar19 + 8;
            } while (uVar9 != 0);
            if (uVar33 == uVar38) goto LAB_00e33b18;
          }
        }
        lVar32 = uVar38 - uVar33;
        plVar20 = puVar13 + uVar33 * 2;
        plVar19 = puVar7 + uVar33 * 2;
        do {
          lVar35 = *plVar20;
          lVar32 = lVar32 + -1;
          plVar19[1] = plVar20[1] << 0x10;
          *plVar19 = lVar35 << 0x10;
          plVar20 = plVar20 + 2;
          plVar19 = plVar19 + 2;
        } while (lVar32 != 0);
      }
LAB_00e33b18:
      if (uVar1 != 0) {
        local_124 = 0;
        local_138 = (ushort *)0x0;
        uVar33 = (ulong)(param_4 - 4);
        do {
          uVar9 = FUN_00e1d970(plVar31);
          uVar5 = FUN_00e1d970(plVar31);
          if ((uVar5 >> 0xf & 1) == 0) {
            if (puVar40[0x1a] <= (uVar5 & 0xfff)) {
              local_6c[0] = 8;
              goto LAB_00e34578;
            }
            memcpy(__dest,(void *)(*(long *)(puVar40 + 0x1c) +
                                  (ulong)(*puVar40 * (uVar5 & 0xfff)) * 8),(ulong)*puVar40 << 3);
          }
          else if (*puVar40 != 0) {
            uVar15 = 0;
            do {
              uVar6 = FUN_00e1d970(plVar31);
              *(long *)((long)__dest + uVar15 * 8) =
                   (long)(int)(-(uVar6 >> 0xf & 1) & 0xfffc0000 | (uVar6 & 0xffff) << 2);
              uVar15 = uVar15 + 1;
            } while (uVar15 < *puVar40);
          }
          if ((((uVar5 & 0xffff) >> 0xe & 1) != 0) && (*puVar40 != 0)) {
            uVar15 = 0;
            do {
              uVar6 = FUN_00e1d970(plVar31);
              *(long *)(lVar34 + uVar15 * 8) =
                   (long)(int)(-(uVar6 >> 0xf & 1) & 0xfffc0000 | (uVar6 & 0xffff) << 2);
              uVar15 = uVar15 + 1;
            } while (uVar15 < *puVar40);
            if (*puVar40 != 0) {
              uVar15 = 0;
              do {
                uVar6 = FUN_00e1d970(plVar31);
                *(long *)(lVar39 + uVar15 * 8) =
                     (long)(int)(-(uVar6 >> 0xf & 1) & 0xfffc0000 | (uVar6 & 0xffff) << 2);
                uVar15 = uVar15 + 1;
              } while (uVar15 < *puVar40);
            }
          }
          lVar32 = FUN_00e3002c(puVar40,uVar5 & 0xffff,__dest,lVar34,lVar39);
          if (lVar32 != 0) {
            lVar22 = *plVar31;
            lVar42 = plVar31[8];
            lVar35 = lVar22 + local_f8;
            if ((ulong)(plVar31[9] - lVar22) <= local_f8) {
              lVar35 = plVar31[9];
            }
            plVar31[8] = lVar35;
            if (((uVar5 & 0xffff) >> 0xd & 1) == 0) {
              local_70 = uVar4;
              local_a8 = local_160;
            }
            else {
              local_138 = (ushort *)FUN_00e2fe8c(plVar31,*(undefined8 *)(puVar40 + 0x22),&local_70);
              local_a8 = local_138;
            }
            uVar6 = local_70;
            uVar5 = param_4;
            if (local_70 != 0) {
              uVar5 = local_70;
            }
            puVar13 = (undefined8 *)FUN_00e3013c(plVar31,*(undefined8 *)(puVar40 + 0x22),uVar5);
            puVar11 = (undefined8 *)FUN_00e3013c(plVar31,*(undefined8 *)(puVar40 + 0x22),uVar5);
            if (((puVar13 != (undefined8 *)0x0) && (local_a8 != (ushort *)0x0)) &&
               (puVar11 != (undefined8 *)0x0)) {
              if (local_a8 == (ushort *)0xffffffffffffffff) {
                if (param_4 != 0) {
                  uVar15 = 0;
                  do {
                    while( true ) {
                      lVar26 = plVar10[uVar15];
                      lVar24 = local_b8[uVar15];
                      lVar35 = FT_MulFix(puVar13[uVar15],lVar32);
                      lVar14 = FT_MulFix(puVar11[uVar15],lVar32);
                      if (uVar33 <= uVar15) break;
                      plVar10[uVar15] = lVar35 + lVar26;
                      local_b8[uVar15] = lVar14 + lVar24;
                      uVar15 = uVar15 + 1;
                      if (uVar38 == uVar15) goto LAB_00e34320;
                    }
                    if (((uVar33 == uVar15) && ((*(byte *)(param_1 + 0x4c8) >> 2 & 1) == 0)) ||
                       ((param_4 - 3 == uVar15 && ((*(byte *)(param_1 + 0x4c8) >> 1 & 1) == 0)))) {
                      lVar35 = lVar35 + lVar26;
                      plVar20 = plVar10;
LAB_00e34310:
                      plVar20[uVar15] = lVar35;
                    }
                    else if (((param_4 - 2 == uVar15) &&
                             ((*(byte *)(param_1 + 0x4c8) >> 5 & 1) == 0)) ||
                            ((param_4 - 1 == uVar15 && ((*(byte *)(param_1 + 0x4c8) >> 4 & 1) == 0))
                            )) {
                      lVar35 = lVar14 + lVar24;
                      plVar20 = local_b8;
                      goto LAB_00e34310;
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar38 != uVar15);
                }
              }
              else {
                uVar15 = uVar38;
                puVar17 = puVar7;
                puVar23 = puVar8;
                puVar25 = puVar37;
                if (param_4 != 0) {
                  do {
                    *puVar25 = 0;
                    uVar41 = *puVar17;
                    uVar15 = uVar15 - 1;
                    puVar23[1] = puVar17[1];
                    *puVar23 = uVar41;
                    puVar17 = puVar17 + 2;
                    puVar23 = puVar23 + 2;
                    puVar25 = puVar25 + 1;
                  } while (uVar15 != 0);
                }
                if (uVar6 != 0) {
                  local_d0 = (ulong)uVar6;
                  puVar23 = puVar11;
                  puVar17 = puVar13;
                  do {
                    uVar2 = *local_a8;
                    if (uVar2 < param_4) {
                      puVar37[uVar2] = 1;
                      lVar35 = FT_MulFix(*puVar17,lVar32);
                      plVar20 = puVar8 + (ulong)uVar2 * 2;
                      *plVar20 = *plVar20 + lVar35;
                      lVar35 = FT_MulFix(*puVar23,lVar32);
                      plVar20[1] = plVar20[1] + lVar35;
                    }
                    puVar17 = puVar17 + 1;
                    puVar23 = puVar23 + 1;
                    local_a8 = local_a8 + 1;
                    local_d0 = local_d0 - 1;
                  } while (local_d0 != 0);
                }
                if (*param_3 != 0) {
                  lVar32 = 0;
                  local_98 = 0;
LAB_00e33e30:
                  sVar3 = *(short *)(*(long *)(param_3 + 0xc) + lVar32 * 2);
                  iVar21 = (int)local_98;
                  if (iVar21 <= sVar3) {
                    local_110 = (long)iVar21;
                    lVar35 = 0;
                    uVar15 = local_98 & 0xffffffff;
                    lVar26 = (long)(int)sVar3;
                    lVar14 = local_98 << 0x20;
                    uVar28 = local_98 & 0xffffffff;
LAB_00e33e78:
                    iVar27 = (int)uVar28;
                    if (puVar37[lVar35 + local_110] == '\0') goto code_r0x00e33e80;
                    uVar28 = lVar35 + (local_98 & 0xffffffff);
                    iVar16 = (int)uVar28;
                    local_98 = uVar28 + 1;
                    if (sVar3 <= iVar16) goto LAB_00e33fa0;
                    lVar24 = lVar26 - iVar27;
                    pcVar36 = puVar37 + (long)iVar27 + 1;
                    uVar12 = uVar28 & 0xffffffff;
                    do {
                      if (*pcVar36 != '\0') {
                        FUN_00e345ac((int)uVar12 + 1,(int)local_98 + -1,uVar12,local_98,puVar7,
                                     puVar8);
                        uVar12 = local_98 & 0xffffffff;
                      }
                      local_98 = (ulong)((int)local_98 + 1);
                      lVar24 = lVar24 + -1;
                      pcVar36 = pcVar36 + 1;
                    } while (lVar24 != 0);
                    local_98 = (ulong)((int)sVar3 + 1);
                    if ((iVar21 - (int)uVar12) + (int)lVar35 == 0) {
LAB_00e33fa0:
                      lVar14 = lVar14 >> 0x20;
                      lVar35 = puVar8[lVar14 * 2] - puVar7[lVar14 * 2];
                      lVar24 = (puVar8 + lVar14 * 2)[1] - (puVar7 + lVar14 * 2)[1];
                      if (lVar24 != 0 || lVar35 != 0) {
                        if (iVar21 < iVar16) {
                          uVar15 = lVar14 - local_110;
                          if (3 < uVar15) {
                            uVar28 = iVar27 - local_110;
                            plVar20 = puVar8 + local_110 * 2 + 4;
                            local_110 = (uVar15 & 0xfffffffffffffffc) + local_110;
                            uVar28 = uVar28 & 0xfffffffffffffffc;
                            do {
                              uVar28 = uVar28 - 4;
                              plVar20[-4] = plVar20[-4] + lVar35;
                              plVar20[-3] = plVar20[-3] + lVar24;
                              plVar20[-2] = plVar20[-2] + lVar35;
                              plVar20[-1] = plVar20[-1] + lVar24;
                              *plVar20 = *plVar20 + lVar35;
                              plVar20[1] = plVar20[1] + lVar24;
                              plVar20[2] = plVar20[2] + lVar35;
                              plVar20[3] = plVar20[3] + lVar24;
                              plVar20 = plVar20 + 8;
                            } while (uVar28 != 0);
                            if (uVar15 == (uVar15 & 0xfffffffffffffffc)) goto LAB_00e34084;
                          }
                          lVar18 = iVar27 - local_110;
                          plVar20 = puVar8 + local_110 * 2;
                          do {
                            lVar18 = lVar18 + -1;
                            plVar20[1] = plVar20[1] + lVar24;
                            *plVar20 = *plVar20 + lVar35;
                            plVar20 = plVar20 + 2;
                          } while (lVar18 != 0);
                        }
LAB_00e34084:
                        if (iVar16 < sVar3) {
                          uVar15 = lVar26 - lVar14;
                          if (3 < uVar15) {
                            plVar20 = puVar8 + (long)iVar27 * 2 + 6;
                            lVar14 = lVar14 + (uVar15 & 0xfffffffffffffffc);
                            uVar28 = lVar26 - iVar27 & 0xfffffffffffffffc;
                            do {
                              uVar28 = uVar28 - 4;
                              plVar20[-4] = plVar20[-4] + lVar35;
                              plVar20[-3] = plVar20[-3] + lVar24;
                              plVar20[-2] = plVar20[-2] + lVar35;
                              plVar20[-1] = plVar20[-1] + lVar24;
                              *plVar20 = *plVar20 + lVar35;
                              plVar20[1] = plVar20[1] + lVar24;
                              plVar20[2] = plVar20[2] + lVar35;
                              plVar20[3] = plVar20[3] + lVar24;
                              plVar20 = plVar20 + 8;
                            } while (uVar28 != 0);
                            if (uVar15 == (uVar15 & 0xfffffffffffffffc)) goto LAB_00e3412c;
                          }
                          lVar26 = lVar26 - lVar14;
                          plVar20 = puVar8 + lVar14 * 2 + 2;
                          do {
                            lVar26 = lVar26 + -1;
                            plVar20[1] = plVar20[1] + lVar24;
                            *plVar20 = *plVar20 + lVar35;
                            plVar20 = plVar20 + 2;
                          } while (lVar26 != 0);
                        }
                      }
                      goto LAB_00e3412c;
                    }
                    FUN_00e345ac((int)uVar12 + 1,(long)sVar3,uVar12,uVar28 & 0xffffffff,puVar7,
                                 puVar8);
                    if (0 < iVar16) {
                      FUN_00e345ac(uVar15,iVar21 + (int)lVar35 + -1,uVar12,uVar28,puVar7,puVar8);
                    }
                  }
                  goto LAB_00e3412c;
                }
LAB_00e34140:
                if (param_4 != 0) {
                  uVar15 = 0;
                  plVar19 = puVar7 + 1;
                  plVar20 = puVar8 + 1;
                  do {
                    lVar35 = *plVar20;
                    lVar14 = *plVar19;
                    lVar32 = local_b8[uVar15];
                    if (uVar15 < uVar33) {
                      plVar10[uVar15] = (plVar20[-1] - plVar19[-1]) + plVar10[uVar15];
                      local_b8[uVar15] = (lVar35 - lVar14) + lVar32;
                    }
                    else {
                      if (((uVar33 == uVar15) && ((*(byte *)(param_1 + 0x4c8) >> 2 & 1) == 0)) ||
                         ((param_4 - 3 == uVar15 && ((*(byte *)(param_1 + 0x4c8) >> 1 & 1) == 0))))
                      {
                        lVar32 = (plVar20[-1] - plVar19[-1]) + plVar10[uVar15];
                        plVar29 = plVar10;
                      }
                      else {
                        if (((param_4 - 2 != uVar15) || ((*(byte *)(param_1 + 0x4c8) >> 5 & 1) != 0)
                            ) && ((param_4 - 1 != uVar15 ||
                                  ((*(byte *)(param_1 + 0x4c8) >> 4 & 1) != 0)))) goto LAB_00e34200;
                        lVar32 = (lVar35 - lVar14) + lVar32;
                        plVar29 = local_b8;
                      }
                      plVar29[uVar15] = lVar32;
                    }
LAB_00e34200:
                    uVar15 = uVar15 + 1;
                    plVar20 = plVar20 + 2;
                    plVar19 = plVar19 + 2;
                  } while (uVar38 != uVar15);
                }
              }
            }
LAB_00e34320:
            if (local_138 == (ushort *)0xffffffffffffffff) {
              local_138 = (ushort *)0xffffffffffffffff;
            }
            else {
              FUN_00e139fc(lVar30,local_138);
              local_138 = (ushort *)0x0;
            }
            FUN_00e139fc(lVar30,puVar13);
            FUN_00e139fc(lVar30,puVar11);
            lVar32 = *plVar31 + (lVar42 - lVar22);
            if ((ulong)(plVar31[9] - *plVar31) <= (ulong)(lVar42 - lVar22)) {
              lVar32 = plVar31[9];
            }
            plVar31[8] = lVar32;
          }
          local_124 = local_124 + 1;
          local_f8 = local_f8 + (uVar9 & 0xffff);
        } while (local_124 < uVar1);
      }
      if (param_4 != 0) {
        plVar20 = *(long **)(param_3 + 4);
        if (param_4 == 1) {
          uVar33 = 0;
        }
        else {
          uVar33 = 0;
          if ((plVar10 + uVar38 <= plVar20 || plVar20 + uVar38 * 2 <= plVar10) &&
             (local_b8 + uVar38 <= plVar20 || plVar20 + uVar38 * 2 <= local_b8)) {
            uVar33 = uVar38 & 0xfffffffe;
            lVar32 = 0;
            uVar9 = uVar33;
            plVar19 = plVar20;
            do {
              uVar9 = uVar9 - 2;
              lVar35 = ((long *)((long)plVar10 + lVar32))[1];
              lVar22 = ((long *)((long)local_b8 + lVar32))[1];
              lVar42 = *(long *)((long)local_b8 + lVar32);
              *plVar19 = *plVar19 +
                         (long)(short)((ulong)(*(long *)((long)plVar10 + lVar32) + 0x8000) >> 0x10);
              plVar19[1] = plVar19[1] + (long)(short)((ulong)(lVar42 + 0x8000) >> 0x10);
              plVar19[2] = plVar19[2] + (long)(short)((ulong)(lVar35 + 0x8000) >> 0x10);
              plVar19[3] = plVar19[3] + (long)(short)((ulong)(lVar22 + 0x8000) >> 0x10);
              plVar19 = plVar19 + 4;
              lVar32 = lVar32 + 0x10;
            } while (uVar9 != 0);
            if (uVar33 == uVar38) goto LAB_00e34578;
          }
        }
        plVar20 = plVar20 + uVar33 * 2 + 1;
        do {
          uVar9 = uVar33 + 1;
          plVar20[-1] = plVar20[-1] + (long)(short)((uint)((int)plVar10[uVar33] + 0x8000) >> 0x10);
          *plVar20 = *plVar20 + (long)(short)((uint)((int)local_b8[uVar33] + 0x8000) >> 0x10);
          uVar33 = uVar9;
          plVar20 = plVar20 + 2;
        } while (uVar38 != uVar9);
      }
    }
LAB_00e34578:
    FUN_00e139fc(lVar30,plVar10);
    FUN_00e139fc(lVar30,local_b8);
    if (local_160 != (ushort *)0xffffffffffffffff) goto LAB_00e33990;
  }
  else {
    lVar34 = 0;
    lVar39 = 0;
    local_160 = (ushort *)0x0;
LAB_00e33990:
    FUN_00e139fc(lVar30,local_160);
  }
  FUN_00e139fc(lVar30,__dest);
  FUN_00e139fc(lVar30,lVar34);
  FUN_00e139fc(lVar30,lVar39);
  FUN_00e1d90c(plVar31);
LAB_00e339c8:
  FUN_00e139fc(lVar30,puVar7);
  FUN_00e139fc(lVar30,puVar8);
  FUN_00e139fc(lVar30,puVar37);
  return local_6c[0];
code_r0x00e33e80:
  lVar35 = lVar35 + 1;
  lVar14 = lVar14 + 0x100000000;
  uVar28 = (ulong)(iVar27 + 1);
  if (lVar26 <= local_110 + lVar35 + -1) goto code_r0x00e33e9c;
  goto LAB_00e33e78;
code_r0x00e33e9c:
  local_98 = (ulong)(uint)(iVar21 + (int)lVar35);
LAB_00e3412c:
  lVar32 = lVar32 + 1;
  if (*param_3 <= lVar32) goto LAB_00e34140;
  goto LAB_00e33e30;
}

