
/* cocos2d::WebViewImpl::loadURL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::WebViewImpl::loadURL(WebViewImpl *this,basic_string *param_1)

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
  
                    /* try { // try from 009dac8c to 00adac9b has its CatchHandler @ 009dad60 */
  lVar2 = tpidr_el0;
                    /* try { // try from 009daca0 to 00adacef has its CatchHandler @ 009dad98 */
  local_48 = *(long *)(lVar2 + 0x28);
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  local_60[0] = 0xe;
  local_50 = (void *)0x0;
  local_60[1] = 0x6c;
  local_60[2] = 0x6f;
  local_60[3] = 0x61;
  local_60[4] = 100;
  local_60[5] = 0x55;
  local_60[6] = 0x72;
  local_60[7] = 0x6c;
  local_60[8] = 0;
  uVar1 = *(undefined4 *)(this + 8);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    local_70 = *(void **)(param_1 + 0x10);
    uStack_78 = *(ulong *)(param_1 + 8);
    local_80 = *(ulong *)param_1;
    goto LAB_009dad58;
  }
  __n = *(ulong *)(param_1 + 8);
                    /* try { // try from 009dacf8 to 00adad07 has its CatchHandler @ 009dad5c */
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009da82c with catch @ 009dadc0 */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_009dad44;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_80 = uVar3 | 1;
                    /* try { // try from 009dad3c to 00adad47 has its CatchHandler @ 009dad98 */
    uStack_78 = __n;
    local_70 = __dest;
LAB_009dad44:
                    /* try { // try from 009dad48 to 00adae0f has its CatchHandler @ 009da700 */
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_009dad58:
                    /* catch() { ... } // from try @ 009dacf8 with catch @ 009dad5c */
                    /* catch() { ... } // from try @ 009dac8c with catch @ 009dad60 */
                    /* catch() { ... } // from try @ 009daa84 with catch @ 009dad64 */
                    /* catch() { ... } // from try @ 009dac30 with catch @ 009dad68 */
                    /* catch() { ... } // from try @ 009dac1c with catch @ 009dad6c */
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01d38750,local_60,uVar1,&local_80);
                    /* catch() { ... } // from try @ 009dac6c with catch @ 009dad70 */
                    /* catch() { ... } // from try @ 009dac58 with catch @ 009dad74 */
  if ((local_80 & 1) != 0) {
                    /* catch() { ... } // from try @ 009dac40 with catch @ 009dad78 */
                    /* catch() { ... } // from try @ 009dac00 with catch @ 009dad7c */
    operator_delete(local_70);
  }
                    /* catch() { ... } // from try @ 009dabe8 with catch @ 009dad80 */
                    /* catch() { ... } // from try @ 009dabc4 with catch @ 009dad84 */
  if ((local_60[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009dabb0 with catch @ 009dad88 */
                    /* catch() { ... } // from try @ 009dab98 with catch @ 009dad8c */
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 009dab88 with catch @ 009dad90 */
                    /* catch() { ... } // from try @ 009dab70 with catch @ 009dad94 */
                    /* catch() { ... } // from try @ 009daa5c with catch @ 009dad98
                       catch() { ... } // from try @ 009dac7c with catch @ 009dad98
                       catch() { ... } // from try @ 009daca0 with catch @ 009dad98
                       catch() { ... } // from try @ 009dad3c with catch @ 009dad98 */
                    /* catch() { ... } // from try @ 009daaa4 with catch @ 009dad9c */
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009daa9c with catch @ 009dada0 */
                    /* catch() { ... } // from try @ 009da8f8 with catch @ 009dada4
                       catch() { ... } // from try @ 009da960 with catch @ 009dada4 */
                    /* catch() { ... } // from try @ 009daac4 with catch @ 009dada8 */
  return;
}

