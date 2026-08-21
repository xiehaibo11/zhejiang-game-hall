
/* cocos2d::PUDoEnableComponentEventHandler::PUDoEnableComponentEventHandler() */

void __thiscall
cocos2d::PUDoEnableComponentEventHandler::PUDoEnableComponentEventHandler
          (PUDoEnableComponentEventHandler *this)

{
  PUEventHandler::PUEventHandler((PUEventHandler *)this);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x88) = 3;
  *(undefined ***)this = &PTR__PUDoEnableComponentEventHandler_016f3250;
  this[0x8c] = (PUDoEnableComponentEventHandler)0x1;
  return;
}

