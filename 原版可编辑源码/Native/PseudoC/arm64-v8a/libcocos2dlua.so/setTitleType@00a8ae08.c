
/* fairygui::GSlider::setTitleType(fairygui::ProgressTitleType) */

void __thiscall fairygui::GSlider::setTitleType(GSlider *this,int param_2)

{
  double dVar1;
  
  if (*(int *)(this + 0x2a0) == param_2) {
    return;
  }
  *(int *)(this + 0x2a0) = param_2;
  dVar1 = (double)NEON_fminnm(*(double *)(this + 0x298) / *(double *)(this + 0x290),
                              0x3ff0000000000000);
  updateWithPercent(this,(float)dVar1,false);
  return;
}

