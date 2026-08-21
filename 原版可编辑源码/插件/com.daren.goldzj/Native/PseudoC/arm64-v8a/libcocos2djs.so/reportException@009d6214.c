
/* CrashReport::reportException(int, char const*, char const*, char const*, bool) */

void CrashReport::reportException
               (int param_1,char *param_2,char *param_3,char *param_4,bool param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  _JNIEnv *p_Var6;
  char *pcVar7;
  _JNIEnv *p_Var8;
  _JNIEnv *local_60;
  long local_58;
  
                    /* try { // try from 009d621c to 00ad62bb has its CatchHandler @ 009d621c
                       catch() { ... } // from try @ 009d621c with catch @ 009d621c
                       catch() { ... } // from try @ 009d62e8 with catch @ 009d621c
                       catch() { ... } // from try @ 009d6378 with catch @ 009d621c
                       catch() { ... } // from try @ 009d642c with catch @ 009d621c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __android_log_print(4,"CrashReport","[cocos2d-x] post a exception.");
  plVar2 = (long *)cocos2d::JniHelper::getJavaVM();
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 009d62bc to 00ad62c7 has its CatchHandler @ 009d6538 */
    __android_log_print(6,"CrashReport","[cocos2d-x] JavaVM is null.");
    p_Var8 = (_JNIEnv *)0x0;
  }
  else {
    local_60 = (_JNIEnv *)0x0;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_60,0x10006);
    p_Var8 = local_60;
    if (local_60 == (_JNIEnv *)0x0) {
      __android_log_print(6,"CrashReport","[cocos2d-x] failed to get env.");
    }
  }
                    /* try { // try from 009d62d0 to 00ad62db has its CatchHandler @ 009d64ec */
  lVar3 = getJniString(p_Var8,param_2);
                    /* try { // try from 009d62dc to 00ad62e7 has its CatchHandler @ 009d64d0 */
  lVar4 = getJniString(p_Var8,param_3);
                    /* try { // try from 009d62e8 to 00ad634b has its CatchHandler @ 009d621c */
  lVar5 = getJniString(p_Var8,param_4);
  callJniStaticVoidMethod
            (p_Var8,"com/tencent/bugly/agent/GameAgent","postException",
             "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V",(ulong)(uint)param_1,
             lVar3,lVar4,lVar5,(uint)param_5);
  if (lVar3 != 0) {
    p_Var6 = p_Var8;
    if (p_Var8 == (_JNIEnv *)0x0) {
      plVar2 = (long *)cocos2d::JniHelper::getJavaVM();
                    /* try { // try from 009d6378 to 00ad63d7 has its CatchHandler @ 009d621c */
      if (plVar2 == (long *)0x0) {
        pcVar7 = "[cocos2d-x] JavaVM is null.";
      }
      else {
        local_60 = (_JNIEnv *)0x0;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_60,0x10006);
        p_Var6 = local_60;
        if (local_60 != (_JNIEnv *)0x0) goto LAB_009d6340;
        pcVar7 = "[cocos2d-x] failed to get env.";
      }
      __android_log_print(6,"CrashReport",pcVar7);
    }
    else {
LAB_009d6340:
                    /* try { // try from 009d634c to 00ad6357 has its CatchHandler @ 009d64f0 */
      (**(code **)(*(long *)p_Var6 + 0xb8))(p_Var6,lVar3);
    }
  }
  if (lVar4 != 0) {
    p_Var6 = p_Var8;
    if (p_Var8 == (_JNIEnv *)0x0) {
      plVar2 = (long *)cocos2d::JniHelper::getJavaVM();
      if (plVar2 == (long *)0x0) {
                    /* try { // try from 009d641c to 00ad642b has its CatchHandler @ 009d64f0 */
        pcVar7 = "[cocos2d-x] JavaVM is null.";
      }
      else {
        local_60 = (_JNIEnv *)0x0;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_60,0x10006);
                    /* try { // try from 009d63d8 to 00ad63e7 has its CatchHandler @ 009d6538 */
        p_Var6 = local_60;
        if (local_60 != (_JNIEnv *)0x0) goto LAB_009d635c;
        pcVar7 = "[cocos2d-x] failed to get env.";
      }
      __android_log_print(6,"CrashReport",pcVar7);
    }
    else {
LAB_009d635c:
                    /* try { // try from 009d6360 to 00ad636b has its CatchHandler @ 009d64e8 */
      (**(code **)(*(long *)p_Var6 + 0xb8))(p_Var6,lVar4);
    }
  }
                    /* try { // try from 009d636c to 00ad6377 has its CatchHandler @ 009d64b8 */
  if (lVar5 == 0) goto LAB_009d64a4;
  if (p_Var8 == (_JNIEnv *)0x0) {
    plVar2 = (long *)cocos2d::JniHelper::getJavaVM();
    if (plVar2 == (long *)0x0) {
      pcVar7 = "[cocos2d-x] JavaVM is null.";
    }
    else {
      local_60 = (_JNIEnv *)0x0;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_60,0x10006);
      p_Var8 = local_60;
      if (local_60 != (_JNIEnv *)0x0) goto LAB_009d6434;
      pcVar7 = "[cocos2d-x] failed to get env.";
    }
    __android_log_print(6,"CrashReport",pcVar7);
  }
  else {
LAB_009d6434:
    (**(code **)(*(long *)p_Var8 + 0xb8))(p_Var8,lVar5);
  }
LAB_009d64a4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009d62dc with catch @ 009d64d0 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009d636c with catch @ 009d64b8 */
  return;
}

