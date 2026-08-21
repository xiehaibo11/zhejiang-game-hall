
void FUN_001339c4(long param_1,long param_2,long param_3)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if (*(int *)(param_1 + 0x170c) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1734);
  }
  else {
    uVar12 = 0;
    do {
      bVar3 = *(byte *)(*(long *)(param_1 + 0x1700) + uVar12);
      uVar8 = (uint)*(ushort *)(*(long *)(param_1 + 0x1710) + uVar12 * 2);
      if (uVar8 == 0) {
        puVar1 = (ushort *)(param_2 + (ulong)bVar3 * 4);
        uVar10 = *(uint *)(param_1 + 0x1734);
        uVar4 = puVar1[1];
        uVar5 = *puVar1;
        uVar8 = (uint)uVar5;
        uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar5 << (ulong)(uVar10 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar9;
        if ((int)(0x10 - (uint)uVar4) < (int)uVar10) {
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar9;
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined1 *)(param_1 + 0x1731);
          iVar2 = *(int *)(param_1 + 0x1734);
          iVar7 = (uint)uVar4 + iVar2;
LAB_00133cac:
          *(short *)(param_1 + 0x1730) = (short)(uVar8 >> (ulong)(0x10U - iVar2 & 0x1f));
          uVar10 = iVar7 - 0x10;
        }
        else {
          uVar10 = uVar10 + uVar4;
        }
LAB_00133ccc:
        *(uint *)(param_1 + 0x1734) = uVar10;
      }
      else {
        uVar11 = (ulong)(byte)(&DAT_0011e2d0)[bVar3];
        uVar10 = *(uint *)(param_1 + 0x1734);
        lVar13 = param_2 + uVar11 * 4;
        uVar4 = *(ushort *)(lVar13 + 0x406);
        uVar5 = *(ushort *)(lVar13 + 0x404);
        uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar5 << (ulong)(uVar10 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar9;
        if ((int)(0x10 - (uint)uVar4) < (int)uVar10) {
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar9;
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined1 *)(param_1 + 0x1731);
          uVar5 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar9 = (uint)uVar5;
          *(ushort *)(param_1 + 0x1730) = uVar5;
          uVar10 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
        }
        else {
          uVar10 = uVar10 + uVar4;
        }
        *(uint *)(param_1 + 0x1734) = uVar10;
        if (uVar11 - 8 < 0x14) {
          iVar7 = *(int *)(&DAT_0011e8c8 + uVar11 * 4);
          uVar6 = (uint)bVar3 - *(int *)(&DAT_0011ea14 + uVar11 * 4);
          if (0x10 - iVar7 < (int)uVar10) {
            lVar13 = *(long *)(param_1 + 0x28);
            uVar9 = uVar9 | uVar6 << (ulong)(uVar10 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar9;
            *(long *)(param_1 + 0x28) = lVar13 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar9;
            lVar13 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar13 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined1 *)(param_1 + 0x1731);
            uVar9 = (uVar6 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar9;
            uVar10 = (iVar7 + *(int *)(param_1 + 0x1734)) - 0x10;
          }
          else {
            uVar9 = uVar9 | uVar6 << (ulong)(uVar10 & 0x1f);
            uVar10 = iVar7 + uVar10;
            *(short *)(param_1 + 0x1730) = (short)uVar9;
          }
          *(uint *)(param_1 + 0x1734) = uVar10;
        }
        uVar8 = uVar8 - 1;
        uVar6 = uVar8;
        if (0xff < uVar8) {
          uVar6 = (uVar8 >> 7) + 0x100;
        }
        bVar3 = (&DAT_0011e0d0)[uVar6];
        uVar11 = (ulong)bVar3;
        puVar1 = (ushort *)(param_3 + uVar11 * 4);
        uVar4 = puVar1[1];
        uVar5 = *puVar1;
        uVar9 = uVar9 | (uint)uVar5 << (ulong)(uVar10 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar9;
        if ((int)(0x10 - (uint)uVar4) < (int)uVar10) {
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar9;
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined1 *)(param_1 + 0x1731);
          uVar5 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar9 = (uint)uVar5;
          *(ushort *)(param_1 + 0x1730) = uVar5;
          uVar10 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
        }
        else {
          uVar10 = uVar10 + uVar4;
        }
        *(uint *)(param_1 + 0x1734) = uVar10;
        if (3 < bVar3) {
          iVar7 = *(int *)(&DAT_0011e93c + uVar11 * 4);
          uVar8 = uVar8 - *(int *)(&DAT_0011ea88 + uVar11 * 4);
          if (0x10 - iVar7 < (int)uVar10) {
            lVar13 = *(long *)(param_1 + 0x28);
            uVar9 = uVar9 | uVar8 << (ulong)(uVar10 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar9;
            *(long *)(param_1 + 0x28) = lVar13 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar9;
            lVar13 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar13 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined1 *)(param_1 + 0x1731);
            iVar2 = *(int *)(param_1 + 0x1734);
            uVar8 = uVar8 & 0xffff;
            iVar7 = iVar7 + iVar2;
            goto LAB_00133cac;
          }
          uVar6 = uVar10 & 0x1f;
          uVar10 = iVar7 + uVar10;
          *(ushort *)(param_1 + 0x1730) = (ushort)uVar9 | (ushort)(uVar8 << (ulong)uVar6);
          goto LAB_00133ccc;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 0x170c));
  }
  uVar4 = *(ushort *)(param_2 + 0x402);
  uVar5 = *(ushort *)(param_2 + 0x400);
  uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar5 << (ulong)(uVar10 & 0x1f);
  *(short *)(param_1 + 0x1730) = (short)uVar8;
  if ((int)(0x10 - (uint)uVar4) < (int)uVar10) {
    lVar13 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar13 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar8;
    lVar13 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar13 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined1 *)(param_1 + 0x1731);
    *(ushort *)(param_1 + 0x1730) = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
    iVar7 = (uint)uVar4 + *(int *)(param_1 + 0x1734) + -0x10;
  }
  else {
    iVar7 = uVar10 + uVar4;
  }
  *(int *)(param_1 + 0x1734) = iVar7;
  return;
}

