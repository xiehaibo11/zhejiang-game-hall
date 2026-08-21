
ulong recordStr(FILE *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  
  sVar3 = 0xffffffff;
  if ((param_1 != (FILE *)0x0) && (param_2 != (char *)0x0)) {
    sVar3 = strlen(param_2);
    sVar2 = fwrite(param_2,1,(long)(int)sVar3,param_1);
    if ((int)sVar2 == (int)sVar3) {
      iVar1 = putc(0,param_1);
      if (iVar1 != -1) goto LAB_0010ff24;
      log2Console(6,"eup","Failed to write EOF to file.");
    }
    else {
      log2Console(6,"eup","Failed to write string to file: %s",param_2);
    }
    sVar3 = 0xffffffff;
  }
LAB_0010ff24:
  return sVar3 & 0xffffffff;
}

