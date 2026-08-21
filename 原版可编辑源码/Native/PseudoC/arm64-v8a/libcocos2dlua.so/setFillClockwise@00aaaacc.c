
/* fairygui::FUISprite::setFillClockwise(bool) */

void __thiscall fairygui::FUISprite::setFillClockwise(FUISprite *this,bool param_1)

{
  if (this[0x53c] != (FUISprite)param_1) {
    this[0x53c] = (FUISprite)param_1;
    if (*(int *)(this + 0x530) != 0) {
      if (*(int *)(this + 0x530) - 1U < 2) {
        updateBar(this);
        return;
      }
      updateRadial(this);
      return;
    }
  }
  return;
}

