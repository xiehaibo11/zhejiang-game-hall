
/* cocostudio::InputDelegate::~InputDelegate() */

void __thiscall cocostudio::InputDelegate::~InputDelegate(InputDelegate *this)

{
  long lVar1;
  EventDispatcher *this_00;
  
  *(undefined ***)this = &PTR__InputDelegate_016ca250;
  lVar1 = cocos2d::Director::getInstance();
  this_00 = *(EventDispatcher **)(lVar1 + 0xb0);
  cocos2d::EventDispatcher::removeEventListener(this_00,*(EventListener **)(this + 0x10));
  cocos2d::EventDispatcher::removeEventListener(this_00,*(EventListener **)(this + 0x30));
  cocos2d::EventDispatcher::removeEventListener(this_00,*(EventListener **)(this + 0x20));
  cocos2d::Device::setAccelerometerEnabled(false);
  operator_delete(this);
  return;
}

