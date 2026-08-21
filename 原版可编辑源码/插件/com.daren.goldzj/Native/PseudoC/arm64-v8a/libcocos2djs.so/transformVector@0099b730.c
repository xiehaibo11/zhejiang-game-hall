
/* cocos2d::Mat4::transformVector(float, float, float, float, cocos2d::Vec3*) const */

void __thiscall
cocos2d::Mat4::transformVector
          (Mat4 *this,float param_1,float param_2,float param_3,float param_4,Vec3 *param_5)

{
  MathUtil::transformVec4((float *)this,param_1,param_2,param_3,param_4,(float *)param_5);
  return;
}

