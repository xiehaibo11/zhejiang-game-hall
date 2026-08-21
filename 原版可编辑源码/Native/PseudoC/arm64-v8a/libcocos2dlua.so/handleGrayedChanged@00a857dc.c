
/* fairygui::GObject::handleGrayedChanged() */

void __thiscall fairygui::GObject::handleGrayedChanged(GObject *this)

{
  if ((*(long *)(this + 0xa0) != 0) && (*(char *)(*(long *)(this + 0xa0) + 0xf7) != '\0')) {
    this[0xf7] = (GObject)0x1;
    return;
  }
  this[0xf7] = this[0xf6];
  return;
}

