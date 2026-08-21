
void FUN_00dfe738(long param_1,int param_2,long param_3,long param_4,int param_5,long param_6,
                 int param_7,undefined4 param_8,uint param_9,code *param_10)

{
  uint uVar1;
  uint uVar2;
  
  if (0 < (int)param_9) {
    uVar2 = 0;
    do {
      (*param_10)(param_1,param_3,param_4,param_6,param_8);
      uVar1 = uVar2 & 1;
      uVar2 = uVar2 + 1;
      param_1 = param_1 + param_2;
      if (uVar1 != 0) {
        param_3 = param_3 + param_5;
        param_4 = param_4 + param_5;
      }
      param_6 = param_6 + param_7;
    } while (param_9 != uVar2);
  }
  return;
}

