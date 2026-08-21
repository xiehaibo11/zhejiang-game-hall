
/* localStorageRemoveItem(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void localStorageRemoveItem(basic_string *param_1)

{
  long lVar1;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined2 local_6f;
  undefined1 local_6d;
  undefined4 uStack_6c;
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = operator_new(0x30);
                    /* try { // try from 009a4d88 to 00aa4e6b has its CatchHandler @ 009a4bcc */
  uStack_6c = 0;
  local_78 = 0x14;
  local_6f = 0x6d65;
  uStack_58 = 0x25;
  local_60 = 0x31;
  local_68 = (void *)0x0;
  builtin_strncpy(local_50,"org/cocos2dx/lib/Cocos2dxLocalStorage",0x26);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  uStack_77 = 0x4965766f6d6572;
  uStack_70 = 0x74;
  local_6d = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_80 = *(void **)(param_1 + 0x10);
    uStack_88 = *(ulong *)(param_1 + 8);
    local_90 = *(ulong *)param_1;
    goto LAB_009a4e5c;
  }
  __n = *(ulong *)(param_1 + 8);
                    /* catch() { ... } // from try @ 009a4c4c with catch @ 009a4dfc */
                    /* catch() { ... } // from try @ 009a4c40 with catch @ 009a4e00 */
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009a4ee0 to 00aa4eeb has its CatchHandler @ 009a50a4 */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* catch() { ... } // from try @ 009a4c20 with catch @ 009a4e04 */
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
                    /* catch() { ... } // from try @ 009a4c58 with catch @ 009a4e14 */
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_009a4e48;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_90 = uVar2 | 1;
    uStack_88 = __n;
    local_80 = __dest;
LAB_009a4e48:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_009a4e5c:
  cocos2d::JniHelper::
  callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&local_60,&local_78,&local_90);
                    /* try { // try from 009a4e6c to 00aa4ebf has its CatchHandler @ 009a4e6c
                       catch() { ... } // from try @ 009a4e6c with catch @ 009a4e6c
                       catch() { ... } // from try @ 009a502c with catch @ 009a4e6c */
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
                    /* try { // try from 009a4ec0 to 00aa4ed7 has its CatchHandler @ 009a50a8 */
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

