
undefined4 FUN_00913b38(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  basic_ostream *pbVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong local_1c8;
  undefined1 *local_1b8;
  ulong local_1b0 [2];
  undefined1 *local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined **ppuStack_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 009137b0 with catch @ 00913b74 */
  local_190 = 0x1698900;
  local_110[0] = 0x1698928;
  uStack_188 = 0;
  local_180 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
                    /* catch() { ... } // from try @ 00913c4c with catch @ 00913bbc */
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  local_190 = 0x16987e8;
  local_110[0] = 0x1698838;
  local_88 = 0;
  local_180 = 0x1698810;
  std::__ndk1::locale::locale(alStack_170);
                    /* try { // try from 00913bf4 to 00a13bf7 has its CatchHandler @ 00913c4c */
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
                    /* try { // try from 00913c14 to 00a13c1f has its CatchHandler @ 00913c5c */
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  local_118 = 0x18;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_1b0,"");
  lVar6 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 00913c44 to 00a13c4b has its CatchHandler @ 00913c4c */
  iVar5 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 00913bf4 with catch @ 00913c4c
                       catch() { ... } // from try @ 00913c44 with catch @ 00913c4c
                       try { // try from 00913c4c to 00a13ca7 has its CatchHandler @ 00913bbc */
  if (iVar5 + -1 == 0) {
    plVar9 = *(long **)(lVar6 + 0xe0);
    if (plVar9 != (long *)0x0) {
                    /* try { // try from 00913d04 to 00a13d1b has its CatchHandler @ 00913f18 */
      do {
        uVar1 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
        pcVar4 = (char *)((long)plVar9 + 0x11);
        if ((*(byte *)(plVar9 + 2) & 1) != 0) {
          uVar1 = plVar9[3];
          pcVar4 = (char *)plVar9[4];
        }
                    /* try { // try from 00913d30 to 00a13d43 has its CatchHandler @ 00913e98 */
        pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_180,pcVar4,uVar1);
        pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar7,": ",2);
        uVar1 = (ulong)(*(byte *)(plVar9 + 5) >> 1);
        pcVar4 = (char *)((long)plVar9 + 0x29);
        if ((*(byte *)(plVar9 + 5) & 1) != 0) {
          uVar1 = plVar9[6];
          pcVar4 = (char *)plVar9[7];
        }
        pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar7,pcVar4,uVar1);
                    /* try { // try from 00913d68 to 00a13d7f has its CatchHandler @ 00913f04 */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\n",1);
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
                    /* try { // try from 00913d8c to 00a13da3 has its CatchHandler @ 00913f00 */
    if (((byte)local_1b0[0]._0_1_ & 1) != 0) {
      *local_1a0 = 0;
      local_1b0[1] = 0;
      if (((byte)local_1b0[0]._0_1_ & 1) != 0) {
        operator_delete(local_1a0);
      }
    }
    local_1b0[0] = local_1c8;
    local_1a0 = local_1b8;
    puVar2 = (undefined1 *)((ulong)local_1b0 | 1);
    if ((local_1c8 & 1) != 0) {
      puVar2 = local_1b8;
    }
    tolua_pushstring(param_1,puVar2);
    uVar8 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 00913c14 with catch @ 00913c5c */
    luaL_error(param_1,
               "\'getAllResponseHeaders\' function of XMLHttpRequest wrong number of arguments: %d, was expecting %d\n"
               ,iVar5 + -1,0);
    uVar8 = 0;
  }
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  local_190 = 0x16987e8;
  local_180 = 0x1698810;
  local_110[0] = 0x1698838;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  if ((local_138 & 1) != 0) {
                    /* try { // try from 00913ca8 to 00a13d03 has its CatchHandler @ 00913ca8
                       catch() { ... } // from try @ 00913ca8 with catch @ 00913ca8
                       catch() { ... } // from try @ 00913da4 with catch @ 00913ca8
                       catch() { ... } // from try @ 00913e50 with catch @ 00913ca8 */
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

