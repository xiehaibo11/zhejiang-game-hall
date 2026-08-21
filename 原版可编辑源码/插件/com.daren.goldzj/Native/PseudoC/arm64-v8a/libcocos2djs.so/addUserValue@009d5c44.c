
/* CrashReport::addUserValue(char const*, char const*) */

void CrashReport::addUserValue(char *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  _JNIEnv *p_Var6;
  char *pcVar7;
  _JNIEnv *p_Var8;
  _JNIEnv *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009d5c6c to 00ad5c73 has its CatchHandler @ 009d5e0c */
                    /* try { // try from 009d5c74 to 00ad5c7b has its CatchHandler @ 009d5e04 */
                    /* try { // try from 009d5c7c to 00ad5c83 has its CatchHandler @ 009d5dfc */
                    /* try { // try from 009d5c84 to 00ad5d43 has its CatchHandler @ 009d5e14 */
  if ((hasSetGameType == '\0') &&
     (uVar2 = callJniStaticVoidMethod
                        ((_JNIEnv *)0x0,"com/tencent/bugly/agent/GameAgent","setGameType","(I)V",1),
     (uVar2 & 1) != 0)) {
    hasSetGameType = '\x01';
  }
  __android_log_print(4,"CrashReport","[cocos2d-x] put user data: %s:%s",param_1,param_2);
  plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
  if (plVar3 == (long *)0x0) {
    __android_log_print(6,"CrashReport","[cocos2d-x] JavaVM is null.");
    p_Var8 = (_JNIEnv *)0x0;
  }
  else {
    local_50 = (_JNIEnv *)0x0;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,0x10006);
    p_Var8 = local_50;
    if (local_50 == (_JNIEnv *)0x0) {
      __android_log_print(6,"CrashReport","[cocos2d-x] failed to get env.");
    }
  }
  lVar4 = getJniString(p_Var8,param_1);
                    /* try { // try from 009d5d44 to 00ad5e3f has its CatchHandler @ 009d5c2c */
  lVar5 = getJniString(p_Var8,param_2);
  callJniStaticVoidMethod
            (p_Var8,"com/tencent/bugly/agent/GameAgent","putUserData",
             "(Ljava/lang/String;Ljava/lang/String;)V",lVar4,lVar5);
  if (lVar4 != 0) {
    p_Var6 = p_Var8;
    if (p_Var8 == (_JNIEnv *)0x0) {
      plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
      if (plVar3 == (long *)0x0) {
                    /* try { // try from 009d5e40 to 00ad5e7f has its CatchHandler @ 009d5e40
                       catch() { ... } // from try @ 009d5e40 with catch @ 009d5e40
                       catch() { ... } // from try @ 009d5f58 with catch @ 009d5e40 */
        pcVar7 = "[cocos2d-x] JavaVM is null.";
      }
      else {
        local_50 = (_JNIEnv *)0x0;
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,0x10006);
        p_Var6 = local_50;
        if (local_50 != (_JNIEnv *)0x0) goto LAB_009d5d88;
        pcVar7 = "[cocos2d-x] failed to get env.";
      }
      __android_log_print(6,"CrashReport",pcVar7);
    }
    else {
LAB_009d5d88:
      (**(code **)(*(long *)p_Var6 + 0xb8))(p_Var6,lVar4);
    }
  }
  if (lVar5 == 0) goto LAB_009d5e70;
  if (p_Var8 == (_JNIEnv *)0x0) {
    plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
                    /* catch() { ... } // from try @ 009d5c7c with catch @ 009d5dfc */
    if (plVar3 == (long *)0x0) {
      pcVar7 = "[cocos2d-x] JavaVM is null.";
    }
    else {
      local_50 = (_JNIEnv *)0x0;
                    /* catch() { ... } // from try @ 009d5c74 with catch @ 009d5e04 */
                    /* catch() { ... } // from try @ 009d5c6c with catch @ 009d5e0c */
                    /* catch() { ... } // from try @ 009d5c84 with catch @ 009d5e14 */
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,0x10006);
      p_Var8 = local_50;
      if (local_50 != (_JNIEnv *)0x0) goto LAB_009d5da0;
      pcVar7 = "[cocos2d-x] failed to get env.";
    }
    __android_log_print(6,"CrashReport",pcVar7);
  }
  else {
LAB_009d5da0:
    (**(code **)(*(long *)p_Var8 + 0xb8))(p_Var8,lVar5);
  }
LAB_009d5e70:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009d5e98 to 00ad5f57 has its CatchHandler @ 009d6028 */
    __stack_chk_fail();
  }
                    /* try { // try from 009d5e80 to 00ad5e87 has its CatchHandler @ 009d6020 */
                    /* try { // try from 009d5e88 to 00ad5e8f has its CatchHandler @ 009d6018 */
                    /* try { // try from 009d5e90 to 00ad5e97 has its CatchHandler @ 009d6010 */
  return;
}

