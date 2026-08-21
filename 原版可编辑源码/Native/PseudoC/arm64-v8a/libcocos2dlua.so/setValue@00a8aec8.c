
/* fairygui::GSlider::setValue(double) */

void __thiscall fairygui::GSlider::setValue(GSlider *this,double param_1)

{
  double dVar1;
  
                    /* try { // try from 00a8aecc to 00b8aeff has its CatchHandler @ 00a8af50 */
  if (*(double *)(this + 0x298) != param_1) {
    *(double *)(this + 0x298) = param_1;
    dVar1 = (double)NEON_fminnm(param_1 / *(double *)(this + 0x290),0x3ff0000000000000);
    updateWithPercent(this,(float)dVar1,false);
    return;
  }
  return;
}

