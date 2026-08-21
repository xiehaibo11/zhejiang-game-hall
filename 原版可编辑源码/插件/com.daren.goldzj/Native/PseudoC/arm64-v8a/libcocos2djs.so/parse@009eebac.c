
/* cocos2d::network::Uri::parse(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::network::Uri::parse(Uri *this,basic_string *param_1)

{
  ulong uVar1;
  Uri *in_x8;
  
  *(undefined2 *)in_x8 = 0;
  *(undefined2 *)(in_x8 + 0x82) = 0;
                    /* try { // try from 009eebc8 to 00aeebd7 has its CatchHandler @ 009eee10 */
  *(undefined8 *)(in_x8 + 0x79) = 0;
  *(undefined8 *)(in_x8 + 0x71) = 0;
  *(undefined8 *)(in_x8 + 0x70) = 0;
  *(undefined8 *)(in_x8 + 0x68) = 0;
  *(undefined8 *)(in_x8 + 0x60) = 0;
  *(undefined8 *)(in_x8 + 0x58) = 0;
  *(undefined8 *)(in_x8 + 0x50) = 0;
  *(undefined8 *)(in_x8 + 0x48) = 0;
  *(undefined8 *)(in_x8 + 0x40) = 0;
  *(undefined8 *)(in_x8 + 0x38) = 0;
  *(undefined8 *)(in_x8 + 0x30) = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  *(undefined8 *)(in_x8 + 0x20) = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x100) = 0;
  *(undefined8 *)(in_x8 + 0xf8) = 0;
  *(undefined8 *)(in_x8 + 0xf0) = 0;
  *(undefined8 *)(in_x8 + 0xe8) = 0;
  *(undefined8 *)(in_x8 + 0xe0) = 0;
  *(undefined8 *)(in_x8 + 0xd8) = 0;
  *(undefined8 *)(in_x8 + 0xd0) = 0;
  *(undefined8 *)(in_x8 + 200) = 0;
  *(undefined8 *)(in_x8 + 0xc0) = 0;
  *(undefined8 *)(in_x8 + 0xb8) = 0;
  *(undefined8 *)(in_x8 + 0xb0) = 0;
  *(undefined8 *)(in_x8 + 0xa8) = 0;
  *(undefined8 *)(in_x8 + 0xa0) = 0;
  *(undefined8 *)(in_x8 + 0x98) = 0;
  *(undefined8 *)(in_x8 + 0x90) = 0;
  *(undefined8 *)(in_x8 + 0x88) = 0;
  *(undefined8 *)(in_x8 + 0x110) = 0;
  *(undefined8 *)(in_x8 + 0x108) = 0;
  uVar1 = doParse(in_x8,(basic_string *)this);
  if ((uVar1 & 1) != 0) {
    return;
  }
  clear(in_x8);
  return;
}

