
/* fairygui::Window::onDragStart(fairygui::EventContext*) */

void __thiscall fairygui::Window::onDragStart(Window *this,EventContext *param_1)

{
  param_1[0x29] = (EventContext)0x1;
  GObject::startDrag((int)this);
  return;
}

