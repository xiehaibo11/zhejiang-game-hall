
/* cocos2d::Label::createWithTTF(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, cocos2d::Size
   const&, cocos2d::TextHAlignment, cocos2d::TextVAlignment) */

Ref * cocos2d::Label::createWithTTF
                (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,undefined8 param_4,
                undefined4 param_5,undefined4 param_6)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x6a0,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Label((Label *)this,param_5,param_6);
    uVar1 = initWithTTF(param_1_00,this,param_1,param_2,param_4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
  return this;
}

