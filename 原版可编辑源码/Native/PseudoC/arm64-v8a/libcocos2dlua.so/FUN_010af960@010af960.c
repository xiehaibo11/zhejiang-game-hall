
void FUN_010af960(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1[3];
  param_1[0xc] = param_1[6];
  param_1[0xd] = param_1[7];
  lVar6 = param_1[2] + 1 + *param_1 >> 1;
  lVar2 = param_1[4] + param_1[6] + 1 >> 1;
  lVar5 = lVar1 + 1 + param_1[1] >> 1;
  lVar4 = param_1[5] + param_1[7] + 1 >> 1;
  lVar3 = (param_1[2] + 1 + param_1[4] >> 1) + 1;
  param_1[2] = lVar6;
  param_1[3] = lVar5;
  param_1[10] = lVar2;
  param_1[0xb] = lVar4;
  lVar1 = (lVar1 + 1 + param_1[5] >> 1) + 1;
  lVar6 = lVar3 + lVar6 >> 1;
  lVar2 = lVar3 + lVar2 >> 1;
  lVar5 = lVar1 + lVar5 >> 1;
  lVar3 = lVar1 + lVar4 >> 1;
  param_1[4] = lVar6;
  param_1[5] = lVar5;
  param_1[8] = lVar2;
  param_1[9] = lVar3;
  param_1[6] = lVar6 + lVar2 + 1 >> 1;
  param_1[7] = lVar5 + lVar3 + 1 >> 1;
  return;
}

