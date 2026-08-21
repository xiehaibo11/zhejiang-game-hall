
/* fairygui::Window::onShown() */

void __thiscall fairygui::Window::onShown(Window *this)

{
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,0x65,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

