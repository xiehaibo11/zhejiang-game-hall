
/* fairygui::GSlider::setMax(double) */

void __thiscall fairygui::GSlider::setMax(GSlider *this,double param_1)

{
  double dVar1;
  
  if (*(double *)(this + 0x290) != param_1) {
    *(double *)(this + 0x290) = param_1;
                    /* try { // try from 00a8aeb4 to 00b8aec7 has its CatchHandler @ 00a8af4c */
    dVar1 = (double)NEON_fminnm(*(double *)(this + 0x298) / param_1,0x3ff0000000000000);
    updateWithPercent(this,(float)dVar1,false);
    return;
  }
  return;
}

