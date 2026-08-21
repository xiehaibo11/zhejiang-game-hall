
/* cocos2d::Label::initWithTTF(cocos2d::_ttfConfig const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::TextHAlignment,
   int) */

undefined8 __thiscall
cocos2d::Label::initWithTTF
          (Label *this,undefined8 param_1,undefined8 param_2,undefined8 param_4,int param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FileUtils::getInstance();
  uVar2 = (**(code **)(*plVar1 + 0x128))(plVar1,param_1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = (**(code **)(*(long *)this + 0x530))(this,param_1), (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    if ((*(float *)(this + 0x448) == 0.0) && (*(float *)(this + 0x43c) != (float)param_5)) {
      *(float *)(this + 0x43c) = (float)param_5;
      this[0x30c] = (Label)0x1;
    }
    (**(code **)(*(long *)this + 0x588))(this,param_2);
    uVar3 = 1;
  }
  return uVar3;
}

