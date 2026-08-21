
/* fairygui::GObject::onEnter() */

void __thiscall fairygui::GObject::onEnter(GObject *this)

{
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,0,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

