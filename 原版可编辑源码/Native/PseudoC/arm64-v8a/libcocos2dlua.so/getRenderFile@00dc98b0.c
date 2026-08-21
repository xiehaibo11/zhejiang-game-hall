
/* cocos2d::ui::TextAtlas::getRenderFile() */

void cocos2d::ui::TextAtlas::getRenderFile(void)

{
  long in_x0;
  undefined4 *in_x8;
  char *pcVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  
                    /* catch() { ... } // from try @ 00dc9754 with catch @ 00dc98b0 */
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
              (in_x0 + 0x510)) {
    pcVar1 = *(char **)(in_x0 + 0x520);
                    /* catch() { ... } // from try @ 00dc96a0 with catch @ 00dc98f8 */
    uVar2 = *(ulong *)(in_x0 + 0x518);
    if ((*(byte *)(in_x0 + 0x510) & 1) == 0) {
      pcVar1 = (char *)(in_x0 + 0x511);
      uVar2 = (ulong)(*(byte *)(in_x0 + 0x510) >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,pcVar1,uVar2);
  }
  return;
}

