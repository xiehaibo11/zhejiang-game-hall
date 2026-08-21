
undefined8 saveAppInfo2File(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    if (DAT_0013fde0 == (FILE *)0x0) {
      DAT_0013fde0 = fopen(DAT_0013fde8,"a");
      cVar1 = *param_1;
    }
    else {
      cVar1 = *param_1;
    }
    if ((cVar1 == '\0') || (*param_2 == '\0')) {
      uVar3 = 0;
    }
    else {
      log2Console(4,"eup","Record %s",param_1);
      iVar2 = recordProperty(DAT_0013fde0,param_1,param_2);
      if (iVar2 < 1) {
        log2Console(6,"eup","Failed to record native log.");
      }
      log2Console(4,"eup","%s has been recorded.",param_1);
      if (DAT_0013fde0 != (FILE *)0x0) {
        fclose(DAT_0013fde0);
        DAT_0013fde0 = (FILE *)0x0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

