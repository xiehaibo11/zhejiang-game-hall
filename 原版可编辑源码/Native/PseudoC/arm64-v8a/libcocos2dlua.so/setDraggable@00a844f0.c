
/* fairygui::GObject::setDraggable(bool) */

void __thiscall fairygui::GObject::setDraggable(GObject *this,bool param_1)

{
  if (this[0xfa] == (GObject)param_1) {
    return;
  }
  this[0xfa] = (GObject)param_1;
  initDrag(this);
  return;
}

