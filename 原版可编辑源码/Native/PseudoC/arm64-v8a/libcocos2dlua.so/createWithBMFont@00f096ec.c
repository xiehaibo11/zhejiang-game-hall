
/* cocos2d::Label::createWithBMFont(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::TextHAlignment
   const&, int, cocos2d::Vec2 const&) */

Ref * cocos2d::Label::createWithBMFont
                (basic_string *param_1,basic_string *param_2,TextHAlignment *param_3,int param_4,
                Vec2 *param_5)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x6a0,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Label((Label *)this,*(undefined4 *)param_3,0);
    uVar1 = (**(code **)(*(long *)this + 0x540))(0,this,param_1,param_5);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      if ((*(float *)(this + 0x448) == 0.0) && (*(float *)(this + 0x43c) != (float)param_4)) {
        *(float *)(this + 0x43c) = (float)param_4;
        this[0x30c] = (Ref)0x1;
      }
      (**(code **)(*(long *)this + 0x588))(this,param_2);
      Ref::autorelease(this);
    }
  }
  return this;
}

