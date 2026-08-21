
/* WARNING: Removing unreachable block (ram,0x01427c4c) */
/* WARNING: Removing unreachable block (ram,0x01427c78) */
/* WARNING: Removing unreachable block (ram,0x01427c68) */
/* WARNING: Removing unreachable block (ram,0x01427c84) */

undefined8 FUN_01427380(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ushort uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  long unaff_x26;
  undefined8 unaff_x27;
  
  uVar3 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
  if ((uVar3 & 1) != 0) {
    lVar13 = unaff_x26 + (ulong)*(uint *)(uVar3 - 1);
    uVar14 = *(ushort *)(lVar13 + 7);
    if (0xa8 < uVar14) {
      if (uVar14 == 0xa9) {
        lVar13 = thunk_FUN_01349b90(param_2,param_2,uVar3);
        if ((*(int *)(lVar13 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
           ((*(uint *)(lVar13 + 7) & 1) != 0)) {
LAB_01427bc8:
          iVar10 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
        }
        else {
          iVar10 = FUN_013fd060(uVar3,lVar13);
        }
      }
      else {
        uVar11 = uVar3;
        if ((param_2 & 1) == 0) {
          uVar17 = (long)(param_2 << 0x20) >> 0x21;
        }
        else {
          uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
          if (((uVar4 != 0x42) ||
              (uVar17 = (ulong)*(double *)(param_2 + 3),
              *(double *)(param_2 + 3) != (double)(long)uVar17)) ||
             (0x3ffffffffffffe < uVar17 + 0x1fffffffffffff)) {
            uVar17 = param_2;
            if (uVar4 == 0x40) {
LAB_01427464:
              do {
                iVar10 = (int)uVar17;
                if (uVar14 < 0x411) {
                  if ((uVar14 != 0xaa) || ((*(byte *)(lVar13 + 9) & 0x24) != 0)) goto LAB_01427d48;
                  uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
                  if ((uVar11 & 1) == 0) {
                    uVar11 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar19 = (ulong)(*(uint *)(uVar17 + 3) >> 3);
                  lVar16 = 0;
                  while( true ) {
                    uVar19 = uVar19 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar11 + 0xf) << 0x20) >>
                                      0x21) - 1U;
                    uVar1 = uVar19 + 5;
                    lVar18 = unaff_x26 + (ulong)*(uint *)(uVar11 + uVar1 * 4 + 7);
                    if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (*(int *)(lVar18 + 3) == iVar10) {
                      if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                        pcVar9 = (code *)SoftwareBreakpoint(0,0x1427c08);
                        (*pcVar9)();
                      }
                      if (*(int *)(lVar18 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                      goto LAB_01427bc0;
                      break;
                    }
                    lVar16 = lVar16 + 1;
                    uVar19 = uVar19 + lVar16;
                  }
                }
                else if ((*(uint *)(lVar13 + 0xb) >> 0x15 & 1) == 0) {
                  lVar16 = unaff_x26 + (ulong)*(uint *)(lVar13 + 0x17);
                  uVar15 = *(uint *)(lVar13 + 0xb) >> 10 & 0x3ff;
                  if (uVar15 != 0) {
                    if (uVar15 < 0x21) {
                      lVar18 = (long)(int)uVar15 * 3;
                      while (lVar18 != 0) {
                        lVar18 = lVar18 + -3;
                        if (*(int *)(lVar16 + lVar18 * 4 + 0xf) == iVar10) goto LAB_01427bc0;
                      }
                    }
                    else {
                      iVar5 = *(short *)(lVar16 + 5) + -1;
                      iVar21 = 0;
                      iVar20 = iVar5;
                      do {
                        iVar2 = iVar21 + ((uint)(iVar20 - iVar21) >> 1);
                        if (*(uint *)(unaff_x26 +
                                      (ulong)*(uint *)(lVar16 + (long)(int)(((uint)(*(int *)(lVar16 
                                                  + (long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff
                                                  ) * 3) * 4 + 0xf) + 3) < *(uint *)(uVar17 + 3)) {
                          iVar21 = iVar2 + 1;
                          iVar2 = iVar20;
                        }
                        iVar20 = iVar2;
                      } while (iVar21 != iVar20);
                      for (; iVar21 <= iVar5; iVar21 = iVar21 + 1) {
                        uVar6 = (uint)(*(int *)(lVar16 + (long)(iVar21 * 3) * 4 + 0x13) >> 1) >> 9 &
                                0x3ff;
                        lVar18 = unaff_x26 +
                                 (ulong)*(uint *)(lVar16 + (long)(int)(uVar6 * 3) * 4 + 0xf);
                        if (*(uint *)(lVar18 + 3) != *(uint *)(uVar17 + 3)) break;
                        if ((int)lVar18 == iVar10) {
                          if (uVar6 < uVar15) goto LAB_01427bc0;
                          break;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
                  if ((uVar11 & 1) == 0) {
                    uVar11 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar19 = (ulong)(*(uint *)(uVar17 + 3) >> 3);
                  lVar16 = 0;
                  while( true ) {
                    uVar19 = uVar19 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar11 + 0xf) << 0x20) >>
                                      0x21) - 1U;
                    iVar21 = *(int *)(uVar11 + (uVar19 * 3 + 5) * 4 + 7);
                    if (iVar21 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (iVar21 == iVar10) goto LAB_01427bc0;
                    lVar16 = lVar16 + 1;
                    uVar19 = uVar19 + lVar16;
                  }
                }
                if (uVar14 == 0x41b) {
                  uVar14 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar17 - 1) + 7);
                  uVar15 = (uint)uVar14;
                  if (((uVar14 < 0x40) && (iVar10 = *(int *)(uVar17 + 7) * 2, iVar10 != 0)) &&
                     (iVar10 < 0x31)) {
                    uVar11 = uVar17;
                    if ((uVar14 & 7) == 0) {
                      lVar16 = 0;
                      bVar7 = false;
                    }
                    else {
                      lVar16 = 0;
                      while( true ) {
                        while (uVar6 = uVar15 & 7, uVar6 < 2) {
                          if (uVar6 == 0) {
                            bVar7 = false;
                            goto LAB_014277d8;
                          }
                          if ((uVar6 != 1) ||
                             (*(int *)(uVar11 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                          goto LAB_01427c9c;
                          uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb);
                          uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar11 - 1) + 7);
                        }
                        if (uVar6 == 2) break;
                        if (uVar6 == 3) {
                          uVar19 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb);
                          lVar16 = lVar16 + ((long)((ulong)*(uint *)(uVar11 + 0xf) << 0x20) >> 0x21)
                          ;
                          uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar19 - 1) + 7);
                          uVar11 = uVar19;
                        }
                        else {
                          if (uVar6 != 5) goto LAB_01427c9c;
                          uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb);
                          uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar11 - 1) + 7);
                        }
                      }
                      bVar7 = true;
                    }
LAB_014277d8:
                    if (bVar7) {
                      if ((uVar15 >> 4 & 1) != 0) {
LAB_01427c9c:
                    /* WARNING: Subroutine does not return */
                        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),uVar3,param_2,uVar17,
                                     unaff_x27);
                      }
                      lVar18 = *(long *)(uVar11 + 0x13);
                    }
                    else {
                      lVar18 = uVar11 + 0xb;
                    }
                    if ((uVar15 >> 3 & 1) == 0) {
                      uVar14 = *(ushort *)(lVar18 + lVar16 * 2);
                    }
                    else {
                      uVar14 = (ushort)*(byte *)(lVar18 + lVar16);
                    }
                    if (((uVar14 == 0x2d) || (uVar14 == 0x49)) ||
                       ((uVar14 == 0x4e || ((0x2f < uVar14 && (uVar14 < 0x3a))))))
                    goto LAB_01427d48;
                  }
                }
                uVar11 = unaff_x26 + (ulong)*(uint *)(lVar13 + 0xf);
                if ((int)uVar11 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_01427bc8;
                lVar13 = unaff_x26 + (ulong)*(uint *)(uVar11 - 1);
                uVar14 = *(ushort *)(lVar13 + 7);
              } while( true );
            }
            if (0x3f < uVar4) {
              if (uVar4 != 0x43) goto LAB_01427d48;
              uVar17 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
              goto LAB_01427464;
            }
            uVar15 = *(uint *)(param_2 + 3);
            if ((uVar15 & 0xc0000002) != 0) {
              if ((uVar15 >> 1 & 1) == 0) goto LAB_01427d48;
              if ((uVar4 == 0x25) || (uVar4 == 0x2d)) {
                uVar17 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
              }
              else if ((uVar4 >> 5 & 1) != 0) goto LAB_01427d48;
              goto LAB_01427464;
            }
            uVar17 = (ulong)(uVar15 >> 3) & 0xffffff;
          }
        }
        while( true ) {
          if (uVar14 < 0x411) goto LAB_01427d48;
          bVar8 = *(byte *)(lVar13 + 10) >> 3;
          if (0xe < bVar8) break;
          if (bVar8 < 6) {
            if (bVar8 < 3) {
              if (((bVar8 == 0) || (bVar8 == 1)) || (bVar8 == 2)) goto LAB_01427a0c;
              goto LAB_01427d48;
            }
            if (bVar8 == 3) goto LAB_01427a0c;
            if ((bVar8 != 4) && (bVar8 != 5)) goto LAB_01427d48;
            lVar16 = unaff_x26 + (ulong)*(uint *)(uVar11 + 7);
            if (uVar17 < (ulong)((long)((ulong)*(uint *)(lVar16 + 3) << 0x20) >> 0x21)) {
              if (*(long *)(lVar16 + uVar17 * 8 + 7) == -0x8000000080001) goto LAB_01427b68;
              goto LAB_01427bc0;
            }
LAB_01427a24:
            if (0xfffffffe < uVar17) goto LAB_01427d48;
          }
          else if (bVar8 < 9) {
            if (((bVar8 != 6) && (bVar8 != 7)) && (bVar8 != 8)) goto LAB_01427d48;
LAB_01427a0c:
            lVar16 = unaff_x26 + (ulong)*(uint *)(uVar11 + 7);
            if ((ulong)((long)((ulong)*(uint *)(lVar16 + 3) << 0x20) >> 0x21) <= uVar17)
            goto LAB_01427a24;
            if (*(int *)(lVar16 + uVar17 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
            goto LAB_01427bc0;
          }
          else {
            if (bVar8 < 0xb) {
              if ((bVar8 == 9) || (bVar8 == 10)) goto LAB_01427a0c;
              goto LAB_01427d48;
            }
            if (bVar8 == 0xb) goto LAB_01427a0c;
            if (bVar8 != 0xc) goto LAB_01427d48;
LAB_01427a64:
            if (0xfffffffe < uVar17) goto LAB_01427d48;
            lVar18 = unaff_x26 + (ulong)*(uint *)(uVar11 + 7);
            uVar15 = *(uint *)(lVar18 + 0xf);
            *(undefined8 *)(unaff_x26 + 0x40) = 0x1427aa8;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            uVar11 = (**(code **)(unaff_x26 + 0x1080))();
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            uVar11 = uVar11 & 0xffffffff;
            lVar16 = 0;
            while( true ) {
              uVar11 = uVar11 & ((long)(unaff_x26 + (ulong)uVar15 << 0x20) >> 0x21) - 1U;
              uVar19 = unaff_x26 + (ulong)*(uint *)(lVar18 + (uVar11 * 3 + 4) * 4 + 7);
              if ((int)uVar19 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
              if ((uVar19 & 1) == 0) {
                if ((long)(uVar19 << 0x20) >> 0x21 == uVar17) goto LAB_01427bc0;
              }
              else if (((int)uVar19 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                      (*(double *)(uVar19 + 3) == (double)(long)uVar17)) goto LAB_01427bc0;
              lVar16 = lVar16 + 1;
              uVar11 = uVar11 + lVar16;
            }
          }
LAB_01427b68:
          uVar11 = unaff_x26 + (ulong)*(uint *)(lVar13 + 0xf);
          if ((int)uVar11 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_01427bc8;
          lVar13 = unaff_x26 + (ulong)*(uint *)(uVar11 - 1);
          uVar14 = *(ushort *)(lVar13 + 7);
        }
        if (bVar8 < 0x16) {
          if (bVar8 < 0x12) {
            if (bVar8 == 0xf) {
              if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb) + 7) <= uVar17)
              goto LAB_01427a0c;
              goto LAB_01427bc0;
            }
            if (bVar8 == 0x10) {
              if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb) + 7) <= uVar17)
              goto LAB_01427a64;
              goto LAB_01427bc0;
            }
            if (bVar8 != 0x11) goto LAB_01427d48;
          }
          else if (bVar8 < 0x14) {
            if ((bVar8 != 0x12) && (bVar8 != 0x13)) goto LAB_01427d48;
          }
          else if ((bVar8 != 0x14) && (bVar8 != 0x15)) goto LAB_01427d48;
        }
        else if (bVar8 < 0x19) {
          if (((bVar8 != 0x16) && (bVar8 != 0x17)) && (bVar8 != 0x18)) goto LAB_01427d48;
        }
        else if (bVar8 < 0x1b) {
          if ((bVar8 != 0x19) && (bVar8 != 0x1a)) goto LAB_01427d48;
        }
        else if (bVar8 != 0x1b) {
          if (bVar8 == 0x1c) goto LAB_01427b68;
          goto LAB_01427d48;
        }
        if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb) + 0x1b) >> 2 & 1) != 0) ||
           (*(ulong *)(uVar11 + 0x1f) <= uVar17)) goto LAB_01427bc8;
LAB_01427bc0:
        iVar10 = (int)*(undefined8 *)(unaff_x26 + 0xb8);
      }
      if (iVar10 == (int)*(undefined8 *)(unaff_x26 + 0xc0)) {
        uVar12 = *(undefined8 *)(unaff_x26 + 0xa8);
      }
      else {
        uVar12 = FUN_013c0ba0(uVar3,param_2);
      }
      return uVar12;
    }
  }
LAB_01427d48:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260),unaff_x27,uVar3,param_2);
}

