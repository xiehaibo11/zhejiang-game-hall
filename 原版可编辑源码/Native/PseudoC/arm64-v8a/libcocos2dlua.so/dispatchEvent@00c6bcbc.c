
/* cocostudio::TriggerMng::dispatchEvent(cocos2d::EventCustom*) */

void __thiscall cocostudio::TriggerMng::dispatchEvent(TriggerMng *this,EventCustom *param_1)

{
  cocos2d::EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0x38),(Event *)param_1);
  return;
}

