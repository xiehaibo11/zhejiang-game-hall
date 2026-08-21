
undefined8 FUN_00e31e58(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 != 0) {
    return 0xc;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x78);
  return 0;
}

