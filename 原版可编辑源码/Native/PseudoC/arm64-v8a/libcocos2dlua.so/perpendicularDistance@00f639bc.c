
/* cocos2d::AutoPolygon::perpendicularDistance(cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::Vec2 const&) */

float __thiscall
cocos2d::AutoPolygon::perpendicularDistance
          (AutoPolygon *this,Vec2 *param_1,Vec2 *param_2,Vec2 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)param_2;
  fVar3 = *(float *)param_3;
  if (fVar1 == fVar3) {
    return ABS(*(float *)param_1 - fVar3);
  }
  fVar2 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_3 + 4);
  if (fVar2 == fVar4) {
    return ABS(*(float *)(param_1 + 4) - fVar4);
  }
  fVar3 = (fVar4 - fVar2) / (fVar3 - fVar1);
  return ABS((fVar2 - fVar1 * fVar3) + (fVar3 * *(float *)param_1 - *(float *)(param_1 + 4))) /
         SQRT(fVar3 * fVar3 + 1.0);
}

