
/* cocos2d::Label::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, cocos2d::Size
   const&, cocos2d::TextHAlignment, cocos2d::TextVAlignment) */

Ref * cocos2d::Label::create
                (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,undefined8 param_4,
                undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  ulong uVar2;
  Ref *pRVar3;
  
  plVar1 = (long *)FileUtils::getInstance();
  uVar2 = (**(code **)(*plVar1 + 0x128))(plVar1,param_2);
  if ((uVar2 & 1) != 0) {
    pRVar3 = operator_new(0x6a0,(nothrow_t *)&std::nothrow);
    if (pRVar3 != (Ref *)0x0) {
      Label((Label *)pRVar3,param_5,param_6);
      uVar2 = initWithTTF(param_1_00,pRVar3,param_1,param_2,param_4);
      if ((uVar2 & 1) == 0) {
        (**(code **)(*(long *)pRVar3 + 8))(pRVar3);
        pRVar3 = (Ref *)0x0;
      }
      else {
        Ref::autorelease(pRVar3);
      }
    }
    return pRVar3;
  }
  pRVar3 = (Ref *)createWithSystemFont(param_1_00,param_1,param_2,param_4,param_5,param_6);
  return pRVar3;
}

