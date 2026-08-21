
/* cocos2d::ui::TextBMFont::getRenderFile() */

void cocos2d::ui::TextBMFont::getRenderFile(void)

{
  long in_x0;
  undefined4 *in_x8;
  char *pcVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (in_x8 + 2);
  *(undefined8 *)(in_x8 + 4) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 6) = 0;
  *(undefined8 *)(in_x8 + 0xc) = 0;
  *(undefined8 *)(in_x8 + 10) = 0;
  *(undefined2 *)this = 0;
  *(undefined2 *)(in_x8 + 8) = 0;
  *in_x8 = 0;
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (in_x0 + 0x4f8)) {
                    /* try { // try from 00dca308 to 00eca33b has its CatchHandler @ 00dca394 */
    pcVar1 = *(char **)(in_x0 + 0x508);
    uVar2 = *(ulong *)(in_x0 + 0x500);
    if ((*(byte *)(in_x0 + 0x4f8) & 1) == 0) {
      pcVar1 = (char *)(in_x0 + 0x4f9);
      uVar2 = (ulong)(*(byte *)(in_x0 + 0x4f8) >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,pcVar1,uVar2);
  }
  return;
}

