
void FUN_00e25e90(undefined8 param_1,long param_2,uint param_3,undefined4 param_4,undefined8 param_5
                 )

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ushort uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  undefined8 uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar7 = FUN_00e19584(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),&DAT_01975980);
  if (lVar7 == 0) {
    uVar8 = 0xb;
  }
  else {
    uVar8 = FUN_00e1bb5c(param_1,0);
    if (((int)uVar8 == 0) &&
       (uVar8 = (**(code **)(lVar7 + 8))(param_1,param_2,param_3,param_4,param_5), (int)uVar8 == 0))
    {
      lVar14 = *(long *)(param_2 + 0x118);
      lVar23 = *(long *)(param_2 + 0xc0);
      uVar8 = 2;
      if (lVar14 < 0x74727565) {
        if ((lVar14 == 0x10000) || (lVar14 == 0x20000)) goto LAB_00e25fb4;
      }
      else if ((lVar14 == 0x74727565) || ((lVar14 == 0xa56c7374 || (lVar14 == 0xa56b6264)))) {
LAB_00e25fb4:
        *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x800;
        if ((int)param_3 < 0) {
          uVar8 = 0;
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return;
          }
          goto LAB_00e2654c;
        }
        uVar8 = (**(code **)(lVar7 + 0x10))(lVar23,param_2,param_3,param_4,param_5);
        if ((int)uVar8 != 0) goto LAB_00e25f74;
        pcVar20 = *(char **)(param_2 + 0x28);
        if ((pcVar20 != (char *)0x0) &&
           ((((((pcVar9 = strstr(pcVar20,"cpop"), pcVar9 != (char *)0x0 ||
                (pcVar9 = strstr(pcVar20,"DFGirl-W6-WIN-BF"), pcVar9 != (char *)0x0)) ||
               (pcVar9 = strstr(pcVar20,"DFGothic-EB"), pcVar9 != (char *)0x0)) ||
              (((pcVar9 = strstr(pcVar20,"DFGyoSho-Lt"), pcVar9 != (char *)0x0 ||
                (pcVar9 = strstr(pcVar20,"DFHei-Md-HK-BF"), pcVar9 != (char *)0x0)) ||
               ((pcVar9 = strstr(pcVar20,"DFHSGothic-W5"), pcVar9 != (char *)0x0 ||
                ((pcVar9 = strstr(pcVar20,"DFHSMincho-W3"), pcVar9 != (char *)0x0 ||
                 (pcVar9 = strstr(pcVar20,"DFHSMincho-W7"), pcVar9 != (char *)0x0)))))))) ||
             ((pcVar9 = strstr(pcVar20,"DFKaiSho-SB"), pcVar9 != (char *)0x0 ||
              ((((((((pcVar9 = strstr(pcVar20,"DFKaiShu"), pcVar9 != (char *)0x0 ||
                     (pcVar9 = strstr(pcVar20,"DFKaiShu-Md-HK-BF"), pcVar9 != (char *)0x0)) ||
                    (pcVar9 = strstr(pcVar20,"DFKai-SB"), pcVar9 != (char *)0x0)) ||
                   ((pcVar9 = strstr(pcVar20,"DFMing-Bd-HK-BF"), pcVar9 != (char *)0x0 ||
                    (pcVar9 = strstr(pcVar20,"DLC"), pcVar9 != (char *)0x0)))) ||
                  (pcVar9 = strstr(pcVar20,"DLCHayMedium"), pcVar9 != (char *)0x0)) ||
                 ((pcVar9 = strstr(pcVar20,"DLCHayBold"), pcVar9 != (char *)0x0 ||
                  (pcVar9 = strstr(pcVar20,"DLCKaiMedium"), pcVar9 != (char *)0x0)))) ||
                ((pcVar9 = strstr(pcVar20,"DLCLiShu"), pcVar9 != (char *)0x0 ||
                 (((pcVar9 = strstr(pcVar20,"DLCRoundBold"), pcVar9 != (char *)0x0 ||
                   (pcVar9 = strstr(pcVar20,"HuaTianKaiTi?"), pcVar9 != (char *)0x0)) ||
                  (pcVar9 = strstr(pcVar20,"HuaTianSongTi?"), pcVar9 != (char *)0x0)))))) ||
               ((pcVar9 = strstr(pcVar20,"Ming(for ISO10646)"), pcVar9 != (char *)0x0 ||
                (pcVar9 = strstr(pcVar20,"MingLiU"), pcVar9 != (char *)0x0)))))))) ||
            ((pcVar9 = strstr(pcVar20,"MingMedium"), pcVar9 != (char *)0x0 ||
             ((pcVar9 = strstr(pcVar20,"PMingLiU"), pcVar9 != (char *)0x0 ||
              (pcVar20 = strstr(pcVar20,"MingLi43"), pcVar20 != (char *)0x0))))))))
        goto LAB_00e26708;
        local_70 = 0;
        uStack_88 = 0;
        local_90 = 0;
        local_78 = 0;
        local_80 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        local_98 = 0;
        local_a0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        local_b8 = 0;
        local_c0 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        uVar15 = *(ushort *)(param_2 + 0x120);
        if (uVar15 == 0) {
LAB_00e26564:
          if (((((int)uStack_d8 != 3) &&
               (((uStack_d8._4_4_ != 3 && ((int)local_d0 != 3)) && (local_d0._4_4_ != 3)))) &&
              ((((int)uStack_c8 != 3 && (uStack_c8._4_4_ != 3)) && ((int)local_c0 != 3)))) &&
             (((local_c0._4_4_ != 3 && ((int)local_b8 != 3)) &&
              ((local_b8._4_4_ != 3 &&
               (((((int)local_b0 != 3 && (local_b0._4_4_ != 3)) && ((int)uStack_a8 != 3)) &&
                (uStack_a8._4_4_ != 3)))))))) {
            iVar6 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,iVar6);
            if ((iVar6 != 3) &&
               (local_a0._4_4_ = local_a0._4_4_ + 1, local_a0 = CONCAT44(local_a0._4_4_,iVar6),
               local_a0._4_4_ != 3)) {
              iVar6 = (int)local_98 + 1;
              local_98 = CONCAT44(local_98._4_4_,iVar6);
              if ((iVar6 != 3) &&
                 (local_98._4_4_ = local_98._4_4_ + 1, local_98 = CONCAT44(local_98._4_4_,iVar6),
                 local_98._4_4_ != 3)) {
                iVar6 = (int)local_90 + 1;
                local_90 = CONCAT44(local_90._4_4_,iVar6);
                if ((iVar6 != 3) &&
                   (local_90._4_4_ = local_90._4_4_ + 1, local_90 = CONCAT44(local_90._4_4_,iVar6),
                   local_90._4_4_ != 3)) {
                  iVar6 = (int)uStack_88 + 1;
                  uStack_88 = CONCAT44(uStack_88._4_4_,iVar6);
                  if ((iVar6 != 3) &&
                     (uStack_88._4_4_ = uStack_88._4_4_ + 1,
                     uStack_88 = CONCAT44(uStack_88._4_4_,iVar6), uStack_88._4_4_ != 3)) {
                    iVar6 = (int)local_80 + 1;
                    local_80 = CONCAT44(local_80._4_4_,iVar6);
                    if ((iVar6 != 3) &&
                       (local_80._4_4_ = local_80._4_4_ + 1,
                       local_80 = CONCAT44(local_80._4_4_,iVar6), local_80._4_4_ != 3)) {
                      iVar6 = (int)local_78 + 1;
                      local_78 = CONCAT44(local_78._4_4_,iVar6);
                      if ((iVar6 != 3) &&
                         (local_78._4_4_ = local_78._4_4_ + 1,
                         local_78 = CONCAT44(local_78._4_4_,iVar6), local_78._4_4_ != 3))
                      goto LAB_00e266fc;
                    }
                  }
                }
              }
            }
          }
LAB_00e26708:
          *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x2000;
        }
        else {
          uVar8 = 0;
          bVar4 = false;
          do {
            lVar7 = *(long *)(param_2 + 0x128);
            lVar14 = *(long *)(lVar7 + uVar8 * 0x20);
            if (lVar14 == 0x63767420) {
              lVar14 = 0;
              bVar4 = true;
LAB_00e26288:
              uVar24 = 0;
              uVar16 = 0;
              while( true ) {
                if (*(long *)(lVar7 + uVar8 * 0x20 + 0x18) ==
                    *(long *)(&UNK_01975ed0 + uVar24 * 0x30 + lVar14 * 0x10)) {
                  if (uVar16 == 0) {
                    uVar16 = 0;
                    if (*(code **)(param_2 + 0x340) != (code *)0x0) {
                      iVar6 = (**(code **)(param_2 + 0x340))
                                        (param_2,*(undefined8 *)(lVar7 + uVar8 * 0x20),
                                         *(undefined8 *)(param_2 + 0xc0),0);
                      uVar16 = 0;
                      if (iVar6 == 0) {
                        uVar21 = *(undefined8 *)(param_2 + 0xc0);
                        uVar16 = *(ulong *)(*(long *)(param_2 + 0x128) + uVar8 * 0x20 + 0x18);
                        iVar6 = FUN_00e1d718(uVar21,uVar16);
                        if (iVar6 == 0) {
                          uVar25 = 0;
                          uVar19 = uVar16;
                          if (3 < uVar16) {
                            do {
                              iVar6 = FUN_00e1da20(uVar21);
                              uVar19 = uVar19 - 4;
                              uVar25 = uVar25 + iVar6;
                            } while (3 < uVar19);
                            uVar16 = uVar16 & 3;
                          }
                          if (uVar16 != 0) {
                            uVar22 = 0x18;
                            do {
                              uVar5 = FUN_00e1d94c(uVar21);
                              uVar16 = uVar16 - 1;
                              uVar25 = ((uVar5 & 0xff) << (ulong)(uVar22 & 0x1f)) + uVar25;
                              uVar22 = uVar22 - 8;
                            } while (uVar16 != 0);
                          }
                          FUN_00e1d90c(uVar21);
                        }
                        else {
                          uVar25 = 0;
                        }
                        uVar16 = (ulong)uVar25;
                      }
                    }
                  }
                  iVar6 = *(int *)((long)&local_e0 + uVar24 * 4);
                  if (*(ulong *)(&UNK_01975ec8 + lVar14 * 0x10 + uVar24 * 0x30) == uVar16) {
                    iVar6 = iVar6 + 1;
                    *(int *)((long)&local_e0 + uVar24 * 4) = iVar6;
                  }
                  if (iVar6 == 3) goto LAB_00e26708;
                }
                uVar24 = uVar24 + 1;
                if (0x1c < uVar24) break;
                lVar7 = *(long *)(param_2 + 0x128);
              }
              uVar15 = *(ushort *)(param_2 + 0x120);
            }
            else {
              if (lVar14 == 0x70726570) {
                lVar14 = 2;
                goto LAB_00e26288;
              }
              if (lVar14 == 0x6670676d) {
                lVar14 = 1;
                goto LAB_00e26288;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar15);
          if (!bVar4) {
            if (((int)local_e0 != 3) && (local_e0._4_4_ != 3)) goto LAB_00e26564;
            goto LAB_00e26708;
          }
          if (((((((int)local_e0 == 3) || (local_e0._4_4_ == 3)) || ((int)uStack_d8 == 3)) ||
               (((((uStack_d8._4_4_ == 3 || ((int)local_d0 == 3)) ||
                  ((local_d0._4_4_ == 3 || (((int)uStack_c8 == 3 || (uStack_c8._4_4_ == 3)))))) ||
                 ((int)local_c0 == 3)) ||
                ((((local_c0._4_4_ == 3 || ((int)local_b8 == 3)) || (local_b8._4_4_ == 3)) ||
                 (((int)local_b0 == 3 || (local_b0._4_4_ == 3)))))))) ||
              (((((int)uStack_a8 == 3 || ((uStack_a8._4_4_ == 3 || ((int)local_a0 == 3)))) ||
                (local_a0._4_4_ == 3)) ||
               ((((((int)local_98 == 3 || (local_98._4_4_ == 3)) || ((int)local_90 == 3)) ||
                 ((local_90._4_4_ == 3 || ((int)uStack_88 == 3)))) ||
                ((uStack_88._4_4_ == 3 || (((int)local_80 == 3 || (local_80._4_4_ == 3)))))))))) ||
             (((int)local_78 == 3 || (local_78._4_4_ == 3)))) goto LAB_00e26708;
LAB_00e266fc:
          if (local_70 == 3) goto LAB_00e26708;
        }
        uVar21 = *(undefined8 *)(lVar23 + 0x38);
        local_e4 = (**(code **)(param_2 + 0x340))(param_2,0x68646d78,lVar23,&local_e0);
        if ((local_e4 != 0) || (local_e0 < 8)) {
LAB_00e267e8:
          if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
            uVar8 = 0;
          }
          else {
            if (*(long *)(*(long *)(param_2 + 0xf0) + 0x68) == 0) {
              uVar8 = (**(code **)(param_2 + 0x340))
                                (param_2,0x676c7966,lVar23,(undefined8 *)(param_2 + 0x4a8));
              if (((uint)uVar8 & 0xff) == 0x8e) {
                *(undefined8 *)(param_2 + 0x4a8) = 0;
                *(undefined8 *)(param_2 + 0x4b0) = 0;
LAB_00e268b0:
                iVar6 = (**(code **)(param_2 + 0x340))(param_2,0x6c6f6361,lVar23,&local_e0);
                if (iVar6 == 0) {
                  if (*(short *)(param_2 + 0x186) == 0) {
                    if (0x1ffff < local_e0) {
                      local_e0 = 0x1ffff;
                    }
                    uVar8 = local_e0 >> 1;
                    lVar7 = 1;
                    *(ulong *)(param_2 + 0x4f0) = uVar8;
                    uVar24 = *(ulong *)(param_2 + 0x20);
                    if (uVar8 <= uVar24) goto LAB_00e269b4;
                  }
                  else {
                    if (0x3ffff < local_e0) {
                      local_e0 = 0x3ffff;
                    }
                    uVar8 = local_e0 >> 2;
                    *(ulong *)(param_2 + 0x4f0) = uVar8;
                    lVar7 = 2;
                    uVar24 = *(ulong *)(param_2 + 0x20);
                    if (uVar8 <= uVar24) {
LAB_00e269b4:
                      if (uVar8 != uVar24 + 1) {
                        uVar8 = *(ulong *)(param_2 + 0x128);
                        uVar15 = *(ushort *)(param_2 + 0x120);
                        uVar24 = uVar24 + 1 << lVar7;
                        lVar7 = FUN_00e1d4a0(lVar23);
                        if ((ulong)uVar15 == 0) {
LAB_00e26a1c:
                          uVar19 = *(long *)(lVar23 + 8) - lVar7;
                        }
                        else {
                          bVar4 = false;
                          uVar16 = uVar8 + (ulong)uVar15 * 0x20;
                          uVar19 = 0x7fffffff;
                          do {
                            plVar1 = (long *)(uVar8 + 0x10);
                            uVar8 = uVar8 + 0x20;
                            uVar18 = *plVar1 - lVar7;
                            if (0 < (long)uVar18 && (long)uVar18 < (long)uVar19) {
                              bVar4 = true;
                              uVar19 = uVar18;
                            }
                          } while (uVar8 < uVar16);
                          if (!bVar4) goto LAB_00e26a1c;
                        }
                        if (uVar19 < uVar24) {
                          lVar7 = 0;
                          if (*(long *)(param_2 + 0x4f0) != 0) {
                            lVar7 = *(long *)(param_2 + 0x4f0) + -1;
                          }
                          *(long *)(param_2 + 0x20) = lVar7;
                        }
                        else {
                          *(long *)(param_2 + 0x4f0) = *(long *)(param_2 + 0x20) + 1;
                          local_e0 = uVar24;
                        }
                      }
                    }
                  }
                  uVar8 = FUN_00e1d5c4(lVar23,local_e0,param_2 + 0x4f8);
                }
                else {
                  uVar8 = 0x90;
                }
              }
              else if ((uint)uVar8 == 0) {
                if (*(long *)(*(long *)(param_2 + 0xf0) + 0x68) == 0) {
                  uVar21 = FUN_00e1d4a0(lVar23);
                  *(undefined8 *)(param_2 + 0x4b0) = uVar21;
                }
                else {
                  *(undefined8 *)(param_2 + 0x4b0) = 0;
                }
                goto LAB_00e268b0;
              }
              if ((int)uVar8 != 0) goto LAB_00e25f74;
            }
            uVar8 = FUN_00e2f6b0(param_2,lVar23);
            if (((uint)uVar8 != 0) && (((uint)uVar8 & 0xff) != 0x8e)) goto LAB_00e25f74;
            iVar6 = (**(code **)(param_2 + 0x340))(param_2,0x6670676d,lVar23,&local_e0);
            if (iVar6 == 0) {
              *(ulong *)(param_2 + 0x458) = local_e0;
              uVar8 = FUN_00e1d5c4(lVar23,local_e0,param_2 + 0x460);
              if (((uint)uVar8 != 0) && (((uint)uVar8 & 0xff) != 0x8e)) goto LAB_00e25f74;
            }
            else {
              *(undefined8 *)(param_2 + 0x460) = 0;
              *(undefined8 *)(param_2 + 0x458) = 0;
            }
            iVar6 = (**(code **)(param_2 + 0x340))(param_2,0x70726570,lVar23,&local_e0);
            if (iVar6 == 0) {
              *(ulong *)(param_2 + 0x468) = local_e0;
              uVar8 = FUN_00e1d5c4(lVar23,local_e0,param_2 + 0x470);
              if (((uint)uVar8 != 0) && (((uint)uVar8 & 0xff) != 0x8e)) goto LAB_00e25f74;
            }
            else {
              uVar8 = 0;
              *(undefined8 *)(param_2 + 0x470) = 0;
              *(undefined8 *)(param_2 + 0x468) = 0;
            }
            if ((((*(long *)(*(long *)(param_2 + 0xf0) + 0x68) == 0) &&
                 (*(int *)(param_2 + 0x38) != 0)) &&
                (lVar7 = *(long *)(param_2 + 0x4f8), lVar7 != 0)) &&
               (uVar24 = *(ulong *)(param_2 + 0x4f0), uVar24 != 0)) {
              uVar8 = uVar8 & 0xffffffff;
              uVar18 = 0;
              uVar19 = 0;
              uVar25 = 0;
              uVar10 = 0;
              uVar16 = 0;
              do {
                if ((uVar16 & 0xffffffff) < uVar24) {
                  if (*(short *)(param_2 + 0x186) == 0) {
                    puVar17 = (undefined1 *)(lVar7 + 2 + (uVar19 & 0xfffffffe));
                    uVar12 = (ulong)CONCAT11(puVar17[-2],puVar17[-1]);
                    if (puVar17 + 2 <= (undefined1 *)(lVar7 + uVar24 * 2)) {
                      uVar12 = (ulong)CONCAT11(*puVar17,puVar17[1]);
                    }
                    uVar11 = (ulong)CONCAT11(puVar17[-2],puVar17[-1]) * 2;
                    uVar12 = uVar12 << 1;
                    uVar13 = *(ulong *)(param_2 + 0x4a8);
                    if (uVar11 < uVar13 || uVar11 - uVar13 == 0) goto LAB_00e26c40;
                  }
                  else {
                    pbVar2 = (byte *)(lVar7 + 4 + (uVar18 & 0xfffffffc));
                    uVar11 = (ulong)pbVar2[-4] << 0x18 | (ulong)pbVar2[-3] << 0x10 |
                             (ulong)pbVar2[-2] << 8 | (ulong)pbVar2[-1];
                    if ((byte *)(lVar7 + uVar24 * 4) < pbVar2 + 4) {
                      uVar13 = *(ulong *)(param_2 + 0x4a8);
                      uVar12 = uVar11;
                    }
                    else {
                      uVar13 = *(ulong *)(param_2 + 0x4a8);
                      uVar12 = (ulong)*pbVar2 << 0x18 | (ulong)pbVar2[1] << 0x10 |
                               (ulong)pbVar2[2] << 8 | (ulong)pbVar2[3];
                    }
                    if (uVar11 <= uVar13) {
LAB_00e26c40:
                      if ((uVar12 <= uVar13) ||
                         (uVar12 = uVar13, uVar24 - 2 == (uVar16 & 0xffffffff))) {
                        if (uVar11 <= uVar12) {
                          uVar13 = uVar12;
                        }
                        if (((int)uVar13 != (int)uVar11) &&
                           (uVar25 = uVar25 + 1, uVar10 = uVar16, 1 < uVar25))
                        goto joined_r0x00e26ce4;
                      }
                    }
                  }
                }
                uVar16 = uVar16 + 1;
                uVar19 = uVar19 + 2;
                uVar18 = uVar18 + 4;
              } while (uVar16 < uVar24);
              if ((uVar25 == 1) &&
                 ((uVar10 == 0 ||
                  (((iVar6 = FT_Get_Glyph_Name(param_2,uVar10,&local_e0,8), iVar6 == 0 &&
                    ((char)local_e0 == '.')) && (local_e0 == 0x666564746f6e2e)))))) {
                *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffe;
              }
            }
          }
joined_r0x00e26ce4:
          if ((param_3 >> 0x10 != 0) && (((uint)*(undefined8 *)(param_2 + 0x10) >> 8 & 1) != 0)) {
            uVar8 = FUN_00e2ec28(param_2);
            if ((int)uVar8 != 0) goto LAB_00e25f74;
            FUN_00e313dc(param_2);
            uVar8 = 0;
          }
          *(code **)(param_2 + 0x348) = FUN_00e3536c;
          *(code **)(param_2 + 0x360) = FUN_00e3546c;
          *(code **)(param_2 + 0x358) = FUN_00e353d4;
          *(code **)(param_2 + 0x368) = FUN_00e35838;
          *(code **)(param_2 + 0x350) = FUN_00e35b00;
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return;
          }
          goto LAB_00e2654c;
        }
        plVar1 = (long *)(param_2 + 0x500);
        uVar8 = FUN_00e1d5c4(lVar23,local_e0,plVar1);
        uVar24 = local_e0;
        local_e4 = (uint)uVar8;
        if (local_e4 == 0) {
          lVar7 = *plVar1;
          uVar15 = CONCAT11(*(undefined1 *)(lVar7 + 2),*(undefined1 *)(lVar7 + 3));
          uVar16 = (ulong)*(byte *)(lVar7 + 4) << 0x18 | (ulong)*(byte *)(lVar7 + 5) << 0x10 |
                   (ulong)*(byte *)(lVar7 + 6) << 8 | (ulong)*(byte *)(lVar7 + 7);
          uVar8 = (ulong)CONCAT11(*(byte *)(lVar7 + 6),*(byte *)(lVar7 + 7));
          if (uVar16 < 0xffff0000) {
            uVar8 = uVar16;
          }
          if ((uVar15 < 0x100) && ((uVar15 == 0 || (uVar8 - 4 < 0xfffe)))) {
            uVar21 = FUN_00e13bcc(uVar21,1,0,(ulong)uVar15,0,&local_e4);
            *(undefined8 *)(param_2 + 0x520) = uVar21;
            if (local_e4 == 0) {
              if (uVar15 == 0) {
                uVar16 = 0;
              }
              else {
                uVar16 = 0;
                puVar17 = (undefined1 *)(lVar7 + 8);
                do {
                  if ((undefined1 *)(lVar7 + uVar24) < puVar17 + uVar8) break;
                  *(undefined1 *)(*(long *)(param_2 + 0x520) + uVar16) = *puVar17;
                  uVar16 = uVar16 + 1;
                  puVar17 = puVar17 + uVar8;
                } while (uVar16 < uVar15);
              }
              *(int *)(param_2 + 0x510) = (int)uVar16;
              *(ulong *)(param_2 + 0x518) = uVar8;
              *(ulong *)(param_2 + 0x508) = local_e0;
              goto LAB_00e267e8;
            }
          }
          else {
            local_e4 = 3;
          }
          FUN_00e1d86c(lVar23,plVar1);
          *(undefined8 *)(param_2 + 0x508) = 0;
          uVar8 = (ulong)local_e4;
          if (local_e4 == 0) goto LAB_00e267e8;
        }
      }
    }
  }
LAB_00e25f74:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00e2654c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

