
/* fairygui::GProgressBar::setMax(double) */

void __thiscall fairygui::GProgressBar::setMax(GProgressBar *this,double param_1)

{
  if (*(double *)(this + 0x288) != param_1) {
    *(double *)(this + 0x288) = param_1;
    update(this,*(double *)(this + 0x290));
    return;
  }
  return;
}

