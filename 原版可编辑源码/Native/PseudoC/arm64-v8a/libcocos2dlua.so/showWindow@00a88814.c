
/* fairygui::GRoot::showWindow(fairygui::Window*) */

void __thiscall fairygui::GRoot::showWindow(GRoot *this,Window *param_1)

{
  GComponent::addChild((GComponent *)this,(GObject *)param_1);
  adjustModalLayer(this);
  return;
}

