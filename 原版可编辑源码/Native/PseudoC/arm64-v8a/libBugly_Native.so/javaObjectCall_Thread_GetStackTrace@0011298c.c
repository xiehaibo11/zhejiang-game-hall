
undefined8 javaObjectCall_Thread_GetStackTrace(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    pcVar3 = "env == NULL || obj == NULL , return!";
    uVar1 = 6;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,jm_getStackTrace);
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      return uVar1;
    }
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
    pcVar3 = "call getStackTrace fail!";
    uVar1 = 5;
  }
  log2Console(uVar1,"eup",pcVar3);
  return 0;
}

