
undefined8 *
FUN_0010c02c(long param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 *__ptr;
  
  log2Console(3,"eup","searchIpInfos pc: %p",param_1);
  __ptr = calloc(1,0x20);
  iVar2 = dladdr(param_1,__ptr);
  if (iVar2 == 0) {
    log2Console(4,"eup","Can not find symbol info.");
    free(__ptr);
    __ptr = (undefined8 *)0x0;
  }
  else {
    log2Console(4,"eup","Found symbol info.");
    lVar1 = __ptr[1];
    *param_2 = *__ptr;
    *param_3 = param_1 - lVar1;
    log2Console(4,"eup","searchIpInfos, fname:%s fbase:%08x moduleOffset:%08x");
    if (__ptr[2] != 0) {
      *param_4 = __ptr[2];
      *param_5 = param_1 - __ptr[3];
      log2Console(4,"eup","searchIpInfos funcName:%s funcOffset:%08x");
    }
  }
  return __ptr;
}

