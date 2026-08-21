
/* fairygui::GLoader::setFill(fairygui::LoaderFillType) */

void __thiscall fairygui::GLoader::setFill(GLoader *this,int param_2)

{
  if (*(int *)(this + 0x1fc) == param_2) {
    return;
  }
  *(int *)(this + 0x1fc) = param_2;
  updateLayout(this);
  return;
}

