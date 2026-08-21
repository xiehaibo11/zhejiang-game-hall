
/* CrashReport::initCrashReport(char const*, bool, CrashReport::CRLogLevel) */

void CrashReport::initCrashReport(char *param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  _JNIEnv *p_Var5;
  ulong uVar6;
  char *pcVar7;
  _JNIEnv *local_58;
  _JNIEnv *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (initialized != '\0') goto LAB_009d5b20;
                    /* try { // try from 009d586c to 00ad58c3 has its CatchHandler @ 009d58c4 */
  __android_log_print(4,"CrashReport","[cocos2d-x] start init.");
  initialized = '\x01';
  plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
  if (plVar3 == (long *)0x0) {
    pcVar7 = "[cocos2d-x] JavaVM is null.";
  }
  else {
    local_58 = (_JNIEnv *)0x0;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_58,0x10006);
    if (local_58 != (_JNIEnv *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_58,0);
                    /* catch() { ... } // from try @ 009d586c with catch @ 009d58c4
                       try { // try from 009d58c4 to 00ad58df has its CatchHandler @ 009d57d4 */
      if (crashReporterType != 0) {
                    /* try { // try from 009d58e0 to 00ad591f has its CatchHandler @ 009d58e0
                       catch() { ... } // from try @ 009d58e0 with catch @ 009d58e0
                       catch() { ... } // from try @ 009d5984 with catch @ 009d58e0
                       catch() { ... } // from try @ 009d5a38 with catch @ 009d58e0 */
        __android_log_print(4,"CrashReport","[cocos2d-x] set channel: %d");
        pcVar7 = "com.tencent.bugly.msdk";
        if (crashReporterType != 2) {
          pcVar7 = "";
        }
        pcVar1 = "com.tencent.bugly.imsdk";
        if (crashReporterType != 3) {
          pcVar1 = pcVar7;
        }
                    /* try { // try from 009d5920 to 00ad5927 has its CatchHandler @ 009d5a40 */
                    /* try { // try from 009d5928 to 00ad5983 has its CatchHandler @ 009d5a48 */
        __android_log_print(4,"CrashReport","set packagename: %s",pcVar1);
        lVar4 = getJniString(local_58,pcVar1);
        callJniStaticVoidMethod
                  (local_58,"com/tencent/bugly/agent/GameAgent","setSdkPackageName",
                   "(Ljava/lang/String;)V",lVar4);
        if (lVar4 != 0) {
          p_Var5 = local_58;
          if (local_58 == (_JNIEnv *)0x0) {
            plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
            if (plVar3 == (long *)0x0) {
              pcVar7 = "[cocos2d-x] JavaVM is null.";
            }
            else {
              local_50 = (_JNIEnv *)0x0;
              (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,0x10006);
                    /* try { // try from 009d59dc to 00ad5a37 has its CatchHandler @ 009d5a48 */
              p_Var5 = local_50;
              if (local_50 != (_JNIEnv *)0x0) goto LAB_009d5974;
              pcVar7 = "[cocos2d-x] failed to get env.";
            }
            __android_log_print(6,"CrashReport",pcVar7);
          }
          else {
LAB_009d5974:
            (**(code **)(*(long *)p_Var5 + 0xb8))(p_Var5,lVar4);
                    /* try { // try from 009d5984 to 00ad59db has its CatchHandler @ 009d58e0 */
          }
        }
      }
                    /* try { // try from 009d5a38 to 00ad5a63 has its CatchHandler @ 009d58e0 */
                    /* catch() { ... } // from try @ 009d5920 with catch @ 009d5a40 */
                    /* catch() { ... } // from try @ 009d5928 with catch @ 009d5a48
                       catch() { ... } // from try @ 009d59dc with catch @ 009d5a48 */
      if ((hasSetGameType == '\0') &&
         (uVar6 = callJniStaticVoidMethod
                            ((_JNIEnv *)0x0,"com/tencent/bugly/agent/GameAgent","setGameType","(I)V"
                             ,1), (uVar6 & 1) != 0)) {
        hasSetGameType = '\x01';
      }
                    /* try { // try from 009d5a64 to 00ad5aa3 has its CatchHandler @ 009d5a64
                       catch() { ... } // from try @ 009d5a64 with catch @ 009d5a64
                       catch() { ... } // from try @ 009d5b40 with catch @ 009d5a64 */
      __android_log_print(4,"CrashReport","[cocos2d-x] init Bugly by game agent.");
      lVar4 = getJniString(local_58,param_1);
      callJniStaticVoidMethod
                (local_58,"com/tencent/bugly/agent/GameAgent","initCrashReport",
                 "(Ljava/lang/String;Z)V",lVar4,(ulong)(param_2 & 1));
      if (lVar4 != 0) {
                    /* try { // try from 009d5aa4 to 00ad5aab has its CatchHandler @ 009d5c00 */
        p_Var5 = local_58;
        if (local_58 == (_JNIEnv *)0x0) {
          plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
          if (plVar3 == (long *)0x0) {
            pcVar7 = "[cocos2d-x] JavaVM is null.";
          }
          else {
            local_50 = (_JNIEnv *)0x0;
            (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,0x10006);
            p_Var5 = local_50;
            if (local_50 != (_JNIEnv *)0x0) goto LAB_009d5aac;
            pcVar7 = "[cocos2d-x] failed to get env.";
          }
          __android_log_print(6,"CrashReport",pcVar7);
        }
        else {
LAB_009d5aac:
                    /* try { // try from 009d5aac to 00ad5ab3 has its CatchHandler @ 009d5bf8 */
                    /* try { // try from 009d5ab4 to 00ad5b3f has its CatchHandler @ 009d5c08 */
          (**(code **)(*(long *)p_Var5 + 0xb8))(p_Var5,lVar4);
        }
      }
      initialized = '\x01';
      goto LAB_009d5b20;
    }
    pcVar7 = "[cocos2d-x] JNIEnv is null.";
  }
  __android_log_print(6,"CrashReport",pcVar7);
LAB_009d5b20:
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 009d5b40 to 00ad5c2b has its CatchHandler @ 009d5a64 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

