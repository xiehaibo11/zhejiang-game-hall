
ulong FUN_0134faa0(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ushort uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long unaff_x26;
  undefined8 uVar21;
  
  if ((param_2 & 1) == 0) goto LAB_013507a0;
  lVar11 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  uVar3 = *(uint *)(lVar11 + 0xb);
  if ((uVar3 >> 0x18 & 1) != 0) goto LAB_013507a0;
  uVar13 = *(ushort *)(lVar11 + 7);
  iVar10 = (int)param_3;
  if ((((uVar13 == 0x439) && (iVar10 == (int)*(undefined8 *)(unaff_x26 + 0x908))) &&
      (((*(byte *)(lVar11 + 9) & 0xc0) == 0xc0 ||
       ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)))) &&
     ((*(byte *)(lVar11 + 9) & 1) == 0)) {
    uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b);
    if ((int)uVar14 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
      if (*(int *)(uVar14 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
        return uVar14;
      }
      return unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf);
    }
    goto LAB_013507a0;
  }
  if (uVar13 < 0x411) {
    if ((uVar13 == 0xa9) &&
       ((*(int *)(param_3 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xf8) ||
        ((*(uint *)(param_3 + 7) & 1) == 0)))) {
      uVar14 = FUN_013fc180(param_2,param_3,param_2,2);
      return uVar14;
    }
    goto LAB_013507a0;
  }
  if ((uVar3 >> 0x15 & 1) == 0) {
    lVar16 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0x17);
    uVar3 = uVar3 >> 10 & 0x3ff;
    if (uVar3 != 0) {
      if (uVar3 < 0x21) {
        lVar19 = (long)(int)uVar3 * 3;
        do {
          if (lVar19 == 0) goto LAB_0135010c;
          lVar19 = lVar19 + -3;
        } while (*(int *)(lVar16 + lVar19 * 4 + 0xf) != iVar10);
LAB_0134fd08:
        uVar3 = *(int *)(lVar16 + lVar19 * 4 + 0x13) >> 1;
        uVar14 = (ulong)uVar3;
        if ((uVar3 >> 1 & 1) == 0) {
          bVar9 = (uVar3 >> 6 & 7) == 2;
          uVar12 = (ulong)*(byte *)(lVar11 + 4) + ((uVar14 & 0x1ff80000) >> 0x13);
          if (uVar12 < *(byte *)(lVar11 + 3)) {
            lVar11 = uVar12 * 4 + -1;
            if (bVar9) {
              uVar21 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(param_2 + lVar11) + 3);
              goto LAB_0134fdac;
            }
            uVar12 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar11);
          }
          else {
            uVar15 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
            if ((uVar15 & 1) == 0) {
              uVar15 = *(ulong *)(unaff_x26 + 0x168);
            }
            uVar12 = unaff_x26 + (ulong)*(uint *)(uVar15 + (uVar12 - *(byte *)(lVar11 + 3)) * 4 + 7)
            ;
            if (bVar9) {
              uVar21 = *(undefined8 *)(uVar12 + 3);
LAB_0134fdac:
              uVar12 = **(ulong **)(unaff_x26 + 0x1428);
              uVar15 = uVar12 + 0xc;
              if (uVar15 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar12 = uVar12 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar15;
              }
              else {
                uVar12 = FUN_01348560(param_1,0xc,param_3,param_4,param_2);
              }
              *(int *)(uVar12 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(undefined8 *)(uVar12 + 3) = uVar21;
            }
          }
        }
        else {
          uVar12 = unaff_x26 + (ulong)*(uint *)(lVar16 + lVar19 * 4 + 0x17);
        }
LAB_0134fee4:
        if ((uVar14 & 1) == 0) {
          return uVar12;
        }
        if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
          lVar11 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
          lVar16 = unaff_x26 + (ulong)*(uint *)(lVar11 + -1);
          if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
            uVar14 = FUN_0133fcc0(0);
            return uVar14;
          }
          if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
            return *(ulong *)(unaff_x26 + 0xa0);
          }
          if (*(int *)(lVar11 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
            iVar10 = *(int *)(uVar14 - 1);
            while (iVar10 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
              uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0x13);
              iVar10 = *(int *)(uVar14 - 1);
            }
            if ((uVar14 & 1) != 0) {
              lVar16 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
              sVar5 = *(short *)(lVar16 + 7);
              if (sVar5 != 0x439) {
                if (sVar5 == 0x417) {
                  uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
                else {
                  uVar14 = param_2;
                  if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_013507a0;
                }
              }
              uVar13 = *(ushort *)
                        (unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) + -1) + 7);
              if (0x87 < uVar13 && uVar13 < 0x92) {
                uVar14 = FUN_01341080(param_1,lVar11,0);
                return uVar14;
              }
            }
          }
        }
        else {
          lVar11 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
          sVar5 = *(short *)(lVar11 + 7);
          if (sVar5 == 0x423) {
            if (*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
              return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
            }
          }
          else if (sVar5 == 0x439) {
            if (((*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                (((bVar4 = *(byte *)(lVar11 + 9), (bVar4 & 0xc0) == 0xc0 ||
                  ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)
                  ) && ((bVar4 & 1) == 0)))) &&
               (uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
               (int)uVar14 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
              if (*(int *)(uVar14 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                return uVar14;
              }
              return unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf);
            }
          }
          else if (((sVar5 == 0x411) &&
                   (*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                  ((uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar14 & 1) != 0 &&
                   (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7) < 0x40)))) {
            return (ulong)(uint)(*(int *)(uVar14 + 7) * 2);
          }
        }
        goto LAB_013507a0;
      }
      iVar6 = *(short *)(lVar16 + 5) + -1;
      iVar18 = 0;
      iVar17 = iVar6;
      do {
        iVar1 = iVar18 + ((uint)(iVar17 - iVar18) >> 1);
        if (*(uint *)(unaff_x26 +
                      (ulong)*(uint *)(lVar16 + (long)(int)(((uint)(*(int *)(lVar16 + (long)(iVar1 *
                                                                                            3) * 4 +
                                                                                      0x13) >> 1) >>
                                                             9 & 0x3ff) * 3) * 4 + 0xf) + 3) <
            *(uint *)(param_3 + 3)) {
          iVar18 = iVar1 + 1;
          iVar1 = iVar17;
        }
        iVar17 = iVar1;
      } while (iVar18 != iVar17);
      for (; iVar18 <= iVar6; iVar18 = iVar18 + 1) {
        uVar7 = (uint)(*(int *)(lVar16 + (long)(iVar18 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
        lVar19 = (long)(int)(uVar7 * 3);
        lVar20 = unaff_x26 + (ulong)*(uint *)(lVar16 + lVar19 * 4 + 0xf);
        if (*(uint *)(lVar20 + 3) != *(uint *)(param_3 + 3)) break;
        if ((int)lVar20 == iVar10) {
          if (uVar7 < uVar3) goto LAB_0134fd08;
          break;
        }
      }
    }
  }
  else {
    uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
    if ((uVar14 & 1) == 0) {
      uVar14 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar12 = (ulong)(*(uint *)(param_3 + 3) >> 3);
    lVar16 = 0;
    while( true ) {
      uVar12 = uVar12 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) << 0x20) >> 0x21) - 1U;
      lVar19 = uVar12 * 3;
      lVar20 = (lVar19 + 5) * 4;
      iVar18 = *(int *)(uVar14 + lVar20 + 7);
      if (iVar18 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
      if (iVar18 == iVar10) {
        if ((ulong)((long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21) <= lVar19 + 6U) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0,0x134fec8);
          (*pcVar8)();
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar20 + 0xb);
        uVar14 = (ulong)(uint)(*(int *)(uVar14 + lVar20 + 0xf) >> 1);
        goto LAB_0134fee4;
      }
      lVar16 = lVar16 + 1;
      uVar12 = uVar12 + lVar16;
    }
  }
