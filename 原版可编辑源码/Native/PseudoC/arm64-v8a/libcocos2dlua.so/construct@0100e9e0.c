
/* cocos2d::PhysicsWorld::construct(cocos2d::Scene*) */

long * cocos2d::PhysicsWorld::construct(Scene *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = operator_new(0x150,(nothrow_t *)&std::nothrow);
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(plVar1 + 2) = 0x3f800000;
    plVar1[1] = -0x3d3c000000000000;
    *(undefined1 *)(plVar1 + 0xe) = 1;
    *(undefined8 *)((long)plVar1 + 0x14) = 1;
    plVar1[4] = 1;
    *(undefined4 *)((long)plVar1 + 0x1c) = 0;
    plVar1[5] = 0;
    *(undefined1 *)(plVar1 + 6) = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    plVar1[0xc] = 0;
    plVar1[0xd] = 0;
    plVar1[0xf] = 0;
    *(undefined4 *)(plVar1 + 0x10) = 0;
    plVar1[0x22] = 0;
    plVar1[0x28] = 0;
    plVar1[0x1d] = 0;
    plVar1[9] = 0;
    plVar1[10] = (long)(plVar1 + 10);
    plVar1[0xb] = (long)(plVar1 + 10);
    plVar1[0x1c] = 0;
    plVar1[0x1b] = 0;
    plVar1[0x1a] = 0;
    plVar1[0x19] = 0;
    plVar1[0x18] = 0;
    plVar1[0x17] = 0;
    plVar1[0x16] = 0;
    plVar1[0x15] = 0;
    plVar1[0x14] = 0;
    plVar1[0x13] = 0;
    *plVar1 = (long)&PTR_addJoint_01726358;
    plVar1[0x12] = 0;
    plVar1[0x11] = 0;
    lVar2 = cpHastySpaceNew();
    plVar1[5] = lVar2;
    cpHastySpaceSetThreads(lVar2,0);
    if (plVar1[5] == 0) {
      (**(code **)(*plVar1 + 0xb8))(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      cpSpaceSetGravity((int)plVar1[1],*(undefined4 *)((long)plVar1 + 0xc));
      lVar2 = cpSpaceAddDefaultCollisionHandler(plVar1[5]);
      *(long **)(lVar2 + 0x30) = plVar1;
      *(code **)(lVar2 + 0x18) = PhysicsWorldCallback::collisionPreSolveCallbackFunc;
      *(code **)(lVar2 + 0x10) = PhysicsWorldCallback::collisionBeginCallbackFunc;
      *(code **)(lVar2 + 0x28) = PhysicsWorldCallback::collisionSeparateCallbackFunc;
      *(code **)(lVar2 + 0x20) = PhysicsWorldCallback::collisionPostSolveCallbackFunc;
      plVar1[0xd] = (long)param_1;
      lVar2 = (**(code **)(*(long *)param_1 + 0x388))(param_1);
      plVar1[0x11] = lVar2;
    }
  }
  return plVar1;
}

