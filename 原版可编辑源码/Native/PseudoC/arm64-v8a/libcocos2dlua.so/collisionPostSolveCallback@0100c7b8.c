
/* cocos2d::PhysicsWorld::collisionPostSolveCallback(cocos2d::PhysicsContact&) */

void __thiscall
cocos2d::PhysicsWorld::collisionPostSolveCallback(PhysicsWorld *this,PhysicsContact *param_1)

{
  if (param_1[0x74] != (PhysicsContact)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 3;
    *(PhysicsWorld **)(param_1 + 0x58) = this;
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0x88),(Event *)param_1);
    return;
  }
  return;
}

