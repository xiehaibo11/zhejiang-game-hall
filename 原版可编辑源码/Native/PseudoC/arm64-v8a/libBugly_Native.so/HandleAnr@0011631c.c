
void HandleAnr(int param_1)

{
  long lVar1;
  int iVar2;
  int *__arg;
  char *pcVar3;
  pthread_t pStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  log2Console(4,"eup","handle anr, type:%d",param_1);
  if (param_1 == 1) {
    DAT_00140380 = 1;
  }
  if (jvm == 0) {
    pcVar3 = "JVM have not been backed up, should init JNI regist first!";
LAB_001163b0:
    log2Console(6,"eup",pcVar3);
  }
  else {
    iVar2 = getAndroidApiLevel();
    if (iVar2 < 0x15) {
      pcVar3 = "do not dump trace below android 5.0";
      goto LAB_001163b0;
    }
    __arg = malloc(4);
    *__arg = param_1;
    iVar2 = pthread_create(&pStack_30,(pthread_attr_t *)0x0,FUN_0011642c,__arg);
    if (iVar2 == 0) goto LAB_00116408;
    pcVar3 = strerror(iVar2);
    log2Console(6,"eup","Can not create DumpTraceThread: %s\n",pcVar3);
  }
  SendSigquitToSignalCatcher();
LAB_00116408:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

