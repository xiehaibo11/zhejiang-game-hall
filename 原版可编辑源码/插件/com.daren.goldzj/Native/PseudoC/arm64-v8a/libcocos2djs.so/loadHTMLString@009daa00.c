
/* cocos2d::WebViewImpl::loadHTMLString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::WebViewImpl::loadHTMLString(WebViewImpl *this,basic_string *param_1,basic_string *param_2)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_70;
  undefined6 uStack_6f;
  undefined2 local_69;
  undefined6 uStack_67;
  undefined1 local_61;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = (void *)0x0;
  local_70 = 0x1c;
  uStack_67 = 0x676e69727453;
  uStack_6f = 0x544864616f6c;
  local_69 = 0x4c4d;
  local_61 = 0;
  uVar1 = *(undefined4 *)(this + 8);
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
                    /* try { // try from 009daa5c to 00adaa6b has its CatchHandler @ 009dad98 */
  if (((byte)*param_1 & 1) == 0) {
    local_80 = *(void **)(param_1 + 0x10);
    uStack_88 = *(ulong *)(param_1 + 8);
    local_90 = *(ulong *)param_1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
                    /* try { // try from 009daa84 to 00adaa8f has its CatchHandler @ 009dad64 */
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_1 + 0x10);
    if (uVar4 < 0x17) {
                    /* try { // try from 009daa9c to 00adaaa3 has its CatchHandler @ 009dada0 */
      pvVar5 = (void *)((ulong)&local_90 | 1);
      local_90 = (ulong)(byte)((int)uVar4 << 1);
                    /* try { // try from 009daaa4 to 00adaab3 has its CatchHandler @ 009dad9c */
      if (uVar4 != 0) goto LAB_009daacc;
    }
    else {
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar6);
      local_90 = uVar6 | 1;
                    /* try { // try from 009daac4 to 00adab0f has its CatchHandler @ 009dada8 */
      uStack_88 = uVar4;
      local_80 = pvVar5;
LAB_009daacc:
      memcpy(pvVar5,pvVar3,uVar4);
    }
    *(undefined1 *)((long)pvVar5 + uVar4) = 0;
  }
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    local_a0 = *(void **)(param_2 + 0x10);
    uStack_a8 = *(ulong *)(param_2 + 8);
    local_b0 = *(ulong *)param_2;
    goto LAB_009dab68;
  }
  uVar4 = *(ulong *)(param_2 + 8);
  if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 009dac00 to 00adac0b has its CatchHandler @ 009dad7c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_2 + 0x10);
  if (uVar4 < 0x17) {
    pvVar5 = (void *)((ulong)&local_b0 | 1);
    local_b0 = (ulong)(byte)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_009dab54;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_b0 = uVar6 | 1;
    uStack_a8 = uVar4;
    local_a0 = pvVar5;
LAB_009dab54:
    memcpy(pvVar5,pvVar3,uVar4);
  }
  *(undefined1 *)((long)pvVar5 + uVar4) = 0;
LAB_009dab68:
                    /* try { // try from 009dab70 to 00adab87 has its CatchHandler @ 009dad94 */
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01d38750,&local_70,uVar1,&local_90,&local_b0);
                    /* try { // try from 009dab88 to 00adab93 has its CatchHandler @ 009dad90 */
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
                    /* try { // try from 009dabe8 to 00adabff has its CatchHandler @ 009dad80 */
  }
                    /* try { // try from 009dab98 to 00adab9f has its CatchHandler @ 009dad8c */
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
                    /* try { // try from 009dabb0 to 00adabc3 has its CatchHandler @ 009dad88 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 009dabc4 to 00adabcf has its CatchHandler @ 009dad84 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

