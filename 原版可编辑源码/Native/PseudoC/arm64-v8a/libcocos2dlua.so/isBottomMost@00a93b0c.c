
/* fairygui::ScrollPane::isBottomMost() const */

bool __thiscall fairygui::ScrollPane::isBottomMost(ScrollPane *this)

{
  return *(float *)(this + 0x60) == *(float *)(this + 0x78) || *(float *)(this + 0x78) == 0.0;
}

