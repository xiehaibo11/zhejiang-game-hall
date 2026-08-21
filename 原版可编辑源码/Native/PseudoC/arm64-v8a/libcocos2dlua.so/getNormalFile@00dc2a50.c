
/* cocos2d::ui::Button::getNormalFile() */

void cocos2d::ui::Button::getNormalFile(void)

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
                    /* try { // try from 00dc2a78 to 00ec2a87 has its CatchHandler @ 00dc2e0c */
  *(undefined2 *)(in_x8 + 8) = 0;
                    /* try { // try from 00dc2a8c to 00ec2a9b has its CatchHandler @ 00dc2dec */
  *in_x8 = *(undefined4 *)(in_x0 + 0x5b0);
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (in_x0 + 0x568)) {
    pcVar1 = *(char **)(in_x0 + 0x578);
    uVar2 = *(ulong *)(in_x0 + 0x570);
    if ((*(byte *)(in_x0 + 0x568) & 1) == 0) {
      pcVar1 = (char *)(in_x0 + 0x569);
      uVar2 = (ulong)(*(byte *)(in_x0 + 0x568) >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,pcVar1,uVar2);
  }
  return;
}

