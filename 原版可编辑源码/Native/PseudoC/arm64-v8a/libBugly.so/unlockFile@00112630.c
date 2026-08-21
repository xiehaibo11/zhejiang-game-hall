
undefined8 unlockFile(char *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  log2Console(4,"CrashReport-Native","Try to unlock file: %s",param_1);
  iVar1 = access(param_1,0);
  if ((iVar1 == 0) && (iVar1 = unlink(param_1), iVar1 < 0)) {
    piVar2 = (int *)__errno();
    pcVar3 = strerror(*piVar2);
    log2Console(5,"CrashReport-Native","Failed to remove lock file for: %s.",pcVar3);
    return 0;
  }
  log2Console(4,"CrashReport-Native","Successfully unlock file: %s",param_1);
  return 1;
}

