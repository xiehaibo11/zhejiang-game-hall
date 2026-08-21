
/* cocos2d::LabelTTF::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, cocos2d::Size
   const&, cocos2d::TextHAlignment, cocos2d::TextVAlignment) */

LabelTTF *
cocos2d::LabelTTF::create
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,float *param_4,
          undefined4 param_5,undefined4 param_6)

{
  LabelTTF *this;
  
  this = operator_new(0x380,(nothrow_t *)&std::nothrow);
  if (this != (LabelTTF *)0x0) {
    LabelTTF(this);
    (**(code **)(**(long **)(this + 0x308) + 0x588))(*(long **)(this + 0x308),param_1);
    (**(code **)(**(long **)(this + 0x308) + 0x570))(param_1_00);
    Label::setDimensions(*(Label **)(this + 0x308),*param_4,param_4[1]);
    Label::setAlignment(*(Label **)(this + 0x308),param_5,param_6);
    (**(code **)(**(long **)(this + 0x308) + 0x560))(*(long **)(this + 0x308),param_2);
    this[0x310] = (LabelTTF)0x1;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

