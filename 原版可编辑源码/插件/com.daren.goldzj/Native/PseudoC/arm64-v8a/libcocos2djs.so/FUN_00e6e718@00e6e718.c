
void FUN_00e6e718(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[8] = param_1[4];
  param_1[9] = param_1[5];
  lVar1 = param_1[2] + param_1[4];
  lVar2 = *param_1 + param_1[2];
  if (lVar1 < 0) {
    lVar1 = lVar1 + 1;
  }
  if (lVar2 < 0) {
    lVar2 = lVar2 + 1;
  }
  param_1[2] = lVar2 >> 1;
  lVar2 = (lVar2 >> 1) + (lVar1 >> 1);
  lVar3 = param_1[3] + param_1[5];
  lVar4 = param_1[1] + param_1[3];
  if (lVar2 < 0) {
    lVar2 = lVar2 + 1;
  }
  if (lVar3 < 0) {
    lVar3 = lVar3 + 1;
  }
  param_1[4] = lVar2 >> 1;
  if (lVar4 < 0) {
    lVar4 = lVar4 + 1;
  }
  param_1[6] = lVar1 >> 1;
  param_1[7] = lVar3 >> 1;
  param_1[3] = lVar4 >> 1;
  lVar1 = (lVar4 >> 1) + (lVar3 >> 1);
  if (lVar1 < 0) {
    lVar1 = lVar1 + 1;
  }
  param_1[5] = lVar1 >> 1;
  return;
}

