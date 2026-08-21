
/* fairygui::Bounce::easeInOut(float, float) */

float fairygui::Bounce::easeInOut(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1 < param_2 * 0.5) {
    fVar1 = (param_2 - (param_1 + param_1)) / param_2;
    if (0.36363637 <= fVar1) {
      if (0.72727275 <= fVar1) {
        if (0.90909094 <= fVar1) {
          fVar1 = (fVar1 + -0.95454544) * (fVar1 + -0.95454544) * 7.5625;
          fVar2 = 0.984375;
        }
        else {
          fVar1 = (fVar1 + -0.8181818) * (fVar1 + -0.8181818) * 7.5625;
          fVar2 = 0.9375;
        }
      }
      else {
        fVar1 = (fVar1 + -0.54545456) * (fVar1 + -0.54545456) * 7.5625;
        fVar2 = 0.75;
      }
      fVar1 = fVar1 + fVar2;
    }
    else {
      fVar1 = fVar1 * fVar1 * 7.5625;
    }
    return (1.0 - fVar1) * 0.5;
  }
  fVar1 = ((param_1 + param_1) - param_2) / param_2;
  if (0.36363637 <= fVar1) {
    if (0.72727275 <= fVar1) {
      if (0.90909094 <= fVar1) {
        fVar1 = (fVar1 + -0.95454544) * (fVar1 + -0.95454544) * 7.5625;
        fVar2 = 0.984375;
      }
      else {
        fVar1 = (fVar1 + -0.8181818) * (fVar1 + -0.8181818) * 7.5625;
        fVar2 = 0.9375;
      }
    }
    else {
      fVar1 = (fVar1 + -0.54545456) * (fVar1 + -0.54545456) * 7.5625;
      fVar2 = 0.75;
    }
    fVar1 = fVar1 + fVar2;
  }
  else {
    fVar1 = fVar1 * fVar1 * 7.5625;
  }
  return fVar1 * 0.5 + 0.5;
}

