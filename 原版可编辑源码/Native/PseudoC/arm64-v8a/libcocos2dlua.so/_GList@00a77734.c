
/* fairygui::GList::~GList() */

void __thiscall fairygui::GList::~GList(GList *this)

{
  ~GList(this);
  operator_delete(this);
  return;
}

