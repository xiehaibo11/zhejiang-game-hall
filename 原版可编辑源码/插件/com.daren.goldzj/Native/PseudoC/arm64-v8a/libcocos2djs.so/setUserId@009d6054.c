
/* CrashReport::setUserId(char const*) */

void CrashReport::setUserId(char *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  _JNIEnv *p_Var6;
  _JNIEnv *local_40;
  long local_38;
  
                    /* try { // try from 009d6054 to 00ad6093 has its CatchHandler @ 009d6054
                       catch() { ... } // from try @ 009d6054 with catch @ 009d6054
                       catch() { ... } // from try @ 009d6130 with catch @ 009d6054 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009d6094 to 00ad609b has its CatchHandler @ 009d61f0 */
                    /* try { // try from 009d609c to 00ad60a3 has its CatchHandler @ 009d61e8 */
                    /* try { // try from 009d60a4 to 00ad612f has its CatchHandler @ 009d61f8 */
  if ((hasSetGameType == '\0') &&
     (uVar2 = callJniStaticVoidMethod
                        ((_JNIEnv *)0x0,"com/tencent/bugly/agent/GameAgent","setGameType","(I)V",1),
     (uVar2 & 1) != 0)) {
    hasSetGameType = '\x01';
  }
  __android_log_print(4,"CrashReport","[cocos2d-x] set user ID: %s",param_1);
  plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 009d6130 to 00ad621b has its CatchHandler @ 009d6054 */
    __android_log_print(6,"CrashReport","[cocos2d-x] JavaVM is null.");
    p_Var6 = (_JNIEnv *)0x0;
  }
  else {
    local_40 = (_JNIEnv *)0x0;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,0x10006);
    p_Var6 = local_40;
    if (local_40 == (_JNIEnv *)0x0) {
      __android_log_print(6,"CrashReport","[cocos2d-x] failed to get env.");
    }
  }
  lVar4 = getJniString(p_Var6,param_1);
  callJniStaticVoidMethod
            (p_Var6,"com/tencent/bugly/agent/GameAgent","setUserId","(Ljava/lang/String;)V",lVar4);
  if (lVar4 == 0) goto LAB_009d61e4;
  if (p_Var6 == (_JNIEnv *)0x0) {
    plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
    if (plVar3 == (long *)0x0) {
      pcVar5 = "[cocos2d-x] JavaVM is null.";
    }
    else {
      local_40 = (_JNIEnv *)0x0;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,0x10006);
      p_Var6 = local_40;
      if (local_40 != (_JNIEnv *)0x0) goto LAB_009d6174;
      pcVar5 = "[cocos2d-x] failed to get env.";
    }
    __android_log_print(6,"CrashReport",pcVar5);
  }
  else {
LAB_009d6174:
    (**(code **)(*(long *)p_Var6 + 0xb8))(p_Var6,lVar4);
  }
LAB_009d61e4:
                    /* catch() { ... } // from try @ 009d609c with catch @ 009d61e8 */
                    /* catch() { ... } // from try @ 009d6094 with catch @ 009d61f0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009d60a4 with catch @ 009d61f8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

