
/* cocos2d::EventListenerPhysicsContact::checkAvailable() */

undefined8 __thiscall
cocos2d::EventListenerPhysicsContact::checkAvailable(EventListenerPhysicsContact *this)

{
  if ((((*(long *)(this + 0xf0) == 0) && (*(long *)(this + 0x120) == 0)) &&
      (*(long *)(this + 0x150) == 0)) && (*(long *)(this + 0x180) == 0)) {
    return 0;
  }
  return 1;
}

