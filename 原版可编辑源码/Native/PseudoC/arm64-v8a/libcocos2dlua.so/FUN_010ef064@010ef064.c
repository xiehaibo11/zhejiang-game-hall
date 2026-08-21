
void FUN_010ef064(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  
  if ((0 < (int)param_4) && (iVar2 = *(int *)(param_1 + 0x88), iVar2 != 0)) {
    uVar4 = 0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
    do {
      pbVar6 = *(byte **)(param_2 + uVar4 * 8);
      iVar7 = iVar2;
      do {
        iVar7 = iVar7 + -1;
        uVar8 = (ulong)(pbVar6[2] >> 2) & 0x3e;
        lVar1 = *(long *)(lVar5 + ((ulong)*pbVar6 & 0xf8)) + ((ulong)pbVar6[1] & 0xfc) * 0x10;
        sVar3 = *(short *)(lVar1 + uVar8);
        pbVar6 = pbVar6 + 3;
        if (sVar3 != -1) {
          sVar3 = sVar3 + 1;
        }
        *(short *)(lVar1 + uVar8) = sVar3;
      } while (iVar7 != 0);
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_4);
  }
  return;
}

