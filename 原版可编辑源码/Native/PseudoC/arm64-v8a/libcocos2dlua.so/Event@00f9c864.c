
/* cocos2d::Event::Event(cocos2d::Event::Type) */

void __thiscall cocos2d::Event::Event(Event *this,undefined4 param_2)

{
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x24) = param_2;
  this[0x28] = (Event)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__Event_01722db0;
  return;
}

