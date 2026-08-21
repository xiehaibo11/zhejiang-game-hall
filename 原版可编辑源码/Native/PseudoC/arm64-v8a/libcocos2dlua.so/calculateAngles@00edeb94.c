
/* cocos2d::RotateTo::calculateAngles(float&, float&, float) */

void __thiscall
cocos2d::RotateTo::calculateAngles(RotateTo *this,float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 00edeb20 with catch @ 00edebb8 */
  fVar2 = 360.0;
  if (*param_1 <= 0.0) {
    fVar2 = -360.0;
  }
  fVar1 = fmodf(*param_1,fVar2);
  *param_1 = fVar1;
  fVar1 = param_3 - fVar1;
  fVar2 = fVar1 + -360.0;
  if (fVar1 <= 180.0) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 + 360.0;
  if (-180.0 <= fVar2) {
    fVar1 = fVar2;
  }
  *param_2 = fVar1;
  return;
}

