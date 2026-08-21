
void FUN_0117d3c0(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  ushort *puVar2;
  long lVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  
  if (*(int *)(param_1 + 0x16fc) == 0) {
    uVar12 = *(uint *)(param_1 + 0x1724);
    uVar11 = (uint)*(ushort *)(param_1 + 0x1720);
  }
  else {
    uVar14 = 0;
    puVar1 = (uint *)(param_1 + 0x1724);
    puVar2 = (ushort *)(param_1 + 0x1720);
    do {
      uVar13 = (ulong)uVar14;
      bVar7 = *(byte *)(*(long *)(param_1 + 0x16f0) + (ulong)uVar14);
      uVar14 = uVar14 + 1;
      uVar10 = (uint)*(ushort *)(*(long *)(param_1 + 0x1700) + uVar13 * 2);
      if (uVar10 == 0) {
        puVar4 = (ushort *)(param_2 + (ulong)bVar7 * 4);
        uVar12 = *puVar1;
        uVar8 = puVar4[1];
        uVar9 = *puVar4;
        uVar11 = (uint)uVar9 << (ulong)(uVar12 & 0x1f) | (uint)*puVar2;
        *puVar2 = (ushort)uVar11;
        if ((int)(0x10 - (uint)uVar8) < (int)uVar12) {
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = (char)uVar11;
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar9 = uVar9 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar11 = (uint)uVar9;
          *(ushort *)(param_1 + 0x1720) = uVar9;
          uVar12 = ((uint)uVar8 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar12 = uVar12 + uVar8;
        }
LAB_0117d6d0:
        *puVar1 = uVar12;
      }
      else {
        uVar13 = (ulong)(byte)(&DAT_0149f1a0)[bVar7];
        uVar12 = *puVar1;
        lVar3 = param_2 + (uVar13 | 0x100) * 4;
        uVar8 = *(ushort *)(lVar3 + 6);
        uVar9 = *(ushort *)(lVar3 + 4);
        uVar11 = (uint)uVar9 << (ulong)(uVar12 & 0x1f) | (uint)*puVar2;
        *puVar2 = (ushort)uVar11;
        if ((int)(0x10 - (uint)uVar8) < (int)uVar12) {
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = (char)uVar11;
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar9 = uVar9 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar11 = (uint)uVar9;
          *(ushort *)(param_1 + 0x1720) = uVar9;
          uVar12 = ((uint)uVar8 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar12 = uVar12 + uVar8;
        }
        *puVar1 = uVar12;
        if (uVar13 - 8 < 0x14) {
          iVar6 = *(int *)(&DAT_0149f798 + uVar13 * 4);
          uVar5 = (uint)bVar7 - *(int *)(&DAT_0149f8e4 + uVar13 * 4) & 0xffff;
          uVar11 = uVar5 << (ulong)(uVar12 & 0x1f) | uVar11 & 0xffff;
          *puVar2 = (ushort)uVar11;
          if (0x10 - iVar6 < (int)uVar12) {
            uVar12 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar12 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = (char)uVar11;
            uVar12 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar12 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar11 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar11;
            uVar12 = (iVar6 + *(int *)(param_1 + 0x1724)) - 0x10;
          }
          else {
            uVar12 = uVar12 + iVar6;
          }
          *puVar1 = uVar12;
        }
        uVar10 = uVar10 - 1;
        uVar5 = uVar10;
        if (0xff < uVar10) {
          uVar5 = (uVar10 >> 7) + 0x100;
        }
        uVar13 = (ulong)(byte)(&DAT_0149efa0)[uVar5];
        puVar4 = (ushort *)(param_3 + uVar13 * 4);
        uVar8 = puVar4[1];
        uVar9 = *puVar4;
        uVar11 = (uint)uVar9 << (ulong)(uVar12 & 0x1f) | uVar11 & 0xffff;
        *puVar2 = (ushort)uVar11;
        if ((int)(0x10 - (uint)uVar8) < (int)uVar12) {
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = (char)uVar11;
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar9 = uVar9 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar11 = (uint)uVar9;
          *(ushort *)(param_1 + 0x1720) = uVar9;
          uVar12 = ((uint)uVar8 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar12 = uVar12 + uVar8;
        }
        *puVar1 = uVar12;
        if (uVar13 - 4 < 0x1a) {
          iVar6 = *(int *)(&DAT_0149f80c + uVar13 * 4);
          uVar10 = uVar10 - *(int *)(&DAT_0149f958 + uVar13 * 4) & 0xffff;
          uVar11 = uVar10 << (ulong)(uVar12 & 0x1f) | uVar11 & 0xffff;
          *puVar2 = (ushort)uVar11;
          if (0x10 - iVar6 < (int)uVar12) {
            uVar12 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar12 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = (char)uVar11;
            uVar12 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar12 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar11 = uVar10 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar11;
            uVar12 = (iVar6 + *(int *)(param_1 + 0x1724)) - 0x10;
          }
          else {
            uVar12 = uVar12 + iVar6;
          }
          goto LAB_0117d6d0;
        }
      }
    } while (uVar14 < *(uint *)(param_1 + 0x16fc));
  }
  uVar8 = *(ushort *)(param_2 + 0x402);
  uVar9 = *(ushort *)(param_2 + 0x400);
  uVar11 = (uint)uVar9 << (ulong)(uVar12 & 0x1f) | uVar11 & 0xffff;
  *(short *)(param_1 + 0x1720) = (short)uVar11;
  if ((int)uVar12 <= (int)(0x10 - (uint)uVar8)) {
    *(int *)(param_1 + 0x1724) = uVar12 + uVar8;
    return;
  }
  uVar12 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar12 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = (char)uVar11;
  uVar12 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar12 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = *(undefined1 *)(param_1 + 0x1721);
  *(ushort *)(param_1 + 0x1720) = uVar9 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
  *(int *)(param_1 + 0x1724) = (uint)uVar8 + *(int *)(param_1 + 0x1724) + -0x10;
  return;
}

