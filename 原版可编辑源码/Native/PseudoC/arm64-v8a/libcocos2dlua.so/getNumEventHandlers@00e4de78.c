
/* cocos2d::PUObserver::getNumEventHandlers() const */

long __thiscall cocos2d::PUObserver::getNumEventHandlers(PUObserver *this)

{
  return *(long *)(this + 0x88) - *(long *)(this + 0x80) >> 3;
}

