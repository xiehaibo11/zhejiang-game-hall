
/* fairygui::GLoader3D::setAlign(cocos2d::TextHAlignment) */

void __thiscall fairygui::GLoader3D::setAlign(GLoader3D *this,int param_2)

{
  if (*(int *)(this + 0x1f0) == param_2) {
    return;
  }
  *(int *)(this + 0x1f0) = param_2;
                    /* try { // try from 00a800cc to 00b801d3 has its CatchHandler @ 00a7ff7c */
  updateLayout(this);
  return;
}

