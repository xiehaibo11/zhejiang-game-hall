
/* cocos2d::tweenfunc::circEaseInOut(float) */

float cocos2d::tweenfunc::circEaseInOut(float param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_1 + param_1;
  bVar1 = 1.0 <= fVar2;
  fVar3 = fVar2 * fVar2;
  if (bVar1) {
    fVar3 = (fVar2 + -2.0) * (fVar2 + -2.0);
  }
  fVar2 = -1.0;
  if (bVar1) {
    fVar2 = 1.0;
  }
  fVar4 = -0.5;
  if (bVar1) {
    fVar4 = 0.5;
  }
  return (SQRT(1.0 - fVar3) + fVar2) * fVar4;
}

