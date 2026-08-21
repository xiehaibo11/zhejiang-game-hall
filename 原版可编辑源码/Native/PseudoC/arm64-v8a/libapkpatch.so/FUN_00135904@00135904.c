
void FUN_00135904(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  
  uVar1 = 0;
  if ((param_3 & 0xfffffffffffffff8) != 0) {
    do {
      pcVar2 = (char *)(param_2 + uVar1);
      pcVar4 = (char *)(param_1 + uVar1);
      uVar1 = uVar1 + 8;
      *pcVar4 = *pcVar4 + *pcVar2;
      pcVar4[1] = pcVar4[1] + pcVar2[1];
      pcVar4[2] = pcVar4[2] + pcVar2[2];
      pcVar4[3] = pcVar4[3] + pcVar2[3];
      pcVar4[4] = pcVar4[4] + pcVar2[4];
      pcVar4[5] = pcVar4[5] + pcVar2[5];
      pcVar4[6] = pcVar4[6] + pcVar2[6];
      pcVar4[7] = pcVar4[7] + pcVar2[7];
    } while (uVar1 < (param_3 & 0xfffffffffffffff8));
  }
  if (uVar1 < param_3) {
    lVar3 = param_3 - uVar1;
    pcVar2 = (char *)(param_2 + uVar1);
    pcVar4 = (char *)(param_1 + uVar1);
    do {
      lVar3 = lVar3 + -1;
      *pcVar4 = *pcVar4 + *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}

