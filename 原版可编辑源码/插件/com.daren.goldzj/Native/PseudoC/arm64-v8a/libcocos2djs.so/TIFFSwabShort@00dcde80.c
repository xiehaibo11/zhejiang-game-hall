
void TIFFSwabShort(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  return;
}

