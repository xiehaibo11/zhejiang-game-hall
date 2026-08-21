
undefined8 initCrashRecordFile(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  log2Console(4,"CrashReport-Native","Init crash record file.");
  DAT_0013ed90 = calloc(1,0x100);
  if (DAT_0013ed90 != (char *)0x0) {
    iVar1 = snprintf(DAT_0013ed90,0x100,"%s/%s",param_1,"rqd_record.eup");
    if (0 < iVar1) {
      DAT_0013ed88 = fopen(DAT_0013ed90,"w");
      if (DAT_0013ed88 != (FILE *)0x0) {
        recordHead();
        closeCrashRecordFile();
        log2Console(4,"CrashReport-Native","Init of crash record file finished.");
        return 1;
      }
    }
  }
  piVar2 = (int *)__errno();
  pcVar3 = strerror(*piVar2);
  log2Console(5,"CrashReport-Native","Failed to init crash record path: %s",pcVar3);
  return 0;
}

