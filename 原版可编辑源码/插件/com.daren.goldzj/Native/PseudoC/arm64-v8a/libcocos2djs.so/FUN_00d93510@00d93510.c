
void FUN_00d93510(long param_1,long param_2,long param_3,uint param_4)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  
  if ((0 < (int)param_4) && (iVar2 = *(int *)(param_1 + 0x88), iVar2 != 0)) {
    uVar4 = 0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
    do {
      pbVar6 = *(byte **)(param_2 + uVar4 * 8);
      pcVar7 = *(char **)(param_3 + uVar4 * 8);
      iVar8 = iVar2;
      do {
        psVar1 = (short *)(*(long *)(lVar5 + (ulong)(*pbVar6 >> 3) * 8) +
                           (ulong)(pbVar6[1] >> 2) * 0x40 + (ulong)(pbVar6[2] >> 3) * 2);
        sVar3 = *psVar1;
        if (sVar3 == 0) {
          FUN_00d93a70(param_1);
          sVar3 = *psVar1;
        }
        iVar8 = iVar8 + -1;
        *pcVar7 = (char)sVar3 + -1;
        pbVar6 = pbVar6 + 3;
        pcVar7 = pcVar7 + 1;
      } while (iVar8 != 0);
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_4);
  }
  return;
}

