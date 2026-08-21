
/* fairygui::GObject::onTouchEnd(fairygui::EventContext*) */

void fairygui::GObject::onTouchEnd(EventContext *param_1)

{
  if (_draggingObject != param_1) {
    return;
  }
  _draggingObject = (EventContext *)0x0;
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)param_1,0x3e,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

