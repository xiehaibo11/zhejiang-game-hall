
/* fairygui::GProgressBar::handleSizeChanged() */

void __thiscall fairygui::GProgressBar::handleSizeChanged(GProgressBar *this)

{
  GComponent::handleSizeChanged((GComponent *)this);
  if (*(long *)(this + 0x2a8) != 0) {
    *(float *)(this + 0x2b8) = *(float *)(this + 200) - *(float *)(this + 0x2c0);
  }
  if (*(long *)(this + 0x2b0) != 0) {
    *(float *)(this + 700) = *(float *)(this + 0xcc) - *(float *)(this + 0x2c4);
  }
  if (this[0x98] != (GProgressBar)0x0) {
    return;
  }
  update(this,*(double *)(this + 0x290));
  return;
}

