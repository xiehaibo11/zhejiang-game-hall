
/* cocos2d::ui::Slider::getProgressBarFile() */

void cocos2d::ui::Slider::getProgressBarFile(void)

{
  long in_x0;
  undefined4 *in_x8;
  char *pcVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (in_x8 + 2);
                    /* try { // try from 00dcd9d8 to 00ecda17 has its CatchHandler @ 00dcef34 */
  *(undefined8 *)(in_x8 + 4) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 6) = 0;
  *(undefined8 *)(in_x8 + 0xc) = 0;
  *(undefined8 *)(in_x8 + 10) = 0;
  *(undefined2 *)this = 0;
  *(undefined2 *)(in_x8 + 8) = 0;
  *in_x8 = *(undefined4 *)(in_x0 + 0x5e4);
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (in_x0 + 0x610)) {
    pcVar1 = *(char **)(in_x0 + 0x620);
                    /* try { // try from 00dcda24 to 00ecda2b has its CatchHandler @ 00dced68 */
    uVar2 = *(ulong *)(in_x0 + 0x618);
                    /* try { // try from 00dcda2c to 00ecda37 has its CatchHandler @ 00dced98 */
    if ((*(byte *)(in_x0 + 0x610) & 1) == 0) {
      pcVar1 = (char *)(in_x0 + 0x611);
      uVar2 = (ulong)(*(byte *)(in_x0 + 0x610) >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,pcVar1,uVar2);
  }
                    /* try { // try from 00dcda4c to 00ecda5b has its CatchHandler @ 00dcef34 */
  return;
}

