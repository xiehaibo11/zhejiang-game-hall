
/* cocos2d::Label::createWithTTF(cocos2d::_ttfConfig const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::TextHAlignment,
   int) */

Ref * cocos2d::Label::createWithTTF
                (undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  Ref *this;
  long *plVar1;
  ulong uVar2;
  
  this = operator_new(0x6a0,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Label((Label *)this,param_3,0);
    plVar1 = (long *)FileUtils::getInstance();
    uVar2 = (**(code **)(*plVar1 + 0x128))(plVar1,param_1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = (**(code **)(*(long *)this + 0x530))(this,param_1), (uVar2 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00f0951c with catch @ 00f09600 */
                    /* catch() { ... } // from try @ 00f09484 with catch @ 00f09604 */
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

