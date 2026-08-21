
size_t FUN_011dbecc(long *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((char)param_1[0xb] != '\0') {
    sVar2 = fwrite(param_2,1,param_3,(FILE *)param_1[8]);
    return sVar2;
  }
  if ((long)param_3 < 1) {
    param_3 = 0;
  }
  else {
    sVar2 = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)((long)param_2 + sVar2));
      if (iVar1 == -1) {
        return sVar2;
      }
      sVar2 = sVar2 + 1;
    } while (param_3 != sVar2);
  }
  return param_3;
}

