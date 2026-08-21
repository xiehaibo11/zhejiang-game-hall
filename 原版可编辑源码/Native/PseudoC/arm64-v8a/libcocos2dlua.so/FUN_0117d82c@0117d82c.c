
void FUN_0117d82c(long param_1,long param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  
  uVar1 = *(ushort *)(param_2 + 2);
  lVar14 = 0;
  iVar11 = 3;
  if (uVar1 != 0) {
    iVar11 = 4;
  }
  iVar12 = 0x8a;
  uVar9 = 0xffffffff;
  if (uVar1 != 0) {
    iVar12 = 7;
  }
  do {
    lVar16 = lVar14 << 0x20;
    lVar14 = (long)(int)lVar14;
    puVar13 = (ushort *)(param_2 + 6 + (lVar16 >> 0x1e));
    iVar5 = -1;
    uVar10 = 0xfffd;
    iVar4 = -1;
    do {
      iVar7 = iVar4;
      uVar8 = uVar10;
      iVar6 = iVar5;
      if (param_3 < lVar14) {
        return;
      }
      uVar3 = *puVar13;
      lVar14 = lVar14 + 1;
      uVar10 = uVar8 + 1;
      iVar5 = iVar6 + 1;
      uVar17 = (uint)uVar1;
      uVar15 = (uint)uVar3;
    } while ((iVar6 + 2 < iVar12) && (puVar13 = puVar13 + 2, iVar4 = iVar7 + -1, uVar17 == uVar15));
    if (iVar6 + 2 < iVar11) {
      uVar9 = *(uint *)(param_1 + 0x1724);
      uVar10 = (uint)*(ushort *)(param_1 + 0x1720);
      lVar16 = param_1 + (ulong)uVar1 * 4;
      do {
        uVar1 = *(ushort *)(lVar16 + 0xaae);
        uVar2 = *(ushort *)(lVar16 + 0xaac);
        uVar10 = (uint)uVar2 << (ulong)(uVar9 & 0x1f) | uVar10 & 0xffff;
        *(short *)(param_1 + 0x1720) = (short)uVar10;
        if ((int)(0x10 - (uint)uVar1) < (int)uVar9) {
          uVar9 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar9 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar10;
          uVar9 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar9 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar2 = uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar10 = (uint)uVar2;
          *(ushort *)(param_1 + 0x1720) = uVar2;
          uVar9 = ((uint)uVar1 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar9 = uVar9 + uVar1;
        }
        iVar7 = iVar7 + 1;
        *(uint *)(param_1 + 0x1724) = uVar9;
      } while (iVar7 != 0);
    }
    else {
      if (uVar17 == 0) {
        if (iVar5 < 10) {
          uVar1 = *(ushort *)(param_1 + 0xaf2);
          uVar9 = *(uint *)(param_1 + 0x1724);
          uVar2 = *(ushort *)(param_1 + 0xaf0);
          uVar8 = (uint)uVar2 << (ulong)(uVar9 & 0x1f) | (uint)*(ushort *)(param_1 + 0x1720);
          *(short *)(param_1 + 0x1720) = (short)uVar8;
          if ((int)(0x10 - (uint)uVar1) < (int)uVar9) {
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar8;
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar2 = uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            uVar8 = (uint)uVar2;
            *(ushort *)(param_1 + 0x1720) = uVar2;
            uVar9 = ((uint)uVar1 + *(int *)(param_1 + 0x1724)) - 0x10;
          }
          else {
            uVar9 = uVar9 + uVar1;
          }
          uVar10 = uVar10 & 0xffff;
          uVar8 = uVar10 << (ulong)(uVar9 & 0x1f) | uVar8 & 0xffff;
          *(uint *)(param_1 + 0x1724) = uVar9;
          *(short *)(param_1 + 0x1720) = (short)uVar8;
          if ((int)uVar9 < 0xe) {
            iVar11 = uVar9 + 3;
          }
          else {
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar8;
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) =
                 *(undefined1 *)(param_1 + 0x1721);
            *(short *)(param_1 + 0x1720) =
                 (short)(uVar10 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
            iVar11 = *(int *)(param_1 + 0x1724) + -0xd;
          }
        }
        else {
          uVar1 = *(ushort *)(param_1 + 0xaf6);
          uVar9 = *(uint *)(param_1 + 0x1724);
          uVar2 = *(ushort *)(param_1 + 0xaf4);
          uVar10 = (uint)uVar2 << (ulong)(uVar9 & 0x1f) | (uint)*(ushort *)(param_1 + 0x1720);
          *(short *)(param_1 + 0x1720) = (short)uVar10;
          if ((int)(0x10 - (uint)uVar1) < (int)uVar9) {
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar10;
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar2 = uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            uVar10 = (uint)uVar2;
            *(ushort *)(param_1 + 0x1720) = uVar2;
            uVar9 = ((uint)uVar1 + *(int *)(param_1 + 0x1724)) - 0x10;
          }
          else {
            uVar9 = uVar9 + uVar1;
          }
          uVar8 = uVar8 - 7 & 0xffff;
          uVar10 = uVar8 << (ulong)(uVar9 & 0x1f) | uVar10 & 0xffff;
          *(uint *)(param_1 + 0x1724) = uVar9;
          *(short *)(param_1 + 0x1720) = (short)uVar10;
          if ((int)uVar9 < 10) {
            iVar11 = uVar9 + 7;
          }
          else {
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar10;
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) =
                 *(undefined1 *)(param_1 + 0x1721);
            *(short *)(param_1 + 0x1720) =
                 (short)(uVar8 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
            iVar11 = *(int *)(param_1 + 0x1724) + -9;
          }
        }
      }
      else {
        if (uVar17 == uVar9) {
          uVar9 = *(uint *)(param_1 + 0x1724);
          uVar10 = (uint)*(ushort *)(param_1 + 0x1720);
          iVar5 = iVar6 + 2;
        }
        else {
          lVar16 = param_1 + (ulong)uVar1 * 4;
          uVar9 = *(uint *)(param_1 + 0x1724);
          uVar1 = *(ushort *)(lVar16 + 0xaae);
          uVar2 = *(ushort *)(lVar16 + 0xaac);
          uVar10 = (uint)uVar2 << (ulong)(uVar9 & 0x1f) | (uint)*(ushort *)(param_1 + 0x1720);
          *(short *)(param_1 + 0x1720) = (short)uVar10;
          if ((int)(0x10 - (uint)uVar1) < (int)uVar9) {
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar10;
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar2 = uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            uVar10 = (uint)uVar2;
            *(ushort *)(param_1 + 0x1720) = uVar2;
            uVar9 = ((uint)uVar1 + *(int *)(param_1 + 0x1724)) - 0x10;
          }
          else {
            uVar9 = uVar9 + uVar1;
          }
          *(uint *)(param_1 + 0x1724) = uVar9;
        }
        uVar1 = *(ushort *)(param_1 + 0xaee);
        uVar2 = *(ushort *)(param_1 + 0xaec);
        uVar10 = (uint)uVar2 << (ulong)(uVar9 & 0x1f) | uVar10 & 0xffff;
        *(short *)(param_1 + 0x1720) = (short)uVar10;
        if ((int)(0x10 - (uint)uVar1) < (int)uVar9) {
          uVar9 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar9 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar10;
          uVar9 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar9 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar2 = uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar10 = (uint)uVar2;
          *(ushort *)(param_1 + 0x1720) = uVar2;
          uVar9 = ((uint)uVar1 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar9 = uVar9 + uVar1;
        }
        uVar8 = iVar5 + 0xfffdU & 0xffff;
        uVar10 = uVar8 << (ulong)(uVar9 & 0x1f) | uVar10 & 0xffff;
        *(uint *)(param_1 + 0x1724) = uVar9;
        *(short *)(param_1 + 0x1720) = (short)uVar10;
        if ((int)uVar9 < 0xf) {
          iVar11 = uVar9 + 2;
        }
        else {
          uVar9 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar9 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar10;
          uVar9 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar9 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) =
               *(undefined1 *)(param_1 + 0x1721);
          *(short *)(param_1 + 0x1720) =
               (short)(uVar8 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
          iVar11 = *(int *)(param_1 + 0x1724) + -0xe;
        }
      }
      *(int *)(param_1 + 0x1724) = iVar11;
    }
    iVar5 = 6;
    if (uVar17 != uVar15) {
      iVar5 = 7;
    }
    iVar11 = 3;
    if (uVar17 != uVar15 && uVar15 != 0) {
      iVar11 = 4;
    }
    iVar12 = 0x8a;
    uVar9 = uVar17;
    uVar1 = uVar3;
    if (uVar15 != 0) {
      iVar12 = iVar5;
    }
  } while( true );
}

