
/* cocos2d::EventListenerPhysicsContactWithShapes::hitTest(cocos2d::PhysicsShape*,
   cocos2d::PhysicsShape*) */

bool __thiscall
cocos2d::EventListenerPhysicsContactWithShapes::hitTest
          (EventListenerPhysicsContactWithShapes *this,PhysicsShape *param_1,PhysicsShape *param_2)

{
  if ((*(PhysicsShape **)(this + 400) == param_1) && (*(PhysicsShape **)(this + 0x198) == param_2))
  {
    return true;
  }
  return *(PhysicsShape **)(this + 400) == param_2 && *(PhysicsShape **)(this + 0x198) == param_1;
}

