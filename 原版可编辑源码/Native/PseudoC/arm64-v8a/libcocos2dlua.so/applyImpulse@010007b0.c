
/* cocos2d::PhysicsBody::applyImpulse(cocos2d::Vec2 const&, cocos2d::Vec2 const&) */

void __thiscall cocos2d::PhysicsBody::applyImpulse(PhysicsBody *this,Vec2 *param_1,Vec2 *param_2)

{
  cpBodyApplyImpulseAtLocalPoint
            (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)param_2,
             *(undefined4 *)(param_2 + 4),*(undefined8 *)(this + 0x88));
  return;
}

