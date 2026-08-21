
/* cocos2d::Application::openURL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

bool __thiscall cocos2d::Application::openURL(Application *this,basic_string *param_1)

{
  long lVar1;
  bool bVar2;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar3;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[1] = 0;
  local_50 = (void *)0x0;
  local_60[0] = 0x4c52556e65706f0e;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    local_70 = *(void **)(param_1 + 0x10);
    uStack_78 = *(ulong *)(param_1 + 8);
    local_80 = *(ulong *)param_1;
    goto LAB_007c8388;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_007c8374;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_80 = uVar3 | 1;
    uStack_78 = __n;
    local_70 = __dest;
LAB_007c8374:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_007c8388:
  bVar2 = JniHelper::
          callStaticBooleanMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (&DAT_01781a50,local_60,&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}

