
/* cocos2d::EventDispatcher::removeEventListenersForType(cocos2d::EventListener::Type) */

void __thiscall
cocos2d::EventDispatcher::removeEventListenersForType(EventDispatcher *this,int param_2)

{
  if (param_2 - 1U < 5) {
    removeEventListenersForListenerID
              (this,(basic_string *)(&PTR_LISTENER_ID_01722fd8)[(int)(param_2 - 1U)]);
    return;
  }
  return;
}

