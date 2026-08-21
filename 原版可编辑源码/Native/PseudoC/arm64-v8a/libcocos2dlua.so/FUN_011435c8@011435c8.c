
int FUN_011435c8(undefined8 *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  byte bVar10;
  byte *pbVar11;
  
  if (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34)) {
    uVar2 = *(uint *)((long)param_1 + 0x19c);
    iVar7 = 0;
    if ((int)uVar2 < 1) {
      do {
        if (param_3 <= iVar7) {
          return iVar7;
        }
        if (0 < *(int *)(param_1 + 0x30)) {
          return iVar7;
        }
        FUN_01150bfc(param_1 + 0x2d);
        iVar7 = iVar7 + 1;
      } while (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34));
    }
    else {
      piVar9 = (int *)*param_1;
      bVar10 = 0xf;
      iVar3 = *piVar9;
      lVar8 = *(long *)(piVar9 + 4) + (long)piVar9[6] * (long)param_2;
      pbVar11 = (byte *)(lVar8 + 1);
      do {
        if ((param_3 <= iVar7) || (0 < *(int *)(param_1 + 0x30))) break;
        FUN_01150bfc(param_1 + 0x2d);
        uVar5 = 0;
        pbVar6 = pbVar11;
        do {
          pbVar1 = (byte *)(param_1[0x36] + uVar5);
          uVar5 = uVar5 + 1;
          bVar4 = *pbVar1 >> 4;
          *pbVar6 = bVar4 | *pbVar6 & 0xf0;
          bVar10 = bVar4 & bVar10;
          pbVar6 = pbVar6 + 2;
        } while (uVar2 != uVar5);
        iVar7 = iVar7 + 1;
        pbVar11 = pbVar11 + piVar9[6];
      } while (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34));
      if ((iVar3 - 7U < 4) && (bVar10 != 0xf)) {
        (*DAT_01795fb8)(lVar8,uVar2,iVar7,piVar9[6]);
      }
    }
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}

