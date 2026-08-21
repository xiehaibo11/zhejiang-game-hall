
/* cocos2d::Frustum::initFrustum(cocos2d::Camera const*) */

undefined8 __thiscall cocos2d::Frustum::initFrustum(Frustum *this,Camera *param_1)

{
  this[0x61] = (Frustum)0x1;
  createPlane(this,param_1);
  return 1;
}

