
void FUN_00dec788(long param_1,int param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if (0 < param_4) {
    lVar2 = 0;
    if (param_2 == 0) {
      lVar2 = 3;
    }
    if (0 < (int)param_3) {
      pbVar4 = (byte *)(param_1 + (ulong)(param_2 != 0) + 2);
      do {
        lVar5 = lVar2;
        pbVar6 = pbVar4;
        uVar7 = (ulong)param_3;
        do {
          if (*(byte *)(param_1 + lVar5) != 0xff) {
            iVar3 = (uint)*(byte *)(param_1 + lVar5) * 0x8081;
            pbVar6[-2] = (byte)(iVar3 * (uint)pbVar6[-2] >> 0x17);
            pbVar6[-1] = (byte)(iVar3 * (uint)pbVar6[-1] >> 0x17);
            *pbVar6 = (byte)(iVar3 * (uint)*pbVar6 >> 0x17);
          }
          uVar7 = uVar7 - 1;
          pbVar6 = pbVar6 + 4;
          lVar5 = lVar5 + 4;
        } while (uVar7 != 0);
        param_1 = param_1 + param_5;
        pbVar4 = pbVar4 + param_5;
        bVar1 = 1 < param_4;
        param_4 = param_4 + -1;
      } while (bVar1);
    }
  }
  return;
}

