
/* cocos2d::PhysicsWorld::setDebugDrawMask(int) */

void __thiscall cocos2d::PhysicsWorld::setDebugDrawMask(PhysicsWorld *this,int param_1)

{
  if ((param_1 == 0) && (*(long **)(this + 0x78) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x78) + 0x270))();
    if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x78));
      *(undefined8 *)(this + 0x78) = 0;
    }
  }
  *(int *)(this + 0x80) = param_1;
  return;
}

