
/* fairygui::GSlider::setMin(double) */

void __thiscall fairygui::GSlider::setMin(GSlider *this,double param_1)

{
  double dVar1;
  
  if (*(double *)(this + 0x288) != param_1) {
    *(double *)(this + 0x288) = param_1;
                    /* try { // try from 00a8ae80 to 00b8aeb3 has its CatchHandler @ 00a8af80 */
    dVar1 = (double)NEON_fminnm(*(double *)(this + 0x298) / *(double *)(this + 0x290),
                                0x3ff0000000000000);
    updateWithPercent(this,(float)dVar1,false);
    return;
  }
  return;
}

