
/* cocos2d::Vec2::rotateByAngle(cocos2d::Vec2 const&, float) const */

void cocos2d::Vec2::rotateByAngle(Vec2 *param_1,float param_2)

{
  float *in_x1;
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float fStack_14;
  
  fVar1 = *in_x1;
  fVar2 = in_x1[1];
  fVar3 = *(float *)param_1 - fVar1;
  fVar4 = *(float *)(param_1 + 4) - fVar2;
  sincosf(param_2,&fStack_14,&local_18);
  *in_x8 = fVar1 + (local_18 * fVar3 - fStack_14 * fVar4);
  in_x8[1] = fVar2 + fStack_14 * fVar3 + local_18 * fVar4;
  return;
}

