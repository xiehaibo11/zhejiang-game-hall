
/* cocos2d::PhysicsBody::getVelocityAtWorldPoint(cocos2d::Vec2 const&) */

void __thiscall cocos2d::PhysicsBody::getVelocityAtWorldPoint(PhysicsBody *this,Vec2 *param_1)

{
  cpBodyGetVelocityAtWorldPoint
            (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined8 *)(this + 0x88));
  return;
}

