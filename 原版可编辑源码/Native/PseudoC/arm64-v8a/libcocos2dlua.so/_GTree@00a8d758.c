
/* fairygui::GTree::~GTree() */

void __thiscall fairygui::GTree::~GTree(GTree *this)

{
  ~GTree(this);
  operator_delete(this);
  return;
}

