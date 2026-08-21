
void FUN_00d99c74(long param_1,long param_2,long param_3,long param_4,uint param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  short sVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  int local_160 [64];
  
  if (param_7 != 0) {
    lVar7 = *(long *)(param_2 + 0x58);
    uVar5 = 0;
    pcVar6 = *(code **)(*(long *)(param_1 + 0x228) + (long)*(int *)(param_2 + 4) * 8 + 0x58);
    do {
      (*pcVar6)(local_160,param_3 + (ulong)param_5 * 8,param_6);
      lVar3 = 0;
      do {
        iVar1 = *(int *)(lVar7 + lVar3 * 4);
        iVar2 = local_160[lVar3];
        if (iVar2 < 0) {
          iVar2 = (iVar1 >> 1) - iVar2;
          if (iVar2 < iVar1) {
            sVar4 = 0;
          }
          else {
            sVar4 = 0;
            if (iVar1 != 0) {
              sVar4 = (short)(iVar2 / iVar1);
            }
          }
          sVar4 = -sVar4;
        }
        else {
          iVar2 = iVar2 + (iVar1 >> 1);
          if (iVar2 < iVar1) {
            sVar4 = 0;
          }
          else {
            sVar4 = 0;
            if (iVar1 != 0) {
              sVar4 = (short)(iVar2 / iVar1);
            }
          }
        }
        *(short *)(param_4 + lVar3 * 2) = sVar4;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x40);
      uVar5 = uVar5 + 1;
      param_4 = param_4 + 0x80;
      param_6 = *(int *)(param_2 + 0x24) + param_6;
    } while (uVar5 != param_7);
  }
  return;
}

