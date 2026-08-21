
void FUN_00df4540(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar2 = *(uint *)(param_1 + 8);
  lVar4 = (long)(int)uVar2;
  if (0 < (int)uVar2) {
    uVar5 = 0;
    lVar6 = *(int *)(param_1 + 0x34) * lVar4;
    do {
      if ((int)uVar5 < (int)lVar6) {
        iVar7 = 0;
        uVar11 = 0;
        uVar9 = uVar5 & 0xffffffff;
        uVar8 = uVar5;
        do {
          uVar10 = (uint)uVar11;
          iVar7 = *(int *)(param_1 + 0x24) + iVar7;
          if (iVar7 < 1) {
            uVar12 = 0;
          }
          else {
            pbVar3 = (byte *)(param_2 + (int)uVar9);
            do {
              bVar1 = *pbVar3;
              uVar12 = (uint)bVar1;
              iVar7 = iVar7 - *(int *)(param_1 + 0x28);
              pbVar3 = pbVar3 + lVar4;
              uVar10 = (int)uVar11 + (uint)bVar1;
              uVar11 = (ulong)uVar10;
              uVar9 = (ulong)((int)uVar9 + uVar2);
            } while (0 < iVar7);
          }
          *(uint *)(*(long *)(param_1 + 0x60) + uVar8 * 4) =
               iVar7 * uVar12 + *(int *)(param_1 + 0x28) * uVar10;
          uVar8 = uVar8 + lVar4;
          uVar11 = (ulong)*(uint *)(param_1 + 0xc) * (ulong)-(iVar7 * uVar12) + 0x80000000 >> 0x20;
        } while ((long)uVar8 < lVar6);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
  }
  return;
}

