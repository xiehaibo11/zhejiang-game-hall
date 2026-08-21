
void saveJavaDump2File(long param_1,char *param_2)

{
  int iVar1;
  
  log2Console(4,"CrashReport-Native","Record Java stack.");
  if (param_1 == 0) {
    log2Console(6,"CrashReport-Native","save jstack fail!");
    return;
  }
  if (DAT_0013ed88 == (FILE *)0x0) {
    DAT_0013ed88 = fopen(DAT_0013ed90,"a");
  }
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar1 = recordProperty(DAT_0013ed88,"jstack",param_2), iVar1 < 1)) {
    log2Console(6,"CrashReport-Native","Failed to record java stack.");
  }
  log2Console(4,"CrashReport-Native","Java stack has been recorded.");
  closeCrashRecordFile();
  if (DAT_0013ed90 != (char *)0x0) {
    free(DAT_0013ed90);
    return;
  }
  return;
}

