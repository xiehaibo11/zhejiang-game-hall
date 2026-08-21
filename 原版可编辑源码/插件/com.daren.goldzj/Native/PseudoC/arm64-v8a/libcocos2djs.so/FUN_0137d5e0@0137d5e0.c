
ulong FUN_0137d5e0(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x26;
  long unaff_x27;
  
  if ((*(int *)(param_4 + (long)(int)param_1 * 2 + 0x1f) != (int)*(undefined8 *)(unaff_x26 + 0xb88))
     || ((param_2 & 1) == 0)) goto LAB_0137e324;
  uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  uVar1 = *(uint *)(param_3 + 3);
  uVar5 = (uint)uVar8;
  uVar13 = uVar1 + (uVar5 ^ (uint)(uVar8 >> 0xd)) & 0x1ffc;
  lVar15 = (ulong)uVar13 * 3;
  lVar14 = *(long *)(unaff_x26 + 11000);
  iVar7 = (int)param_3;
  if ((iVar7 == *(int *)(lVar14 + lVar15)) && (uVar5 == *(uint *)(lVar14 + lVar15 + 8))) {
    uVar13 = *(uint *)(lVar14 + lVar15 + 4);
  }
  else {
    lVar15 = (ulong)((uVar13 - iVar7) + 0xa6e5 & 0x7fc) * 3;
    lVar14 = *(long *)(unaff_x26 + 0x2b10);
    if ((iVar7 != *(int *)(lVar14 + lVar15)) || (uVar5 != *(uint *)(lVar14 + lVar15 + 8)))
    goto LAB_0137e324;
    uVar13 = *(uint *)(lVar14 + lVar15 + 4);
  }
  uVar10 = unaff_x26 + (ulong)uVar13;
  uVar9 = param_2;
  uVar11 = uVar10;
  if ((uVar10 & 1) != 0) {
    if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
      if (((long)*(int *)(uVar10 + 0x17) & 0x80000000U) == 0) {
        UNRECOVERED_JUMPTABLE = (code *)(uVar10 + 0x3f);
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(uVar10 + 0x27) * 8 + unaff_x26 + 0x2c78);
      }
                    /* WARNING: Could not recover jumptable at 0x0137db78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*UNRECOVERED_JUMPTABLE)();
      return uVar8;
    }
    lVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 + 7);
    lVar15 = 0;
    if (((int)lVar14 != 0) && (*(int *)(lVar14 + 3) != 0)) goto LAB_0137e324;
    uVar11 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
    if (((long)(uVar11 << 0x20) >> 0x21 & 0x30U) != 0) {
      if (((uint)((int)uVar11 >> 1) >> 4 & 1) == 0) {
        uVar17 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
        uVar16 = (ulong)(uVar1 >> 3);
        if ((uVar17 & 1) == 0) {
          uVar17 = *(ulong *)(unaff_x26 + 0x410);
        }
        while( true ) {
          uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar14 = uVar16 * 3;
          lVar18 = (lVar14 + 5) * 4;
          iVar2 = *(int *)(uVar17 + lVar18 + 7);
          if (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if (iVar2 == iVar7) {
            if ((ulong)((long)((ulong)*(uint *)(uVar17 + 3) << 0x20) >> 0x21) <= lVar14 + 6U) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x137d864);
              (*UNRECOVERED_JUMPTABLE)();
            }
            uVar11 = unaff_x26 + (ulong)*(uint *)(uVar17 + lVar18 + 0xb);
            if ((*(int *)(uVar17 + lVar18 + 0xf) >> 1 & 1U) == 0) {
              return uVar11;
            }
            if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar15 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
              lVar14 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
              if ((*(byte *)(lVar14 + 9) >> 1 & 1) != 0) {
                uVar8 = FUN_0133fcc0(0,0,lVar15);
                return uVar8;
              }
              if ((int)lVar14 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                return *(ulong *)(unaff_x26 + 0xa0);
              }
              if (*(int *)(lVar15 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                iVar7 = *(int *)(uVar8 - 1);
                while (iVar7 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar8 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0x13);
                  iVar7 = *(int *)(uVar8 - 1);
                }
                if ((uVar8 & 1) != 0) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(uVar8 - 1);
                  sVar3 = *(short *)(lVar14 + 7);
                  if (sVar3 != 0x439) {
                    if (sVar3 == 0x417) {
                      uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                    else {
                      uVar8 = param_2;
                      if ((int)lVar14 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0137e324;
                    }
                  }
                  uVar4 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf) + -1) + 7);
                  if (0x87 < uVar4 && uVar4 < 0x92) {
                    uVar8 = FUN_01341080(param_1,lVar15,0);
                    return uVar8;
                  }
                }
              }
            }
            else {
              sVar3 = *(short *)(uVar8 + 7);
              if (sVar3 == 0x423) {
                if (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
              }
              else if (sVar3 == 0x439) {
                if (((*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    ((((*(byte *)(uVar8 + 9) & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd
                       < 4)) && ((*(byte *)(uVar8 + 9) & 1) == 0)))) &&
                   (uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                   (int)uVar8 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar8 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    return unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf);
                  }
                  return uVar8;
                }
              }
              else if (((sVar3 == 0x411) &&
                       (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar8 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) < 0x40)))) {
                return (ulong)(uint)(*(int *)(uVar8 + 7) * 2);
              }
            }
            goto LAB_0137e324;
          }
          lVar15 = lVar15 + 1;
          uVar16 = uVar16 + lVar15;
        }
      }
      else {
        uVar17 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf);
        if ((int)uVar17 == 3) goto LAB_0137e324;
        uVar17 = uVar17 & 0xfffffffffffffffd;
        lVar15 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
        if (((int)uVar17 != (int)lVar15) &&
           ((*(short *)(uVar8 + 7) != 0xab || (*(int *)(uVar17 + 0x27b) != *(int *)(lVar15 + 0x27b))
            ))) goto LAB_0137e324;
      }
    }
    uVar17 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
    if ((uVar17 & 1) == 0) {
      return uVar17;
    }
    if ((int)uVar17 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
      if ((int)uVar17 == 3) goto LAB_0137e324;
      uVar9 = uVar17 & 0xfffffffffffffffd;
    }
  }
  uVar17 = (long)(uVar11 << 0x20) >> 0x21;
  uVar16 = uVar17 & 0xf;
  uVar13 = (int)uVar11 >> 1;
  if (uVar16 == 4) {
    bVar6 = (uVar17 & 0x80) == 0;
    lVar15 = (uVar17 >> 8 & 0x7ff) * 4 + -1;
    if ((uVar13 >> 6 & 1) == 0) {
      uVar8 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
      if ((uVar8 & 1) == 0) {
        uVar8 = *(ulong *)(unaff_x26 + 0x168);
      }
      uVar8 = unaff_x26 + (ulong)*(uint *)(uVar8 + lVar15);
      if (bVar6) {
        return uVar8;
      }
      if (((uVar8 & 1) != 0) && (*(int *)(uVar8 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
        uVar12 = *(undefined8 *)(uVar8 + 3);
LAB_0137d764:
        uVar11 = **(ulong **)(unaff_x26 + 0x1428);
        uVar8 = uVar11 + 0xc;
        if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar11 = uVar11 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar8;
        }
        else {
          uVar11 = FUN_01348560(param_1,0xc);
        }
        *(int *)(uVar11 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(undefined8 *)(uVar11 + 3) = uVar12;
        return uVar11;
      }
    }
    else {
      if (bVar6) {
        return unaff_x26 + (ulong)*(uint *)(uVar9 + lVar15);
      }
      uVar8 = unaff_x26 + (ulong)*(uint *)(uVar9 + lVar15);
      if (((uVar8 & 1) != 0) && (*(int *)(uVar8 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
        uVar12 = *(undefined8 *)(uVar8 + 3);
        goto LAB_0137d764;
      }
    }
  }
  else {
    if (uVar16 == 5) {
      return uVar9;
    }
    if (uVar16 == 0xd) {
      return *(ulong *)(unaff_x26 + 0xa0);
    }
    if (uVar16 != 2) {
      if (uVar16 == 6) {
        uVar8 = FUN_0133fcc0(0,unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 +
                                                (ulong)*(uint *)(unaff_x26 +
                                                                 (ulong)*(uint *)(unaff_x26 +
                                                                                  (ulong)*(uint *)(
                                                  uVar9 - 1) + 0x17) +
                                                  (uVar17 >> 6 & 0x3ff) * 0xc + 0x17) + 3));
      }
      else {
        if (uVar16 == 7) {
          uVar8 = FUN_01348300(uVar9,param_2,param_3,
                               unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 +
                                                (ulong)*(uint *)(unaff_x26 +
                                                                 (ulong)*(uint *)(uVar9 - 1) + 0x17)
                                               + (uVar17 >> 6 & 0x3ff) * 0xc + 0x17));
          return uVar8;
        }
        bVar6 = uVar16 == 8;
        if ((!bVar6) && (uVar16 != 9)) {
          if (uVar16 != 3) {
            if (uVar16 == 0xb) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
            }
            if (uVar16 == 0xc) {
              uVar8 = FUN_013fc180(uVar9,param_3,param_2,2);
              return uVar8;
            }
            if (uVar16 != 0xe) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
            }
            uVar8 = uVar17 >> 6 & 0x1ffffff;
            lVar15 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 3);
            if (uVar8 < (ulong)((long)((ulong)*(uint *)(lVar15 + 3) << 0x20) >> 0x21)) {
              uVar8 = unaff_x26 +
                      (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar15 + uVar8 * 4 + 7) + 3);
              if ((int)uVar8 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
              }
              return uVar8;
            }
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x137dc18);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar11 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
          if ((int)uVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            if ((*(int *)(uVar9 + 7) >> 1 & 1U) == 0) {
              return uVar11;
            }
            if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar15 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
              lVar14 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
              if ((*(byte *)(lVar14 + 9) >> 1 & 1) != 0) {
                uVar8 = FUN_0133fcc0(0,lVar15);
                return uVar8;
              }
              if ((int)lVar14 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                return *(ulong *)(unaff_x26 + 0xa0);
              }
              if (*(int *)(lVar15 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                iVar7 = *(int *)(uVar8 - 1);
                while (iVar7 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar8 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0x13);
                  iVar7 = *(int *)(uVar8 - 1);
                }
                if ((uVar8 & 1) != 0) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(uVar8 - 1);
                  sVar3 = *(short *)(lVar14 + 7);
                  if (sVar3 != 0x439) {
                    if (sVar3 == 0x417) {
                      uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                    else {
                      uVar8 = param_2;
                      if ((int)lVar14 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0137e324;
                    }
                  }
                  uVar4 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf) + -1) + 7);
                  if (0x87 < uVar4 && uVar4 < 0x92) {
                    uVar8 = FUN_01341080(param_1,lVar15,0);
                    return uVar8;
                  }
                }
              }
            }
            else {
              sVar3 = *(short *)(uVar8 + 7);
              if (sVar3 == 0x423) {
                if (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
              }
              else if (sVar3 == 0x439) {
                if (((*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    ((((*(byte *)(uVar8 + 9) & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd
                       < 4)) && ((*(byte *)(uVar8 + 9) & 1) == 0)))) &&
                   (uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                   (int)uVar8 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar8 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    return unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf);
                  }
                  return uVar8;
                }
              }
              else if (((sVar3 == 0x411) &&
                       (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar8 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) < 0x40)))) {
                return (ulong)(uint)(*(int *)(uVar8 + 7) * 2);
              }
            }
          }
          goto LAB_0137e324;
        }
        if ((uVar13 >> 4 & 1) == 0) {
          uVar13 = *(uint *)(uVar10 + 0xf);
        }
        else {
          uVar13 = *(uint *)(uVar10 + 0x13);
        }
        if ((int)(unaff_x26 + (ulong)uVar13) == 3) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x137df10);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar12 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar9 + 7) + 3);
        uVar11 = param_2;
        if (!bVar6) {
          uVar11 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf);
        }
        uVar8 = FUN_01348140(uVar11,uVar12,0,unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb),uVar11,bVar6,
                             unaff_x26 + (ulong)uVar13 & 0xfffffffffffffffd,uVar12,param_2,0);
      }
      return uVar8;
    }
    uVar11 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
    uVar9 = (ulong)(uVar1 >> 3);
    if ((uVar11 & 1) == 0) {
      uVar11 = *(ulong *)(unaff_x26 + 0x410);
    }
    lVar15 = 0;
    while( true ) {
      uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar11 + 0xf) << 0x20) >> 0x21) - 1U;
      lVar14 = uVar9 * 3;
      lVar18 = (lVar14 + 5) * 4;
      iVar2 = *(int *)(uVar11 + lVar18 + 7);
      if (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
      if (iVar2 == iVar7) {
        if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) <= lVar14 + 6U) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x137e09c);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar9 = unaff_x26 + (ulong)*(uint *)(uVar11 + lVar18 + 0xb);
        if ((*(int *)(uVar11 + lVar18 + 0xf) >> 1 & 1U) == 0) {
          return uVar9;
        }
        if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
          lVar15 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
          lVar14 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
          if ((*(byte *)(lVar14 + 9) >> 1 & 1) != 0) {
            uVar8 = FUN_0133fcc0(0,lVar15);
            return uVar8;
          }
          if ((int)lVar14 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
            return *(ulong *)(unaff_x26 + 0xa0);
          }
          if (*(int *)(lVar15 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            iVar7 = *(int *)(uVar8 - 1);
            while (iVar7 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
              uVar8 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0x13);
              iVar7 = *(int *)(uVar8 - 1);
            }
            if ((uVar8 & 1) != 0) {
              lVar14 = unaff_x26 + (ulong)*(uint *)(uVar8 - 1);
              sVar3 = *(short *)(lVar14 + 7);
              if (sVar3 != 0x439) {
                if (sVar3 == 0x417) {
                  uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
                else {
                  uVar8 = param_2;
                  if ((int)lVar14 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                }
              }
              uVar4 = *(ushort *)
                       (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf) + -1)
                       + 7);
              if (0x87 < uVar4 && uVar4 < 0x92) {
                uVar8 = FUN_01341080(param_1,lVar15,0);
                return uVar8;
              }
            }
          }
        }
        else {
          sVar3 = *(short *)(uVar8 + 7);
          if (sVar3 == 0x423) {
            if (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
              return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
            }
          }
          else if (sVar3 == 0x439) {
            if (((*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                (((*(byte *)(uVar8 + 9) & 0xc0) == 0xc0 ||
                 ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4))
                )) && (((*(byte *)(uVar8 + 9) & 1) == 0 &&
                       (uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                       (int)uVar8 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
              if (*(int *)(uVar8 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                return unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf);
              }
              return uVar8;
            }
          }
          else if ((((sVar3 == 0x411) &&
                    (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                   (uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar8 & 1) != 0)) &&
                  (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) < 0x40)) {
            return (ulong)(uint)(*(int *)(uVar8 + 7) * 2);
          }
        }
        break;
      }
      lVar15 = lVar15 + 1;
      uVar9 = uVar9 + lVar15;
    }
  }
LAB_0137e324:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f10));
}

