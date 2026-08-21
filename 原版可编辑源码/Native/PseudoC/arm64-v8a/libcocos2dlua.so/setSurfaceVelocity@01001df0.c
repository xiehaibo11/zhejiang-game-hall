
/* cocos2d::PhysicsContactPreSolve::setSurfaceVelocity(cocos2d::Vec2 const&) */

void __thiscall
cocos2d::PhysicsContactPreSolve::setSurfaceVelocity(PhysicsContactPreSolve *this,Vec2 *param_1)

{
  cpArbiterSetSurfaceVelocity
            (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined8 *)this);
  return;
}

