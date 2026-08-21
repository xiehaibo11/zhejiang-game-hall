
/* fairygui::GSlider::handleSizeChanged() */

void __thiscall fairygui::GSlider::handleSizeChanged(GSlider *this)

{
  double dVar1;
  
  GComponent::handleSizeChanged((GComponent *)this);
                    /* catch() { ... } // from try @ 00a8b2a0 with catch @ 00a8b338 */
                    /* catch() { ... } // from try @ 00a8b2b8 with catch @ 00a8b33c */
  if (*(long *)(this + 0x2b0) != 0) {
    *(float *)(this + 0x2c0) = *(float *)(this + 200) - *(float *)(this + 0x2c8);
  }
  if (*(long *)(this + 0x2b8) != 0) {
    *(float *)(this + 0x2c4) = *(float *)(this + 0xcc) - *(float *)(this + 0x2cc);
  }
                    /* catch() { ... } // from try @ 00a8b26c with catch @ 00a8b36c */
  if (this[0x98] != (GSlider)0x0) {
    return;
  }
  dVar1 = (double)NEON_fminnm(*(double *)(this + 0x298) / *(double *)(this + 0x290),
                              0x3ff0000000000000);
  updateWithPercent(this,(float)dVar1,false);
  return;
}

