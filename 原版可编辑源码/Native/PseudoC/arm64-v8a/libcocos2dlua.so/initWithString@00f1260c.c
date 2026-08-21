
/* cocos2d::LabelTTF::initWithString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, cocos2d::Size
   const&, cocos2d::TextHAlignment, cocos2d::TextVAlignment) */

undefined8 __thiscall
cocos2d::LabelTTF::initWithString
          (undefined8 param_1,LabelTTF *this,undefined8 param_3,undefined8 param_2,float *param_4,
          undefined4 param_6,undefined4 param_7)

{
  (**(code **)(**(long **)(this + 0x308) + 0x588))();
  (**(code **)(**(long **)(this + 0x308) + 0x570))(param_1);
  Label::setDimensions(*(Label **)(this + 0x308),*param_4,param_4[1]);
  Label::setAlignment(*(Label **)(this + 0x308),param_6,param_7);
  (**(code **)(**(long **)(this + 0x308) + 0x560))(*(long **)(this + 0x308),param_2);
  this[0x310] = (LabelTTF)0x1;
  return 1;
}

