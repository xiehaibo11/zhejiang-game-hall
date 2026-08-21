
undefined8 initBackupRecordFile(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  DAT_0013fdd0 = calloc(1,0x100);
  if (((DAT_0013fdd0 != (char *)0x0) &&
      (iVar1 = snprintf(DAT_0013fdd0,0x100,"%s/%s",param_1,"backup_record.txt"), 0 < iVar1)) &&
     (DAT_0013fdd8 = fopen(DAT_0013fdd0,"w"), DAT_0013fdd8 != (FILE *)0x0)) {
    return 1;
  }
  piVar2 = (int *)__errno();
  pcVar3 = strerror(*piVar2);
  log2Console(5,"eup","Failed to init backup record path: %s",pcVar3);
  return 0;
}

