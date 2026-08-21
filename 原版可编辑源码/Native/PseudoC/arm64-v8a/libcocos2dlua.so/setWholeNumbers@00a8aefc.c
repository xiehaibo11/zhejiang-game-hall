
/* fairygui::GSlider::setWholeNumbers(bool) */

void __thiscall fairygui::GSlider::setWholeNumbers(GSlider *this,bool param_1)

{
  double dVar1;
  
                    /* try { // try from 00a8af00 to 00b8af9b has its CatchHandler @ 00a8adb4 */
  if (this[0x2a5] == (GSlider)param_1) {
    return;
  }
  this[0x2a5] = (GSlider)param_1;
  dVar1 = (double)NEON_fminnm(*(double *)(this + 0x298) / *(double *)(this + 0x290),
                              0x3ff0000000000000);
  updateWithPercent(this,(float)dVar1,false);
  return;
}

