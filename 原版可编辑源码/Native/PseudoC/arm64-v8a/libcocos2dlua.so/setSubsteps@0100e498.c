
/* cocos2d::PhysicsWorld::setSubsteps(int) */

void __thiscall cocos2d::PhysicsWorld::setSubsteps(PhysicsWorld *this,int param_1)

{
  if ((0 < param_1) && (*(int *)(this + 0x20) = param_1, param_1 != 1)) {
    *(undefined4 *)(this + 0x14) = 1;
  }
  return;
}

