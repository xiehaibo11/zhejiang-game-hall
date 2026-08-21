
/* fairygui::Window::onTouchBegin(fairygui::EventContext*) */

void fairygui::Window::onTouchBegin(EventContext *param_1)

{
  if ((*(long *)(param_1 + 0xa0) != 0) && (param_1[0x2b9] != (EventContext)0x0)) {
    GRoot::bringToFront(GRoot::_inst,(Window *)param_1);
    return;
  }
  return;
}

