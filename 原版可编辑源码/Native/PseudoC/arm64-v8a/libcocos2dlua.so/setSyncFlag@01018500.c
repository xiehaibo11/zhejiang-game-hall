
/* cocos2d::PhysicsSprite3D::setSyncFlag(cocos2d::Physics3DComponent::PhysicsSyncFlag) */

void cocos2d::PhysicsSprite3D::setSyncFlag(long param_1)

{
  if (*(long *)(param_1 + 0x460) != 0) {
    Physics3DComponent::setSyncFlag();
    return;
  }
  return;
}

