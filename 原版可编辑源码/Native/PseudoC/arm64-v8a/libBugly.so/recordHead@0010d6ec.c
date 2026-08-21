
int recordHead(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = recordStr(param_1,"NATIVE_RQD_REPORT");
  if (iVar1 == -1) {
    log2Console(6,"CrashReport-Native","write head fail");
    iVar1 = -1;
  }
  else {
    iVar2 = recordProperty(param_1,"rqd_rv",&DAT_00124f80);
    iVar1 = iVar1 + iVar2;
    if (iVar2 == -1) {
      log2Console(6,"CrashReport-Native","write fail %s %s","rqd_rv",&DAT_00124f80);
      iVar1 = -1;
    }
  }
  return iVar1;
}

