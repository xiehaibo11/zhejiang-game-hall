
/* cocos2d::PhysicsSprite3D::syncNodeToPhysics() */

void __thiscall cocos2d::PhysicsSprite3D::syncNodeToPhysics(PhysicsSprite3D *this)

{
  if (*(Physics3DComponent **)(this + 0x460) != (Physics3DComponent *)0x0) {
    Physics3DComponent::syncNodeToPhysics(*(Physics3DComponent **)(this + 0x460));
    return;
  }
  return;
}

