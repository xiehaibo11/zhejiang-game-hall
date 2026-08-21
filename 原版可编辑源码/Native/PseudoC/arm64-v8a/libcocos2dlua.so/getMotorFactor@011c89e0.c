
/* btTypedConstraint::getMotorFactor(float, float, float, float, float) */

float btTypedConstraint::getMotorFactor
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  if (param_3 < param_2) {
    return 1.0;
  }
  if (param_2 != param_3) {
    fVar1 = param_4 / param_5;
    if (fVar1 < 0.0) {
      if ((param_2 <= param_1) && (param_1 < param_2 - fVar1)) {
        return (param_2 - param_1) / fVar1;
      }
      fVar1 = 0.0;
      if (param_2 <= param_1) {
        fVar1 = 1.0;
      }
      return fVar1;
    }
    if (0.0 < fVar1) {
      if ((param_1 <= param_3) && (param_3 - fVar1 < param_1)) {
        return (param_3 - param_1) / fVar1;
      }
      fVar1 = 0.0;
      if (param_1 <= param_3) {
        fVar1 = 1.0;
      }
      return fVar1;
    }
  }
  return 0.0;
}

