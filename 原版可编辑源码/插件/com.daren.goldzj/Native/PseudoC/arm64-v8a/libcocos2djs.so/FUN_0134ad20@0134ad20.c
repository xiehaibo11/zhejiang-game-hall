
ulong FUN_0134ad20(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar15;
  
  if ((param_2 & 1) == 0) {
    uVar8 = (uint)*(undefined8 *)(unaff_x26 + 0x140);
  }
  else {
    uVar8 = (int)unaff_x26 + *(int *)(param_2 - 1);
  }
  lVar13 = unaff_x26 + (ulong)*(uint *)(param_4 + (long)(int)param_1 * 2 + 0x23);
  lVar9 = ((long)((ulong)*(uint *)(lVar13 + 3) << 0x20) >> 0x21) + -2;
  do {
    if ((int)unaff_x26 + *(int *)(lVar13 + lVar9 * 4 + 7) == (uVar8 | 2)) {
      uVar7 = unaff_x26 + (ulong)*(uint *)(lVar13 + lVar9 * 4 + 0xb);
      uVar6 = param_2;
      uVar10 = uVar7;
      if ((uVar7 & 1) == 0) goto LAB_0134ad94;
      if (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
        if (((long)*(int *)(uVar7 + 0x17) & 0x80000000U) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)(uVar7 + 0x3f);
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(uVar7 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
                    /* WARNING: Could not recover jumptable at 0x0134b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE)();
        return uVar7;
      }
      lVar13 = unaff_x26 + (ulong)*(uint *)(uVar7 + 7);
      if (((int)lVar13 == 0) || (*(int *)(lVar13 + 3) == 0)) {
        uVar10 = unaff_x26 + (ulong)*(uint *)(uVar7 + 3);
        if (((long)(uVar10 << 0x20) >> 0x21 & 0x30U) == 0) goto LAB_0134b220;
        if (((uint)((int)uVar10 >> 1) >> 4 & 1) == 0) {
          uVar12 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
          if ((uVar12 & 1) == 0) {
            uVar12 = *(ulong *)(unaff_x26 + 0x410);
          }
          uVar11 = (ulong)(*(uint *)(param_3 + 3) >> 3);
          lVar13 = 0;
          goto LAB_0134af08;
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf);
        if ((int)uVar12 != 3) {
          uVar12 = uVar12 & 0xfffffffffffffffd;
          lVar13 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
          ;
          if (((int)uVar12 == (int)lVar13) ||
             ((*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0xab &&
              (*(int *)(uVar12 + 0x27b) == *(int *)(lVar13 + 0x27b))))) goto LAB_0134b220;
        }
      }
      break;
    }
    lVar9 = lVar9 + -2;
  } while (-1 < lVar9);
LAB_0134ba5c:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1ed8));
LAB_0134af08:
  uVar11 = uVar11 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) - 1U;
  lVar9 = uVar11 * 3;
  lVar14 = (lVar9 + 5) * 4;
  iVar1 = *(int *)(uVar12 + lVar14 + 7);
  if (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) goto LAB_0134b220;
  if (iVar1 == (int)param_3) {
    if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= lVar9 + 6U) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x134af5c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    uVar7 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar14 + 0xb);
    if ((*(int *)(uVar12 + lVar14 + 0xf) >> 1 & 1U) == 0) {
      return uVar7;
    }
    if (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
      lVar13 = unaff_x26 + (ulong)*(uint *)(uVar7 + 3);
      lVar9 = unaff_x26 + (ulong)*(uint *)(lVar13 + -1);
      if ((*(byte *)(lVar9 + 9) >> 1 & 1) != 0) {
        uVar7 = FUN_0133fcc0(0,lVar13);
        return uVar7;
      }
      if ((int)lVar9 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
        return *(ulong *)(unaff_x26 + 0xa0);
      }
      if (*(int *)(lVar13 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
        uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
        iVar1 = *(int *)(uVar7 - 1);
        while (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
          uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0x13);
          iVar1 = *(int *)(uVar7 - 1);
        }
        if ((uVar7 & 1) != 0) {
          lVar9 = unaff_x26 + (ulong)*(uint *)(uVar7 - 1);
          sVar3 = *(short *)(lVar9 + 7);
          if (sVar3 != 0x439) {
            if (sVar3 == 0x417) {
              uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
            }
            else {
              uVar7 = param_2;
              if ((int)lVar9 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0134ba5c;
            }
          }
          uVar4 = *(ushort *)
                   (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf) + -1) + 7
                   );
          if (0x87 < uVar4 && uVar4 < 0x92) {
            uVar7 = FUN_01341080(param_1,lVar13,0);
            return uVar7;
          }
        }
      }
    }
    else {
      lVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      sVar3 = *(short *)(lVar13 + 7);
      if (sVar3 == 0x423) {
        if (*(int *)(uVar7 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
          return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
        }
      }
      else if (sVar3 == 0x439) {
        if (((*(int *)(uVar7 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
            (((bVar2 = *(byte *)(lVar13 + 9), (bVar2 & 0xc0) == 0xc0 ||
              ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)) &&
             ((bVar2 & 1) == 0)))) &&
           (uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
           (int)uVar7 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
          if (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
            return unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf);
          }
          return uVar7;
        }
      }
      else if (((sVar3 == 0x411) && (*(int *)(uVar7 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))
               ) && ((uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar7 & 1) != 0 &&
                     (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) < 0x40)))) {
        return (ulong)(uint)(*(int *)(uVar7 + 7) * 2);
      }
    }
    goto LAB_0134ba5c;
  }
  lVar13 = lVar13 + 1;
  uVar11 = uVar11 + lVar13;
  goto LAB_0134af08;
LAB_0134b220:
  uVar12 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0xb);
  if ((uVar12 & 1) == 0) {
    return uVar12;
  }
  if ((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
    if ((int)uVar12 == 3) goto LAB_0134ba5c;
    uVar6 = uVar12 & 0xfffffffffffffffd;
  }
LAB_0134ad94:
  uVar12 = (long)(uVar10 << 0x20) >> 0x21;
  uVar11 = uVar12 & 0xf;
  uVar8 = (int)uVar10 >> 1;
  if (uVar11 == 4) {
    bVar5 = (uVar12 & 0x80) == 0;
    lVar13 = (uVar12 >> 8 & 0x7ff) * 4 + -1;
    if ((uVar8 >> 6 & 1) == 0) {
      uVar7 = unaff_x26 + (ulong)*(uint *)(uVar6 + 3);
      if ((uVar7 & 1) == 0) {
        uVar7 = *(ulong *)(unaff_x26 + 0x168);
      }
      uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + lVar13);
      if (bVar5) {
        return uVar7;
      }
      if (((uVar7 & 1) != 0) && (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
        uVar15 = *(undefined8 *)(uVar7 + 3);
LAB_0134ae54:
        uVar10 = **(ulong **)(unaff_x26 + 0x1428);
        uVar7 = uVar10 + 0xc;
        if (uVar7 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar10 = uVar10 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar7;
        }
        else {
          uVar10 = FUN_01348560(param_1,0xc);
        }
        *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(undefined8 *)(uVar10 + 3) = uVar15;
        return uVar10;
      }
    }
    else {
      if (bVar5) {
        return unaff_x26 + (ulong)*(uint *)(uVar6 + lVar13);
      }
      uVar7 = unaff_x26 + (ulong)*(uint *)(uVar6 + lVar13);
      if (((uVar7 & 1) != 0) && (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
        uVar15 = *(undefined8 *)(uVar7 + 3);
        goto LAB_0134ae54;
      }
    }
  }
  else {
    if (uVar11 == 5) {
      return uVar6;
    }
    if (uVar11 == 0xd) {
      return *(ulong *)(unaff_x26 + 0xa0);
    }
    if (uVar11 != 2) {
      if (uVar11 == 6) {
        uVar7 = FUN_0133fcc0(0,unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 +
                                                (ulong)*(uint *)(unaff_x26 +
                                                                 (ulong)*(uint *)(unaff_x26 +
                                                                                  (ulong)*(uint *)(
                                                  uVar6 - 1) + 0x17) +
                                                  (uVar12 >> 6 & 0x3ff) * 0xc + 0x17) + 3));
      }
      else {
        if (uVar11 == 7) {
          uVar7 = FUN_01348300(uVar6,param_2,param_3,
                               unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 +
                                                (ulong)*(uint *)(unaff_x26 +
                                                                 (ulong)*(uint *)(uVar6 - 1) + 0x17)
                                               + (uVar12 >> 6 & 0x3ff) * 0xc + 0x17));
          return uVar7;
        }
        if ((uVar11 != 8) && (uVar11 != 9)) {
          if (uVar11 != 3) {
            if (uVar11 == 0xb) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
            }
            if (uVar11 == 0xc) {
              uVar7 = FUN_013fc180(uVar6,param_3,param_2,2);
              return uVar7;
            }
            if (uVar11 != 0xe) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
            }
            uVar7 = uVar12 >> 6 & 0x1ffffff;
            lVar13 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 3);
            if (uVar7 < (ulong)((long)((ulong)*(uint *)(lVar13 + 3) << 0x20) >> 0x21)) {
              uVar7 = unaff_x26 +
                      (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar13 + uVar7 * 4 + 7) + 3);
              if ((int)uVar7 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
              }
              return uVar7;
            }
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x134b324);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar7 = unaff_x26 + (ulong)*(uint *)(uVar6 + 0xb);
          if ((int)uVar7 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            if ((*(int *)(uVar6 + 7) >> 1 & 1U) == 0) {
              return uVar7;
            }
            if (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar13 = unaff_x26 + (ulong)*(uint *)(uVar7 + 3);
              lVar9 = unaff_x26 + (ulong)*(uint *)(lVar13 + -1);
              if ((*(byte *)(lVar9 + 9) >> 1 & 1) != 0) {
                uVar7 = FUN_0133fcc0(0,lVar13);
                return uVar7;
              }
              if ((int)lVar9 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                return *(ulong *)(unaff_x26 + 0xa0);
              }
              if (*(int *)(lVar13 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                iVar1 = *(int *)(uVar7 - 1);
                while (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0x13);
                  iVar1 = *(int *)(uVar7 - 1);
                }
                if ((uVar7 & 1) != 0) {
                  lVar9 = unaff_x26 + (ulong)*(uint *)(uVar7 - 1);
                  sVar3 = *(short *)(lVar9 + 7);
                  if (sVar3 != 0x439) {
                    if (sVar3 == 0x417) {
                      uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                    else {
                      uVar7 = param_2;
                      if ((int)lVar9 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0134ba5c;
                    }
                  }
                  uVar4 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf) + -1) + 7);
                  if (0x87 < uVar4 && uVar4 < 0x92) {
                    uVar7 = FUN_01341080(param_1,lVar13,0);
                    return uVar7;
                  }
                }
              }
            }
            else {
              lVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
              sVar3 = *(short *)(lVar13 + 7);
              if (sVar3 == 0x423) {
                if (*(int *)(uVar7 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
              }
              else if (sVar3 == 0x439) {
                if (((*(int *)(uVar7 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar2 = *(byte *)(lVar13 + 9), (bVar2 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd
                       < 4)) && ((bVar2 & 1) == 0)))) &&
                   (uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                   (int)uVar7 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    return unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf);
                  }
                  return uVar7;
                }
              }
              else if (((sVar3 == 0x411) &&
                       (*(int *)(uVar7 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar7 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) < 0x40)))) {
                return (ulong)(uint)(*(int *)(uVar7 + 7) * 2);
              }
            }
          }
          goto LAB_0134ba5c;
        }
        if ((uVar8 >> 4 & 1) == 0) {
          uVar8 = *(uint *)(uVar7 + 0xf);
        }
        else {
          uVar8 = *(uint *)(uVar7 + 0x13);
        }
        if ((int)(unaff_x26 + (ulong)uVar8) == 3) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x134b62c);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (uVar11 != 8) {
          param_2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 0xf);
        }
        uVar7 = FUN_01348140(param_2,*(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar6 + 7) + 3),0,
                             unaff_x26 + (ulong)*(uint *)(uVar6 + 0xb),
                             unaff_x26 + (ulong)uVar8 & 0xfffffffffffffffd);
      }
      return uVar7;
    }
    uVar7 = unaff_x26 + (ulong)*(uint *)(uVar6 + 3);
    if ((uVar7 & 1) == 0) {
      uVar7 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar10 = (ulong)(*(uint *)(param_3 + 3) >> 3);
    lVar13 = 0;
    while( true ) {
      uVar10 = uVar10 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf) << 0x20) >> 0x21) - 1U;
      lVar9 = uVar10 * 3;
      lVar14 = (lVar9 + 5) * 4;
      iVar1 = *(int *)(uVar7 + lVar14 + 7);
      if (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
      if (iVar1 == (int)param_3) {
        if ((ulong)((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21) <= lVar9 + 6U) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x134b7c4);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar10 = unaff_x26 + (ulong)*(uint *)(uVar7 + lVar14 + 0xb);
        if ((*(int *)(uVar7 + lVar14 + 0xf) >> 1 & 1U) == 0) {
          return uVar10;
        }
        if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
          lVar13 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
          lVar9 = unaff_x26 + (ulong)*(uint *)(lVar13 + -1);
          if ((*(byte *)(lVar9 + 9) >> 1 & 1) != 0) {
            uVar7 = FUN_0133fcc0(0,lVar13);
            return uVar7;
          }
          if ((int)lVar9 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
            return *(ulong *)(unaff_x26 + 0xa0);
          }
          if (*(int *)(lVar13 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
            iVar1 = *(int *)(uVar7 - 1);
            while (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
              uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0x13);
              iVar1 = *(int *)(uVar7 - 1);
            }
            if ((uVar7 & 1) != 0) {
              lVar9 = unaff_x26 + (ulong)*(uint *)(uVar7 - 1);
              sVar3 = *(short *)(lVar9 + 7);
              if (sVar3 != 0x439) {
                if (sVar3 == 0x417) {
                  uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
                else {
                  uVar7 = param_2;
                  if ((int)lVar9 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                }
              }
              uVar4 = *(ushort *)
                       (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf) + -1)
                       + 7);
              if (0x87 < uVar4 && uVar4 < 0x92) {
                uVar7 = FUN_01341080(param_1,lVar13,0);
                return uVar7;
              }
            }
          }
        }
        else {
          lVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
          sVar3 = *(short *)(lVar13 + 7);
          if (sVar3 == 0x423) {
            if (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
              return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
            }
          }
          else if (sVar3 == 0x439) {
            if ((((*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                 ((bVar2 = *(byte *)(lVar13 + 9), (bVar2 & 0xc0) == 0xc0 ||
                  ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)
                  ))) && ((bVar2 & 1) == 0)) &&
               (uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
               (int)uVar7 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
              if (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                return unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf);
              }
              return uVar7;
            }
          }
          else if ((((sVar3 == 0x411) &&
                    (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                   (uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar7 & 1) != 0)) &&
                  (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) < 0x40)) {
            return (ulong)(uint)(*(int *)(uVar7 + 7) * 2);
          }
        }
        break;
      }
      lVar13 = lVar13 + 1;
      uVar10 = uVar10 + lVar13;
    }
  }
  goto LAB_0134ba5c;
}

