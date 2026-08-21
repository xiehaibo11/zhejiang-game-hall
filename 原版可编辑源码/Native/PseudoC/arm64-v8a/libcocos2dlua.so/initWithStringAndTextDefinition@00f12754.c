
/* cocos2d::LabelTTF::initWithStringAndTextDefinition(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::FontDefinition&)
    */

undefined8 __thiscall
cocos2d::LabelTTF::initWithStringAndTextDefinition
          (LabelTTF *this,basic_string *param_1,FontDefinition *param_2)

{
  (**(code **)(**(long **)(this + 0x308) + 0x5e8))(*(long **)(this + 0x308),param_2);
  (**(code **)(**(long **)(this + 0x308) + 0x588))(*(long **)(this + 0x308),param_1);
  this[0x310] = (LabelTTF)0x1;
  return 1;
}

