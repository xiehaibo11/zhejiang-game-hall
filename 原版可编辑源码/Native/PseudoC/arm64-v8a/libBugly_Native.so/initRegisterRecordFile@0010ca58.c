
undefined8 initRegisterRecordFile(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  log2Console(4,"eup","Init register record file.");
  DAT_0013fdf0 = calloc(1,0x100);
  if (((DAT_0013fdf0 != (char *)0x0) &&
      (iVar1 = snprintf(DAT_0013fdf0,0x100,"%s/%s",param_1,"reg_record.txt"), 0 < iVar1)) &&
     (DAT_0013fdf8 = fopen(DAT_0013fdf0,"w"), DAT_0013fdf8 != (FILE *)0x0)) {
    iVar1 = recordLine(DAT_0013fdf8,param_2);
    if (0 < iVar1) {
      DAT_0013f138 = param_3;
      log2Console(4,"eup","Init of register record file finished.");
      return 1;
    }
    log2Console(6,"eup","write register head fail");
    if (DAT_0013fdf8 != (FILE *)0x0) {
      fclose(DAT_0013fdf8);
      DAT_0013fdf8 = (FILE *)0x0;
    }
    if (DAT_0013fdf0 != (char *)0x0) {
      free(DAT_0013fdf0);
      DAT_0013fdf0 = (char *)0x0;
    }
  }
  piVar2 = (int *)__errno();
  pcVar3 = strerror(*piVar2);
  log2Console(5,"eup","Failed to init register record path: %s",pcVar3);
  return 0;
}

