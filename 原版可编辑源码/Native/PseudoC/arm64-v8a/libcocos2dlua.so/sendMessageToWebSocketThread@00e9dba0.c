
/* cocos2d::network::WsThreadHelper::sendMessageToWebSocketThread(cocos2d::network::WsMessage*) */

void __thiscall
cocos2d::network::WsThreadHelper::sendMessageToWebSocketThread
          (WsThreadHelper *this,WsMessage *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  std::__ndk1::mutex::lock((mutex *)(this + 8));
  plVar3 = *(long **)this;
  plVar1 = operator_new(0x18);
  plVar1[1] = (long)plVar3;
  plVar1[2] = (long)param_1;
  lVar2 = *plVar3;
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *plVar3 = (long)plVar1;
  plVar3[2] = plVar3[2] + 1;
  std::__ndk1::mutex::unlock((mutex *)(this + 8));
  return;
}

