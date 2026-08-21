
/* cocos2d::EventListenerCustom::checkAvailable() */

bool __thiscall cocos2d::EventListenerCustom::checkAvailable(EventListenerCustom *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = EventListener::checkAvailable((EventListener *)this);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(this + 0xc0) != 0;
  }
  return bVar1;
}

