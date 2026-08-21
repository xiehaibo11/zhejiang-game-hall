
/* cocos2d::Label::createWithSystemFont(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float, cocos2d::Size const&, cocos2d::TextHAlignment, cocos2d::TextVAlignment) */

Label * cocos2d::Label::createWithSystemFont
                  (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,float *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  Label *this;
  float fVar1;
  float fVar2;
  
  this = operator_new(0x6a0,(nothrow_t *)&std::nothrow);
  if (this != (Label *)0x0) {
    Label(this,param_5,param_6);
    (**(code **)(*(long *)this + 0x560))(this,param_2);
    (**(code **)(*(long *)this + 0x570))(param_1_00,this);
    fVar1 = *param_4;
    fVar2 = 0.0;
    if (*(int *)(this + 0x684) != 3) {
      fVar2 = param_4[1];
    }
    if ((fVar2 != *(float *)(this + 0x44c)) || (*(float *)(this + 0x448) != fVar1)) {
      *(float *)(this + 0x448) = fVar1;
      *(float *)(this + 0x44c) = fVar2;
      *(float *)(this + 0x440) = fVar1;
      *(float *)(this + 0x444) = fVar2;
      *(float *)(this + 0x43c) = fVar1;
      this[0x30c] = (Label)0x1;
      if ((*(int *)(this + 0x684) == 2) && (0.0 < *(float *)(this + 0x688))) {
        restoreFontSize(this);
      }
    }
    (**(code **)(*(long *)this + 0x588))(this,param_1);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

