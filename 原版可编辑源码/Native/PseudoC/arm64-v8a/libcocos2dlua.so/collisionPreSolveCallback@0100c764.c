
/* cocos2d::PhysicsWorld::collisionPreSolveCallback(cocos2d::PhysicsContact&) */

bool __thiscall
cocos2d::PhysicsWorld::collisionPreSolveCallback(PhysicsWorld *this,PhysicsContact *param_1)

{
  PhysicsContact PVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1[0x74] != (PhysicsContact)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 2;
    *(PhysicsWorld **)(param_1 + 0x58) = this;
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0x88),(Event *)param_1);
                    /* try { // try from 0100c794 to 0110c80b has its CatchHandler @ 0100c5bc */
    PVar1 = param_1[0x75];
    param_1[0x75] = (PhysicsContact)0x1;
    bVar2 = PVar1 != (PhysicsContact)0x0;
  }
  return bVar2;
}

