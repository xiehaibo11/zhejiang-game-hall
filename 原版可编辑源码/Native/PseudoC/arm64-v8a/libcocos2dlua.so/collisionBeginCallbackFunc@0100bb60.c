
/* cocos2d::PhysicsWorldCallback::collisionBeginCallbackFunc(cpArbiter*, cpSpace*,
   cocos2d::PhysicsWorld*) */

uint cocos2d::PhysicsWorldCallback::collisionBeginCallbackFunc
               (cpArbiter *param_1,cpSpace *param_2,PhysicsWorld *param_3)

{
  long lVar1;
  uint uVar2;
  PhysicsShape *pPVar3;
  PhysicsShape *pPVar4;
  long lVar5;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
                    /* try { // try from 0100bb60 to 0110bbe7 has its CatchHandler @ 0100b730 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cpArbiterGetShapes(param_1,&local_50,&local_58);
  pPVar3 = (PhysicsShape *)cpShapeGetUserData(local_50);
                    /* catch() { ... } // from try @ 0100bac8 with catch @ 0100bba0 */
  pPVar4 = (PhysicsShape *)cpShapeGetUserData(local_58);
  if ((pPVar3 == (PhysicsShape *)0x0) || (pPVar4 == (PhysicsShape *)0x0)) {
                    /* catch() { ... } // from try @ 0100bb54 with catch @ 0100bbc0 */
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/physics/CCPhysicsWorld.cpp",
                        "collisionBeginCallbackFunc",0x68);
  }
  lVar5 = PhysicsContact::construct(pPVar3,pPVar4);
  cpArbiterSetUserData(param_1,lVar5);
  *(cpArbiter **)(lVar5 + 0x80) = param_1;
  uVar2 = (**(code **)(*(long *)param_3 + 0x58))(param_3,lVar5);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

