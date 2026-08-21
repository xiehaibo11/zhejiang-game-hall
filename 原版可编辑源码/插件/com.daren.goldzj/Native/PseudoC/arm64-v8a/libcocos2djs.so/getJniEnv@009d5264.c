
/* CrashReport::getJniEnv() */

long CrashReport::getJniEnv(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)cocos2d::JniHelper::getJavaVM();
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 009d52d0 to 00ad5377 has its CatchHandler @ 009d523c */
    __android_log_print(6,"CrashReport","[cocos2d-x] JavaVM is null.");
    lVar3 = 0;
  }
  else {
    local_30 = 0;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,0x10006);
    lVar3 = local_30;
    if (local_30 == 0) {
                    /* try { // try from 009d52b8 to 00ad52cf has its CatchHandler @ 009d5364 */
      __android_log_print(6,"CrashReport","[cocos2d-x] failed to get env.");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

