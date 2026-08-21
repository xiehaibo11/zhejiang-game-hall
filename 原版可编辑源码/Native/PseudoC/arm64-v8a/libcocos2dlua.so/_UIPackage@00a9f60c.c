
/* fairygui::UIPackage::~UIPackage() */

void __thiscall fairygui::UIPackage::~UIPackage(UIPackage *this)

{
  ~UIPackage(this);
  operator_delete(this);
  return;
}

