
int FUN_0109cb04(byte *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  
  bVar4 = param_1[3];
  uVar5 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 | (uint)bVar4;
  if (uVar5 == 0) {
    return 0;
  }
  uVar2 = (ulong)(uVar5 - 1) + 1;
  pbVar6 = param_1 + 7;
  if (uVar2 < 4) {
    iVar8 = 0;
  }
  else {
    uVar3 = 4;
    if ((bVar4 & 3) != 0) {
      uVar3 = (ulong)(bVar4 & 3);
    }
    lVar7 = uVar2 - uVar3;
    if (lVar7 == 0) {
      iVar8 = 0;
    }
    else {
      uVar5 = uVar5 - (int)lVar7;
      pbVar6 = pbVar6 + lVar7 * 4;
      param_1 = param_1 + 0xf;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      iVar11 = 0;
      do {
        pbVar1 = param_1 + -8;
        uVar12 = *(undefined8 *)param_1;
        lVar7 = lVar7 + -4;
        param_1 = param_1 + 0x10;
        iVar8 = iVar8 + (uint)(byte)*(undefined8 *)pbVar1 + 1;
        iVar9 = iVar9 + (uint)(byte)((ulong)*(undefined8 *)pbVar1 >> 0x20) + 1;
        iVar10 = iVar10 + (uint)(byte)uVar12 + 1;
        iVar11 = iVar11 + (uint)(byte)((ulong)uVar12 >> 0x20) + 1;
      } while (lVar7 != 0);
      iVar8 = iVar10 + iVar8 + iVar11 + iVar9;
      if (uVar3 == 0) {
        return iVar8;
      }
    }
  }
  do {
    uVar5 = uVar5 - 1;
    iVar8 = iVar8 + (uint)*pbVar6 + 1;
    pbVar6 = pbVar6 + 4;
  } while (uVar5 != 0);
  return iVar8;
}

