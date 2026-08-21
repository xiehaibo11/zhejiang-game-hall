
undefined8 FUN_01074338(long param_1,char *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 == 0) {
    if (*param_3 == 0x23) {
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x80) = 0x23;
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    uVar2 = 0xc;
  }
  return uVar2;
}

