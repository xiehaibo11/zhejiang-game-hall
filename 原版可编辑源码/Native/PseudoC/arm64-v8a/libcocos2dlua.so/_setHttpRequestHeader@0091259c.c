
/* LuaMinXmlHttpRequest::_setHttpRequestHeader() */

void __thiscall LuaMinXmlHttpRequest::_setHttpRequestHeader(LuaMinXmlHttpRequest *this)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  char *pcVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  ulong *puVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  long *plVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  basic_string *local_50;
  basic_string *local_48;
  basic_string *pbStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48 = (basic_string *)0x0;
  pbStack_40 = (basic_string *)0x0;
  local_50 = (basic_string *)0x0;
  plVar10 = *(long **)(this + 0x108);
  if (plVar10 != (long *)0x0) {
    do {
                    /* try { // try from 009125e8 to 00a126cb has its CatchHandler @ 00912440 */
      FUN_007c1fb0(local_88,plVar10 + 2,": ");
      uVar1 = (ulong)(*(byte *)(plVar10 + 5) >> 1);
      pcVar4 = (char *)((long)plVar10 + 0x29);
      if ((*(byte *)(plVar10 + 5) & 1) != 0) {
        uVar1 = plVar10[6];
        pcVar4 = (char *)plVar10[7];
      }
      puVar7 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_88,pcVar4,uVar1);
      local_60 = (void *)puVar7[2];
      uStack_68 = puVar7[1];
      local_70 = *puVar7;
                    /* catch() { ... } // from try @ 009125dc with catch @ 00912628 */
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
                    /* catch() { ... } // from try @ 009124c8 with catch @ 00912630 */
      if (local_48 < pbStack_40) {
        *(void **)(local_48 + 0x10) = local_60;
        *(ulong *)(local_48 + 8) = uStack_68;
        *(ulong *)local_48 = local_70;
        uStack_68 = 0;
        local_60 = (void *)0x0;
        local_70 = 0;
        local_48 = local_48 + 0x18;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)&local_50,(basic_string *)&local_70);
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
      }
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
                    /* try { // try from 009125dc to 00a125e7 has its CatchHandler @ 00912628 */
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
                    /* catch() { ... } // from try @ 00912524 with catch @ 00912698 */
                    /* catch() { ... } // from try @ 00912500 with catch @ 0091269c */
    pbVar9 = local_48;
                    /* catch() { ... } // from try @ 0091249c with catch @ 009126b0 */
    if ((local_50 != local_48) &&
       (pbVar9 = local_50,
       (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        *)(*(long *)(this + 0xc0) + 200) !=
       (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        *)&local_50)) {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(*(long *)(this + 0xc0) + 200),local_50,local_48);
      pbVar9 = local_50;
    }
    if (pbVar9 != (basic_string *)0x0) {
                    /* try { // try from 009126cc to 00a1271f has its CatchHandler @ 009126cc
                       catch() { ... } // from try @ 009126cc with catch @ 009126cc
                       catch() { ... } // from try @ 0091279c with catch @ 009126cc
                       catch() { ... } // from try @ 00912810 with catch @ 009126cc */
      pbVar8 = pbVar9;
      if (local_48 != pbVar9) {
        bVar2 = local_48[-0x18];
        pbVar6 = local_48 + -0x18;
        pbVar8 = local_48;
        while( true ) {
          pbVar5 = pbVar6;
          if (((byte)bVar2 & 1) != 0) {
            operator_delete(*(void **)(pbVar8 + -8));
          }
          pbVar8 = local_50;
          if (pbVar9 == pbVar5) break;
          bVar2 = pbVar5[-0x18];
          pbVar6 = pbVar5 + -0x18;
          pbVar8 = pbVar5;
        }
      }
      local_48 = pbVar9;
      operator_delete(pbVar8);
    }
  }
                    /* try { // try from 00912720 to 00a1276b has its CatchHandler @ 009128e4 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

