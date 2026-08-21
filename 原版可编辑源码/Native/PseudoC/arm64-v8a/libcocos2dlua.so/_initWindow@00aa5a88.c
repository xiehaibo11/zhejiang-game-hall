
/* fairygui::Window::_initWindow() */

void __thiscall fairygui::Window::_initWindow(Window *this)

{
  this[0x2d8] = (Window)0x1;
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,100,(void *)0x0,(Value *)&cocos2d::Value::Null);
  if (*(long *)(this + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xf0))(this);
    return;
  }
  return;
}

