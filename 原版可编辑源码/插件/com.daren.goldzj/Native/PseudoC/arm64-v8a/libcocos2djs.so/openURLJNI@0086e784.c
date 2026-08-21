
/* openURLJNI(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

bool openURLJNI(basic_string *param_1)

{
  long lVar1;
  bool bVar2;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar3;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = operator_new(0x20);
  uStack_58 = 0x1f;
  local_60 = 0x21;
  uStack_6f = 0;
  local_78 = 0xe;
  builtin_strncpy(local_50,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  local_68 = (void *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  uStack_77 = 0x4c52556e65706f;
  uStack_70 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_80 = *(void **)(param_1 + 0x10);
    uStack_88 = *(ulong *)(param_1 + 8);
    local_90 = *(ulong *)param_1;
    goto LAB_0086e88c;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_0086e878;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_90 = uVar3 | 1;
    uStack_88 = __n;
    local_80 = __dest;
LAB_0086e878:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_0086e88c:
  bVar2 = cocos2d::JniHelper::
          callStaticBooleanMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (&local_60,&local_78,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

