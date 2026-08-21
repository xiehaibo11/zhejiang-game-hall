
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInsertText
               (StringUtils *param_1,undefined8 param_2,_JNIEnv *param_3,bool *param_4)

{
  char *__s;
  long lVar1;
  IMEDispatcher *this;
  size_t sVar2;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cocos2d::StringUtils::getStringUTFCharsJNI(param_1,param_3,(_jstring *)0x0,param_4);
  __s = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    __s = local_40;
  }
  this = (IMEDispatcher *)cocos2d::IMEDispatcher::sharedDispatcher();
  sVar2 = strlen(__s);
  cocos2d::IMEDispatcher::dispatchInsertText(this,__s,sVar2);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

