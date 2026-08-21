
/* cocos2d::Label::_getFontDefinition() const */

void cocos2d::Label::_getFontDefinition(void)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  long lVar3;
  char *pcVar4;
  undefined2 uVar5;
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  float fVar6;
  byte local_68;
  ulong uStack_60;
  char *local_58;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
                    /* try { // try from 00f0c80c to 0100c86b has its CatchHandler @ 00f0c7e0 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined4 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x1c) = 1;
                    /* catch() { ... } // from try @ 00f0c804 with catch @ 00f0c850 */
  *(undefined4 *)(in_x8 + 0x24) = 0;
  Size::Size((Size *)(in_x8 + 0x28),(Size *)&Size::ZERO);
  *(undefined2 *)(in_x8 + 0x33) = 0xff;
  uVar5 = Color3B::WHITE;
  in_x8[0x32] = DAT_01792432;
  *(undefined2 *)(in_x8 + 0x30) = uVar5;
  Size::Size((Size *)(in_x8 + 0x38));
  in_x8[0x48] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  *(undefined8 *)(in_x8 + 0x40) = 0;
  in_x8[0x4c] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xff
  ;
  bVar2 = DAT_01792444;
  uVar5 = Color3B::BLACK;
  *(undefined4 *)(in_x8 + 0x50) = 0;
  *(undefined4 *)(in_x8 + 0x58) = 0;
  in_x8[0x54] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
  in_x8[0x4b] = bVar2;
  *(undefined2 *)(in_x8 + 0x49) = uVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,(basic_string *)(in_x0 + 0x3a0));
  if (*(long *)(in_x0 + 0x3d0) != 0) {
    FontAtlas::getFontName();
    uVar1 = (ulong)(local_68 >> 1);
    if ((local_68 & 1) != 0) {
      uVar1 = uStack_60;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if (uVar1 != 0) {
      FontAtlas::getFontName();
      if (((byte)local_50._0_1_ & 1) != 0) {
        *local_40 = '\0';
        uStack_48 = 0;
        if (((byte)local_50._0_1_ & 1) != 0) {
          operator_delete(local_40);
        }
      }
      local_50 = (ulong)local_68;
      uStack_48 = uStack_60;
      local_40 = local_58;
    }
  }
  if (in_x8 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50) {
    uVar1 = local_50 >> 1 & 0x7f;
    pcVar4 = (char *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      uVar1 = uStack_48;
      pcVar4 = local_40;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,pcVar4,uVar1);
  }
  *(int *)(in_x8 + 0x18) = (int)*(float *)(in_x0 + 0x3b8);
  *(undefined8 *)(in_x8 + 0x1c) = *(undefined8 *)(in_x0 + 0x450);
  *(undefined4 *)(in_x8 + 0x24) = *(undefined4 *)(in_x0 + 0x428);
  *(undefined8 *)(in_x8 + 0x28) = *(undefined8 *)(in_x0 + 0x448);
  in_x8[0x30] = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (in_x0 + 0x4b0);
  in_x8[0x31] = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (in_x0 + 0x4b1);
  in_x8[0x32] = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (in_x0 + 0x4b2);
  bVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (in_x0 + 0x4b3);
  in_x8[0x34] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  in_x8[0x33] = bVar2;
  in_x8[0x54] = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (in_x0 + 0x678);
  *(undefined4 *)(in_x8 + 0x58) = *(undefined4 *)(in_x0 + 0x684);
  if ((*(int *)(in_x0 + 0x49c) != 1) || (fVar6 = *(float *)(in_x0 + 0x398), fVar6 <= 0.0)) {
    in_x8[0x48] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x0;
  }
  else {
    in_x8[0x48] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x1;
    *(float *)(in_x8 + 0x50) = fVar6;
    in_x8[0x49] = SUB41((int)(*(float *)(in_x0 + 0x4a0) * 255.0),0);
    in_x8[0x4a] = SUB41((int)(*(float *)(in_x0 + 0x4a4) * 255.0),0);
    in_x8[0x4b] = SUB41((int)(*(float *)(in_x0 + 0x4a8) * 255.0),0);
    in_x8[0x4c] = SUB41((int)(*(float *)(in_x0 + 0x4ac) * 255.0),0);
  }
  if (((byte)local_50._0_1_ & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

