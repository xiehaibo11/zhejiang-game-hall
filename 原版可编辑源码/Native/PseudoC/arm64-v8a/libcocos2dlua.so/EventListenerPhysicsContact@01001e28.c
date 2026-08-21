
/* cocos2d::EventListenerPhysicsContact::EventListenerPhysicsContact() */

void __thiscall
cocos2d::EventListenerPhysicsContact::EventListenerPhysicsContact(EventListenerPhysicsContact *this)

{
  EventListenerCustom::EventListenerCustom((EventListenerCustom *)this);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined ***)this = &PTR__EventListenerPhysicsContactWithGroup_01724ec8;
  *(undefined8 *)(this + 0x180) = 0;
  return;
}

