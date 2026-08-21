
/* fairygui::Window::bringToFront() */

void __thiscall fairygui::Window::bringToFront(Window *this)

{
  GRoot::bringToFront(GRoot::_inst,this);
  return;
}

