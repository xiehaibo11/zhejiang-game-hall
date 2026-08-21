
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::WebViewImpl::loadData(cocos2d::Data const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::WebViewImpl::loadData
          (WebViewImpl *this,Data *param_1,basic_string *param_2,basic_string *param_3,
          basic_string *param_4)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  char *local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_70;
  
                    /* try { // try from 009da504 to 00ada58b has its CatchHandler @ 009da504
                       catch() { ... } // from try @ 009da504 with catch @ 009da504
                       catch() { ... } // from try @ 009da640 with catch @ 009da504 */
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pvVar4 = (void *)Data::getBytes(param_1);
  uVar3 = Data::getSize(param_1);
  uVar6 = (ulong)uVar3;
  uStack_80 = 0;
  local_78 = (void *)0x0;
  local_88 = 0;
  if (uVar6 < 0x17) {
    pvVar8 = (void *)((ulong)&local_88 | 1);
    local_88 = (ulong)(byte)(uVar3 << 1);
    if (uVar6 != 0) goto LAB_009da59c;
  }
  else {
    uVar5 = uVar6 + 0x10 & 0x1fffffff0;
    pvVar8 = operator_new(uVar5);
                    /* try { // try from 009da58c to 00ada59b has its CatchHandler @ 009da6e8 */
    local_88 = uVar5 | 1;
    uStack_80 = uVar6;
    local_78 = pvVar8;
LAB_009da59c:
    memcpy(pvVar8,pvVar4,uVar6);
  }
  *(undefined1 *)((long)pvVar8 + uVar6) = 0;
  local_a0 = 0;
  uStack_98 = 0;
                    /* try { // try from 009da5b4 to 00ada63f has its CatchHandler @ 009da6ec */
  local_90 = (char *)0x0;
  local_90 = operator_new(0x20);
  pvVar4 = local_78;
  uVar5 = uStack_80;
  uVar6 = local_88;
  uStack_98 = 0x1c;
  local_a0 = 0x21;
  builtin_strncpy(local_90,"setJavascriptInterfaceScheme",0x1d);
  uVar1 = *(undefined4 *)(this + 8);
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  if ((local_88 & 1) == 0) {
    local_b0 = local_78;
    uStack_b8 = uStack_80;
    local_c0 = local_88;
  }
  else {
    if (0xffffffffffffffef < uStack_80) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_80 < 0x17) {
      pvVar8 = (void *)((ulong)&local_c0 | 1);
      local_c0 = (ulong)(byte)((int)uStack_80 << 1);
                    /* try { // try from 009da640 to 00ada6ff has its CatchHandler @ 009da504 */
      if (uStack_80 != 0) goto LAB_009da668;
    }
    else {
      uVar7 = uStack_80 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar7);
      local_c0 = uVar7 | 1;
      uStack_b8 = uVar5;
      local_b0 = pvVar8;
LAB_009da668:
      memcpy(pvVar8,pvVar4,uVar5);
    }
    *(undefined1 *)((long)pvVar8 + uVar5) = 0;
  }
  uStack_d8 = 0;
  local_d0 = (void *)0x0;
  local_e0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    local_d0 = *(void **)(param_2 + 0x10);
    uStack_d8 = *(ulong *)(param_2 + 8);
    local_e0 = *(ulong *)param_2;
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 009da8f8 to 00ada917 has its CatchHandler @ 009dada4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(param_2 + 0x10);
    if (uVar5 < 0x17) {
      pvVar8 = (void *)((ulong)&local_e0 | 1);
      local_e0 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_009da6f0;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar7);
      local_e0 = uVar7 | 1;
                    /* catch() { ... } // from try @ 009da58c with catch @ 009da6e8 */
                    /* catch() { ... } // from try @ 009da5b4 with catch @ 009da6ec */
      uStack_d8 = uVar5;
      local_d0 = pvVar8;
LAB_009da6f0:
      memcpy(pvVar8,pvVar4,uVar5);
    }
                    /* try { // try from 009da700 to 00ada75b has its CatchHandler @ 009da700
                       catch() { ... } // from try @ 009da700 with catch @ 009da700
                       catch() { ... } // from try @ 009da78c with catch @ 009da700
                       catch() { ... } // from try @ 009dad48 with catch @ 009da700 */
    *(undefined1 *)((long)pvVar8 + uVar5) = 0;
  }
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  local_100 = 0;
  if (((byte)*param_3 & 1) == 0) {
    local_f0 = *(void **)(param_3 + 0x10);
    uStack_f8 = *(ulong *)(param_3 + 8);
    local_100 = *(ulong *)param_3;
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(param_3 + 0x10);
    if (uVar5 < 0x17) {
      pvVar8 = (void *)((ulong)&local_100 | 1);
      local_100 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_009da778;
    }
    else {
                    /* try { // try from 009da75c to 00ada78b has its CatchHandler @ 009daddc */
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar7);
      local_100 = uVar7 | 1;
      uStack_f8 = uVar5;
      local_f0 = pvVar8;
LAB_009da778:
      memcpy(pvVar8,pvVar4,uVar5);
    }
    *(undefined1 *)((long)pvVar8 + uVar5) = 0;
  }
                    /* try { // try from 009da78c to 00ada7df has its CatchHandler @ 009da700 */
  uStack_118 = 0;
  local_110 = (void *)0x0;
  local_120 = 0;
  if (((byte)*param_4 & 1) == 0) {
    local_110 = *(void **)(param_4 + 0x10);
    uStack_118 = *(ulong *)(param_4 + 8);
    local_120 = *(ulong *)param_4;
    goto LAB_009da814;
  }
  uVar5 = *(ulong *)(param_4 + 8);
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = *(void **)(param_4 + 0x10);
  if (uVar5 < 0x17) {
    pvVar8 = (void *)((ulong)&local_120 | 1);
    local_120 = (ulong)(byte)((int)uVar5 << 1);
    if (uVar5 != 0) goto LAB_009da800;
  }
  else {
                    /* try { // try from 009da7e0 to 00ada803 has its CatchHandler @ 009daddc */
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = operator_new(uVar7);
    local_120 = uVar7 | 1;
    uStack_118 = uVar5;
    local_110 = pvVar8;
LAB_009da800:
    memcpy(pvVar8,pvVar4,uVar5);
  }
  *(undefined1 *)((long)pvVar8 + uVar5) = 0;
LAB_009da814:
                    /* try { // try from 009da81c to 00ada82b has its CatchHandler @ 009dadd8 */
                    /* try { // try from 009da82c to 00ada837 has its CatchHandler @ 009dadc0 */
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01d38750,&local_a0,uVar1,&local_c0,&local_e0,&local_100,&local_120);
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if ((local_c0 & 1) != 0) {
                    /* try { // try from 009da8cc to 00ada8df has its CatchHandler @ 009daddc */
    operator_delete(local_b0);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((uVar6 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

