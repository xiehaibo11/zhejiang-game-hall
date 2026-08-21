
/* fairygui::GLoader3D::setVerticalAlign(cocos2d::TextVAlignment) */

void __thiscall fairygui::GLoader3D::setVerticalAlign(GLoader3D *this,int param_2)

{
  if (*(int *)(this + 500) == param_2) {
    return;
  }
  *(int *)(this + 500) = param_2;
                    /* catch() { ... } // from try @ 00a80334 with catch @ 00a8036c */
  updateLayout(this);
  return;
}

