
/* cocos2d::extension::EventListenerAssetsManagerEx::~EventListenerAssetsManagerEx() */

void __thiscall
cocos2d::extension::EventListenerAssetsManagerEx::~EventListenerAssetsManagerEx
          (EventListenerAssetsManagerEx *this)

{
  EventListenerAssetsManagerEx *pEVar1;
  code *pcVar2;
  
  pEVar1 = *(EventListenerAssetsManagerEx **)(this + 0xf0);
  *(undefined ***)this = &PTR__EventListenerAssetsManagerEx_016e82b8;
  if (this + 0xd0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00e086c0:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerAssetsManagerEx *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00e086c0;
  }
  pEVar1 = *(EventListenerAssetsManagerEx **)(this + 0xc0);
  *(undefined ***)this = &PTR__EventListenerCustom_01723268;
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListenerAssetsManagerEx *)0x0) goto LAB_00e08700;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00e08700:
  EventListener::~EventListener((EventListener *)this);
  return;
}

