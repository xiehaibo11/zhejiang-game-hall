
/* cocos2d::EventListenerMouse::EventListenerMouse() */

void __thiscall cocos2d::EventListenerMouse::EventListenerMouse(EventListenerMouse *this)

{
  EventListener::EventListener((EventListener *)this);
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR__EventListenerMouse_017234c0;
  *(undefined8 *)(this + 0x150) = 0;
  return;
}

