
/* fairygui::FUISprite::setFillMethod(fairygui::FillMethod) */

void __thiscall fairygui::FUISprite::setFillMethod(FUISprite *this,int param_2)

{
  if (*(int *)(this + 0x530) != param_2) {
    *(int *)(this + 0x530) = param_2;
    if (param_2 != 0) {
      if (param_2 - 1U < 2) {
        updateBar(this);
        return;
      }
      updateRadial(this);
      return;
    }
    if (*(void **)(this + 0x560) != (void *)0x0) {
      free(*(void **)(this + 0x560));
      *(undefined8 *)(this + 0x560) = 0;
    }
    if (*(void **)(this + 0x568) != (void *)0x0) {
      free(*(void **)(this + 0x568));
      *(undefined8 *)(this + 0x568) = 0;
    }
  }
  return;
}

