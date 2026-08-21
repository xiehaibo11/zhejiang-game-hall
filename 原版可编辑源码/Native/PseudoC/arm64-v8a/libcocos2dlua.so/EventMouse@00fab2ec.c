
/* cocos2d::EventMouse::EventMouse(cocos2d::EventMouse::MouseEventType) */

void __thiscall cocos2d::EventMouse::EventMouse(EventMouse *this,undefined4 param_2)

{
  Event::Event((Event *)this,3);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (EventMouse)0x0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x38) = param_2;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined ***)this = &PTR__Event_01723618;
  *(undefined8 *)(this + 0x5c) = 0;
  return;
}

