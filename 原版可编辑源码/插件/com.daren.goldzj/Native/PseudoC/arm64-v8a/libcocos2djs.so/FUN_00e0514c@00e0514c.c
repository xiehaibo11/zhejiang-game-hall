
void FUN_00e0514c(int param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  ulong uVar6;
  
  lVar2 = (long)param_3;
  param_5 = param_5 + param_4;
  pcVar3 = (char *)(param_6 + (long)param_4 * (long)param_3);
  if (param_4 == 0) {
    if (1 < param_1) {
      cVar4 = *pcVar3;
      uVar6 = (ulong)(param_1 - 1);
      pcVar5 = pcVar3;
      do {
        pcVar5 = pcVar5 + 1;
        uVar6 = uVar6 - 1;
        cVar4 = *pcVar5 + cVar4;
        *pcVar5 = cVar4;
      } while (uVar6 != 0);
    }
    pcVar3 = pcVar3 + lVar2;
    param_4 = 1;
    if (param_5 < 2) {
      return;
    }
  }
  else if (param_5 <= param_4) {
    return;
  }
  if (param_1 - 1U == 0 || param_1 < 1) {
    do {
      param_4 = param_4 + 1;
      *pcVar3 = pcVar3[-lVar2] + *pcVar3;
      pcVar3 = pcVar3 + lVar2;
    } while (param_4 < param_5);
  }
  else {
    do {
      cVar4 = pcVar3[-lVar2] + *pcVar3;
      *pcVar3 = cVar4;
      uVar6 = 0;
      do {
        uVar1 = uVar6 + 1;
        cVar4 = pcVar3[uVar6 + 1] + cVar4;
        pcVar3[uVar6 + 1] = cVar4;
        uVar6 = uVar1;
      } while (param_1 - 1U != uVar1);
      param_4 = param_4 + 1;
      pcVar3 = pcVar3 + lVar2;
    } while (param_4 < param_5);
  }
  return;
}

