
long * GetAndUpdateAnrState(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (jm_getAndUpdateAnrState != 0) {
    log2Console(4,"eup","jni call getAndUpdateAnrState");
    cVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_2,jm_getAndUpdateAnrState);
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      param_1 = (long *)(ulong)(cVar1 != '\0');
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
      uVar3 = getErrorMsg();
      log2Console(6,"eup","call getAndUpdateAnrState fail:%s",uVar3);
      param_1 = (long *)0x0;
    }
  }
  return param_1;
}

