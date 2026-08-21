
/* cocos2d::PhysicsBody::resetForces() */

void __thiscall cocos2d::PhysicsBody::resetForces(PhysicsBody *this)

{
  cpBodySetForce(0,0,*(undefined8 *)(this + 0x88));
  return;
}

