
/* fairygui::GProgressBar::setMin(double) */

void __thiscall fairygui::GProgressBar::setMin(GProgressBar *this,double param_1)

{
  if (*(double *)(this + 0x280) != param_1) {
    *(double *)(this + 0x280) = param_1;
    update(this,*(double *)(this + 0x290));
    return;
  }
  return;
}

