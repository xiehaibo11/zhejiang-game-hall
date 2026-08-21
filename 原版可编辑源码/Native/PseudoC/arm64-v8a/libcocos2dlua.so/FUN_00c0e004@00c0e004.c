
undefined8 * FUN_00c0e004(undefined8 param_1,undefined8 *param_2,size_t *param_3)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = feof((FILE *)*param_2);
  if (iVar1 == 0) {
    sVar2 = fread(param_2 + 1,1,0x400,(FILE *)*param_2);
    *param_3 = sVar2;
    if (sVar2 != 0) {
      return param_2 + 1;
    }
  }
  return (undefined8 *)0x0;
}

