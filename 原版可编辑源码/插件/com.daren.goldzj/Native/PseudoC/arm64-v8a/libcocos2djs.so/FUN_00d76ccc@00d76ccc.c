
void FUN_00d76ccc(long param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  
  bVar4 = *param_3;
  lVar7 = *(long *)(param_1 + 8);
  uVar11 = (uint)*param_2 + (uint)bVar4;
  *param_2 = (byte)uVar11;
  if (1 < lVar7) {
    pbVar9 = param_2 + 1;
    do {
      uVar8 = (uint)bVar4;
      param_3 = param_3 + 1;
      bVar4 = *param_3;
      iVar5 = bVar4 - uVar8;
      iVar1 = -iVar5;
      if (-1 < iVar5) {
        iVar1 = iVar5;
      }
      iVar6 = (uVar11 & 0xff) - uVar8;
      iVar2 = -iVar6;
      if (-1 < iVar6) {
        iVar2 = iVar6;
      }
      iVar5 = iVar5 + iVar6;
      iVar6 = -iVar5;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      uVar3 = (uint)bVar4;
      if (iVar1 <= iVar2) {
        uVar3 = uVar11 & 0xff;
        iVar2 = iVar1;
      }
      if (iVar2 <= iVar6) {
        uVar8 = uVar3;
      }
      uVar11 = uVar8 + *pbVar9;
      pbVar10 = pbVar9 + 1;
      *pbVar9 = (byte)uVar11;
      pbVar9 = pbVar10;
    } while (pbVar10 < param_2 + lVar7);
  }
  return;
}

