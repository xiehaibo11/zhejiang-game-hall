
/* fairygui::GRoot::onEnter() */

void __thiscall fairygui::GRoot::onEnter(GRoot *this)

{
  GComponent::onEnter((GComponent *)this);
  _inst = this;
  return;
}

