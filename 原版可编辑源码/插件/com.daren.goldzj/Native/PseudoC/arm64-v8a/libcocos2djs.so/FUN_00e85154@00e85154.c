
int FUN_00e85154(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = fclose((FILE *)param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return iVar1;
}

