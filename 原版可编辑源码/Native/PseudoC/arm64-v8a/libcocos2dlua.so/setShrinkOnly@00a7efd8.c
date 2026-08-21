
/* fairygui::GLoader::setShrinkOnly(bool) */

void __thiscall fairygui::GLoader::setShrinkOnly(GLoader *this,bool param_1)

{
  if (this[0x200] == (GLoader)param_1) {
    return;
  }
  this[0x200] = (GLoader)param_1;
  updateLayout(this);
  return;
}

