
/* cocos2d::Rect::intersectsCircle(cocos2d::Vec2 const&, float) const */

bool __thiscall cocos2d::Rect::intersectsCircle(Rect *this,Vec2 *param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(this + 8) * 0.5;
  bVar1 = false;
  if (ABS(*(float *)param_1 - (*(float *)this + fVar2)) <= fVar2 + param_2) {
    fVar3 = *(float *)(this + 0xc) * 0.5;
    if (ABS(*(float *)(param_1 + 4) - (*(float *)(this + 4) + fVar3)) <= fVar3 + param_2) {
      fVar4 = ABS((*(float *)param_1 - *(float *)this) - fVar2);
      bVar1 = true;
      if ((fVar2 < fVar4) &&
         (fVar5 = ABS((*(float *)(param_1 + 4) - *(float *)(this + 4)) - fVar3), fVar3 < fVar5)) {
        fVar4 = fVar4 - fVar2;
        fVar5 = fVar5 - fVar3;
        bVar1 = fVar4 * fVar4 + fVar5 * fVar5 <= param_2 * param_2;
      }
    }
  }
  return bVar1;
}

