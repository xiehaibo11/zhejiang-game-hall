
/* fairygui::Window::onExit() */

void __thiscall fairygui::Window::onExit(Window *this)

{
  GObject *pGVar1;
  
  GComponent::onExit((GComponent *)this);
  pGVar1 = *(GObject **)(this + 0x298);
  *(undefined4 *)(this + 0x288) = 0;
  if ((pGVar1 != (GObject *)0x0) && (*(long *)(pGVar1 + 0xa0) != 0)) {
    GComponent::removeChild((GComponent *)this,pGVar1);
  }
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,0x66,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

