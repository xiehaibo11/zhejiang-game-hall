
void TIFFSwabDouble(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = *param_1;
  uVar3 = param_1[5];
  *param_1 = uVar1;
  param_1[6] = param_1[1];
  param_1[1] = uVar2;
  uVar1 = param_1[4];
  param_1[5] = param_1[2];
  param_1[2] = uVar3;
  param_1[4] = param_1[3];
  param_1[3] = uVar1;
  return;
}

