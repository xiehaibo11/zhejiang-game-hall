
/* fairygui::GObject::~GObject() */

void __thiscall fairygui::GObject::~GObject(GObject *this)

{
  ~GObject(this);
  operator_delete(this);
  return;
}

