
undefined8 Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeGetContentText(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  IMEDispatcher *this;
  ulong *puVar4;
  undefined8 uVar5;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar6;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  _JNIEnv *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (_JNIEnv *)0x0;
  plVar3 = (long *)cocos2d::JniHelper::getJavaVM();
  iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_50,0x10004);
  uVar5 = 0;
  if ((iVar2 != 0) || (local_50 == (_JNIEnv *)0x0)) goto LAB_007cddf8;
  this = (IMEDispatcher *)cocos2d::IMEDispatcher::sharedDispatcher();
  puVar4 = (ulong *)cocos2d::IMEDispatcher::getContentText(this);
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  if ((*puVar4 & 1) == 0) {
    local_60 = (void *)puVar4[2];
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
  }
  else {
    __n = puVar4[1];
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = (void *)puVar4[2];
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)__n << 1);
      if (__n != 0) goto LAB_007cddc0;
    }
    else {
      uVar6 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar6);
      local_70 = uVar6 | 1;
      uStack_68 = __n;
      local_60 = __dest;
LAB_007cddc0:
      memcpy(__dest,__src,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  uVar5 = cocos2d::StringUtils::newStringUTFJNI(local_50,(basic_string *)&local_70,(bool *)0x0);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_007cddf8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

