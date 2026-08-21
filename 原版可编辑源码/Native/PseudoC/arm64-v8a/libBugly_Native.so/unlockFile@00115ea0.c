
undefined8 unlockFile(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  
  uVar2 = 0;
  if (param_1 != (char *)0x0) {
    log2Console(4,"eup","Try to unlock file: %s",param_1);
    iVar1 = access(param_1,0);
    if ((iVar1 == 0) && (iVar1 = unlink(param_1), iVar1 < 0)) {
      piVar3 = (int *)__errno();
      pcVar4 = strerror(*piVar3);
      log2Console(5,"eup","Failed to remove lock file for: %s.",pcVar4);
      return 0;
    }
    log2Console(4,"eup","Successfully unlock file: %s",param_1);
    uVar2 = 1;
  }
  return uVar2;
}

