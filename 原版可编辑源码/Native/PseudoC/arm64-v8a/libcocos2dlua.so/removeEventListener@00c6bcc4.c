
/* cocostudio::TriggerMng::removeEventListener(cocos2d::EventListener*) */

void __thiscall cocostudio::TriggerMng::removeEventListener(TriggerMng *this,EventListener *param_1)

{
  cocos2d::EventDispatcher::removeEventListener(*(EventDispatcher **)(this + 0x38),param_1);
  return;
}

