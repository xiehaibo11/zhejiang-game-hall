
/* CrashReport::removeUserValue(char const*) */

void CrashReport::removeUserValue(char *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  _JNIEnv *p_Var6;
  _JNIEnv *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((hasSetGameType == '\0') &&
     (uVar2 = callJniStaticVoidMethod
                        ((_JNIEnv *)0x0,"com/tencent/bugly/agent/GameAgent","setGameType","(I)V",1),
     (uVar2 & 1) != 0)) {
    hasSetGameType = '\x01';
  }
  __android_log_print(4,"CrashReport","[cocos2d-x] remove user data: %s",param_1);
  plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
  if (plVar3 == (long *)0x0) {
    __android_log_print(6,"CrashReport","[cocos2d-x] JavaVM is null.");
    p_Var6 = (_JNIEnv *)0x0;
  }
  else {
    local_40 = (_JNIEnv *)0x0;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,0x10006);
    p_Var6 = local_40;
    if (local_40 == (_JNIEnv *)0x0) {
                    /* try { // try from 009d5f58 to 00ad6053 has its CatchHandler @ 009d5e40 */
      __android_log_print(6,"CrashReport","[cocos2d-x] failed to get env.");
    }
  }
  lVar4 = getJniString(p_Var6,param_1);
  callJniStaticVoidMethod
            (p_Var6,"com/tencent/bugly/agent/GameAgent","removeUserData","(Ljava/lang/String;)V",
             lVar4);
  if (lVar4 == 0) goto LAB_009d602c;
  if (p_Var6 == (_JNIEnv *)0x0) {
    plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
    if (plVar3 == (long *)0x0) {
                    /* catch() { ... } // from try @ 009d5e88 with catch @ 009d6018 */
                    /* catch() { ... } // from try @ 009d5e80 with catch @ 009d6020 */
      pcVar5 = "[cocos2d-x] JavaVM is null.";
    }
    else {
      local_40 = (_JNIEnv *)0x0;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,0x10006);
      p_Var6 = local_40;
      if (local_40 != (_JNIEnv *)0x0) goto LAB_009d5fbc;
      pcVar5 = "[cocos2d-x] failed to get env.";
                    /* catch() { ... } // from try @ 009d5e90 with catch @ 009d6010 */
    }
                    /* catch() { ... } // from try @ 009d5e98 with catch @ 009d6028 */
    __android_log_print(6,"CrashReport",pcVar5);
  }
  else {
LAB_009d5fbc:
    (**(code **)(*(long *)p_Var6 + 0xb8))(p_Var6,lVar4);
  }
LAB_009d602c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

