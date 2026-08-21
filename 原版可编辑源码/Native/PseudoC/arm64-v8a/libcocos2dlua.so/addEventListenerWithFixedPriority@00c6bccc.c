
/* cocostudio::TriggerMng::addEventListenerWithFixedPriority(cocos2d::EventListener*, int) */

void __thiscall
cocostudio::TriggerMng::addEventListenerWithFixedPriority
          (TriggerMng *this,EventListener *param_1,int param_2)

{
  cocos2d::EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(this + 0x38),param_1,param_2);
  return;
}

