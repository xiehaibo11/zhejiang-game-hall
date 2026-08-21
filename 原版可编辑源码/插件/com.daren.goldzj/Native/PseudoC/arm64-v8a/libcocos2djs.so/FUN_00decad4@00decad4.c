
bool FUN_00decad4(long param_1,int param_2,uint param_3,int param_4,long param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_4 < 1) {
    return false;
  }
  if (0 < (int)param_3) {
    iVar2 = 0;
    bVar3 = 0xff;
    do {
      lVar4 = 0;
      uVar5 = 0;
      do {
        bVar1 = *(byte *)(param_1 + uVar5);
        uVar5 = uVar5 + 1;
        *(byte *)(param_5 + lVar4) = bVar1;
        bVar3 = bVar3 & bVar1;
        lVar4 = lVar4 + 4;
      } while (param_3 != uVar5);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
    } while (iVar2 != param_4);
    return bVar3 != 0xff;
  }
  return false;
}

