
/* cocos2d::PhysicsWorld::init() */

bool __thiscall cocos2d::PhysicsWorld::init(PhysicsWorld *this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = cpHastySpaceNew();
  *(undefined8 *)(this + 0x28) = uVar1;
  cpHastySpaceSetThreads(uVar1,0);
  lVar2 = *(long *)(this + 0x28);
  if (lVar2 != 0) {
    cpSpaceSetGravity(*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
    lVar3 = cpSpaceAddDefaultCollisionHandler(*(undefined8 *)(this + 0x28));
    *(PhysicsWorld **)(lVar3 + 0x30) = this;
    *(code **)(lVar3 + 0x18) = PhysicsWorldCallback::collisionPreSolveCallbackFunc;
    *(code **)(lVar3 + 0x10) = PhysicsWorldCallback::collisionBeginCallbackFunc;
    *(code **)(lVar3 + 0x28) = PhysicsWorldCallback::collisionSeparateCallbackFunc;
    *(code **)(lVar3 + 0x20) = PhysicsWorldCallback::collisionPostSolveCallbackFunc;
  }
  return lVar2 != 0;
}

