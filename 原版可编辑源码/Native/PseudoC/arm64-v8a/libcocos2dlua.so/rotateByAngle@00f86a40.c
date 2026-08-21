
/* cocos2d::Vec2::rotateByAngle(cocos2d::Vec2 const&, float) const */

float __thiscall cocos2d::Vec2::rotateByAngle(Vec2 *this,Vec2 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_38;
  float fStack_34;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  sincosf(param_2,&fStack_34,&local_38);
  return fVar3 + (local_38 * (fVar1 - fVar3) - fStack_34 * (fVar2 - fVar4));
}

