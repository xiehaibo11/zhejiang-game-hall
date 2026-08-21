
undefined8 initRegisterRecordFile(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  log2Console(4,"CrashReport-Native","Init register record file.");
  DAT_0013eda8 = calloc(1,0x100);
  if (DAT_0013eda8 != (char *)0x0) {
    iVar1 = snprintf(DAT_0013eda8,0x100,"%s/%s",param_1,"reg_record.txt");
    if (0 < iVar1) {
      DAT_0013eda0 = fopen(DAT_0013eda8,"w");
      if (DAT_0013eda0 != (FILE *)0x0) {
        iVar1 = recordLine(DAT_0013eda0,param_2);
        if (0 < iVar1) {
          DAT_0013e108 = param_3;
          log2Console(4,"CrashReport-Native","Init of register record file finished.");
          return 1;
        }
        log2Console(6,"CrashReport-Native","write register head fail");
        closeRegisterRecordFile();
      }
    }
  }
  piVar2 = (int *)__errno();
  pcVar3 = strerror(*piVar2);
  log2Console(5,"CrashReport-Native","Failed to init register record path: %s",pcVar3);
  return 0;
}

