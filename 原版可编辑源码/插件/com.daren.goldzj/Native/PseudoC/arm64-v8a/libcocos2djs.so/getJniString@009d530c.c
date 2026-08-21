
/* CrashReport::getJniString(_JNIEnv*, char const*) */

undefined8 CrashReport::getJniString(_JNIEnv *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  _JNIEnv *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != (char *)0x0) {
    if (param_1 == (_JNIEnv *)0x0) {
      plVar4 = (long *)cocos2d::JniHelper::getJavaVM();
      if (plVar4 == (long *)0x0) {
        pcVar5 = "[cocos2d-x] JavaVM is null.";
      }
      else {
        local_40 = (_JNIEnv *)0x0;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_40,0x10006);
        param_1 = local_40;
        if (local_40 != (_JNIEnv *)0x0) goto LAB_009d533c;
        pcVar5 = "[cocos2d-x] failed to get env.";
      }
      __android_log_print(6,"CrashReport",pcVar5);
    }
    else {
LAB_009d533c:
      uVar2 = (**(code **)(*(long *)param_1 + 0x538))(param_1,param_2);
      lVar3 = (**(code **)(*(long *)param_1 + 0x78))(param_1);
                    /* catch() { ... } // from try @ 009d52b8 with catch @ 009d5364 */
      if (lVar3 == 0) goto LAB_009d541c;
                    /* try { // try from 009d5378 to 00ad5497 has its CatchHandler @ 009d5378
                       catch() { ... } // from try @ 009d5378 with catch @ 009d5378
                       catch() { ... } // from try @ 009d5678 with catch @ 009d5378 */
      __android_log_print(6,"CrashReport","[cocos2d-x] check jni error");
      (**(code **)(*(long *)param_1 + 0x80))(param_1);
      (**(code **)(*(long *)param_1 + 0x88))(param_1);
      __android_log_print(6,"CrashReport","[cocos2d-x] failed to new Java UTF string: %s",param_2);
    }
  }
  uVar2 = 0;
LAB_009d541c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

