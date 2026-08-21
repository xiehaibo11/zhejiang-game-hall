
/* cocos2d::PhysicsContact::init(cocos2d::PhysicsShape*, cocos2d::PhysicsShape*) */

undefined8 __thiscall
cocos2d::PhysicsContact::init(PhysicsContact *this,PhysicsShape *param_1,PhysicsShape *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (PhysicsShape *)0x0) && (param_2 != (PhysicsShape *)0x0)) {
    uVar1 = 1;
    *(PhysicsShape **)(this + 0x60) = param_1;
    *(PhysicsShape **)(this + 0x68) = param_2;
  }
  return uVar1;
}

