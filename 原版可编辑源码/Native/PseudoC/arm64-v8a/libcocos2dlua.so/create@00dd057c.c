
/* cocos2d::ui::RichElementImage::create(int, cocos2d::Color3B const&, unsigned char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ui::Widget::TextureResType) */

RichElementImage *
cocos2d::ui::RichElementImage::create
          (undefined4 param_1,undefined2 *param_2,RichElementImage param_3,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_4,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_5,
          undefined4 param_6)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined2 uVar3;
  RichElementImage *this;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (RichElementImage *)0x0) {
    RichElementImage(this);
    *(undefined4 *)(this + 0x28) = param_1;
    uVar3 = *param_2;
    this[0x2e] = *(RichElementImage *)(param_2 + 1);
    *(undefined2 *)(this + 0x2c) = uVar3;
    this[0x2f] = param_3;
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x30) != param_4) {
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
    *(undefined4 *)(this + 0x58) = param_6;
    Ref::autorelease((Ref *)this);
  }
                    /* try { // try from 00dd0658 to 00ed065f has its CatchHandler @ 00dd0f0c */
  return this;
}

