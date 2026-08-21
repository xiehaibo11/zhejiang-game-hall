
void FUN_01150900(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  
  uVar9 = *(uint *)(param_1 + 8);
  uVar5 = (ulong)uVar9;
  if (0 < (int)uVar9) {
    lVar7 = (long)(int)uVar9;
    uVar6 = 0;
    lVar8 = *(int *)(param_1 + 0x34) * lVar7;
    do {
      bVar1 = *(byte *)(param_2 + uVar6);
      iVar11 = *(int *)(param_1 + 0x24);
      lVar10 = (long)(int)uVar9;
      bVar2 = bVar1;
      if (1 < *(int *)(param_1 + 0x2c)) {
        bVar2 = *(byte *)(param_2 + uVar6 + lVar7);
      }
      uVar12 = (uint)bVar2;
      lVar13 = *(long *)(param_1 + 0x60);
      lVar14 = lVar7 + (int)uVar6;
      *(uint *)(lVar13 + (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2)) =
           iVar11 * (uint)bVar1;
      if (lVar14 < lVar8) {
        iVar3 = bVar1 - uVar12;
        do {
          lVar4 = lVar14 << 0x20;
          while (iVar11 = iVar11 - *(int *)(param_1 + 0x28), -1 < iVar11) {
            lVar4 = lVar4 + (lVar7 << 0x20);
            *(uint *)(lVar13 + lVar14 * 4) = iVar3 * iVar11 + *(int *)(param_1 + 0x24) * uVar12;
            lVar14 = lVar14 + lVar7;
            if (lVar8 <= lVar14) goto LAB_011509d4;
          }
          lVar10 = lVar10 + lVar7;
          bVar1 = *(byte *)(param_2 + lVar10);
          lVar14 = lVar7 + (lVar4 >> 0x20);
          iVar11 = *(int *)(param_1 + 0x24) + iVar11;
          iVar3 = uVar12 - bVar1;
          *(uint *)(lVar13 + (lVar4 >> 0x1e)) =
               iVar3 * iVar11 + *(int *)(param_1 + 0x24) * (uint)bVar1;
          uVar12 = (uint)bVar1;
        } while (lVar14 < lVar8);
      }
LAB_011509d4:
      uVar6 = uVar6 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar5);
  }
  return;
}

