
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1e4c8(byte *param_1,double *param_2,uint param_3,uint param_4,uint param_5,int param_6,
                 uint param_7)

{
  double dVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  byte local_208 [512];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_7 == 0) {
    pbVar16 = local_208;
    local_208[0] = 0;
    switch(param_3) {
    case 3:
      dVar19 = 0.0;
switchD_00c1ebb0_caseD_3:
      if (((param_4 >> 1 & 1) == 0) && ((ulong)dVar19 < (ulong)(param_6 + 0x80000000))) {
        param_3 = 3;
        iVar7 = -SUB84(dVar19,0);
        if (param_6 == 0) {
          iVar7 = SUB84(dVar19,0);
        }
        *(int *)param_2 = iVar7;
        goto LAB_00c1ea0c;
      }
switchD_00c1eb80_caseD_3:
      if ((param_4 >> 4 & 1) == 0) {
        if ((long)dVar19 < 0) {
          param_5 = 0;
          goto LAB_00c1e744;
        }
        param_3 = 1;
        goto LAB_00c1e6a0;
      }
      break;
    case 4:
      dVar19 = 0.0;
      break;
    case 5:
    case 6:
      dVar19 = 0.0;
      goto switchD_00c1eb80_caseD_5;
    default:
      dVar19 = 0.0;
LAB_00c1e6a0:
      dVar19 = (double)(long)dVar19;
      if (param_6 != 0) {
        dVar19 = -dVar19;
      }
LAB_00c1e6ac:
      *param_2 = dVar19;
      goto LAB_00c1ea0c;
    }
switchD_00c1eb80_caseD_4:
    if ((ulong)dVar19 >> 0x20 == 0) {
      param_3 = 4;
      iVar7 = -SUB84(dVar19,0);
      if (param_6 == 0) {
        iVar7 = SUB84(dVar19,0);
      }
      *(int *)param_2 = iVar7;
      goto LAB_00c1ea0c;
    }
  }
  else {
    if (param_7 < 0x321) {
      if (((param_5 ^ param_7) & 1) != 0) {
        bVar9 = *param_1;
        uVar17 = param_7 - 1;
        goto joined_r0x00c1e6dc;
      }
      pbVar4 = local_208;
      uVar17 = param_7;
LAB_00c1e540:
      if (1 < uVar17) goto LAB_00c1e548;
    }
    else {
      param_5 = (param_7 + param_5) - 800;
      if ((param_5 & 1) != 0) {
        bVar9 = *param_1;
        uVar17 = 799;
joined_r0x00c1e6dc:
        if (bVar9 == 0x2e) {
          bVar9 = param_1[1];
          param_1 = param_1 + 1;
        }
        param_1 = param_1 + 1;
        pbVar4 = local_208 + 1;
        local_208[0] = bVar9 & 0xf;
        goto LAB_00c1e540;
      }
      pbVar4 = local_208;
      uVar17 = 800;
LAB_00c1e548:
      pbVar16 = pbVar4 + (ulong)(uVar17 - 2 >> 1) + 1;
      do {
        while (*param_1 != 0x2e) {
          bVar9 = param_1[1];
          cVar13 = (*param_1 & 0xf) * '\n';
          if (bVar9 == 0x2e) goto LAB_00c1e5c4;
LAB_00c1e578:
          pbVar3 = pbVar4 + 1;
          *pbVar4 = (bVar9 & 0xf) + cVar13;
          param_1 = param_1 + 2;
          pbVar4 = pbVar3;
          if (pbVar3 == pbVar16) goto LAB_00c1e5e4;
        }
        pbVar3 = param_1 + 1;
        cVar13 = (param_1[1] & 0xf) * '\n';
        bVar9 = param_1[2];
        param_1 = pbVar3;
        if (bVar9 != 0x2e) goto LAB_00c1e578;
LAB_00c1e5c4:
        pbVar5 = pbVar4 + 1;
        pbVar3 = param_1 + 2;
        param_1 = param_1 + 3;
        *pbVar4 = (*pbVar3 & 0xf) + cVar13;
        pbVar4 = pbVar5;
      } while (pbVar5 != pbVar16);
LAB_00c1e5e4:
      uVar17 = uVar17 & 1;
      pbVar4 = pbVar16;
    }
    pbVar16 = pbVar4;
    if (uVar17 != 0) {
      bVar9 = *param_1;
      pbVar16 = pbVar4 + 1;
      if (bVar9 == 0x2e) {
        bVar9 = param_1[1];
        param_1 = param_1 + 1;
      }
      param_5 = param_5 - 1;
      param_7 = param_7 + 1;
      param_1 = param_1 + 1;
      *pbVar4 = (bVar9 & 0xf) * '\n';
    }
    if (param_7 < 0x321) {
      for (; (param_7 < 0x13 && (0 < (int)param_5)); param_5 = param_5 - 2) {
        param_7 = param_7 + 2;
        *pbVar16 = 0;
        pbVar16 = pbVar16 + 1;
      }
      if ((param_5 == 0) && (param_7 < 0x15)) {
        dVar19 = (double)(ulong)local_208[0];
        if (local_208 + 1 < pbVar16) {
          pbVar4 = local_208 + 2;
          do {
            pbVar3 = pbVar4 + -1;
            pbVar4 = pbVar4 + 1;
            dVar19 = (double)((ulong)*pbVar3 + (long)dVar19 * 100);
          } while (pbVar4 != pbVar16 + 1);
        }
        if (param_7 == 0x14) {
          if ((local_208[0] < 0x13) && ((long)dVar19 < 0)) {
            switch(param_3) {
            case 3:
              goto switchD_00c1eb80_caseD_3;
            case 4:
              goto switchD_00c1eb80_caseD_4;
            case 5:
            case 6:
              goto switchD_00c1eb80_caseD_5;
            }
          }
          param_5 = 0;
        }
        else {
          switch(param_3) {
          case 3:
            goto switchD_00c1ebb0_caseD_3;
          case 4:
            goto switchD_00c1eb80_caseD_4;
          case 5:
          case 6:
switchD_00c1eb80_caseD_5:
            dVar1 = (double)-(long)dVar19;
            if (param_6 == 0) {
              dVar1 = dVar19;
            }
            *param_2 = dVar1;
            goto LAB_00c1ea0c;
          default:
            if (-1 < (long)dVar19) goto LAB_00c1e6a0;
            param_5 = 0;
          }
        }
      }
    }
    else {
      do {
        bVar9 = *param_1;
        if (bVar9 == 0x2e) {
          bVar9 = param_1[1];
          param_1 = param_1 + 1;
        }
        if (bVar9 != 0x30) {
          pbVar16[-1] = pbVar16[-1] | 1;
          break;
        }
        param_7 = param_7 - 1;
        param_1 = param_1 + 1;
      } while (param_7 != 800);
    }
    if (param_3 == 3) {
      if ((param_4 >> 4 & 1) == 0) {
LAB_00c1e744:
        param_3 = 1;
        uVar15 = (long)pbVar16 - (long)local_208;
        iVar7 = (int)uVar15 + ((int)param_5 >> 1);
        goto joined_r0x00c1e750;
      }
    }
    else if (param_3 < 4) {
      uVar15 = (long)pbVar16 - (long)local_208;
      iVar7 = (int)uVar15 + ((int)param_5 >> 1);
joined_r0x00c1e750:
      if (0x9b < iVar7) {
        if (param_6 == 0) {
          *param_2 = INFINITY;
        }
        else {
          *param_2 = -INFINITY;
        }
        goto LAB_00c1ea0c;
      }
      if (-0xa4 < iVar7) {
        uVar8 = uVar15 & 0xffffffff;
        if (iVar7 < 9) {
          iVar2 = 0;
          uVar17 = 0;
          uVar11 = uVar8;
          if (iVar7 < (int)((uint)uVar15 & 0x1ff)) {
            do {
              iVar2 = iVar2 + -6;
              uVar14 = (int)uVar11 - 1U & 0x1ff;
              uVar15 = (ulong)uVar14;
              uVar10 = (uint)local_208[uVar15] << 6;
              while( true ) {
                uVar18 = uVar10 / 100;
                local_208[uVar15] = (byte)(uVar10 % 100);
                uVar12 = (uint)uVar11;
                if (uVar14 == uVar17) break;
                uVar14 = (uint)uVar15;
                if (uVar10 % 100 == 0) {
                  if ((uVar12 - 1 & 0x1ff) == uVar14) {
                    uVar12 = uVar14;
                  }
                  uVar11 = (ulong)uVar12;
                }
                uVar14 = uVar14 - 1 & 0x1ff;
                uVar15 = (ulong)uVar14;
                uVar10 = uVar18 + (uint)local_208[uVar15] * 0x40;
              }
              uVar8 = uVar11;
              if (uVar18 != 0) {
                uVar10 = uVar12 - 1 & 0x1ff;
                uVar8 = (ulong)uVar10;
                uVar17 = uVar17 - 1 & 0x1ff;
                pbVar16 = local_208 + uVar8;
                if ((*pbVar16 != 0) && (uVar8 = uVar11, uVar17 == uVar12)) {
                  uVar8 = (ulong)uVar10;
                  uVar15 = (ulong)(uVar10 - 1) & 0x1ff;
                  local_208[uVar15] = *pbVar16 | local_208[uVar15];
                }
                uVar11 = (ulong)uVar17;
                iVar7 = iVar7 + 1;
                local_208[uVar11] = (byte)uVar18;
                if (iVar7 == 9) {
                  uVar17 = uVar17 + 1 & 0x1ff;
                  goto LAB_00c1e840;
                }
              }
              uVar11 = uVar8;
            } while (iVar7 < (int)((int)uVar8 - uVar17 & 0x1ff));
            uVar11 = (ulong)uVar17;
            uVar17 = uVar17 + 1 & 0x1ff;
          }
          else {
LAB_00c1ec78:
            iVar2 = 0;
            uVar17 = 1;
            uVar11 = 0;
          }
        }
        else {
          iVar2 = 0;
          uVar15 = 0;
          if (iVar7 < 10) goto LAB_00c1ec78;
          do {
            iVar2 = iVar2 + 6;
            uVar17 = 0;
            uVar11 = uVar15;
            do {
              uVar18 = (uint)uVar11;
              uVar12 = (uint)uVar15;
              bVar9 = local_208[uVar15];
              uVar14 = uVar17 + bVar9 >> 6;
              local_208[uVar15] = (byte)uVar14;
              uVar10 = uVar12 + 1 & 0x1ff;
              uVar15 = (ulong)uVar10;
              uVar14 = (uint)(uVar14 == 0 && uVar18 == uVar12);
              uVar12 = uVar18 + 1 & 0x1ff;
              if (uVar14 == 0) {
                uVar12 = uVar18;
              }
              uVar11 = (ulong)uVar12;
              uVar17 = (uVar17 + bVar9 & 0x3f) * 100;
              iVar7 = iVar7 - uVar14;
            } while (uVar10 != (uint)uVar8);
            for (; uVar17 != 0; uVar17 = (uVar17 & 0x3f) * 100) {
              if ((uint)uVar8 == uVar12) {
                uVar15 = (ulong)(uVar12 - 1) & 0x1ff;
                local_208[uVar15] = local_208[uVar15] | 1;
                uVar8 = uVar11;
                break;
              }
              local_208[uVar8] = (byte)(uVar17 >> 6);
              uVar8 = (ulong)((uint)uVar8 + 1 & 0x1ff);
            }
            uVar15 = uVar11;
          } while (9 < iVar7);
          uVar17 = uVar12 + 1 & 0x1ff;
        }
LAB_00c1e840:
        iVar6 = iVar7 + -1;
        uVar15 = (ulong)local_208[uVar11];
        uVar10 = (uint)uVar8;
        if (iVar6 < 1) {
LAB_00c1e9c4:
          if (uVar17 == uVar10) goto LAB_00c1ebc8;
          iVar2 = iVar2 + -1;
          do {
            if (local_208[uVar17] != 0) {
              uVar8 = uVar15 << 1 | 1;
              break;
            }
            uVar17 = uVar17 + 1 & 0x1ff;
            uVar8 = uVar15 << 1;
          } while (uVar17 != uVar10);
        }
        else {
          if (uVar10 != uVar17) {
            uVar15 = (ulong)uVar17;
            iVar6 = iVar7 + -2;
            uVar17 = uVar17 + 1 & 0x1ff;
            uVar15 = (ulong)local_208[uVar15] + (ulong)local_208[uVar11] * 100;
            if (iVar6 != 0) {
              if (uVar17 == uVar10) goto LAB_00c1ebc8;
              uVar8 = (ulong)uVar17;
              iVar6 = iVar7 + -3;
              uVar17 = uVar17 + 1 & 0x1ff;
              uVar15 = (ulong)local_208[uVar8] + uVar15 * 100;
              if (iVar6 != 0) {
                if (uVar17 == uVar10) goto LAB_00c1ebc8;
                uVar8 = (ulong)uVar17;
                iVar6 = iVar7 + -4;
                uVar17 = uVar17 + 1 & 0x1ff;
                uVar15 = (ulong)local_208[uVar8] + uVar15 * 100;
                if (iVar6 != 0) {
                  if (uVar17 == uVar10) goto LAB_00c1ebc8;
                  uVar8 = (ulong)uVar17;
                  iVar6 = iVar7 + -5;
                  uVar17 = uVar17 + 1 & 0x1ff;
                  uVar15 = (ulong)local_208[uVar8] + uVar15 * 100;
                  if (iVar6 != 0) {
                    if (uVar17 == uVar10) goto LAB_00c1ebc8;
                    uVar8 = (ulong)uVar17;
                    iVar6 = iVar7 + -6;
                    uVar17 = uVar17 + 1 & 0x1ff;
                    uVar15 = (ulong)local_208[uVar8] + uVar15 * 100;
                    if (iVar6 != 0) {
                      if (uVar17 == uVar10) goto LAB_00c1ebc8;
                      uVar8 = (ulong)uVar17;
                      iVar6 = iVar7 + -7;
                      uVar17 = uVar17 + 1 & 0x1ff;
                      uVar15 = (ulong)local_208[uVar8] + uVar15 * 100;
                      if (iVar6 != 0) {
                        if (uVar17 == uVar10) goto LAB_00c1ebc8;
                        uVar8 = (ulong)uVar17;
                        iVar6 = iVar7 + -8;
                        uVar17 = uVar17 + 1 & 0x1ff;
                        uVar15 = (ulong)local_208[uVar8] + uVar15 * 100;
                        if (iVar6 != 0) {
                          if (uVar17 == uVar10) goto LAB_00c1ebc8;
                          uVar8 = (ulong)uVar17;
                          uVar17 = uVar17 + 1 & 0x1ff;
                          iVar6 = iVar7 + -9;
                          uVar15 = (ulong)local_208[uVar8] + uVar15 * 100;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_00c1e9c4;
          }
LAB_00c1ebc8:
          uVar8 = uVar15;
          if (((((-1 < iVar6 + -1) && (uVar8 = uVar15 * 100, iVar6 != 1)) &&
               (uVar8 = uVar15 * 10000, iVar6 != 2)) &&
              ((uVar8 = uVar15 * 1000000, iVar6 != 3 && (uVar8 = uVar15 * 100000000, iVar6 != 4))))
             && ((uVar8 = uVar15 * 10000000000, iVar6 != 5 &&
                 ((uVar8 = uVar15 * 1000000000000, iVar6 != 6 &&
                  (uVar8 = uVar15 * 100000000000000, iVar6 != 7)))))) {
            uVar8 = uVar15 * 10000000000000000;
          }
        }
        FUN_00c1e430(uVar8,param_2,iVar2,param_6);
        goto LAB_00c1ea0c;
      }
      dVar19 = 0.0;
      if (param_6 != 0) {
        dVar19 = -0.0;
      }
      goto LAB_00c1e6ac;
    }
  }
  param_3 = 0;
LAB_00c1ea0c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}

