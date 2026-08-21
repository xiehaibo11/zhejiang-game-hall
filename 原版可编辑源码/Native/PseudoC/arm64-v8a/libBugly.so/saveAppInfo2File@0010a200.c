
undefined8 saveAppInfo2File(char *param_1,char *param_2)

{
  int iVar1;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    if (DAT_0013ed88 == (FILE *)0x0) {
      DAT_0013ed88 = fopen(DAT_0013ed90,"a");
    }
    if ((*param_1 != '\0') && (*param_2 != '\0')) {
      log2Console(4,"CrashReport-Native","Record %s",param_1);
      iVar1 = recordProperty(DAT_0013ed88,param_1,param_2);
      if (iVar1 < 1) {
        log2Console(6,"CrashReport-Native","Failed to record native log.");
      }
      log2Console(4,"CrashReport-Native","%s has been recorded.",param_1);
      closeCrashRecordFile();
      return 1;
    }
  }
  return 0;
}

