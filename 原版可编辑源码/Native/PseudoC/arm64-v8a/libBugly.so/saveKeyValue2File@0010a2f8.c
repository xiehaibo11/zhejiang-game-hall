
undefined8 saveKeyValue2File(long param_1)

{
  char cVar1;
  int iVar2;
  char *__ptr;
  undefined8 uVar3;
  
  log2Console(4,"CrashReport-Native","Record native key-value list.");
  if (param_1 == 0) {
    log2Console(6,"CrashReport-Native","save key value fail!");
    uVar3 = 0;
  }
  else {
    if (DAT_0013ed88 == (FILE *)0x0) {
      DAT_0013ed88 = fopen(DAT_0013ed90,"a");
    }
    __ptr = calloc(1,0x1000);
    cVar1 = getNativeKeyValueList(__ptr,0x1000);
    if (((cVar1 != '\0') && (*__ptr != '\0')) &&
       (iVar2 = recordProperty(DAT_0013ed88,"key-value",__ptr), iVar2 < 1)) {
      log2Console(6,"CrashReport-Native","Failed to record key-value list.");
    }
    free(__ptr);
    log2Console(4,"CrashReport-Native","Native key-value list has been recorded.");
    closeCrashRecordFile();
    uVar3 = 1;
  }
  return uVar3;
}

