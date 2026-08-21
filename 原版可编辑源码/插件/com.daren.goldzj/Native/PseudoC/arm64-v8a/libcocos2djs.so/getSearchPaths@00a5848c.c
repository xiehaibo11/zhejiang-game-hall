
/* cocos2d::extension::Manifest::getSearchPaths() const */

void cocos2d::extension::Manifest::getSearchPaths(void)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  long in_x0;
  undefined1 *puVar4;
  basic_string *in_x2;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *in_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  basic_string *pbVar8;
  void *pvVar9;
  undefined1 *puVar10;
  ulong local_98;
  basic_string *pbStack_90;
  void *local_88;
  ulong local_80;
  basic_string *pbStack_78;
  undefined1 *local_70;
  long local_68;
  
                    /* try { // try from 00a584a8 to 00b584af has its CatchHandler @ 00a58574 */
                    /* try { // try from 00a584b0 to 00b584bf has its CatchHandler @ 00a585a4 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a584c0 to 00b584c7 has its CatchHandler @ 00a5858c */
                    /* try { // try from 00a584c8 to 00b584f7 has its CatchHandler @ 00a58594 */
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::
  __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
            (in_x8,(basic_string *)(in_x0 + 0x18));
  lVar5 = *(long *)(in_x0 + 0x110);
  iVar2 = (int)((ulong)(*(long *)(in_x0 + 0x118) - lVar5) >> 3) * -0x55555555;
                    /* try { // try from 00a584f8 to 00b5860f has its CatchHandler @ 00a583f0 */
  if (0 < iVar2) {
    lVar6 = (long)iVar2;
    puVar10 = (undefined1 *)((ulong)&local_80 | 1);
    lVar7 = (lVar6 + (long)iVar2 * 2) * 8;
    do {
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + lVar7;
      pbStack_78 = (basic_string *)0x0;
      local_70 = (undefined1 *)0x0;
      local_80 = 0;
      if ((*(byte *)(lVar5 + -0x18) & 1) == 0) {
        local_70 = *(undefined1 **)(lVar5 + -8);
        pbStack_78 = *(basic_string **)(lVar5 + -0x10);
        local_80 = *(ulong *)(lVar5 + -0x18);
      }
      else {
        pbVar8 = *(basic_string **)(lVar5 + -0x10);
        if ((basic_string *)0xffffffffffffffef < pbVar8) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        pvVar9 = *(void **)(lVar5 + -8);
        if (pbVar8 < (basic_string *)0x17) {
          local_80 = (ulong)(byte)((int)pbVar8 << 1);
          puVar4 = puVar10;
          if (pbVar8 != (basic_string *)0x0) goto LAB_00a58598;
        }
        else {
          puVar4 = operator_new((ulong)(pbVar8 + 0x10) & 0xfffffffffffffff0);
          local_80 = (ulong)(pbVar8 + 0x10) & 0xfffffffffffffff0 | 1;
                    /* catch() { ... } // from try @ 00a584c0 with catch @ 00a5858c */
                    /* catch() { ... } // from try @ 00a58480 with catch @ 00a58590 */
                    /* catch() { ... } // from try @ 00a584c8 with catch @ 00a58594 */
          pbStack_78 = pbVar8;
          local_70 = puVar4;
LAB_00a58598:
          in_x2 = pbVar8;
                    /* catch() { ... } // from try @ 00a584b0 with catch @ 00a585a4 */
          memcpy(puVar4,pvVar9,(size_t)pbVar8);
        }
        puVar4[(long)pbVar8] = 0;
      }
      pbVar8 = (basic_string *)(local_80 >> 1 & 0x7f);
                    /* catch() { ... } // from try @ 00a5846c with catch @ 00a585bc */
      if ((local_80 & 1) != 0) {
        pbVar8 = pbStack_78;
      }
                    /* catch() { ... } // from try @ 00a58440 with catch @ 00a585c0 */
      if (pbVar8 != (basic_string *)0x0) {
        puVar4 = puVar10;
        if ((local_80 & 1) != 0) {
          puVar4 = local_70;
        }
        if ((puVar4 + (long)pbVar8)[-1] != '/') {
          in_x2 = (basic_string *)0x1;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,"/",1);
        }
      }
      std::__ndk1::operator+((__ndk1 *)(in_x0 + 0x18),(basic_string *)&local_80,in_x2);
      if ((local_80 & 1) != 0) {
        *local_70 = 0;
        pbStack_78 = (basic_string *)0x0;
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      puVar1 = *(ulong **)(in_x8 + 8);
      local_70 = local_88;
      local_80 = local_98;
      if (puVar1 == *(ulong **)(in_x8 + 0x10)) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  (in_x8,(basic_string *)&local_80);
      }
      else {
        puVar1[1] = 0;
        puVar1[2] = 0;
                    /* try { // try from 00a58654 to 00b5866b has its CatchHandler @ 00a5869c */
        *puVar1 = 0;
        if ((local_98 & 1) == 0) {
          puVar1[2] = (ulong)local_88;
                    /* try { // try from 00a5866c to 00b586af has its CatchHandler @ 00a58610 */
          puVar1[1] = (ulong)pbStack_90;
          *puVar1 = local_98;
        }
        else {
                    /* catch() { ... } // from try @ 00a58654 with catch @ 00a5869c */
          if ((basic_string *)0xffffffffffffffef < pbStack_90) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
                    /* try { // try from 00a586b0 to 00b586ff has its CatchHandler @ 00a586b0
                       catch() { ... } // from try @ 00a586b0 with catch @ 00a586b0
                       catch() { ... } // from try @ 00a587b8 with catch @ 00a586b0 */
          if (pbStack_90 < (basic_string *)0x17) {
            pvVar9 = (void *)((long)puVar1 + 1);
            *(char *)puVar1 = (char)((int)pbStack_90 << 1);
            if (pbStack_90 != (basic_string *)0x0) goto LAB_00a586e4;
          }
          else {
            pvVar9 = operator_new((ulong)(pbStack_90 + 0x10) & 0xfffffffffffffff0);
            puVar1[1] = (ulong)pbStack_90;
            puVar1[2] = (ulong)pvVar9;
            *puVar1 = (ulong)(pbStack_90 + 0x10) & 0xfffffffffffffff0 | 1;
LAB_00a586e4:
            in_x2 = pbStack_90;
            memcpy(pvVar9,local_88,(size_t)pbStack_90);
          }
          *(basic_string *)((long)pvVar9 + (long)pbStack_90) = (basic_string)0x0;
        }
                    /* try { // try from 00a58700 to 00b58717 has its CatchHandler @ 00a58880 */
        *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 0x18;
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (lVar6 < 1) break;
      lVar5 = *(long *)(in_x0 + 0x110);
      lVar7 = lVar7 + -0x18;
    } while( true );
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00a5872c to 00b5873f has its CatchHandler @ 00a5887c */
                    /* try { // try from 00a58740 to 00b5874f has its CatchHandler @ 00a58850 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

