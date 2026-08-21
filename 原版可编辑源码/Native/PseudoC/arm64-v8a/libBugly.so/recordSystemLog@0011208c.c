
undefined8 recordSystemLog(char *param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = open(param_1,0x241,0x180);
    if (-1 < iVar1) {
      uVar2 = recordSystemLogWithFd(iVar1,param_2);
      return uVar2;
    }
    piVar3 = (int *)__errno();
    pcVar4 = strerror(*piVar3);
    log2Console(6,"CrashReport-Native","Failed to open system log file %s:, error: %s",param_1,
                pcVar4);
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

