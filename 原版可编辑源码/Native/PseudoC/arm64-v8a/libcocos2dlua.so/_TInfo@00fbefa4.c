
/* cocos2d::ObjectFactory::TInfo::~TInfo() */

void __thiscall cocos2d::ObjectFactory::TInfo::~TInfo(TInfo *this)

{
  TInfo *pTVar1;
  code *pcVar2;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,"",0
        );
  pTVar1 = *(TInfo **)(this + 0x40);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (this + 0x20 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
LAB_00fbeff4:
    (*pcVar2)();
  }
  else if (pTVar1 != (TInfo *)0x0) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
    goto LAB_00fbeff4;
  }
  pTVar1 = *(TInfo **)(this + 0x40);
  if (this + 0x20 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TInfo *)0x0) goto LAB_00fbf020;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fbf020:
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}

