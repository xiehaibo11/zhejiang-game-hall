
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::experimental::ui::WebViewImpl::loadHTMLString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::experimental::ui::WebViewImpl::loadHTMLString
          (WebViewImpl *this,basic_string *param_1,basic_string *param_2)

{
  basic_string *pbVar1;
  byte *__s2;
  undefined4 uVar2;
  basic_string bVar3;
  byte bVar4;
  long lVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  basic_string *__n;
  ulong uVar11;
  basic_string *pbVar12;
  ulong uVar13;
  ulong local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  __n = param_2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"loadHTMLString");
  uVar2 = *(undefined4 *)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_b0,param_1);
  uStack_c8 = 0;
  local_c0 = (undefined1 *)0x0;
  local_d0 = 0;
  bVar3 = *param_2;
  uVar13 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar13 = *(ulong *)(param_2 + 8);
  }
  if (uVar13 == 0) {
    uVar13 = DAT_01788a58;
    pcVar6 = DAT_01788a60;
    if ((DAT_01788a50 & 1) == 0) {
      uVar13 = (ulong)(DAT_01788a50 >> 1);
      pcVar6 = &DAT_01788a51;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_d0,pcVar6,uVar13);
  }
  else {
    pbVar12 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar12 = param_2 + 1;
    }
    __s2 = DAT_01788a78;
    pbVar10 = DAT_01788a70;
    if ((DAT_01788a68 & 1) == 0) {
      __s2 = &DAT_01788a69;
      pbVar10 = (basic_string *)(ulong)(DAT_01788a68 >> 1);
    }
    if (pbVar10 == (basic_string *)0x0) {
LAB_00de61b4:
      if ((basic_string *)&local_d0 != param_2) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_d0,(char *)pbVar12,uVar13);
                    /* try { // try from 00de61d0 to 00ee6227 has its CatchHandler @ 00de6264 */
      }
    }
    else {
      pbVar1 = pbVar12 + uVar13;
      if ((long)pbVar10 <= (long)uVar13) {
        bVar4 = *__s2;
        pbVar9 = pbVar12;
        uVar11 = uVar13;
        do {
          __n = (basic_string *)((uVar11 - (long)pbVar10) + 1);
                    /* try { // try from 00de613c to 00ee61cf has its CatchHandler @ 00de613c
                       catch() { ... } // from try @ 00de613c with catch @ 00de613c
                       catch() { ... } // from try @ 00de6228 with catch @ 00de613c */
          if ((0xfffffffffffffffe < uVar11 - (long)pbVar10) ||
             (pbVar9 = memchr(pbVar9,(uint)bVar4,(size_t)__n), pbVar9 == (basic_string *)0x0))
          break;
          __n = pbVar10;
          iVar8 = memcmp(pbVar9,__s2,(size_t)pbVar10);
          if (iVar8 == 0) {
            if ((pbVar9 != pbVar1) && ((long)pbVar9 - (long)pbVar12 != -1)) goto LAB_00de61b4;
            break;
          }
          pbVar9 = pbVar9 + 1;
          uVar11 = (long)pbVar1 - (long)pbVar9;
        } while ((long)pbVar10 <= (long)uVar11);
      }
      pbVar10 = pbVar12;
      if (*pbVar12 == (basic_string)0x2f) {
        std::__ndk1::operator+((__ndk1 *)&DAT_01788a68,param_2,__n);
      }
      else {
        while( true ) {
          if ((((long)uVar13 < 7) ||
              (__n = (basic_string *)(uVar13 - 6), __n == (basic_string *)0x0)) ||
             (pbVar10 = memchr(pbVar10,0x61,(size_t)__n), pbVar10 == (basic_string *)0x0))
          goto LAB_00de6298;
          __n = (basic_string *)0x7;
                    /* try { // try from 00de6228 to 00ee627f has its CatchHandler @ 00de613c */
          iVar8 = memcmp(pbVar10,"assets/",7);
          if (iVar8 == 0) break;
          uVar13 = (long)pbVar1 - (long)(pbVar10 + 1);
          pbVar10 = pbVar10 + 1;
        }
        if ((pbVar10 != pbVar1) && (pbVar10 == pbVar12)) {
                    /* catch() { ... } // from try @ 00de61d0 with catch @ 00de6264 */
          std::__ndk1::operator+
                    ((__ndk1 *)&DAT_01788a50,(basic_string *)(ulong)(byte)pbVar12[7],(char)__n);
          goto joined_r0x00de6270;
        }
LAB_00de6298:
        std::__ndk1::operator+((__ndk1 *)&DAT_01788a50,param_2,__n);
      }
joined_r0x00de6270:
      if ((local_d0 & 1) != 0) {
        *local_c0 = 0;
        uStack_c8 = 0;
        if ((local_d0 & 1) != 0) {
                    /* catch() { ... } // from try @ 00de62c0 with catch @ 00de6288 */
          operator_delete(local_c0);
        }
      }
                    /* try { // try from 00de62b8 to 00ee62bf has its CatchHandler @ 00de62ec */
                    /* try { // try from 00de62c0 to 00ee6307 has its CatchHandler @ 00de6288 */
      uStack_c8 = uStack_78;
      local_d0 = local_80;
      local_c0 = local_70;
    }
  }
  uVar13 = local_d0 >> 1 & 0x7f;
  puVar7 = (undefined1 *)((ulong)&local_d0 | 1);
  if ((local_d0 & 1) != 0) {
    uVar13 = uStack_c8;
    puVar7 = local_c0;
  }
                    /* catch() { ... } // from try @ 00de62b8 with catch @ 00de62ec */
  if (puVar7[uVar13 - 1] != '/') {
                    /* catch() { ... } // from try @ 00de6340 with catch @ 00de6308 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_d0,"/",1);
  }
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01788a38,local_98,uVar2,local_b0,&local_d0);
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98[0] & 1) != 0) {
                    /* try { // try from 00de6340 to 00ee6387 has its CatchHandler @ 00de6308 */
    operator_delete(local_88);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00de6338 with catch @ 00de636c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

