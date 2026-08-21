
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::experimental::ui::WebViewImpl::loadFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::experimental::ui::WebViewImpl::loadFile(WebViewImpl *this,basic_string *param_1)

{
  byte *pbVar1;
  byte *__s2;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  size_t __n;
  char *pcVar6;
  void *__src;
  int iVar7;
  long *plVar8;
  byte *pbVar9;
  ulong *puVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  size_t sVar14;
  byte *pbVar15;
  void *__dest;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c8;
  ulong uStack_c0;
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  size_t local_a8;
  byte *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  byte *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"file:///android_asset/");
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0x50))(local_98,plVar8,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,"assets/");
  pbVar2 = (byte *)((ulong)local_98 | 1);
  if (((byte)local_98[0] & 1) != 0) {
    pbVar2 = local_88;
  }
  __s2 = (byte *)((ulong)local_b0 | 1);
  __n = (ulong)((byte)local_b0[0] >> 1);
  if (((byte)local_b0[0] & 1) != 0) {
    __s2 = local_a0;
    __n = local_a8;
  }
  uStack_c0 = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  if (__n == 0) {
LAB_00de6d18:
    uVar13 = 0xffffffffffffffff;
    goto LAB_00de6d1c;
  }
  uVar13 = (ulong)((byte)local_98[0] >> 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar13 = local_90;
  }
  if ((long)__n <= (long)uVar13) {
    bVar4 = *__s2;
    pbVar1 = pbVar2 + uVar13;
    pbVar9 = pbVar2;
    uVar11 = uVar13;
    do {
                    /* catch() { ... } // from try @ 00de6ca4 with catch @ 00de6c6c */
      if ((0xfffffffffffffffe < uVar11 - __n) ||
         (pbVar9 = memchr(pbVar9,(uint)bVar4,(uVar11 - __n) + 1), pbVar9 == (byte *)0x0)) break;
      iVar7 = memcmp(pbVar9,__s2,__n);
      if (iVar7 == 0) {
        if ((pbVar9 != pbVar1) && ((long)pbVar9 - (long)pbVar2 != -1)) {
          pbVar9 = pbVar2;
          if (uVar13 != 0) goto LAB_00de6cc4;
          goto LAB_00de6d18;
        }
        break;
      }
      pbVar9 = pbVar9 + 1;
      uVar11 = (long)pbVar1 - (long)pbVar9;
                    /* try { // try from 00de6c9c to 00ee6ca3 has its CatchHandler @ 00de6cd0 */
    } while ((long)__n <= (long)uVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_c8
         ,(char *)pbVar2,uVar13);
  goto LAB_00de6d74;
LAB_00de6cc4:
  do {
    sVar14 = __n;
    pbVar15 = __s2;
    do {
                    /* catch() { ... } // from try @ 00de6c9c with catch @ 00de6cd0 */
      pbVar12 = pbVar9;
      if (*pbVar9 == *pbVar15) goto LAB_00de6cf4;
      sVar14 = sVar14 - 1;
      pbVar15 = pbVar15 + 1;
    } while (sVar14 != 0);
    pbVar9 = pbVar9 + 1;
    pbVar12 = pbVar1;
                    /* catch() { ... } // from try @ 00de6d24 with catch @ 00de6cec */
  } while (pbVar9 != pbVar1);
LAB_00de6cf4:
  uVar13 = (long)pbVar12 - (long)pbVar2;
  if (pbVar12 == pbVar1) {
    uVar13 = 0xffffffffffffffff;
  }
LAB_00de6d1c:
                    /* try { // try from 00de6d1c to 00ee6d23 has its CatchHandler @ 00de6d50 */
                    /* try { // try from 00de6d24 to 00ee6d6b has its CatchHandler @ 00de6cec */
  uVar11 = (ulong)((byte)local_80[0] >> 1);
  pcVar6 = (char *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar11 = local_78;
    pcVar6 = local_70;
  }
  puVar10 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::replace(local_98,uVar13,__n,pcVar6,uVar11);
                    /* catch() { ... } // from try @ 00de6d1c with catch @ 00de6d50 */
  if (puVar10 != &local_c8) {
    uVar13 = puVar10[1];
    pbVar2 = (byte *)puVar10[2];
    if (((byte)*puVar10 & 1) == 0) {
      pbVar2 = (byte *)((long)puVar10 + 1);
      uVar13 = (ulong)(byte)((byte)*puVar10 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_c8,(char *)pbVar2,uVar13);
  }
LAB_00de6d74:
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"loadFile");
  __src = local_b8;
  uVar13 = uStack_c0;
  uVar3 = *(undefined4 *)(this + 8);
  uStack_d8 = 0;
  local_d0 = (void *)0x0;
  local_e0 = 0;
  if ((local_c8 & 1) == 0) {
    uStack_d8 = uStack_c0;
    local_e0 = local_c8;
    local_d0 = local_b8;
    goto LAB_00de6e54;
  }
  if (0xffffffffffffffef < uStack_c0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_c0 < 0x17) {
    __dest = (void *)((ulong)&local_e0 | 1);
    local_e0 = (ulong)(byte)((int)uStack_c0 << 1);
    if (uStack_c0 != 0) goto LAB_00de6e40;
  }
  else {
    uVar11 = uStack_c0 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar11);
    local_e0 = uVar11 | 1;
    uStack_d8 = uVar13;
    local_d0 = __dest;
LAB_00de6e40:
    memcpy(__dest,__src,uVar13);
  }
  *(undefined1 *)((long)__dest + uVar13) = 0;
LAB_00de6e54:
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01788a38,local_80,uVar3,&local_e0);
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

