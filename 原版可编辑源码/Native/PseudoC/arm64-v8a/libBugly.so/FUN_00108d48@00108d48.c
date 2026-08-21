
undefined8 *
FUN_00108d48(long param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  undefined8 *__ptr;
  long lVar2;
  long lVar3;
  
  log2Console(3,"CrashReport-Native","Try to search symbol info for pc: %p",param_1);
  __ptr = calloc(1,0x20);
  iVar1 = dladdr(param_1,__ptr);
  if (iVar1 == 0) {
    log2Console(4,"CrashReport-Native","Can not find symbol info.");
    free(__ptr);
    return (undefined8 *)0x0;
  }
  log2Console(4,"CrashReport-Native","Found symbol info.");
  lVar2 = __ptr[1];
  *param_2 = *__ptr;
  lVar3 = __ptr[2];
  *param_3 = param_1 - lVar2;
  if (lVar3 != 0) {
    lVar2 = __ptr[3];
    *param_4 = lVar3;
    *param_5 = param_1 - lVar2;
    return __ptr;
  }
  return __ptr;
}

