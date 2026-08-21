
/* cocos2d::extension::Manifest::getSearchPaths() const */

void cocos2d::extension::Manifest::getSearchPaths(void)

{
  basic_string *pbVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  long in_x0;
  basic_string *in_x2;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *in_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  void *__dest;
  ulong local_98;
  basic_string *pbStack_90;
  undefined1 *local_88;
  ulong local_80;
  basic_string *pbStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::
  __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
            (in_x8,(basic_string *)(in_x0 + 0x30));
  lVar6 = *(long *)(in_x0 + 0x128);
  iVar4 = (int)((ulong)(*(long *)(in_x0 + 0x130) - lVar6) >> 3) * -0x55555555;
  if (0 < iVar4) {
    lVar7 = (long)iVar4;
    lVar8 = (long)iVar4 * 0x18;
    do {
                    /* try { // try from 00dfc9e0 to 00efc9eb has its CatchHandler @ 00dfcb48 */
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + -0x18;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_80,(basic_string *)(lVar6 + lVar8));
      pbVar1 = (basic_string *)(local_80 >> 1 & 0x7f);
      if ((local_80 & 1) != 0) {
        pbVar1 = pbStack_78;
      }
      if (pbVar1 != (basic_string *)0x0) {
        puVar2 = (undefined1 *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          puVar2 = local_70;
        }
        if ((pbVar1 + (long)puVar2)[-1] != (basic_string)0x2f) {
          in_x2 = (basic_string *)0x1;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,"/",1);
        }
      }
      std::__ndk1::operator+((__ndk1 *)(in_x0 + 0x30),(basic_string *)&local_80,in_x2);
                    /* try { // try from 00dfca48 to 00efca4f has its CatchHandler @ 00dfcb30 */
      if ((local_80 & 1) != 0) {
        *local_70 = 0;
        pbStack_78 = (basic_string *)0x0;
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      puVar3 = *(ulong **)(in_x8 + 8);
      pbStack_78 = pbStack_90;
      local_80 = local_98;
      local_70 = local_88;
      if (puVar3 == *(ulong **)(in_x8 + 0x10)) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  (in_x8,(basic_string *)&local_80);
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        if ((local_98 & 1) == 0) {
          puVar3[2] = (ulong)local_88;
          puVar3[1] = (ulong)pbStack_90;
          *puVar3 = local_98;
        }
        else {
          if ((basic_string *)0xffffffffffffffef < pbStack_90) {
                    /* catch() { ... } // from try @ 00dfcb8c with catch @ 00dfcbac */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (pbStack_90 < (basic_string *)0x17) {
            __dest = (void *)((long)puVar3 + 1);
            *(char *)puVar3 = (char)((int)pbStack_90 << 1);
            if (pbStack_90 != (basic_string *)0x0) goto LAB_00dfcb50;
          }
          else {
            __dest = operator_new((ulong)(pbStack_90 + 0x10) & 0xfffffffffffffff0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfca48 with catch @ 00dfcb30
                        */
            puVar3[1] = (ulong)pbStack_90;
            puVar3[2] = (ulong)__dest;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfc9e0 with catch @ 00dfcb48
                        */
            *puVar3 = (ulong)(pbStack_90 + 0x10) & 0xfffffffffffffff0 | 1;
LAB_00dfcb50:
            in_x2 = pbStack_90;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfc87c with catch @ 00dfcb5c
                        */
            memcpy(__dest,local_88,(size_t)pbStack_90);
          }
                    /* try { // try from 00dfcb60 to 00efcb8b has its CatchHandler @ 00dfcb60
                       catch() { ... } // from try @ 00dfcb60 with catch @ 00dfcb60
                       catch() { ... } // from try @ 00dfcb98 with catch @ 00dfcb60 */
          *(basic_string *)((long)__dest + (long)pbStack_90) = (basic_string)0x0;
        }
        *(ulong **)(in_x8 + 8) = puVar3 + 3;
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (lVar7 < 1) break;
      lVar6 = *(long *)(in_x0 + 0x128);
    } while( true );
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 00dfcb8c to 00efcb97 has its CatchHandler @ 00dfcbac */
                    /* try { // try from 00dfcb98 to 00efcbbf has its CatchHandler @ 00dfcb60 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

