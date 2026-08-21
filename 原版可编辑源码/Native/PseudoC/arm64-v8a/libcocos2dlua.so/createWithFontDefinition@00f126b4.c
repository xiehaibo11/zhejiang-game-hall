
/* cocos2d::LabelTTF::createWithFontDefinition(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::FontDefinition&)
    */

LabelTTF *
cocos2d::LabelTTF::createWithFontDefinition(basic_string *param_1,FontDefinition *param_2)

{
  LabelTTF *this;
  
  this = operator_new(0x380,(nothrow_t *)&std::nothrow);
  if (this != (LabelTTF *)0x0) {
    LabelTTF(this);
    (**(code **)(**(long **)(this + 0x308) + 0x5e8))(*(long **)(this + 0x308),param_2);
    (**(code **)(**(long **)(this + 0x308) + 0x588))(*(long **)(this + 0x308),param_1);
    this[0x310] = (LabelTTF)0x1;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

