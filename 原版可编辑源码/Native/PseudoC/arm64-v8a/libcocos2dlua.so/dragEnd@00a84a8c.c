
/* fairygui::GObject::dragEnd() */

void __thiscall fairygui::GObject::dragEnd(GObject *this)

{
  if (_draggingObject != this) {
    return;
  }
  this[0x1b8] = (GObject)0x0;
  _draggingObject = (GObject *)0x0;
  return;
}

