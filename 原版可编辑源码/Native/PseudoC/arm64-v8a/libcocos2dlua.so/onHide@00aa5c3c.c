
/* fairygui::Window::onHide() */

void __thiscall fairygui::Window::onHide(Window *this)

{
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,0x66,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

