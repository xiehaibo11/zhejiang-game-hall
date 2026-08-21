
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::experimental::ui::WebViewImpl::loadData(cocos2d::Data const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::experimental::ui::WebViewImpl::loadData
          (WebViewImpl *this,Data *param_1,basic_string *param_2,basic_string *param_3,
          basic_string *param_4)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [16];
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pvVar4 = (void *)Data::getBytes((Data *)param_1);
  uVar3 = Data::getSize((Data *)param_1);
  uVar5 = (ulong)uVar3;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  if (uVar5 < 0x17) {
    pvVar6 = (void *)((ulong)&local_100 | 1);
    local_100 = (ulong)(byte)(uVar3 << 1);
    if (uVar5 != 0) goto LAB_00de5974;
  }
  else {
                    /* catch() { ... } // from try @ 00de5990 with catch @ 00de5958 */
    uVar7 = uVar5 + 0x10 & 0x1fffffff0;
    pvVar6 = operator_new(uVar7);
    local_100 = uVar7 | 1;
    uStack_f8 = uVar5;
    local_f0 = pvVar6;
LAB_00de5974:
    memcpy(pvVar6,pvVar4,uVar5);
  }
  *(undefined1 *)((long)pvVar6 + uVar5) = 0;
                    /* try { // try from 00de5988 to 00ee598f has its CatchHandler @ 00de59bc */
                    /* try { // try from 00de5990 to 00ee59d7 has its CatchHandler @ 00de5958 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"setJavascriptInterfaceScheme");
  pvVar4 = local_f0;
  uVar5 = uStack_f8;
  uVar1 = *(undefined4 *)(this + 8);
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if ((local_100 & 1) == 0) {
    uStack_98 = uStack_f8;
    local_a0 = local_100;
    local_90 = local_f0;
                    /* catch() { ... } // from try @ 00de5988 with catch @ 00de59bc */
    goto LAB_00de5a24;
  }
  if (0xffffffffffffffef < uStack_f8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_f8 < 0x17) {
                    /* catch() { ... } // from try @ 00de5a10 with catch @ 00de59d8 */
    pvVar6 = (void *)((ulong)&local_a0 | 1);
    local_a0 = (ulong)(byte)((int)uStack_f8 << 1);
    if (uStack_f8 != 0) goto LAB_00de5a10;
  }
  else {
    uVar7 = uStack_f8 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    local_a0 = uVar7 | 1;
                    /* try { // try from 00de5a08 to 00ee5a0f has its CatchHandler @ 00de5a3c */
    uStack_98 = uVar5;
    local_90 = pvVar6;
LAB_00de5a10:
                    /* try { // try from 00de5a10 to 00ee5a57 has its CatchHandler @ 00de59d8 */
    memcpy(pvVar6,pvVar4,uVar5);
  }
  *(undefined1 *)((long)pvVar6 + uVar5) = 0;
LAB_00de5a24:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_b8,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_d0,param_3);
                    /* catch() { ... } // from try @ 00de5a08 with catch @ 00de5a3c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_e8,param_4);
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01788a38,local_80,uVar1,&local_a0,local_b8,local_d0,local_e8);
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

