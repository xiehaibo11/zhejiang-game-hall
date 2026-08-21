
undefined8 FUN_00e1ee08(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (*(char *)*param_1 == *(char *)*param_2) {
    iVar1 = strcmp((char *)*param_1,(char *)*param_2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

