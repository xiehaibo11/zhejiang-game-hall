
/* fairygui::GSlider::update() */

void __thiscall fairygui::GSlider::update(GSlider *this)

{
  double dVar1;
  
  dVar1 = (double)NEON_fminnm(*(double *)(this + 0x298) / *(double *)(this + 0x290),
                              0x3ff0000000000000);
  updateWithPercent(this,(float)dVar1,false);
  return;
}

