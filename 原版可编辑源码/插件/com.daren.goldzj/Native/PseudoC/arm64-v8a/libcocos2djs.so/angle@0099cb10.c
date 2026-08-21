
/* cocos2d::Vec3::angle(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void cocos2d::Vec3::angle(Vec3 *param_1,Vec3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* try { // try from 0099cb10 to 00a9cbf3 has its CatchHandler @ 0099c9a8 */
  fVar1 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar5 = *(float *)param_2;
  fVar7 = *(float *)param_1;
  fVar9 = fVar1 * fVar3 - fVar4 * fVar6;
  fVar8 = fVar4 * fVar5 - fVar3 * fVar7;
  fVar2 = fVar6 * fVar7 - fVar1 * fVar5;
  atan2f(SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar8 * fVar8) + 1e-37,
         fVar3 * fVar4 + fVar1 * fVar6 + fVar5 * fVar7);
  return;
}

