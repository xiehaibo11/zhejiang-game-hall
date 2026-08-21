
/* cocos2d::ui::Slider::getBackFile() */

void cocos2d::ui::Slider::getBackFile(void)

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
  *in_x8 = *(undefined4 *)(in_x0 + 0x5e0);
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (in_x0 + 0x5f8)) {
    pcVar1 = *(char **)(in_x0 + 0x608);
    uVar2 = *(ulong *)(in_x0 + 0x600);
    if ((*(byte *)(in_x0 + 0x5f8) & 1) == 0) {
      pcVar1 = (char *)(in_x0 + 0x5f9);
      uVar2 = (ulong)(*(byte *)(in_x0 + 0x5f8) >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,pcVar1,uVar2);
  }
                    /* try { // try from 00dcd998 to 00ecd99f has its CatchHandler @ 00dcedd8 */
  return;
}

