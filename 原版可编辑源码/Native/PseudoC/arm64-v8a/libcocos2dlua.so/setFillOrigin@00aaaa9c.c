
/* fairygui::FUISprite::setFillOrigin(fairygui::FillOrigin) */

void __thiscall fairygui::FUISprite::setFillOrigin(FUISprite *this,int param_2)

{
  if (*(int *)(this + 0x534) != param_2) {
    *(int *)(this + 0x534) = param_2;
    if (*(int *)(this + 0x530) != 0) {
                    /* try { // try from 00aaaab8 to 00baab07 has its CatchHandler @ 00aaaab8
                       catch() { ... } // from try @ 00aaaab8 with catch @ 00aaaab8
                       catch() { ... } // from try @ 00aaab70 with catch @ 00aaaab8
                       catch() { ... } // from try @ 00aaabb4 with catch @ 00aaaab8 */
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

