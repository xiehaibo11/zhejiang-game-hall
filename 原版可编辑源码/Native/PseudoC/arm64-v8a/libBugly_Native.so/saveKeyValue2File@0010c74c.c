
undefined8 saveKeyValue2File(long param_1)

{
  int iVar1;
  char *__ptr;
  ulong uVar2;
  undefined8 uVar3;
  
  log2Console(4,"eup","Record native key-value list.");
  if (param_1 == 0) {
    log2Console(6,"eup","save key value fail!");
    uVar3 = 0;
  }
  else {
    if (DAT_0013fde0 == (FILE *)0x0) {
      DAT_0013fde0 = fopen(DAT_0013fde8,"a");
    }
    __ptr = calloc(1,0x1000);
    uVar2 = getNativeKeyValueList(__ptr,0x1000);
    if ((((uVar2 & 1) != 0) && (*__ptr != '\0')) &&
       (iVar1 = recordProperty(DAT_0013fde0,"key-value",__ptr), iVar1 < 1)) {
      log2Console(6,"eup","Failed to record key-value list.");
    }
    free(__ptr);
    log2Console(4,"eup","Native key-value list has been recorded.");
    if (DAT_0013fde0 != (FILE *)0x0) {
      fclose(DAT_0013fde0);
      DAT_0013fde0 = (FILE *)0x0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

