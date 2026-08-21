
void FUN_0010e8b4(undefined4 *param_1,undefined4 *param_2,long param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar1 = *param_5;
  uVar5 = (ulong)uVar1;
  uVar2 = param_5[1];
  if (uVar2 == 1) {
    if (0 < (int)uVar1) {
      do {
        uVar3 = *param_2;
        uVar5 = uVar5 - 1;
        param_2 = param_2 + param_3 * param_4;
        *param_1 = uVar3;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (0 < (int)uVar1) {
    do {
      FUN_0010e8b4(param_1,param_2,(int)uVar1 * param_3,param_4,param_5 + 2);
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar4;
      param_1 = param_1 + (int)uVar2;
      param_2 = param_2 + param_3 * param_4;
    } while (uVar4 != 0);
  }
  return;
}

