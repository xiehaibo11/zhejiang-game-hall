
/* fairygui::ScrollPane::setViewWidth(float) */

void __thiscall fairygui::ScrollPane::setViewWidth(ScrollPane *this,float param_1)

{
  GObject *this_00;
  float fVar1;
  
  this_00 = *(GObject **)(this + 0xf8);
  fVar1 = *(float *)(this_00 + 0x238) + param_1 + *(float *)(this_00 + 0x240);
  if ((*(long *)(this + 0x118) != 0) && (this[0x59] == (ScrollPane)0x0)) {
    fVar1 = fVar1 + *(float *)(*(long *)(this + 0x118) + 200);
  }
  GObject::setSize(this_00,fVar1,*(float *)(this_00 + 0xd4),false);
  return;
}