LAB_0135010c:
  if ((*(int *)(param_3 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xf8)) ||
     ((*(uint *)(param_3 + 7) & 1) == 0)) {
    do {
      if (uVar13 == 0x41b) goto LAB_013507a0;
      lVar16 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0xf);
      if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_01350708;
      lVar11 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
      uVar13 = *(ushort *)(lVar11 + 7);
      if (uVar13 < 0x411) {
        if ((uVar13 != 0xaa) || ((*(byte *)(lVar11 + 9) & 0x24) != 0)) goto LAB_013507a0;
        uVar14 = unaff_x26 + (ulong)*(uint *)(lVar16 + 3);
        if ((uVar14 & 1) == 0) {
          uVar14 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar12 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        lVar16 = 0;
        while( true ) {
          uVar12 = uVar12 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) << 0x20) >> 0x21) -
                            1U;
          uVar15 = uVar12 + 5;
          lVar19 = unaff_x26 + (ulong)*(uint *)(uVar14 + uVar15 * 4 + 7);
          if ((int)lVar19 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if (*(int *)(lVar19 + 3) == iVar10) {
            if ((ulong)((long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0,0x1350378);
              (*pcVar8)();
            }
            uVar14 = unaff_x26 + (ulong)*(uint *)(lVar19 + 0xb);
            if ((int)uVar14 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
              uVar12 = (ulong)(uint)(*(int *)(lVar19 + 7) >> 1);
              goto LAB_013504e0;
            }
            break;
          }
          lVar16 = lVar16 + 1;
          uVar12 = uVar12 + lVar16;
        }
      }
      else if ((*(uint *)(lVar11 + 0xb) >> 0x15 & 1) == 0) {
        lVar19 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0x17);
        uVar3 = *(uint *)(lVar11 + 0xb) >> 10 & 0x3ff;
        if (uVar3 != 0) {
          if (uVar3 < 0x21) {
            lVar20 = (long)(int)uVar3 * 3;
            while (lVar20 != 0) {
              lVar20 = lVar20 + -3;
              if (*(int *)(lVar19 + lVar20 * 4 + 0xf) == iVar10) goto LAB_0135039c;
            }
          }
          else {
            iVar6 = *(short *)(lVar19 + 5) + -1;
            iVar18 = 0;
            iVar17 = iVar6;
            do {
              iVar1 = iVar18 + ((uint)(iVar17 - iVar18) >> 1);
              if (*(uint *)(unaff_x26 +
                            (ulong)*(uint *)(lVar19 + (long)(int)(((uint)(*(int *)(lVar19 + (long)(
                                                  iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) * 3) *
                                                  4 + 0xf) + 3) < *(uint *)(param_3 + 3)) {
                iVar18 = iVar1 + 1;
                iVar1 = iVar17;
              }
              iVar17 = iVar1;
            } while (iVar18 != iVar17);
            for (; iVar18 <= iVar6; iVar18 = iVar18 + 1) {
              uVar7 = (uint)(*(int *)(lVar19 + (long)(iVar18 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
              lVar20 = (long)(int)(uVar7 * 3);
              lVar2 = unaff_x26 + (ulong)*(uint *)(lVar19 + lVar20 * 4 + 0xf);
              if (*(uint *)(lVar2 + 3) != *(uint *)(param_3 + 3)) break;
              if ((int)lVar2 == iVar10) {
                if (uVar7 < uVar3) goto LAB_0135039c;
                break;
              }
            }
          }
        }
      }
      else {
        uVar12 = unaff_x26 + (ulong)*(uint *)(lVar16 + 3);
        if ((uVar12 & 1) == 0) {
          uVar12 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar14 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        lVar16 = 0;
        while( true ) {
          uVar14 = uVar14 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar19 = uVar14 * 3;
          lVar20 = (lVar19 + 5) * 4;
          iVar18 = *(int *)(uVar12 + lVar20 + 7);
          if (iVar18 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if (iVar18 == iVar10) {
            if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= lVar19 + 6U) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0,0x13504c4);
              (*pcVar8)();
            }
            uVar14 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar20 + 0xb);
            uVar12 = (ulong)(uint)(*(int *)(uVar12 + lVar20 + 0xf) >> 1);
            goto LAB_013504e0;
          }
          lVar16 = lVar16 + 1;
          uVar14 = uVar14 + lVar16;
        }
      }
    } while( true );
  }
  if ((*(uint *)(param_3 + 7) >> 4 & 1) == 0) {
LAB_01350708:
    return *(ulong *)(unaff_x26 + 0xa0);
  }
LAB_013507a0:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f18));
LAB_0135039c:
  uVar3 = *(int *)(lVar19 + lVar20 * 4 + 0x13) >> 1;
  uVar12 = (ulong)uVar3;
  if ((uVar3 >> 1 & 1) != 0) {
    uVar14 = unaff_x26 + (ulong)*(uint *)(lVar19 + lVar20 * 4 + 0x17);
    goto LAB_013504e0;
  }
  bVar9 = (uVar3 >> 6 & 7) != 2;
  uVar14 = (ulong)*(byte *)(lVar11 + 4) + ((uVar12 & 0x1ff80000) >> 0x13);
  if (uVar14 < *(byte *)(lVar11 + 3)) {
    lVar11 = uVar14 * 4 + -1;
    if (bVar9) {
      uVar14 = unaff_x26 + (ulong)*(uint *)(lVar16 + lVar11);
      goto LAB_013504e0;
    }
    uVar21 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar16 + lVar11) + 3);
  }
  else {
    uVar15 = unaff_x26 + (ulong)*(uint *)(lVar16 + 3);
    if ((uVar15 & 1) == 0) {
      uVar15 = *(ulong *)(unaff_x26 + 0x168);
    }
    uVar14 = unaff_x26 + (ulong)*(uint *)(uVar15 + (uVar14 - *(byte *)(lVar11 + 3)) * 4 + 7);
    if (bVar9) goto LAB_013504e0;
    uVar21 = *(undefined8 *)(uVar14 + 3);
  }
  uVar14 = **(ulong **)(unaff_x26 + 0x1428);
  uVar15 = uVar14 + 0xc;
  if (uVar15 < **(ulong **)(unaff_x26 + 0x1430)) {
    uVar14 = uVar14 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar15;
  }
  else {
    uVar14 = FUN_01348560(param_1,0xc);
  }
  *(int *)(uVar14 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(undefined8 *)(uVar14 + 3) = uVar21;
LAB_013504e0:
  if ((uVar12 & 1) == 0) {
    return uVar14;
  }
  if (*(int *)(uVar14 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
    lVar11 = unaff_x26 + (ulong)*(uint *)(uVar14 + 3);
    lVar16 = unaff_x26 + (ulong)*(uint *)(lVar11 + -1);
    if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
      uVar14 = FUN_0133fcc0(0);
      return uVar14;
    }
    if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
      return *(ulong *)(unaff_x26 + 0xa0);
    }
    if (*(int *)(lVar11 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
      uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      iVar10 = *(int *)(uVar14 - 1);
      while (iVar10 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
        uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0x13);
        iVar10 = *(int *)(uVar14 - 1);
      }
      if ((uVar14 & 1) != 0) {
        lVar16 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
        sVar5 = *(short *)(lVar16 + 7);
        if (sVar5 != 0x439) {
          if (sVar5 == 0x417) {
            uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
          }
          else {
            uVar14 = param_2;
            if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_013507a0;
          }
        }
        uVar13 = *(ushort *)
                  (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) + -1) + 7
                  );
        if (0x87 < uVar13 && uVar13 < 0x92) {
          uVar14 = FUN_01341080(param_1,lVar11,0);
          return uVar14;
        }
      }
    }
  }
  else {
    lVar11 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    sVar5 = *(short *)(lVar11 + 7);
    if (sVar5 == 0x423) {
      if (*(int *)(uVar14 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
        return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      }
    }
    else if (sVar5 == 0x439) {
      if ((*(int *)(uVar14 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
         ((((bVar4 = *(byte *)(lVar11 + 9), (bVar4 & 0xc0) == 0xc0 ||
            ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)) &&
           ((bVar4 & 1) == 0)) &&
          (uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
          (int)uVar14 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
        if (*(int *)(uVar14 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
          return uVar14;
        }
        return unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf);
      }
    }
    else if (((sVar5 == 0x411) && (*(int *)(uVar14 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)))
            && ((uVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar14 & 1) != 0 &&
                (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7) < 0x40)))) {
      return (ulong)(uint)(*(int *)(uVar14 + 7) * 2);
    }
  }
  goto LAB_013507a0;
}

