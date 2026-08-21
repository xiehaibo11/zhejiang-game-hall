
void lsp_enforce_margin(ushort *param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = (int)(short)param_3;
  if ((short)*param_1 < iVar3) {
    *param_1 = param_3;
  }
  uVar2 = param_2 - 1;
  if ((short)(0x6488 - param_3) < (short)param_1[(int)uVar2]) {
    param_1[(int)uVar2] = 0x6488 - param_3;
  }
  if (2 < param_2) {
    puVar4 = param_1 + 1;
    uVar1 = *puVar4;
    uVar7 = (uint)*param_1;
    lVar5 = (ulong)uVar2 - 1;
    do {
      iVar6 = (int)(short)uVar1;
      uVar2 = iVar3 + (short)uVar7;
      uVar7 = (uint)uVar1;
      if (iVar6 < (int)uVar2) {
        iVar6 = (int)(short)(ushort)uVar2;
        *puVar4 = (ushort)uVar2;
        uVar7 = uVar2;
      }
      uVar1 = puVar4[1];
      if ((short)uVar1 - iVar3 < iVar6) {
        uVar7 = ((uint)((short)uVar1 - iVar3) >> 1) + (iVar6 >> 1);
        *puVar4 = (ushort)uVar7;
      }
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  return;
}

