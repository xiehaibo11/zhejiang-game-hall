
/* fairygui::Bounce::easeOut(float, float) */

float fairygui::Bounce::easeOut(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1 / param_2;
  if (fVar1 < 0.36363637) {
    return fVar1 * fVar1 * 7.5625;
  }
  if (fVar1 < 0.72727275) {
    return (fVar1 + -0.54545456) * (fVar1 + -0.54545456) * 7.5625 + 0.75;
  }
  if (fVar1 < 0.90909094) {
    return (fVar1 + -0.8181818) * (fVar1 + -0.8181818) * 7.5625 + 0.9375;
  }
  return (fVar1 + -0.95454544) * (fVar1 + -0.95454544) * 7.5625 + 0.984375;
}

