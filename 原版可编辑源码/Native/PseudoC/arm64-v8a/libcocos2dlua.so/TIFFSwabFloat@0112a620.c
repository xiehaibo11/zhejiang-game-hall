
void TIFFSwabFloat(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  return;
}

