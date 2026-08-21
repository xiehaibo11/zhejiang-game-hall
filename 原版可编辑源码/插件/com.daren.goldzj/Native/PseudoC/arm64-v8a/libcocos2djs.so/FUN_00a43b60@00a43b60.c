
undefined8 FUN_00a43b60(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *param_1;
  *param_2 = 0;
  *param_3 = 0;
  if ((cVar1 != '\0') && (*param_1 != '=')) {
    uVar2 = FUN_00a18f14();
    return uVar2;
  }
  return 0;
}

