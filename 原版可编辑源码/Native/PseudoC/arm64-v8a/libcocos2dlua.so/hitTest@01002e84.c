
/* cocos2d::EventListenerPhysicsContactWithGroup::hitTest(cocos2d::PhysicsShape*,
   cocos2d::PhysicsShape*) */

bool __thiscall
cocos2d::EventListenerPhysicsContactWithGroup::hitTest
          (EventListenerPhysicsContactWithGroup *this,PhysicsShape *param_1,PhysicsShape *param_2)

{
  if (*(int *)(param_1 + 0x88) == *(int *)(this + 400)) {
    return true;
  }
  return *(int *)(param_2 + 0x88) == *(int *)(this + 400);
}

