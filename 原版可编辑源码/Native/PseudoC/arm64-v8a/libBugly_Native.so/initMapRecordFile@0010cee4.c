
undefined8 initMapRecordFile(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  log2Console(4,"eup","Init register record file.");
  DAT_0013fe08 = calloc(1,0x100);
  if (((DAT_0013fe08 != (char *)0x0) &&
      (iVar1 = snprintf(DAT_0013fe08,0x100,"%s/%s",param_1,"map_record.txt"), 0 < iVar1)) &&
     (DAT_0013fe10 = fopen(DAT_0013fe08,"w"), DAT_0013fe10 != (FILE *)0x0)) {
    iVar1 = recordLine(DAT_0013fe10,param_2);
    if (0 < iVar1) {
      log2Console(4,"eup","Init of map record file finished.");
      return 1;
    }
    log2Console(6,"eup","write register head fail");
    closeRegisterRecordFile();
  }
  piVar2 = (int *)__errno();
  pcVar3 = strerror(*piVar2);
  log2Console(5,"eup","Failed to init map record path: %s",pcVar3);
  return 0;
}

