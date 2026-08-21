
/* cocos2d::WebViewImpl::evaluateJS(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::WebViewImpl::evaluateJS(WebViewImpl *this,basic_string *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar3;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 009dba74 to 00adbac3 has its CatchHandler @ 009dba00 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  local_60[0] = 0x14;
  local_50 = (void *)0x0;
  local_60[9] = 0x4a;
  local_60[10] = 0x53;
  local_60[1] = 0x65;
  local_60[2] = 0x76;
  local_60[3] = 0x61;
  local_60[4] = 0x6c;
  local_60[5] = 0x75;
  local_60[6] = 0x61;
  local_60[7] = 0x74;
  local_60[8] = 0x65;
  local_60[0xb] = 0;
  uVar1 = *(undefined4 *)(this + 8);
  uStack_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_70 = *(void **)(param_1 + 0x10);
                    /* try { // try from 009dbac4 to 00adbccb has its CatchHandler @ 009dbd04 */
    uStack_78 = *(ulong *)(param_1 + 8);
    local_80 = *(ulong *)param_1;
    goto LAB_009dbb38;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_009dbb24;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_80 = uVar3 | 1;
    uStack_78 = __n;
    local_70 = __dest;
LAB_009dbb24:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_009dbb38:
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01d38750,local_60,uVar1,&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

