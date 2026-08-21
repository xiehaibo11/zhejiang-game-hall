
undefined4 FUN_00e31dc4(long param_1,char *param_2,int *param_3,char param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 == 0) {
    if (param_4 == '\0') {
      iVar1 = *param_3;
    }
    else {
      lVar2 = strtol((char *)param_3,(char **)0x0,10);
      iVar1 = (int)lVar2;
    }
    if ((iVar1 == 0x28) || (iVar1 == 0x23)) {
      uVar3 = 0;
      *(int *)(param_1 + 0x78) = iVar1;
    }
    else {
      uVar3 = 7;
    }
  }
  else {
    uVar3 = 0xc;
  }
  return uVar3;
}

