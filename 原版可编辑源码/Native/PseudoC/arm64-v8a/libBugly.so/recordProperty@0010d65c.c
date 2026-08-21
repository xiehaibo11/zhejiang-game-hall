
int recordProperty(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = recordStr();
  if (iVar1 == -1) {
    log2Console(6,"CrashReport-Native","write key fail");
    iVar1 = -1;
  }
  else {
    iVar2 = recordStr(param_1,param_3);
    iVar1 = iVar1 + iVar2;
    if (iVar2 == -1) {
      log2Console(6,"CrashReport-Native","write value fail");
      iVar1 = -1;
    }
  }
  return iVar1;
}

