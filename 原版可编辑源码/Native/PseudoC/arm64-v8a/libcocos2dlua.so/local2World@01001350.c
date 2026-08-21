
/* cocos2d::PhysicsBody::local2World(cocos2d::Vec2 const&) */

void __thiscall cocos2d::PhysicsBody::local2World(PhysicsBody *this,Vec2 *param_1)

{
  cpBodyLocalToWorld(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
                     *(undefined8 *)(this + 0x88));
  return;
}

