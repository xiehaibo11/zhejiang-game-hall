
/* fairygui::GRoot::isModalWaiting() */

void __thiscall fairygui::GRoot::isModalWaiting(GRoot *this)

{
  if (*(GObject **)(this + 0x298) != (GObject *)0x0) {
    GObject::onStage(*(GObject **)(this + 0x298));
    return;
  }
  return;
}

