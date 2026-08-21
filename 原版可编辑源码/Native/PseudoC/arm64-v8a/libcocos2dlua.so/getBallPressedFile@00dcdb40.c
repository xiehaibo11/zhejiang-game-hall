
/* cocos2d::ui::Slider::getBallPressedFile() */

void cocos2d::ui::Slider::getBallPressedFile(void)

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
  *in_x8 = *(undefined4 *)(in_x0 + 0x5ec);
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (in_x0 + 0x640)) {
                    /* try { // try from 00dcdb84 to 00ecdb8b has its CatchHandler @ 00dced64 */
    pcVar1 = *(char **)(in_x0 + 0x650);
                    /* try { // try from 00dcdb8c to 00ecdb97 has its CatchHandler @ 00dced94 */
    uVar2 = *(ulong *)(in_x0 + 0x648);
    if ((*(byte *)(in_x0 + 0x640) & 1) == 0) {
      pcVar1 = (char *)(in_x0 + 0x641);
      uVar2 = (ulong)(*(byte *)(in_x0 + 0x640) >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,pcVar1,uVar2);
  }
                    /* try { // try from 00dcdbac to 00ecdbbb has its CatchHandler @ 00dceea8 */
  return;
}

