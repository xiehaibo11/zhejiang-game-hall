
/* cocos2d::BMFontConfiguration::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Ref * cocos2d::BMFontConfiguration::create(basic_string *param_1)

{
  Ref *this;
  long lVar1;
  
  this = operator_new(0xb8,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined4 *)(this + 0x48) = 0x3f800000;
    *(undefined4 *)(this + 0xa0) = 0x3f800000;
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined ***)this = &PTR__BMFontConfiguration_016fd138;
    *(undefined4 *)(this + 0xb0) = 0;
  }
  lVar1 = parseConfigFile((BMFontConfiguration *)this,param_1);
  *(long *)(this + 0xa8) = lVar1;
  if (lVar1 == 0) {
    if (this != (Ref *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
  }
  else {
    Ref::autorelease(this);
  }
  return this;
}

