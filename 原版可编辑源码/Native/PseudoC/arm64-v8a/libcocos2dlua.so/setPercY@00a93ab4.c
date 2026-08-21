
/* fairygui::ScrollPane::setPercY(float, bool) */

void __thiscall fairygui::ScrollPane::setPercY(ScrollPane *this,float param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  
  GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8));
                    /* try { // try from 00a93af8 to 00b93b4b has its CatchHandler @ 00a93af8
                       catch() { ... } // from try @ 00a93af8 with catch @ 00a93af8
                       catch() { ... } // from try @ 00a93bf0 with catch @ 00a93af8
                       catch() { ... } // from try @ 00a93c50 with catch @ 00a93af8 */
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar1;
  }
  setPosY(this,fVar2 * *(float *)(this + 0x78),param_2);
  return;
}

