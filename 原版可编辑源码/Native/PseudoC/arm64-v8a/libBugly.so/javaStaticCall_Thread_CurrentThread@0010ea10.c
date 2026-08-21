
long javaStaticCall_Thread_CurrentThread(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    log2Console(6,"CrashReport-Native","env == NULL , return!");
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x390))(param_1,jc_Thread,jm_currentThread);
    lVar2 = checkJavaException(param_1);
    if ((lVar2 != 0) || (lVar1 == 0)) {
      log2Console(5,"CrashReport-Native","get thread fail!");
      return 0;
    }
  }
  return lVar1;
}

