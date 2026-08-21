
/* CrashReport::log(CrashReport::CRLogLevel, char const*, char const*, ...) */

void CrashReport::log(uint param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5
                     ,undefined8 param_6,undefined8 param_7,undefined8 param_8,...)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  _JNIEnv *p_Var6;
  char *pcVar7;
  _JNIEnv *p_Var8;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  _JNIEnv *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_80 = auStack_c0;
  ppuStack_88 = &local_90;
  uStack_78 = 0xffffff80ffffffd8;
  local_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_7;
  uStack_98 = param_8;
  local_90 = (undefined1 *)register0x00000008;
  iVar2 = vsnprintf(&DAT_01d38308,0x400,param_3,&local_90);
  if (0x400 < iVar2) {
    __android_log_print(5,"CrashReport","The length[%d] of string is out of the buffer size[%d]",
                        iVar2,0x400);
  }
  plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
  if (plVar3 == (long *)0x0) {
    __android_log_print(6,"CrashReport","[cocos2d-x] JavaVM is null.");
    p_Var8 = (_JNIEnv *)0x0;
  }
  else {
    local_50 = (_JNIEnv *)0x0;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,0x10006);
    p_Var8 = local_50;
                    /* catch() { ... } // from try @ 009d664c with catch @ 009d6918 */
    if (local_50 == (_JNIEnv *)0x0) {
                    /* catch() { ... } // from try @ 009d6644 with catch @ 009d6920 */
                    /* catch() { ... } // from try @ 009d6638 with catch @ 009d6924 */
                    /* catch() { ... } // from try @ 009d6674 with catch @ 009d6934 */
      __android_log_print(6,"CrashReport","[cocos2d-x] failed to get env.");
    }
  }
  lVar4 = getJniString(p_Var8,param_2);
  lVar5 = getJniString(p_Var8,&DAT_01d38308);
                    /* try { // try from 009d6998 to 00ad69ef has its CatchHandler @ 009d6998
                       catch() { ... } // from try @ 009d6998 with catch @ 009d6998
                       catch() { ... } // from try @ 009d6a58 with catch @ 009d6998 */
  callJniStaticVoidMethod
            (p_Var8,"com/tencent/bugly/agent/GameAgent","setLog",
             "(ILjava/lang/String;Ljava/lang/String;)V",(ulong)param_1,lVar4,lVar5);
  if (lVar4 != 0) {
    p_Var6 = p_Var8;
    if (p_Var8 == (_JNIEnv *)0x0) {
      plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
      if (plVar3 == (long *)0x0) {
        pcVar7 = "[cocos2d-x] JavaVM is null.";
      }
      else {
        local_50 = (_JNIEnv *)0x0;
                    /* try { // try from 009d69f0 to 00ad69f7 has its CatchHandler @ 009d6b24 */
                    /* try { // try from 009d6a04 to 00ad6a57 has its CatchHandler @ 009d6b2c */
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,0x10006);
        p_Var6 = local_50;
        if (local_50 != (_JNIEnv *)0x0) goto LAB_009d69b4;
        pcVar7 = "[cocos2d-x] failed to get env.";
      }
      __android_log_print(6,"CrashReport",pcVar7);
    }
    else {
LAB_009d69b4:
      (**(code **)(*(long *)p_Var6 + 0xb8))(p_Var6,lVar4);
    }
  }
  if (lVar5 == 0) goto LAB_009d6a9c;
  if (p_Var8 == (_JNIEnv *)0x0) {
    plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
    if (plVar3 == (long *)0x0) {
      pcVar7 = "[cocos2d-x] JavaVM is null.";
    }
    else {
      local_50 = (_JNIEnv *)0x0;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,0x10006);
      p_Var8 = local_50;
      if (local_50 != (_JNIEnv *)0x0) goto LAB_009d69cc;
                    /* try { // try from 009d6a58 to 00ad6b47 has its CatchHandler @ 009d6998 */
      pcVar7 = "[cocos2d-x] failed to get env.";
    }
    __android_log_print(6,"CrashReport",pcVar7);
  }
  else {
LAB_009d69cc:
    (**(code **)(*(long *)p_Var8 + 0xb8))(p_Var8,lVar5);
  }
LAB_009d6a9c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

