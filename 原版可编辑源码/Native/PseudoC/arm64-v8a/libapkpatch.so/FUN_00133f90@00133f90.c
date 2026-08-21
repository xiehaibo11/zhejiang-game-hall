
void FUN_00133f90(long param_1,long param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  
  if (-1 < param_3) {
    uVar2 = *(ushort *)(param_2 + 2);
    uVar13 = 0;
    iVar7 = 0;
    uVar17 = 0xffffffff;
    iVar5 = 0x8a;
    if (uVar2 != 0) {
      iVar5 = 7;
    }
    iVar16 = 3;
    if (uVar2 != 0) {
      iVar16 = 4;
    }
    do {
      uVar15 = (ulong)uVar2;
      uVar13 = uVar13 + 1;
      uVar3 = *(ushort *)(param_2 + uVar13 * 4 + 2);
      iVar8 = iVar7 + 1;
      uVar6 = (uint)uVar2;
      uVar14 = (uint)uVar3;
      if ((iVar5 <= iVar8) || (uVar6 != uVar14)) {
        if (iVar8 < iVar16) {
          uVar11 = *(uint *)(param_1 + 0x1734);
          lVar10 = param_1 + uVar15 * 4;
          do {
            uVar2 = *(ushort *)(lVar10 + 0xabe);
            uVar4 = *(ushort *)(lVar10 + 0xabc);
            uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar11 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar9;
            if ((int)(0x10 - (uint)uVar2) < (int)uVar11) {
              lVar12 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar12 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar12) = (char)uVar9;
              lVar12 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar12 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar12) =
                   *(undefined1 *)(param_1 + 0x1731);
              *(ushort *)(param_1 + 0x1730) =
                   uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              uVar11 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
            }
            else {
              uVar11 = uVar11 + uVar2;
            }
            iVar8 = iVar8 + -1;
            *(uint *)(param_1 + 0x1734) = uVar11;
          } while (iVar8 != 0);
        }
        else {
          if (uVar6 == 0) {
            if (iVar7 < 10) {
              uVar2 = *(ushort *)(param_1 + 0xb02);
              uVar11 = *(uint *)(param_1 + 0x1734);
              uVar4 = *(ushort *)(param_1 + 0xb00);
              uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar11 & 0x1f);
              if ((int)(0x10 - (uint)uVar2) < (int)uVar11) {
                lVar10 = *(long *)(param_1 + 0x28);
                *(short *)(param_1 + 0x1730) = (short)uVar9;
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar9;
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar9 = (uint)(uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
                uVar11 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
              }
              else {
                uVar11 = uVar11 + uVar2;
              }
              uVar1 = iVar7 + 0xfffeU << (ulong)(uVar11 & 0x1f);
              *(uint *)(param_1 + 0x1734) = uVar11;
              if ((int)uVar11 < 0xe) {
                *(ushort *)(param_1 + 0x1730) = (ushort)uVar9 | (ushort)uVar1;
                iVar5 = uVar11 + 3;
              }
              else {
                lVar10 = *(long *)(param_1 + 0x28);
                uVar9 = uVar9 | uVar1;
                *(short *)(param_1 + 0x1730) = (short)uVar9;
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar9;
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined1 *)(param_1 + 0x1731);
                *(short *)(param_1 + 0x1730) =
                     (short)((iVar7 + 0xfffeU & 0xffff) >>
                            (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
                iVar5 = *(int *)(param_1 + 0x1734) + -0xd;
              }
            }
            else {
              uVar2 = *(ushort *)(param_1 + 0xb06);
              uVar11 = *(uint *)(param_1 + 0x1734);
              uVar4 = *(ushort *)(param_1 + 0xb04);
              uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar11 & 0x1f);
              if ((int)(0x10 - (uint)uVar2) < (int)uVar11) {
                lVar10 = *(long *)(param_1 + 0x28);
                *(short *)(param_1 + 0x1730) = (short)uVar9;
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar9;
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar9 = (uint)(uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
                uVar11 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
              }
              else {
                uVar11 = uVar11 + uVar2;
              }
              uVar1 = iVar7 + 0xfff6U << (ulong)(uVar11 & 0x1f);
              *(uint *)(param_1 + 0x1734) = uVar11;
              if ((int)uVar11 < 10) {
                *(ushort *)(param_1 + 0x1730) = (ushort)uVar9 | (ushort)uVar1;
                iVar5 = uVar11 + 7;
              }
              else {
                lVar10 = *(long *)(param_1 + 0x28);
                uVar9 = uVar9 | uVar1;
                *(short *)(param_1 + 0x1730) = (short)uVar9;
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar9;
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined1 *)(param_1 + 0x1731);
                *(short *)(param_1 + 0x1730) =
                     (short)((iVar7 + 0xfff6U & 0xffff) >>
                            (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
                iVar5 = *(int *)(param_1 + 0x1734) + -9;
              }
            }
          }
          else {
            if (uVar6 == (uint)uVar17) {
              uVar11 = *(uint *)(param_1 + 0x1734);
              iVar7 = iVar8;
            }
            else {
              lVar10 = param_1 + uVar15 * 4;
              uVar11 = *(uint *)(param_1 + 0x1734);
              uVar2 = *(ushort *)(lVar10 + 0xabe);
              uVar4 = *(ushort *)(lVar10 + 0xabc);
              uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar11 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar9;
              if ((int)(0x10 - (uint)uVar2) < (int)uVar11) {
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar9;
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined1 *)(param_1 + 0x1731);
                *(ushort *)(param_1 + 0x1730) =
                     uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
                uVar11 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
              }
              else {
                uVar11 = uVar11 + uVar2;
              }
              *(uint *)(param_1 + 0x1734) = uVar11;
            }
            uVar2 = *(ushort *)(param_1 + 0xafe);
            uVar4 = *(ushort *)(param_1 + 0xafc);
            uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar11 & 0x1f);
            if ((int)(0x10 - (uint)uVar2) < (int)uVar11) {
              lVar10 = *(long *)(param_1 + 0x28);
              *(short *)(param_1 + 0x1730) = (short)uVar9;
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar9;
              lVar10 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar10) =
                   *(undefined1 *)(param_1 + 0x1731);
              uVar9 = (uint)(uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
              uVar11 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
            }
            else {
              uVar11 = uVar11 + uVar2;
            }
            uVar1 = iVar7 + 0xfffd;
            *(uint *)(param_1 + 0x1734) = uVar11;
            if ((int)uVar11 < 0xf) {
              *(ushort *)(param_1 + 0x1730) =
                   (ushort)uVar9 | (ushort)(uVar1 << (ulong)(uVar11 & 0x1f));
              iVar5 = uVar11 + 2;
            }
            else {
              lVar10 = *(long *)(param_1 + 0x28);
              uVar9 = uVar9 | uVar1 << (ulong)(uVar11 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar9;
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar9;
              lVar10 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar10) =
                   *(undefined1 *)(param_1 + 0x1731);
              *(short *)(param_1 + 0x1730) =
                   (short)((uVar1 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
              iVar5 = *(int *)(param_1 + 0x1734) + -0xe;
            }
          }
          *(int *)(param_1 + 0x1734) = iVar5;
        }
        iVar8 = 0;
        uVar17 = uVar15;
        if (uVar14 == 0) {
          iVar5 = 0x8a;
          iVar16 = 3;
        }
        else {
          iVar16 = 3;
          if (uVar6 != uVar14) {
            iVar16 = 4;
          }
          iVar5 = 6;
          if (uVar6 != uVar14) {
            iVar5 = 7;
          }
        }
      }
      iVar7 = iVar8;
      uVar2 = uVar3;
    } while (uVar13 != param_3 + 1);
  }
  return;
}

