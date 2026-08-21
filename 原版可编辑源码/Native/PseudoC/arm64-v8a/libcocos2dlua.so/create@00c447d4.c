
/* cocostudio::Skin::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Skin * cocostudio::Skin::create(basic_string *param_1)

{
  Skin *this;
  ulong uVar1;
  
  this = operator_new(0x6a0,(nothrow_t *)&std::nothrow);
  if (this != (Skin *)0x0) {
    Skin(this);
    uVar1 = (**(code **)(*(long *)this + 0x620))(this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Skin *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

