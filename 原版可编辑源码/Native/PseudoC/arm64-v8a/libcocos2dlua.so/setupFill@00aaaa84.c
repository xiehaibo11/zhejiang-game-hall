
/* fairygui::FUISprite::setupFill() */

void __thiscall fairygui::FUISprite::setupFill(FUISprite *this)

{
  if (*(int *)(this + 0x530) - 1U < 2) {
    updateBar(this);
    return;
  }
  updateRadial(this);
  return;
}

