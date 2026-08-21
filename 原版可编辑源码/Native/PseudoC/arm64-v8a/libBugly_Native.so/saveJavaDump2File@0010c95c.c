
void saveJavaDump2File(long param_1,char *param_2)

{
  int iVar1;
  
  log2Console(4,"eup","Record Java stack.");
  if (param_1 == 0) {
    log2Console(6,"eup","save jstack fail!");
    return;
  }
  if (DAT_0013fde0 == (FILE *)0x0) {
    DAT_0013fde0 = fopen(DAT_0013fde8,"a");
  }
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar1 = recordProperty(DAT_0013fde0,"jstack",param_2), iVar1 < 1)) {
    log2Console(6,"eup","Failed to record java stack.");
  }
  log2Console(4,"eup","Java stack has been recorded.");
  if (DAT_0013fde0 != (FILE *)0x0) {
    fclose(DAT_0013fde0);
    DAT_0013fde0 = (FILE *)0x0;
  }
  if (DAT_0013fde8 != (char *)0x0) {
    free(DAT_0013fde8);
    return;
  }
  return;
}

