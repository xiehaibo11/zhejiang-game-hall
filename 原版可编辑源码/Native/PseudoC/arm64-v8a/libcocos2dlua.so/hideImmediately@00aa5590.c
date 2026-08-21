
/* fairygui::Window::hideImmediately() */

void __thiscall fairygui::Window::hideImmediately(Window *this)

{
  GRoot::hideWindowImmediately(GRoot::_inst,this);
  return;
}

