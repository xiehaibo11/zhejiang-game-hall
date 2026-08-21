
/* fairygui::Window::onEnter() */

void __thiscall fairygui::Window::onEnter(Window *this)

{
  GComponent::onEnter((GComponent *)this);
  if (this[0x2d8] != (Window)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00aa5bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xf0))(this);
    return;
  }
  initWindow(this);
  return;
}

