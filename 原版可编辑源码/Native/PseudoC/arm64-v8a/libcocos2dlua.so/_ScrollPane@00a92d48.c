
/* fairygui::ScrollPane::~ScrollPane() */

void __thiscall fairygui::ScrollPane::~ScrollPane(ScrollPane *this)

{
  ~ScrollPane(this);
  operator_delete(this);
  return;
}

