
/* cocos2d::extension::ControlButton::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

ControlButton *
cocos2d::extension::ControlButton::create(basic_string *param_1,basic_string *param_2,float param_3)

{
  ControlButton *this;
  undefined4 in_register_00005004;
  
  this = operator_new(0x450,(nothrow_t *)&std::nothrow);
  if (this != (ControlButton *)0x0) {
    ControlButton(this);
  }
  (**(code **)(*(long *)this + 0x748))(CONCAT44(in_register_00005004,param_3),this,param_1,param_2);
  Ref::autorelease((Ref *)this);
  return this;
}

