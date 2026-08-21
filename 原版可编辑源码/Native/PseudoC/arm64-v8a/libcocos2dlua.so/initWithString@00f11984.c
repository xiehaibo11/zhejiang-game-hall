
/* cocos2d::LabelBMFont::initWithString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float, cocos2d::TextHAlignment, cocos2d::Vec2 const&) */

undefined8 __thiscall
cocos2d::LabelBMFont::initWithString
          (float param_3,LabelBMFont *this,undefined8 param_1,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_2,
          undefined4 param_5,undefined8 param_6)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(**(long **)(this + 800) + 0x540))(0,*(long **)(this + 800),param_2,param_6);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x308) != param_2) {
      uVar2 = *(ulong *)(param_2 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar1 = param_2 + 1;
        uVar2 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x308),(char *)pbVar1,uVar2);
    }
    Label::setMaxLineWidth(*(Label **)(this + 800),param_3);
    Label::setAlignment(*(Label **)(this + 800),param_5,
                        *(undefined4 *)(*(Label **)(this + 800) + 0x454));
    (**(code **)(**(long **)(this + 800) + 0x588))(*(long **)(this + 800),param_1);
    uVar3 = (**(code **)(**(long **)(this + 800) + 0x168))();
    (**(code **)(*(long *)this + 0x160))(this,uVar3);
    uVar3 = 1;
  }
  return uVar3;
}

