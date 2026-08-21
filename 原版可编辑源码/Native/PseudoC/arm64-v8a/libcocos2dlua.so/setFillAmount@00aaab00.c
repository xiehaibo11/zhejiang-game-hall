
/* fairygui::FUISprite::setFillAmount(float) */

void __thiscall fairygui::FUISprite::setFillAmount(FUISprite *this,float param_1)

{
                    /* try { // try from 00aaab08 to 00baab6f has its CatchHandler @ 00aaabf4 */
  if (*(float *)(this + 0x538) != param_1) {
    *(float *)(this + 0x538) = param_1;
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

