
/* setGameInfoDebugViewTextJNI(int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void setGameInfoDebugViewTextJNI(int param_1,basic_string *param_2)

{
  long lVar1;
  void *__src;
  ulong __n;
  void *__dest;
  ulong uVar2;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_01d35b70 != '\x01') goto LAB_0086f2e0;
  local_50 = operator_new(0x20);
  builtin_strncpy(local_50,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  uStack_58 = 0x1f;
  local_60 = 0x21;
  local_70 = operator_new(0x20);
  uStack_78 = 0x18;
  local_80 = 0x21;
  builtin_strncpy(local_70,"setGameInfoDebugViewText",0x19);
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    local_90 = *(void **)(param_2 + 0x10);
    uStack_98 = *(ulong *)(param_2 + 8);
    local_a0 = *(ulong *)param_2;
  }
  else {
    __n = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_2 + 0x10);
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)__n << 1);
      if (__n != 0) goto LAB_0086f298;
    }
    else {
      uVar2 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar2);
      local_a0 = uVar2 | 1;
      uStack_98 = __n;
      local_90 = __dest;
LAB_0086f298:
      memcpy(__dest,__src,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  cocos2d::JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&local_60,&local_80,param_1,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0086f2e0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

