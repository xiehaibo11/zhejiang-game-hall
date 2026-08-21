
/* cocos2d::extension::EventListenerAssetsManagerEx::checkAvailable() */

bool __thiscall
cocos2d::extension::EventListenerAssetsManagerEx::checkAvailable(EventListenerAssetsManagerEx *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = EventListener::checkAvailable((EventListener *)this);
  if (((uVar2 & 1) == 0) || (*(long *)(this + 0x100) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(this + 0xf0) != 0;
  }
  return bVar1;
}

