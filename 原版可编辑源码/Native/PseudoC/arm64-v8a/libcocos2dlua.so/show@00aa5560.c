
/* fairygui::Window::show() */

void __thiscall fairygui::Window::show(Window *this)

{
  GRoot::showWindow(GRoot::_inst,this);
  return;
}

