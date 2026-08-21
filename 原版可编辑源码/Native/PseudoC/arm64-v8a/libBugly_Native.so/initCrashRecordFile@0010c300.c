
undefined8 initCrashRecordFile(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  log2Console(4,"eup","Init crash record file.");
  DAT_0013fde8 = calloc(1,0x100);
  if (((DAT_0013fde8 != (char *)0x0) &&
      (iVar1 = snprintf(DAT_0013fde8,0x100,"%s/%s",param_1,"rqd_record.eup"), 0 < iVar1)) &&
     (DAT_0013fde0 = fopen(DAT_0013fde8,"w"), DAT_0013fde0 != (FILE *)0x0)) {
    recordHead();
    if (DAT_0013fde0 != (FILE *)0x0) {
      fclose(DAT_0013fde0);
      DAT_0013fde0 = (FILE *)0x0;
    }
    log2Console(4,"eup","Init of crash record file finished.");
    return 1;
  }
  piVar2 = (int *)__errno();
  pcVar3 = strerror(*piVar2);
  log2Console(5,"eup","Failed to init crash record path: %s",pcVar3);
  return 0;
}

