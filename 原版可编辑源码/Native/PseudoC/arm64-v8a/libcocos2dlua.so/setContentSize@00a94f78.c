
/* fairygui::ScrollPane::setContentSize(float, float) */

void __thiscall fairygui::ScrollPane::setContentSize(ScrollPane *this,float param_1,float param_2)

{
  if ((*(float *)(this + 0x6c) == param_1) && (*(float *)(this + 0x70) == param_2)) {
    return;
  }
  *(float *)(this + 0x6c) = param_1;
  *(float *)(this + 0x70) = param_2;
  handleSizeChanged(this);
  return;
}

