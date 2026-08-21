
undefined4 FT_Outline_EmboldenXY(short *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  short sVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  long local_70;
  long lStack_68;
  
  if (param_1 == (short *)0x0) {
    uVar17 = 0x14;
  }
  else {
    lVar23 = param_2;
    if (param_2 < 0) {
      lVar23 = param_2 + 1;
    }
    lVar33 = param_3;
    if (param_3 < 0) {
      lVar33 = param_3 + 1;
    }
    if ((2 < param_2 + 1U) || (2 < param_3 + 1U)) {
      iVar15 = FT_Outline_Get_Orientation(param_1);
      if (iVar15 == 2) {
        if (*param_1 == 0) {
          return 0;
        }
        return 6;
      }
      sVar21 = *param_1;
      if (0 < sVar21) {
        lVar34 = *(long *)(param_1 + 4);
        uVar22 = lVar23 >> 1;
        uVar24 = lVar33 >> 1;
        uVar4 = -uVar22;
        if (-2 < param_2) {
          uVar4 = uVar22;
        }
        lVar23 = 0;
        iVar32 = 0;
        uVar5 = -uVar24;
        if (-2 < param_3) {
          uVar5 = uVar24;
        }
        do {
          sVar9 = *(short *)(*(long *)(param_1 + 0xc) + lVar23 * 2);
          iVar10 = (int)sVar9;
          if (iVar32 != iVar10 && sVar9 != -1) {
            uVar28 = 0;
            uVar19 = 0;
            lVar29 = 0;
            lVar33 = 0;
            lVar31 = 0;
            lVar27 = 0;
            iVar36 = -1;
            iVar12 = iVar32;
            iVar35 = iVar10;
            do {
              uVar13 = uVar28;
              local_70 = lVar29;
              lStack_68 = lVar33;
              iVar8 = iVar32;
              if (iVar12 == iVar36) {
joined_r0x00e1abd0:
                lVar30 = lVar29;
                iVar37 = iVar36;
                if (uVar19 != 0) {
                  lVar30 = lVar31;
                  lVar6 = lVar27;
                  if (-1 < iVar36) {
                    lVar30 = lVar29;
                    lVar6 = lVar33;
                  }
                  lVar33 = lVar6;
                  lVar29 = (lStack_68 * lVar27 + (lStack_68 * lVar27 >> 0x3f) + 0x8000 >> 0x10) +
                           (local_70 * lVar31 + (local_70 * lVar31 >> 0x3f) + 0x8000 >> 0x10);
                  iVar37 = iVar35;
                  uVar25 = uVar19;
                  if (-1 < iVar36) {
                    iVar37 = iVar36;
                    uVar25 = uVar28;
                  }
                  uVar28 = uVar25;
                  if (lVar29 < -0xefff) {
                    uVar25 = 0;
                    uVar19 = 0;
                  }
                  else {
                    bVar14 = iVar15 == 0;
                    lVar6 = -(lStack_68 + lVar27);
                    if (!bVar14) {
                      lVar6 = lStack_68 + lVar27;
                    }
                    uVar25 = (local_70 * lVar27 + (local_70 * lVar27 >> 0x3f) + 0x8000 >> 0x10) -
                             (lStack_68 * lVar31 + (lStack_68 * lVar31 >> 0x3f) + 0x8000 >> 0x10);
                    lVar27 = -(local_70 + lVar31);
                    if (bVar14) {
                      lVar27 = local_70 + lVar31;
                    }
                    uVar26 = -uVar25;
                    if (!bVar14) {
                      uVar26 = uVar25;
                    }
                    uVar2 = lVar29 + 0x10000;
                    if (uVar13 <= uVar19) {
                      uVar19 = uVar13;
                    }
                    lVar31 = (long)(uVar2 * uVar19 + ((long)(uVar2 * uVar19) >> 0x3f) + 0x8000) >>
                             0x10;
                    iVar36 = 1;
                    if (lVar6 < 0) {
                      iVar36 = -1;
                    }
                    if (lVar31 < (long)(uVar26 * uVar22 + ((long)(uVar26 * uVar22) >> 0x3f) + 0x8000
                                       ) >> 0x10) {
                      iVar3 = -iVar36;
                      if (-1 < (long)uVar19) {
                        iVar3 = iVar36;
                      }
                      uVar25 = -uVar26;
                      if (-1 < (long)uVar26) {
                        uVar25 = uVar26;
                      }
                      iVar36 = -iVar3;
                      if (-1 < (long)uVar26) {
                        iVar36 = iVar3;
                      }
                      if (uVar25 != 0) {
                        uVar20 = -uVar19;
                        if (-1 < (long)uVar19) {
                          uVar20 = uVar19;
                        }
                        goto LAB_00e1ac38;
                      }
LAB_00e1ac50:
                      uVar18 = 0x7fffffff;
                    }
                    else {
                      iVar3 = -iVar36;
                      if (-2 < param_2) {
                        iVar3 = iVar36;
                      }
                      uVar25 = -lVar29 - 0x10000;
                      if (-1 < (long)uVar2) {
                        uVar25 = uVar2;
                      }
                      iVar36 = -iVar3;
                      if (-1 < (long)uVar2) {
                        iVar36 = iVar3;
                      }
                      uVar20 = uVar4;
                      if (uVar25 == 0) goto LAB_00e1ac50;
LAB_00e1ac38:
                      lVar7 = -lVar6;
                      if (-1 < lVar6) {
                        lVar7 = lVar6;
                      }
                      uVar18 = 0;
                      if (uVar25 != 0) {
                        uVar18 = (lVar7 * uVar20 + (uVar25 >> 1)) / uVar25;
                      }
                    }
                    uVar25 = -uVar18;
                    if (-1 < iVar36) {
                      uVar25 = uVar18;
                    }
                    iVar36 = 1;
                    if (lVar27 < 0) {
                      iVar36 = -1;
                    }
                    if (lVar31 < (long)(uVar26 * uVar24 + ((long)(uVar26 * uVar24) >> 0x3f) + 0x8000
                                       ) >> 0x10) {
                      iVar3 = -iVar36;
                      if (-1 < (long)uVar19) {
                        iVar3 = iVar36;
                      }
                      uVar20 = -uVar26;
                      if (-1 < (long)uVar26) {
                        uVar20 = uVar26;
                      }
                      iVar36 = -iVar3;
                      if (-1 < (long)uVar26) {
                        iVar36 = iVar3;
                      }
                      if (uVar20 != 0) {
                        uVar26 = -uVar19;
                        if (-1 < (long)uVar19) {
                          uVar26 = uVar19;
                        }
LAB_00e1accc:
                        lVar29 = -lVar27;
                        if (-1 < lVar27) {
                          lVar29 = lVar27;
                        }
                        uVar2 = 0;
                        if (uVar20 != 0) {
                          uVar2 = (lVar29 * uVar26 + (uVar20 >> 1)) / uVar20;
                        }
                        uVar19 = -uVar2;
                        if (-1 < iVar36) {
                          uVar19 = uVar2;
                        }
                        goto joined_r0x00e1ad04;
                      }
                    }
                    else {
                      iVar3 = -iVar36;
                      if (-2 < param_3) {
                        iVar3 = iVar36;
                      }
                      uVar20 = -lVar29 - 0x10000;
                      if (-1 < (long)uVar2) {
                        uVar20 = uVar2;
                      }
                      iVar36 = -iVar3;
                      if (-1 < (long)uVar2) {
                        iVar36 = iVar3;
                      }
                      uVar26 = uVar5;
                      if (uVar20 != 0) goto LAB_00e1accc;
                    }
                    uVar19 = 0xffffffff80000001;
                    if (-1 < iVar36) {
                      uVar19 = 0x7fffffff;
                    }
                  }
joined_r0x00e1ad04:
                  if (iVar35 != iVar12) {
                    do {
                      plVar1 = (long *)(lVar34 + (long)iVar35 * 0x10);
                      iVar36 = iVar32;
                      if (iVar35 < iVar10) {
                        iVar36 = iVar35 + 1;
                      }
                      *plVar1 = uVar25 + uVar22 + *plVar1;
                      plVar1[1] = uVar19 + uVar24 + plVar1[1];
                      iVar35 = iVar36;
                    } while (iVar36 != iVar12);
                  }
                }
                if (iVar12 < iVar10) {
                  iVar8 = iVar12 + 1;
                }
                uVar19 = uVar13;
                lVar27 = lStack_68;
                lVar29 = lVar30;
                lVar31 = local_70;
                iVar36 = iVar37;
                iVar35 = iVar12;
                if (iVar8 == iVar12) break;
              }
              else {
                plVar1 = (long *)(lVar34 + (long)iVar12 * 0x10);
                plVar11 = (long *)(lVar34 + (long)iVar35 * 0x10);
                local_70 = *plVar1 - *plVar11;
                lStack_68 = plVar1[1] - plVar11[1];
                uVar16 = FUN_00e13480(&local_70);
                if (uVar16 != 0) {
                  uVar13 = (ulong)uVar16;
                  goto joined_r0x00e1abd0;
                }
                if (iVar12 < iVar10) {
                  iVar8 = iVar12 + 1;
                }
                if (iVar8 == iVar35) break;
              }
              iVar12 = iVar8;
            } while (iVar35 != iVar36);
            sVar21 = *param_1;
          }
          lVar23 = lVar23 + 1;
          iVar32 = iVar10 + 1;
        } while (lVar23 < sVar21);
      }
    }
    uVar17 = 0;
  }
  return uVar17;
}

