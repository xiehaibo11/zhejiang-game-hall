
ulong FUN_00d61298(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = *param_2;
  if (uVar1 < 0x186a1) {
    uVar2 = param_2[1];
    if ((int)uVar2 < 0) {
      return 1;
    }
    if ((int)(100000 - uVar1) < (int)uVar2) {
      return 1;
    }
    uVar3 = param_2[2];
    if (uVar3 < 0x186a1) {
      uVar4 = param_2[3];
      if ((int)uVar4 < 0) {
        return 1;
      }
      if ((int)(100000 - uVar3) < (int)uVar4) {
        return 1;
      }
      uVar5 = param_2[4];
      if (uVar5 < 0x186a1) {
        uVar6 = param_2[5];
        if ((int)uVar6 < 0) {
          return 1;
        }
        if ((int)(100000 - uVar5) < (int)uVar6) {
          return 1;
        }
        uVar7 = param_2[6];
        if (uVar7 < 0x186a1) {
          uVar8 = param_2[7];
          if ((int)uVar8 < 0) {
            return 1;
          }
          if ((int)(100000 - uVar7) < (int)uVar8) {
            return 1;
          }
          iVar19 = 0;
          iVar17 = uVar3 - uVar5;
          iVar16 = uVar2 - uVar6;
          if ((iVar17 != 0) && (iVar16 != 0)) {
            dVar21 = (double)(long)(((double)iVar17 * (double)iVar16) / 7.0 + 0.5);
            if (2147483647.0 < dVar21) {
              return 2;
            }
            if (dVar21 < -2147483648.0) {
              return 2;
            }
            iVar19 = (int)dVar21;
          }
          iVar20 = 0;
          iVar9 = uVar1 - uVar5;
          iVar18 = uVar4 - uVar6;
          if ((iVar9 != 0) && (iVar18 != 0)) {
            dVar21 = (double)(long)(((double)iVar9 * (double)iVar18) / 7.0 + 0.5);
            if (2147483647.0 < dVar21) {
              return 2;
            }
            if (dVar21 < -2147483648.0) {
              return 2;
            }
            iVar20 = (int)dVar21;
          }
          iVar15 = 0;
          iVar10 = uVar8 - uVar6;
          if ((iVar17 != 0) && (iVar10 != 0)) {
            dVar21 = (double)(long)(((double)iVar17 * (double)iVar10) / 7.0 + 0.5);
            if (2147483647.0 < dVar21) {
              return 2;
            }
            if (dVar21 < -2147483648.0) {
              return 2;
            }
            iVar15 = (int)dVar21;
          }
          iVar13 = 0;
          iVar17 = uVar7 - uVar5;
          if ((iVar18 != 0) && (iVar17 != 0)) {
            dVar21 = (double)(long)(((double)iVar18 * (double)iVar17) / 7.0 + 0.5);
            if (2147483647.0 < dVar21) {
              return 2;
            }
            if (dVar21 < -2147483648.0) {
              return 2;
            }
            iVar13 = (int)dVar21;
          }
          if (iVar15 - iVar13 != 0) {
            iVar19 = iVar19 - iVar20;
            if (uVar8 != 0 && iVar19 != 0) {
              dVar21 = (double)(long)(((double)(int)uVar8 * (double)iVar19) /
                                      (double)(iVar15 - iVar13) + 0.5);
              if (2147483647.0 < dVar21) {
                return 1;
              }
              if (dVar21 < -2147483648.0) {
                return 1;
              }
              iVar18 = (int)dVar21;
              if (iVar18 <= (int)uVar8) {
                return 1;
              }
            }
            else {
              iVar18 = 0;
              if (-1 < (int)uVar8) {
                return 1;
              }
            }
            iVar20 = 0;
            if ((iVar16 != 0) && (iVar17 != 0)) {
              dVar21 = (double)(long)(((double)iVar16 * (double)iVar17) / 7.0 + 0.5);
              if (2147483647.0 < dVar21) {
                return 2;
              }
              if (dVar21 < -2147483648.0) {
                return 2;
              }
              iVar20 = (int)dVar21;
            }
            iVar17 = 0;
            if ((iVar9 != 0) && (iVar10 != 0)) {
              dVar21 = (double)(long)(((double)iVar9 * (double)iVar10) / 7.0 + 0.5);
              if (2147483647.0 < dVar21) {
                return 2;
              }
              if (dVar21 < -2147483648.0) {
                return 2;
              }
              iVar17 = (int)dVar21;
            }
            if (iVar20 - iVar17 != 0) {
              if (uVar8 != 0 && iVar19 != 0) {
                dVar21 = (double)(long)(((double)(int)uVar8 * (double)iVar19) /
                                        (double)(iVar20 - iVar17) + 0.5);
                if (2147483647.0 < dVar21) {
                  return 1;
                }
                if (dVar21 < -2147483648.0) {
                  return 1;
                }
                iVar17 = (int)dVar21;
                if (iVar17 <= (int)uVar8) {
                  return 1;
                }
              }
              else {
                iVar17 = 0;
                if (-1 < (int)uVar8) {
                  return 1;
                }
              }
              dVar21 = 10000000000.0 / (double)(int)uVar8 + 0.5;
              iVar16 = (int)dVar21;
              dVar22 = (double)(long)dVar21;
              dVar21 = (double)iVar18;
              bVar11 = false;
              bVar12 = true;
              if (-2147483648.0 <= dVar22) {
                bVar11 = false;
                bVar12 = true;
                if (!NAN(dVar22)) {
                  bVar11 = dVar22 == 2147483647.0;
                  bVar12 = 2147483647.0 <= dVar22;
                }
              }
              dVar22 = (double)iVar17;
              dVar23 = 10000000000.0 / dVar21 + 0.5;
              iVar19 = (int)dVar23;
              dVar23 = (double)(long)dVar23;
              dVar24 = 10000000000.0 / dVar22 + 0.5;
              if (bVar12 && !bVar11) {
                iVar16 = 0;
              }
              bVar11 = false;
              bVar12 = true;
              if (-2147483648.0 <= dVar23) {
                bVar11 = false;
                bVar12 = true;
                if (!NAN(dVar23)) {
                  bVar11 = dVar23 == 2147483647.0;
                  bVar12 = 2147483647.0 <= dVar23;
                }
              }
              dVar23 = (double)(long)dVar24;
              if (bVar12 && !bVar11) {
                iVar19 = 0;
              }
              bVar11 = false;
              bVar12 = true;
              if (-2147483648.0 <= dVar23) {
                bVar11 = false;
                bVar12 = true;
                if (!NAN(dVar23)) {
                  bVar11 = dVar23 == 2147483647.0;
                  bVar12 = 2147483647.0 <= dVar23;
                }
              }
              iVar9 = 0;
              if (!bVar12 || bVar11) {
                iVar9 = -(int)dVar24;
              }
              iVar9 = iVar9 + (iVar16 - iVar19);
              if ((0 < iVar9) && (iVar18 != 0)) {
                iVar16 = 0;
                if (uVar1 != 0) {
                  dVar23 = (double)(long)(((double)(int)uVar1 * 100000.0) / dVar21 + 0.5);
                  if (2147483647.0 < dVar23) {
                    return 1;
                  }
                  if (dVar23 < -2147483648.0) {
                    return 1;
                  }
                  iVar16 = (int)dVar23;
                }
                *param_1 = iVar16;
                iVar16 = 0;
                if (param_2[1] != 0) {
                  dVar23 = (double)(long)(((double)(int)param_2[1] * 100000.0) / dVar21 + 0.5);
                  if (2147483647.0 < dVar23) {
                    return 1;
                  }
                  if (dVar23 < -2147483648.0) {
                    return 1;
                  }
                  iVar16 = (int)dVar23;
                }
                param_1[1] = iVar16;
                iVar16 = (100000 - *param_2) - param_2[1];
                iVar19 = 0;
                if (iVar16 != 0) {
                  dVar21 = (double)(long)(((double)iVar16 * 100000.0) / dVar21 + 0.5);
                  if (2147483647.0 < dVar21) {
                    return 1;
                  }
                  if (dVar21 < -2147483648.0) {
                    return 1;
                  }
                  iVar19 = (int)dVar21;
                }
                param_1[2] = iVar19;
                if (iVar17 != 0) {
                  iVar17 = 0;
                  if (param_2[2] != 0) {
                    dVar21 = (double)(long)(((double)(int)param_2[2] * 100000.0) / dVar22 + 0.5);
                    if (2147483647.0 < dVar21) {
                      return 1;
                    }
                    if (dVar21 < -2147483648.0) {
                      return 1;
                    }
                    iVar17 = (int)dVar21;
                  }
                  param_1[3] = iVar17;
                  iVar17 = 0;
                  if (param_2[3] != 0) {
                    dVar21 = (double)(long)(((double)(int)param_2[3] * 100000.0) / dVar22 + 0.5);
                    if (2147483647.0 < dVar21) {
                      return 1;
                    }
                    if (dVar21 < -2147483648.0) {
                      return 1;
                    }
                    iVar17 = (int)dVar21;
                  }
                  param_1[4] = iVar17;
                  iVar17 = (100000 - param_2[2]) - param_2[3];
                  iVar16 = 0;
                  if (iVar17 != 0) {
                    dVar21 = (double)(long)(((double)iVar17 * 100000.0) / dVar22 + 0.5);
                    if (2147483647.0 < dVar21) {
                      return 1;
                    }
                    if (dVar21 < -2147483648.0) {
                      return 1;
                    }
                    iVar16 = (int)dVar21;
                  }
                  param_1[5] = iVar16;
                  iVar17 = 0;
                  if (param_2[4] != 0) {
                    dVar21 = (double)(long)(((double)iVar9 * (double)(int)param_2[4]) / 100000.0 +
                                           0.5);
                    if (2147483647.0 < dVar21) {
                      return 1;
                    }
                    if (dVar21 < -2147483648.0) {
                      return 1;
                    }
                    iVar17 = (int)dVar21;
                  }
                  param_1[6] = iVar17;
                  iVar17 = 0;
                  if (param_2[5] != 0) {
                    dVar21 = (double)(long)(((double)iVar9 * (double)(int)param_2[5]) / 100000.0 +
                                           0.5);
                    if (2147483647.0 < dVar21) {
                      return 1;
                    }
                    if (dVar21 < -2147483648.0) {
                      return 1;
                    }
                    iVar17 = (int)dVar21;
                  }
                  param_1[7] = iVar17;
                  iVar17 = (100000 - param_2[4]) - param_2[5];
                  iVar16 = 0;
                  if (iVar17 != 0) {
                    dVar21 = (double)(long)(((double)iVar9 * (double)iVar17) / 100000.0 + 0.5);
                    if (2147483647.0 < dVar21) {
                      return 1;
                    }
                    if (dVar21 < -2147483648.0) {
                      return 1;
                    }
                    iVar16 = (int)dVar21;
                  }
                  param_1[8] = iVar16;
                  uVar14 = FUN_00d654f4(&local_30,param_1);
                  if ((int)uVar14 != 0) {
                    return uVar14;
                  }
                  if ((int)param_2[6] < local_18 + -5) {
                    return 1;
                  }
                  if (local_18 + 5 < (int)param_2[6]) {
                    return 1;
                  }
                  if ((int)param_2[7] < local_14 + -5) {
                    return 1;
                  }
                  if (local_14 + 5 < (int)param_2[7]) {
                    return 1;
                  }
                  if ((int)*param_2 < local_30 + -5) {
                    return 1;
                  }
                  if (local_30 + 5 < (int)*param_2) {
                    return 1;
                  }
                  if ((int)param_2[1] < local_2c + -5) {
                    return 1;
                  }
                  if (local_2c + 5 < (int)param_2[1]) {
                    return 1;
                  }
                  if ((int)param_2[2] < local_28 + -5) {
                    return 1;
                  }
                  if (local_28 + 5 < (int)param_2[2]) {
                    return 1;
                  }
                  if ((int)param_2[3] < local_24 + -5) {
                    return 1;
                  }
                  if (local_24 + 5 < (int)param_2[3]) {
                    return 1;
                  }
                  if (local_20 + -5 <= (int)param_2[4]) {
                    if ((int)param_2[4] <= local_20 + 5) {
                      return (ulong)((int)param_2[5] < local_1c + -5 ||
                                    local_1c + 5 < (int)param_2[5]);
                    }
                    return 1;
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

