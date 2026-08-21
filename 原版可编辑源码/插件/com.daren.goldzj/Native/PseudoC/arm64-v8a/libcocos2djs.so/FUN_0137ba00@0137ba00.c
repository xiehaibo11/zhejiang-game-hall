
ulong FUN_0137ba00(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar17;
  
  bVar6 = (param_2 & 1) == 0;
  if (bVar6) {
    lVar16 = *(long *)(unaff_x26 + 0x140);
  }
  else {
    lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  }
  if ((*(uint *)(lVar16 + 0xb) >> 0x18 & 1) != 0) goto LAB_0137c828;
  lVar10 = (long)(int)param_1 * 2;
  lVar14 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar10 + 0x1f);
  uVar12 = (uint)lVar14;
  iVar7 = (int)param_3;
  if (uVar12 == ((uint)lVar16 | 2)) {
    uVar9 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar10 + 0x23);
  }
  else {
    if ((uVar12 & 3) != 1) goto LAB_0137c828;
    if (*(int *)(lVar14 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x2b8)) {
      lVar10 = ((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21) + -2;
      do {
        if ((int)unaff_x26 + *(int *)(lVar14 + lVar10 * 4 + 7) == ((uint)lVar16 | 2)) {
          uVar9 = unaff_x26 + (ulong)*(uint *)(lVar14 + lVar10 * 4 + 0xb);
          goto LAB_0137bab0;
        }
        lVar10 = lVar10 + -2;
      } while (-1 < lVar10);
      goto LAB_0137c828;
    }
    if ((uVar12 != (uint)*(undefined8 *)(unaff_x26 + 0xb88)) || (bVar6)) goto LAB_0137c828;
    uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    uVar5 = (uint)uVar9;
    uVar12 = *(int *)(param_3 + 3) + (uVar5 ^ (uint)(uVar9 >> 0xd)) & 0x1ffc;
    lVar16 = (ulong)uVar12 * 3;
    lVar14 = *(long *)(unaff_x26 + 11000);
    if ((iVar7 == *(int *)(lVar14 + lVar16)) && (uVar5 == *(uint *)(lVar14 + lVar16 + 8))) {
      uVar9 = unaff_x26 + (ulong)*(uint *)(lVar14 + lVar16 + 4);
    }
    else {
      lVar16 = (ulong)((uVar12 - iVar7) + 0xa6e5 & 0x7fc) * 3;
      lVar14 = *(long *)(unaff_x26 + 0x2b10);
      if ((iVar7 != *(int *)(lVar14 + lVar16)) || (uVar5 != *(uint *)(lVar14 + lVar16 + 8)))
      goto LAB_0137c828;
      uVar9 = unaff_x26 + (ulong)*(uint *)(lVar14 + lVar16 + 4);
    }
  }
LAB_0137bab0:
  uVar8 = param_2;
  uVar11 = uVar9;
  if ((uVar9 & 1) != 0) {
    if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
      if (((long)*(int *)(uVar9 + 0x17) & 0x80000000U) == 0) {
        UNRECOVERED_JUMPTABLE = (code *)(uVar9 + 0x3f);
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(uVar9 + 0x27) * 8 + unaff_x26 + 0x2c78);
      }
                    /* WARNING: Could not recover jumptable at 0x0137c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*UNRECOVERED_JUMPTABLE)();
      return uVar9;
    }
    lVar14 = unaff_x26 + (ulong)*(uint *)(uVar9 + 7);
    lVar16 = 0;
    if (((int)lVar14 != 0) && (*(int *)(lVar14 + 3) != 0)) goto LAB_0137c828;
    uVar11 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
    if (((long)(uVar11 << 0x20) >> 0x21 & 0x30U) != 0) {
      if (((uint)((int)uVar11 >> 1) >> 4 & 1) == 0) {
        uVar15 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
        if ((uVar15 & 1) == 0) {
          uVar15 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar13 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        while( true ) {
          uVar13 = uVar13 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar14 = uVar13 * 3;
          lVar10 = (lVar14 + 5) * 4;
          iVar1 = *(int *)(uVar15 + lVar10 + 7);
          if (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if (iVar1 == iVar7) {
            if ((ulong)((long)((ulong)*(uint *)(uVar15 + 3) << 0x20) >> 0x21) <= lVar14 + 6U) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x137bd24);
              (*UNRECOVERED_JUMPTABLE)();
            }
            uVar9 = unaff_x26 + (ulong)*(uint *)(uVar15 + lVar10 + 0xb);
            if ((*(int *)(uVar15 + lVar10 + 0xf) >> 1 & 1U) == 0) {
              return uVar9;
            }
            if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar16 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
              lVar14 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
              if ((*(byte *)(lVar14 + 9) >> 1 & 1) != 0) {
                uVar9 = FUN_0133fcc0(0,lVar16);
                return uVar9;
              }
              if ((int)lVar14 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                return *(ulong *)(unaff_x26 + 0xa0);
              }
              if (*(int *)(lVar16 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                iVar7 = *(int *)(uVar9 - 1);
                while (iVar7 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0x13);
                  iVar7 = *(int *)(uVar9 - 1);
                }
                if ((uVar9 & 1) != 0) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(uVar9 - 1);
                  sVar3 = *(short *)(lVar14 + 7);
                  if (sVar3 != 0x439) {
                    if (sVar3 == 0x417) {
                      uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                    else {
                      uVar9 = param_2;
                      if ((int)lVar14 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0137c828;
                    }
                  }
                  uVar4 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) + -1) + 7);
                  if (0x87 < uVar4 && uVar4 < 0x92) {
                    uVar9 = FUN_01341080(param_1,lVar16,0);
                    return uVar9;
                  }
                }
              }
            }
            else {
              lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
              sVar3 = *(short *)(lVar16 + 7);
              if (sVar3 == 0x423) {
                if (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
              }
              else if (sVar3 == 0x439) {
                if (((*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar2 = *(byte *)(lVar16 + 9), (bVar2 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd
                       < 4)) && ((bVar2 & 1) == 0)))) &&
                   (uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                   (int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    return unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf);
                  }
                  return uVar9;
                }
              }
              else if (((sVar3 == 0x411) &&
                       (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar9 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) < 0x40)))) {
                return (ulong)(uint)(*(int *)(uVar9 + 7) * 2);
              }
            }
            goto LAB_0137c828;
          }
          lVar16 = lVar16 + 1;
          uVar13 = uVar13 + lVar16;
        }
      }
      else {
        uVar15 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf);
        if ((int)uVar15 == 3) goto LAB_0137c828;
        uVar15 = uVar15 & 0xfffffffffffffffd;
        lVar16 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
        if (((int)uVar15 != (int)lVar16) &&
           ((*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) != 0xab ||
            (*(int *)(uVar15 + 0x27b) != *(int *)(lVar16 + 0x27b))))) goto LAB_0137c828;
      }
    }
    uVar15 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
    if ((uVar15 & 1) == 0) {
      return uVar15;
    }
    if ((int)uVar15 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
      if ((int)uVar15 == 3) goto LAB_0137c828;
      uVar8 = uVar15 & 0xfffffffffffffffd;
    }
  }
  uVar15 = (long)(uVar11 << 0x20) >> 0x21;
  uVar13 = uVar15 & 0xf;
  uVar12 = (int)uVar11 >> 1;
  if (uVar13 == 4) {
    bVar6 = (uVar15 & 0x80) == 0;
    lVar16 = (uVar15 >> 8 & 0x7ff) * 4 + -1;
    if ((uVar12 >> 6 & 1) == 0) {
      uVar9 = unaff_x26 + (ulong)*(uint *)(uVar8 + 3);
      if ((uVar9 & 1) == 0) {
        uVar9 = *(ulong *)(unaff_x26 + 0x168);
      }
      uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + lVar16);
      if (bVar6) {
        return uVar9;
      }
      if (((uVar9 & 1) != 0) && (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
        uVar17 = *(undefined8 *)(uVar9 + 3);
LAB_0137bb7c:
        uVar11 = **(ulong **)(unaff_x26 + 0x1428);
        uVar9 = uVar11 + 0xc;
        if (uVar9 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar11 = uVar11 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar9;
        }
        else {
          uVar11 = FUN_01348560(param_1,0xc);
        }
        *(int *)(uVar11 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(undefined8 *)(uVar11 + 3) = uVar17;
        return uVar11;
      }
    }
    else {
      if (bVar6) {
        return unaff_x26 + (ulong)*(uint *)(uVar8 + lVar16);
      }
      uVar9 = unaff_x26 + (ulong)*(uint *)(uVar8 + lVar16);
      if (((uVar9 & 1) != 0) && (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
        uVar17 = *(undefined8 *)(uVar9 + 3);
        goto LAB_0137bb7c;
      }
    }
  }
  else {
    if (uVar13 == 5) {
      return uVar8;
    }
    if (uVar13 == 0xd) {
      return *(ulong *)(unaff_x26 + 0xa0);
    }
    if (uVar13 != 2) {
      if (uVar13 == 6) {
        uVar9 = FUN_0133fcc0(0,unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 +
                                                (ulong)*(uint *)(unaff_x26 +
                                                                 (ulong)*(uint *)(unaff_x26 +
                                                                                  (ulong)*(uint *)(
                                                  uVar8 - 1) + 0x17) +
                                                  (uVar15 >> 6 & 0x3ff) * 0xc + 0x17) + 3));
      }
      else {
        if (uVar13 == 7) {
          uVar9 = FUN_01348300(uVar8,param_2,param_3,
                               unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 +
                                                (ulong)*(uint *)(unaff_x26 +
                                                                 (ulong)*(uint *)(uVar8 - 1) + 0x17)
                                               + (uVar15 >> 6 & 0x3ff) * 0xc + 0x17));
          return uVar9;
        }
        if ((uVar13 != 8) && (uVar13 != 9)) {
          if (uVar13 != 3) {
            if (uVar13 == 0xb) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
            }
            if (uVar13 == 0xc) {
              uVar9 = FUN_013fc180(uVar8,param_3,param_2,2);
              return uVar9;
            }
            if (uVar13 != 0xe) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
            }
            uVar9 = uVar15 >> 6 & 0x1ffffff;
            lVar16 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 3);
            if (uVar9 < (ulong)((long)((ulong)*(uint *)(lVar16 + 3) << 0x20) >> 0x21)) {
              uVar9 = unaff_x26 +
                      (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar16 + uVar9 * 4 + 7) + 3);
              if ((int)uVar9 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
              }
              return uVar9;
            }
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x137c0f0);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar9 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0xb);
          if ((int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            if ((*(int *)(uVar8 + 7) >> 1 & 1U) == 0) {
              return uVar9;
            }
            if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar16 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
              lVar14 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
              if ((*(byte *)(lVar14 + 9) >> 1 & 1) != 0) {
                uVar9 = FUN_0133fcc0(0,lVar16);
                return uVar9;
              }
              if ((int)lVar14 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                return *(ulong *)(unaff_x26 + 0xa0);
              }
              if (*(int *)(lVar16 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                iVar7 = *(int *)(uVar9 - 1);
                while (iVar7 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0x13);
                  iVar7 = *(int *)(uVar9 - 1);
                }
                if ((uVar9 & 1) != 0) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(uVar9 - 1);
                  sVar3 = *(short *)(lVar14 + 7);
                  if (sVar3 != 0x439) {
                    if (sVar3 == 0x417) {
                      uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                    else {
                      uVar9 = param_2;
                      if ((int)lVar14 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0137c828;
                    }
                  }
                  uVar4 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) + -1) + 7);
                  if (0x87 < uVar4 && uVar4 < 0x92) {
                    uVar9 = FUN_01341080(param_1,lVar16,0);
                    return uVar9;
                  }
                }
              }
            }
            else {
              lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
              sVar3 = *(short *)(lVar16 + 7);
              if (sVar3 == 0x423) {
                if (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
              }
              else if (sVar3 == 0x439) {
                if (((*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar2 = *(byte *)(lVar16 + 9), (bVar2 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd
                       < 4)) && ((bVar2 & 1) == 0)))) &&
                   (uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                   (int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    return unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf);
                  }
                  return uVar9;
                }
              }
              else if (((sVar3 == 0x411) &&
                       (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar9 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) < 0x40)))) {
                return (ulong)(uint)(*(int *)(uVar9 + 7) * 2);
              }
            }
          }
          goto LAB_0137c828;
        }
        if ((uVar12 >> 4 & 1) == 0) {
          uVar12 = *(uint *)(uVar9 + 0xf);
        }
        else {
          uVar12 = *(uint *)(uVar9 + 0x13);
        }
        if ((int)(unaff_x26 + (ulong)uVar12) == 3) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x137c3f8);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (uVar13 != 8) {
          param_2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 0xf);
        }
        uVar9 = FUN_01348140(param_2,*(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar8 + 7) + 3),0,
                             unaff_x26 + (ulong)*(uint *)(uVar8 + 0xb),
                             unaff_x26 + (ulong)uVar12 & 0xfffffffffffffffd);
      }
      return uVar9;
    }
    uVar9 = unaff_x26 + (ulong)*(uint *)(uVar8 + 3);
    if ((uVar9 & 1) == 0) {
      uVar9 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar11 = (ulong)(*(uint *)(param_3 + 3) >> 3);
    lVar16 = 0;
    while( true ) {
      uVar11 = uVar11 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) << 0x20) >> 0x21) - 1U;
      lVar14 = uVar11 * 3;
      lVar10 = (lVar14 + 5) * 4;
      iVar1 = *(int *)(uVar9 + lVar10 + 7);
      if (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
      if (iVar1 == iVar7) {
        if ((ulong)((long)((ulong)*(uint *)(uVar9 + 3) << 0x20) >> 0x21) <= lVar14 + 6U) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x137c590);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar11 = unaff_x26 + (ulong)*(uint *)(uVar9 + lVar10 + 0xb);
        if ((*(int *)(uVar9 + lVar10 + 0xf) >> 1 & 1U) == 0) {
          return uVar11;
        }
        if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
          lVar16 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
          lVar14 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
          if ((*(byte *)(lVar14 + 9) >> 1 & 1) != 0) {
            uVar9 = FUN_0133fcc0(0,lVar16);
            return uVar9;
          }
          if ((int)lVar14 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
            return *(ulong *)(unaff_x26 + 0xa0);
          }
          if (*(int *)(lVar16 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
            iVar7 = *(int *)(uVar9 - 1);
            while (iVar7 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
              uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0x13);
              iVar7 = *(int *)(uVar9 - 1);
            }
            if ((uVar9 & 1) != 0) {
              lVar14 = unaff_x26 + (ulong)*(uint *)(uVar9 - 1);
              sVar3 = *(short *)(lVar14 + 7);
              if (sVar3 != 0x439) {
                if (sVar3 == 0x417) {
                  uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
                else {
                  uVar9 = param_2;
                  if ((int)lVar14 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                }
              }
              uVar4 = *(ushort *)
                       (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) + -1)
                       + 7);
              if (0x87 < uVar4 && uVar4 < 0x92) {
                uVar9 = FUN_01341080(param_1,lVar16,0);
                return uVar9;
              }
            }
          }
        }
        else {
          lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
          sVar3 = *(short *)(lVar16 + 7);
          if (sVar3 == 0x423) {
            if (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
              return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
            }
          }
          else if (sVar3 == 0x439) {
            if (((*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                ((bVar2 = *(byte *)(lVar16 + 9), (bVar2 & 0xc0) == 0xc0 ||
                 ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4))
                )) && (((bVar2 & 1) == 0 &&
                       (uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                       (int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
              if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                return unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf);
              }
              return uVar9;
            }
          }
          else if ((((sVar3 == 0x411) &&
                    (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                   (uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar9 & 1) != 0)) &&
                  (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) < 0x40)) {
            return (ulong)(uint)(*(int *)(uVar9 + 7) * 2);
          }
        }
        break;
      }
      lVar16 = lVar16 + 1;
      uVar11 = uVar11 + lVar16;
    }
  }
LAB_0137c828:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f10));
}

