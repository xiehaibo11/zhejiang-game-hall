
/* fairygui::Window::doHideAnimation() */

void __thiscall fairygui::Window::doHideAnimation(Window *this)

{
  GRoot::hideWindowImmediately(GRoot::_inst,this);
  return;
}

