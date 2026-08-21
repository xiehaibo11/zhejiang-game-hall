
/* fairygui::GLoader::setAlign(cocos2d::TextHAlignment) */

void __thiscall fairygui::GLoader::setAlign(GLoader *this,int param_2)

{
  if (*(int *)(this + 0x1f0) == param_2) {
    return;
  }
  *(int *)(this + 0x1f0) = param_2;
                    /* try { // try from 00a7eb34 to 00b7eb43 has its CatchHandler @ 00a7eea4 */
  updateLayout(this);
  return;
}

