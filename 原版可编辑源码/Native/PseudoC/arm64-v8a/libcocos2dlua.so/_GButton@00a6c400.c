
/* fairygui::GButton::~GButton() */

void __thiscall fairygui::GButton::~GButton(GButton *this)

{
  ~GButton(this);
  operator_delete(this);
  return;
}

