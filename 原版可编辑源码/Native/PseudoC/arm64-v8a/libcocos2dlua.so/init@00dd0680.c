
/* cocos2d::ui::RichElementImage::init(int, cocos2d::Color3B const&, unsigned char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ui::Widget::TextureResType) */

undefined8 __thiscall
cocos2d::ui::RichElementImage::init
          (RichElementImage *this,undefined4 param_1,undefined2 *param_2,RichElementImage param_3,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_4,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_5,
          undefined4 param_7)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined2 uVar3;
  
  *(undefined4 *)(this + 0x28) = param_1;
  uVar3 = *param_2;
  this[0x2e] = *(RichElementImage *)(param_2 + 1);
                    /* try { // try from 00dd06ac to 00ed06c3 has its CatchHandler @ 00dd0fa8 */
  *(undefined2 *)(this + 0x2c) = uVar3;
  this[0x2f] = param_3;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) != param_4) {
                    /* try { // try from 00dd06c4 to 00ed06db has its CatchHandler @ 00dd0f98 */
    uVar1 = *(ulong *)(param_4 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      uVar1 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),(char *)pbVar2,uVar1);
  }
  *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x68) != param_5) {
    uVar1 = *(ulong *)(param_5 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_5 + 0x10);
    if (((byte)*param_5 & 1) == 0) {
      pbVar2 = param_5 + 1;
      uVar1 = (ulong)((byte)*param_5 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x68),(char *)pbVar2,uVar1);
  }
  *(undefined4 *)(this + 0x58) = param_7;
  return 1;
}

