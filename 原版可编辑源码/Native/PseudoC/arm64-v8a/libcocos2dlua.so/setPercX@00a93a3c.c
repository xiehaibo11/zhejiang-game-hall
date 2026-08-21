
/* fairygui::ScrollPane::setPercX(float, bool) */

void __thiscall fairygui::ScrollPane::setPercX(ScrollPane *this,float param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  
  GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8));
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar1;
  }
  setPosX(this,fVar2 * *(float *)(this + 0x74),param_2);
  return;
}

