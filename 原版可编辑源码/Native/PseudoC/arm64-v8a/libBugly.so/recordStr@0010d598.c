
ulong recordStr(FILE *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  ulong uVar4;
  
  if ((param_1 == (FILE *)0x0) || (param_2 == (char *)0x0)) {
    uVar4 = 0xffffffff;
  }
  else {
    sVar2 = strlen(param_2);
    sVar3 = fwrite(param_2,1,(long)(int)sVar2,param_1);
    if ((int)sVar3 == (int)sVar2) {
      iVar1 = putc(0,param_1);
      if (iVar1 == -1) {
        log2Console(6,"CrashReport-Native","Failed to write EOF to file.");
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = sVar3 & 0xffffffff;
      }
    }
    else {
      uVar4 = 0xffffffff;
      log2Console(6,"CrashReport-Native","Failed to write string to file: %s",param_2);
    }
  }
  return uVar4;
}

