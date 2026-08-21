
/* fairygui::GLoader::setVerticalAlign(cocos2d::TextVAlignment) */

void __thiscall fairygui::GLoader::setVerticalAlign(GLoader *this,int param_2)

{
  if (*(int *)(this + 500) == param_2) {
    return;
  }
  *(int *)(this + 500) = param_2;
  updateLayout(this);
  return;
}

