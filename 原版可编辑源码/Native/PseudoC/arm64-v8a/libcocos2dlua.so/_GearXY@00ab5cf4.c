
/* fairygui::GearXY::~GearXY() */

void __thiscall fairygui::GearXY::~GearXY(GearXY *this)

{
  ~GearXY(this);
  operator_delete(this);
  return;
}

