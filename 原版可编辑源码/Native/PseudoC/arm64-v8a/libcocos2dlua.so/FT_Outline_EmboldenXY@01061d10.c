
undefined4 FT_Outline_EmboldenXY(short *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  short sVar7;
  int *piVar8;
  bool bVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  int local_cc;
  int local_c8;
  int local_c4;
  ulong local_c0;
  int local_b8;
  int local_b4;
  long local_b0;
  long local_a8;
  ulong local_a0;
  short *local_98;
  long local_90;
  long lStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  if (param_1 == (short *)0x0) {
    uVar10 = 0x14;
  }
  else {
    lVar26 = param_2;
    if (param_2 < 0) {
      lVar26 = param_2 + 1;
    }
    lVar3 = param_3;
    if (param_3 < 0) {
      lVar3 = param_3 + 1;
    }
    if ((2 < param_2 + 1U) || (2 < param_3 + 1U)) {
      local_98 = param_1;
      local_b4 = FT_Outline_Get_Orientation(param_1);
      if (local_b4 == 2) {
        if (*param_1 == 0) {
          return 0;
        }
        return 6;
      }
      if (0 < *param_1) {
        local_b0 = *(long *)(param_1 + 4);
        local_a0 = lVar26 >> 1;
        local_a8 = lVar3 >> 1;
        local_b8 = 1;
        if (param_2 < -1) {
          local_b8 = -1;
        }
        local_c0 = -local_a0;
        if (-2 < param_2) {
          local_c0 = local_a0;
        }
        local_c4 = -local_b8;
        local_c8 = 1;
        if (param_3 < -1) {
          local_c8 = -1;
        }
        lVar26 = 0;
        iVar13 = 0;
        lVar3 = -local_a8;
        if (-2 < param_3) {
          lVar3 = local_a8;
        }
        local_cc = -local_c8;
        do {
          sVar7 = *(short *)(*(long *)(param_1 + 0xc) + lVar26 * 2);
          plVar1 = (long *)(local_b0 + (long)iVar13 * 0x10);
          lStack_88 = *plVar1;
          local_90 = plVar1[1];
          plVar1 = (long *)(local_b0 + (long)sVar7 * 0x10);
          local_70 = lStack_88 - *plVar1;
          uStack_68 = local_90 - plVar1[1];
          uVar11 = FT_Vector_Length(&local_70);
          iVar30 = -1;
          if (uVar11 != 0) {
            iVar31 = 1;
            if ((long)local_70 < 0) {
              iVar31 = -1;
            }
            uVar12 = -uVar11;
            if (-1 < (long)uVar11) {
              uVar12 = uVar11;
            }
            iVar4 = -iVar31;
            if (-1 < (long)uVar11) {
              iVar4 = iVar31;
            }
            if ((long)uVar12 < 1) {
              uVar14 = 0x7fffffff;
            }
            else {
              uVar15 = -local_70;
              if (-1 < (long)local_70) {
                uVar15 = local_70;
              }
              uVar14 = 0;
              if (uVar12 != 0) {
                uVar14 = (uVar15 * 0x10000 + (uVar12 >> 1)) / uVar12;
              }
            }
            local_70 = -uVar14;
            if (-1 < iVar4) {
              local_70 = uVar14;
            }
            iVar31 = 1;
            if ((long)uStack_68 < 0) {
              iVar31 = iVar30;
            }
            iVar4 = -iVar31;
            if (-1 < (long)uVar11) {
              iVar4 = iVar31;
            }
            if ((long)uVar12 < 1) {
              uVar14 = 0x7fffffff;
            }
            else {
              uVar15 = -uStack_68;
              if (-1 < (long)uStack_68) {
                uVar15 = uStack_68;
              }
              uVar14 = 0;
              if (uVar12 != 0) {
                uVar14 = (uVar15 * 0x10000 + (uVar12 >> 1)) / uVar12;
              }
            }
            uStack_68 = -uVar14;
            if (-1 < iVar4) {
              uStack_68 = uVar14;
            }
          }
          if (iVar13 <= sVar7) {
            lVar27 = (long)iVar13 << 4;
            lVar23 = (long)iVar13;
            lVar24 = lStack_88;
            lVar28 = local_90;
            do {
              lVar25 = lStack_88;
              lVar29 = local_90;
              if (lVar23 < (int)sVar7) {
                lVar25 = *(long *)(local_b0 + lVar27 + 0x10);
                lVar29 = *(long *)(local_b0 + lVar27 + 0x18);
              }
              local_80 = lVar25 - lVar24;
              uStack_78 = lVar29 - lVar28;
              uVar12 = FT_Vector_Length(&local_80);
              if (uVar12 != 0) {
                iVar13 = 1;
                if ((long)local_80 < 0) {
                  iVar13 = iVar30;
                }
                uVar14 = -uVar12;
                if (-1 < (long)uVar12) {
                  uVar14 = uVar12;
                }
                iVar31 = -iVar13;
                if (-1 < (long)uVar12) {
                  iVar31 = iVar13;
                }
                if ((long)uVar14 < 1) {
                  uVar15 = 0x7fffffff;
                }
                else {
                  uVar2 = -local_80;
                  if (-1 < (long)local_80) {
                    uVar2 = local_80;
                  }
                  uVar15 = 0;
                  if (uVar14 != 0) {
                    uVar15 = (uVar2 * 0x10000 + (uVar14 >> 1)) / uVar14;
                  }
                }
                local_80 = -uVar15;
                if (-1 < iVar31) {
                  local_80 = uVar15;
                }
                iVar13 = 1;
                if ((long)uStack_78 < 0) {
                  iVar13 = iVar30;
                }
                iVar31 = -iVar13;
                if (-1 < (long)uVar12) {
                  iVar31 = iVar13;
                }
                if ((long)uVar14 < 1) {
                  uVar15 = 0x7fffffff;
                }
                else {
                  uVar2 = -uStack_78;
                  if (-1 < (long)uStack_78) {
                    uVar2 = uStack_78;
                  }
                  uVar15 = 0;
                  if (uVar14 != 0) {
                    uVar15 = (uVar2 * 0x10000 + (uVar14 >> 1)) / uVar14;
                  }
                }
                uStack_78 = -uVar15;
                if (-1 < iVar31) {
                  uStack_78 = uVar15;
                }
              }
              uVar14 = -local_70;
              if (-1 < (long)local_70) {
                uVar14 = local_70;
              }
              iVar13 = 1;
              if (-1 >= (long)local_70) {
                iVar13 = iVar30;
              }
              uVar15 = -local_80;
              if (-1 < (long)local_80) {
                uVar15 = local_80;
              }
              iVar31 = -iVar13;
              if (-1 < (long)local_80) {
                iVar31 = iVar13;
              }
              lVar16 = (long)(uVar15 * uVar14 + 0x8000) >> 0x10;
              lVar18 = -lVar16;
              if (-1 < iVar31) {
                lVar18 = lVar16;
              }
              uVar2 = -uStack_68;
              if (-1 < (long)uStack_68) {
                uVar2 = uStack_68;
              }
              iVar31 = -1;
              iVar13 = 1;
              if (-1 >= (long)uStack_68) {
                iVar13 = iVar31;
              }
              uVar6 = -uStack_78;
              if (-1 < (long)uStack_78) {
                uVar6 = uStack_78;
              }
              iVar4 = -iVar13;
              if (-1 < (long)uStack_78) {
                iVar4 = iVar13;
              }
              lVar21 = (long)(uVar6 * uVar2 + 0x8000) >> 0x10;
              lVar16 = -lVar21;
              if (-1 < iVar4) {
                lVar16 = lVar21;
              }
              if (lVar16 + lVar18 < -0xefff) {
                lVar18 = 0;
                lVar16 = 0;
              }
              else {
                iVar13 = 1;
                if ((long)local_80 < 0) {
                  iVar13 = iVar31;
                }
                lVar21 = (long)(uVar6 * uVar14 + 0x8000) >> 0x10;
                iVar4 = -iVar13;
                if (-1 < (long)uStack_68) {
                  iVar4 = iVar13;
                }
                lVar17 = (long)(uVar2 * uVar15 + 0x8000) >> 0x10;
                lVar19 = -lVar17;
                if (-1 < iVar4) {
                  lVar19 = lVar17;
                }
                iVar13 = 1;
                if ((long)uStack_78 < 0) {
                  iVar13 = iVar31;
                }
                iVar4 = -iVar13;
                if (-1 < (long)local_70) {
                  iVar4 = iVar13;
                }
                lVar17 = -lVar21;
                if (-1 < iVar4) {
                  lVar17 = lVar21;
                }
                bVar9 = local_b4 == 0;
                lVar21 = -(local_80 + local_70);
                if (bVar9) {
                  lVar21 = local_80 + local_70;
                }
                lVar5 = -(uStack_78 + uStack_68);
                if (!bVar9) {
                  lVar5 = uStack_78 + uStack_68;
                }
                uVar14 = -(lVar19 - lVar17);
                if (!bVar9) {
                  uVar14 = lVar19 - lVar17;
                }
                if ((long)uVar12 <= (long)uVar11) {
                  uVar11 = uVar12;
                }
                iVar13 = local_c4;
                uVar15 = -uVar14;
                if (-1 < (long)uVar14) {
                  iVar13 = local_b8;
                  uVar15 = uVar14;
                }
                lVar17 = (long)(uVar15 * local_c0 + 0x8000) >> 0x10;
                lVar19 = -lVar17;
                if (-1 < iVar13) {
                  lVar19 = lVar17;
                }
                uVar2 = lVar16 + lVar18 + 0x10000;
                uVar6 = -uVar11;
                if (-1 < (long)uVar11) {
                  uVar6 = uVar11;
                }
                lVar18 = (long)(uVar2 * uVar6 + 0x8000) >> 0x10;
                lVar16 = -lVar18;
                if (-1 < (long)uVar11) {
                  lVar16 = lVar18;
                }
                iVar13 = 1;
                if (lVar5 < 0) {
                  iVar13 = iVar31;
                }
                if (lVar16 < lVar19) {
                  iVar4 = -iVar13;
                  if (-1 < (long)uVar11) {
                    iVar4 = iVar13;
                  }
                  iVar31 = -iVar4;
                  if (-1 < (long)uVar14) {
                    iVar31 = iVar4;
                  }
                  uVar20 = uVar6;
                  uVar22 = uVar15;
                  if (0 < (long)uVar15) goto LAB_0106212c;
                  lVar19 = 0x7fffffff;
                }
                else {
                  uVar20 = local_c0;
                  uVar22 = uVar2;
                  iVar31 = -iVar13;
                  if (-2 < param_2) {
                    iVar31 = iVar13;
                  }
LAB_0106212c:
                  lVar18 = -lVar5;
                  if (-1 < lVar5) {
                    lVar18 = lVar5;
                  }
                  lVar19 = 0;
                  if (uVar22 != 0) {
                    lVar19 = (long)(lVar18 * uVar20 + (uVar22 >> 1)) / (long)uVar22;
                  }
                }
                lVar18 = -lVar19;
                if (-1 < iVar31) {
                  lVar18 = lVar19;
                }
                piVar8 = &local_cc;
                if (-1 < (long)uVar14) {
                  piVar8 = &local_c8;
                }
                lVar17 = (long)(uVar15 * lVar3 + 0x8000) >> 0x10;
                lVar19 = -lVar17;
                if (-1 < *piVar8) {
                  lVar19 = lVar17;
                }
                iVar13 = 1;
                if (lVar21 < 0) {
                  iVar13 = iVar30;
                }
                if (lVar16 < lVar19) {
                  iVar31 = -iVar13;
                  if (-1 < (long)uVar11) {
                    iVar31 = iVar13;
                  }
                  iVar13 = -iVar31;
                  if (-1 < (long)uVar14) {
                    iVar13 = iVar31;
                  }
                  if ((long)uVar15 < 1) {
                    lVar21 = 0x7fffffff;
                  }
                  else {
                    lVar16 = -lVar21;
                    if (-1 < lVar21) {
                      lVar16 = lVar21;
                    }
                    lVar21 = 0;
                    if (uVar15 != 0) {
                      lVar21 = (long)(lVar16 * uVar6 + (uVar15 >> 1)) / (long)uVar15;
                    }
                  }
                  lVar16 = -lVar21;
                  if (-1 < iVar13) {
                    lVar16 = lVar21;
                  }
                }
                else {
                  lVar16 = -lVar21;
                  if (-1 < lVar21) {
                    lVar16 = lVar21;
                  }
                  iVar31 = -iVar13;
                  if (-2 < param_3) {
                    iVar31 = iVar13;
                  }
                  lVar21 = 0;
                  if (uVar2 != 0) {
                    lVar21 = (long)(lVar16 * lVar3 + (uVar2 >> 1)) / (long)uVar2;
                  }
                  lVar16 = -lVar21;
                  if (-1 < iVar31) {
                    lVar16 = lVar21;
                  }
                }
              }
              lVar21 = *(long *)(local_98 + 4);
              *(long *)(lVar21 + lVar27) = lVar24 + local_a0 + lVar18;
              ((long *)(lVar21 + lVar27))[1] = lVar28 + local_a8 + lVar16;
              uStack_68 = uStack_78;
              local_70 = local_80;
              lVar27 = lVar27 + 0x10;
              bVar9 = lVar23 < (int)sVar7;
              param_1 = local_98;
              lVar23 = lVar23 + 1;
              lVar24 = lVar25;
              uVar11 = uVar12;
              lVar28 = lVar29;
            } while (bVar9);
          }
          lVar26 = lVar26 + 1;
          iVar13 = sVar7 + 1;
        } while (lVar26 < *param_1);
      }
    }
    uVar10 = 0;
  }
  return uVar10;
}

