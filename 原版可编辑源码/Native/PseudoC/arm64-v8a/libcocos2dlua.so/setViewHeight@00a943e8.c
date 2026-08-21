
/* fairygui::ScrollPane::setViewHeight(float) */

void __thiscall fairygui::ScrollPane::setViewHeight(ScrollPane *this,float param_1)

{
  GObject *this_00;
  float fVar1;
  
  this_00 = *(GObject **)(this + 0xf8);
  fVar1 = *(float *)(this_00 + 0x23c) + param_1 + *(float *)(this_00 + 0x244);
  if ((*(long *)(this + 0x110) != 0) && (this[0x59] == (ScrollPane)0x0)) {
    fVar1 = fVar1 + *(float *)(*(long *)(this + 0x110) + 0xcc);
  }
  GObject::setSize(this_00,*(float *)(this_00 + 0xd0),fVar1,false);
  return;
}

