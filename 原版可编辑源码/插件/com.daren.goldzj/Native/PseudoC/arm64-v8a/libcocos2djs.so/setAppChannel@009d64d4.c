
/* CrashReport::setAppChannel(char const*) */

void CrashReport::setAppChannel(char *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  _JNIEnv *p_Var6;
  _JNIEnv *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009d6360 with catch @ 009d64e8 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 009d62d0 with catch @ 009d64ec */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009d634c with catch @ 009d64f0
                       catch() { ... } // from try @ 009d641c with catch @ 009d64f0 */
  if ((hasSetGameType == '\0') &&
     (uVar2 = callJniStaticVoidMethod
                        ((_JNIEnv *)0x0,"com/tencent/bugly/agent/GameAgent","setGameType","(I)V",1),
     (uVar2 & 1) != 0)) {
    hasSetGameType = '\x01';
  }
                    /* catch() { ... } // from try @ 009d62bc with catch @ 009d6538
                       catch() { ... } // from try @ 009d63d8 with catch @ 009d6538 */
  __android_log_print(4,"CrashReport","[cocos2d-x] set App channel: %s",param_1);
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
                    /* try { // try from 009d6580 to 00ad6637 has its CatchHandler @ 009d6580
                       catch() { ... } // from try @ 009d6580 with catch @ 009d6580
                       catch() { ... } // from try @ 009d66a8 with catch @ 009d6580 */
      __android_log_print(6,"CrashReport","[cocos2d-x] failed to get env.");
    }
  }
  lVar4 = getJniString(p_Var6,param_1);
  callJniStaticVoidMethod
            (p_Var6,"com/tencent/bugly/agent/GameAgent","setAppChannel","(Ljava/lang/String;)V",
             lVar4);
  if (lVar4 == 0) goto LAB_009d6664;
  if (p_Var6 == (_JNIEnv *)0x0) {
    plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
    if (plVar3 == (long *)0x0) {
                    /* try { // try from 009d664c to 00ad6653 has its CatchHandler @ 009d6918 */
      pcVar5 = "[cocos2d-x] JavaVM is null.";
    }
    else {
      local_40 = (_JNIEnv *)0x0;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,0x10006);
      p_Var6 = local_40;
      if (local_40 != (_JNIEnv *)0x0) goto LAB_009d65f4;
                    /* try { // try from 009d6638 to 00ad663f has its CatchHandler @ 009d6924 */
                    /* try { // try from 009d6644 to 00ad664b has its CatchHandler @ 009d6920 */
      pcVar5 = "[cocos2d-x] failed to get env.";
    }
    __android_log_print(6,"CrashReport",pcVar5);
  }
  else {
LAB_009d65f4:
    (**(code **)(*(long *)p_Var6 + 0xb8))(p_Var6,lVar4);
  }
LAB_009d6664:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009d6674 to 00ad66a7 has its CatchHandler @ 009d6934 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

