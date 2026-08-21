
/* cocos2d::OBB::projectPoint(cocos2d::Vec3 const&, cocos2d::Vec3 const&) const */

float __thiscall cocos2d::OBB::projectPoint(OBB *this,Vec3 *param_1,Vec3 *param_2)

{
  float fVar1;
  
  fVar1 = (float)Vec3::dot(param_2,param_1);
  return fVar1 * SQRT(*(float *)param_1 * *(float *)param_1 +
                      *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
                      *(float *)(param_1 + 8) * *(float *)(param_1 + 8));
}

