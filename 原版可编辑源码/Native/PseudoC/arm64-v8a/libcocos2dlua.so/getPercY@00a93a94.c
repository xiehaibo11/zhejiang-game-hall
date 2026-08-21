
/* fairygui::ScrollPane::getPercY() const */

float __thiscall fairygui::ScrollPane::getPercY(ScrollPane *this)

{
  if (*(float *)(this + 0x78) == 0.0) {
    return 0.0;
  }
  return *(float *)(this + 0x60) / *(float *)(this + 0x78);
}

