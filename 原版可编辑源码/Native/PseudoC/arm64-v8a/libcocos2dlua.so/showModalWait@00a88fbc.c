
/* fairygui::GRoot::showModalWait() */

void __thiscall fairygui::GRoot::showModalWait(GRoot *this)

{
  getModalWaitingPane(this);
  if (*(GObject **)(this + 0x298) != (GObject *)0x0) {
    GComponent::addChild((GComponent *)this,*(GObject **)(this + 0x298));
    return;
  }
  return;
}

