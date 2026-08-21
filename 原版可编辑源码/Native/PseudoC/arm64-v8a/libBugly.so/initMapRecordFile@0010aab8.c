
undefined8 initMapRecordFile(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  log2Console(4,"CrashReport-Native","Init register record file.");
  DAT_0013edb0 = calloc(1,0x100);
  if (DAT_0013edb0 != (char *)0x0) {
    iVar1 = snprintf(DAT_0013edb0,0x100,"%s/%s",param_1,"map_record.txt");
    if (0 < iVar1) {
      DAT_0013edb8 = fopen(DAT_0013edb0,"w");
      if (DAT_0013edb8 != (FILE *)0x0) {
        iVar1 = recordLine(DAT_0013edb8,param_2);
        if (0 < iVar1) {
          log2Console(4,"CrashReport-Native","Init of map record file finished.");
          return 1;
        }
        log2Console(6,"CrashReport-Native","write register head fail");
        closeRegisterRecordFile();
      }
    }
  }
  piVar2 = (int *)__errno();
  pcVar3 = strerror(*piVar2);
  log2Console(5,"CrashReport-Native","Failed to init map record path: %s",pcVar3);
  return 0;
}

