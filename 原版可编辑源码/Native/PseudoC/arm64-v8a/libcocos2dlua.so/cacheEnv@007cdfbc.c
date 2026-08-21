
/* cocos2d::JniHelper::cacheEnv(_JavaVM*) */

void cocos2d::JniHelper::cacheEnv(_JavaVM *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (void *)0x0;
  iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_30,0x10004);
  if (iVar2 == -3) {
    __android_log_print(6,"JniHelper","JNI interface version 1.4 not supported");
LAB_007ce05c:
    pcVar4 = "Failed to get the environment using GetEnv()";
LAB_007ce06c:
    __android_log_print(6,"JniHelper",pcVar4);
    pvVar3 = (void *)0x0;
  }
  else {
    if (iVar2 == -2) {
      iVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_30,0);
      if (iVar2 < 0) {
        pcVar4 = "Failed to get the environment using AttachCurrentThread()";
        goto LAB_007ce06c;
      }
    }
    else if (iVar2 != 0) goto LAB_007ce05c;
    pthread_setspecific(DAT_01781ca8,local_30);
    pvVar3 = local_30;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar3);
  }
  return;
}

