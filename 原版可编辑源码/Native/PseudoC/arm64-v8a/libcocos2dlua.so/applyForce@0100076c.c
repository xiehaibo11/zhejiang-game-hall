
/* cocos2d::PhysicsBody::applyForce(cocos2d::Vec2 const&, cocos2d::Vec2 const&) */

void __thiscall cocos2d::PhysicsBody::applyForce(PhysicsBody *this,Vec2 *param_1,Vec2 *param_2)

{
  if ((this[0x90] != (PhysicsBody)0x0) && (*(float *)(this + 0x98) != 3.4028235e+38)) {
    cpBodyApplyForceAtLocalPoint
              (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)param_2,
               *(undefined4 *)(param_2 + 4),*(undefined8 *)(this + 0x88));
    return;
  }
  return;
}

