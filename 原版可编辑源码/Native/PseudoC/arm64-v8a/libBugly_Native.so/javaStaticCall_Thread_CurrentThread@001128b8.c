
long javaStaticCall_Thread_CurrentThread(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_1 == (long *)0x0) {
    pcVar4 = "env == NULL , return!";
    uVar3 = 6;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x390))(param_1,jc_Thread,jm_currentThread);
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      if (lVar1 != 0) {
        return lVar1;
      }
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    pcVar4 = "get thread fail!";
    uVar3 = 5;
  }
  log2Console(uVar3,"eup",pcVar4);
  return 0;
}

