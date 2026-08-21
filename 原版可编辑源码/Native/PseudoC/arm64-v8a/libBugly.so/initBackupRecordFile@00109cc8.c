
undefined8 initBackupRecordFile(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  DAT_0013ed78 = calloc(1,0x100);
  if (DAT_0013ed78 != (char *)0x0) {
    iVar1 = snprintf(DAT_0013ed78,0x100,"%s/%s",param_1,"backup_record.txt");
    if (0 < iVar1) {
      DAT_0013ed80 = fopen(DAT_0013ed78,"w");
      if (DAT_0013ed80 != (FILE *)0x0) {
        return 1;
      }
    }
  }
  piVar2 = (int *)__errno();
  pcVar3 = strerror(*piVar2);
  log2Console(5,"CrashReport-Native","Failed to init backup record path: %s",pcVar3);
  return 0;
}

