
/* fairygui::ScrollPane::isRightMost() const */

bool __thiscall fairygui::ScrollPane::isRightMost(ScrollPane *this)

{
  return *(float *)(this + 0x5c) == *(float *)(this + 0x74) || *(float *)(this + 0x74) == 0.0;
}

