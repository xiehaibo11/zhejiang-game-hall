
undefined4 FUN_01074394(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x80);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xc;
  }
  return uVar2;
}

