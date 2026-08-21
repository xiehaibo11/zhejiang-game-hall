
/* cocos2d::WebViewImpl::setJavascriptInterfaceScheme(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::WebViewImpl::setJavascriptInterfaceScheme(WebViewImpl *this,basic_string *param_1)

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
  ulong local_60 [2];
  char *local_50;
  long local_48;
  
                    /* try { // try from 009da350 to 00ada353 has its CatchHandler @ 009da4f0 */
                    /* try { // try from 009da354 to 00ada457 has its CatchHandler @ 009da1c8 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = operator_new(0x20);
  local_60[1] = 0x1c;
  local_60[0] = 0x21;
  builtin_strncpy(local_50,"setJavascriptInterfaceScheme",0x1d);
  uVar1 = *(undefined4 *)(this + 8);
  uStack_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_70 = *(void **)(param_1 + 0x10);
    uStack_78 = *(ulong *)(param_1 + 8);
    local_80 = *(ulong *)param_1;
    goto LAB_009da43c;
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
    if (__n != 0) goto LAB_009da428;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009da2cc with catch @ 009da408
                        */
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_80 = uVar3 | 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009da210 with catch @ 009da420
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009da208 with catch @ 009da424
                        */
    uStack_78 = __n;
    local_70 = __dest;
LAB_009da428:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009da220 with catch @ 009da434
                        */
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_009da43c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009da280 with catch @ 009da444
                       catch(type#1 @ 00000000) { ... } // from try @ 009da2e0 with catch @ 009da444
                        */
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01d38750,local_60,uVar1,&local_80);
                    /* try { // try from 009da458 to 00ada45b has its CatchHandler @ 009da4ec */
  if ((local_80 & 1) != 0) {
                    /* try { // try from 009da45c to 00ada503 has its CatchHandler @ 009da1c8 */
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

