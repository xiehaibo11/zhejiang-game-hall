
/* cocos2d::LabelBMFont::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float,
   cocos2d::TextHAlignment, cocos2d::Vec2 const&) */

LabelBMFont *
cocos2d::LabelBMFont::create
          (LabelBMFont *param_1_00,undefined8 param_1,undefined8 param_2,undefined4 param_4,
          undefined8 param_5)

{
  LabelBMFont *this;
  ulong uVar1;
  
  this = operator_new(0x330,(nothrow_t *)&std::nothrow);
  if (this != (LabelBMFont *)0x0) {
    LabelBMFont(this);
    uVar1 = initWithString(param_1_00,this,param_1,param_2,param_4,param_5);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (LabelBMFont *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

