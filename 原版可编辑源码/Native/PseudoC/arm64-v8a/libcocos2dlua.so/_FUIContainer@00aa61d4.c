
/* fairygui::FUIContainer::~FUIContainer() */

void __thiscall fairygui::FUIContainer::~FUIContainer(FUIContainer *this)

{
  ~FUIContainer(this);
  operator_delete(this);
  return;
}

