
/* fairygui::GObject::onExit() */

void __thiscall fairygui::GObject::onExit(GObject *this)

{
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,1,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

