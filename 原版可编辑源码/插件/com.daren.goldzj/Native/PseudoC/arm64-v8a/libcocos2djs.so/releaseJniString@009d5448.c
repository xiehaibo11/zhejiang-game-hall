
/* CrashReport::releaseJniString(_JNIEnv*, _jstring*) */

void CrashReport::releaseJniString(_JNIEnv *param_1,_jstring *param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  _JNIEnv *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (_jstring *)0x0) goto LAB_009d54dc;
  if (param_1 == (_JNIEnv *)0x0) {
    plVar2 = (long *)cocos2d::JniHelper::getJavaVM();
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 009d54d0 to 00ad54d7 has its CatchHandler @ 009d5770 */
      pcVar3 = "[cocos2d-x] JavaVM is null.";
    }
    else {
      local_30 = (_JNIEnv *)0x0;
                    /* try { // try from 009d5498 to 00ad54ab has its CatchHandler @ 009d576c */
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,0x10006);
                    /* try { // try from 009d54ac to 00ad54b7 has its CatchHandler @ 009d5748 */
      param_1 = local_30;
      if (local_30 != (_JNIEnv *)0x0) goto LAB_009d5470;
      pcVar3 = "[cocos2d-x] failed to get env.";
    }
    __android_log_print(6,"CrashReport",pcVar3);
  }
  else {
LAB_009d5470:
    (**(code **)(*(long *)param_1 + 0xb8))(param_1,param_2);
  }
LAB_009d54dc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

