
/* cocos2d::Camera::isVisibleInFrustum(cocos2d::AABB const*) const */

uint __thiscall cocos2d::Camera::isVisibleInFrustum(Camera *this,AABB *param_1)

{
  uint uVar1;
  
  if (this[0x494] != (Camera)0x0) {
    Frustum::initFrustum((Frustum *)(this + 0x430),this);
    this[0x494] = (Camera)0x0;
  }
  uVar1 = Frustum::isOutOfFrustum((Frustum *)(this + 0x430),param_1);
  return ~uVar1 & 1;
}

