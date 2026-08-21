
/* cocos2d::PUDoScaleEventHandler::copyAttributesTo(cocos2d::PUEventHandler*) */

void __thiscall
cocos2d::PUDoScaleEventHandler::copyAttributesTo
          (PUDoScaleEventHandler *this,PUEventHandler *param_1)

{
  PUEventHandler::copyAttributesTo((PUEventHandler *)this,param_1);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(this + 0x6c);
  return;
}

