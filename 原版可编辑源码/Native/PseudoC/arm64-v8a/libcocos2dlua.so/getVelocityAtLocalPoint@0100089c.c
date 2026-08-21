
/* cocos2d::PhysicsBody::getVelocityAtLocalPoint(cocos2d::Vec2 const&) */

void __thiscall cocos2d::PhysicsBody::getVelocityAtLocalPoint(PhysicsBody *this,Vec2 *param_1)

{
  cpBodyGetVelocityAtLocalPoint
            (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined8 *)(this + 0x88));
  return;
}

