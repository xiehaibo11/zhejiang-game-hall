
/* fairygui::ScrollPane::getPercX() const */

float __thiscall fairygui::ScrollPane::getPercX(ScrollPane *this)

{
  if (*(float *)(this + 0x74) == 0.0) {
    return 0.0;
  }
  return *(float *)(this + 0x5c) / *(float *)(this + 0x74);
}

