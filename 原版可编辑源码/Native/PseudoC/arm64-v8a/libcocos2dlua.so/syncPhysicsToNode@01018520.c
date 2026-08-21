
/* cocos2d::PhysicsSprite3D::syncPhysicsToNode() */

void __thiscall cocos2d::PhysicsSprite3D::syncPhysicsToNode(PhysicsSprite3D *this)

{
  if (*(Physics3DComponent **)(this + 0x460) != (Physics3DComponent *)0x0) {
    Physics3DComponent::syncPhysicsToNode(*(Physics3DComponent **)(this + 0x460));
    return;
  }
  return;
}

