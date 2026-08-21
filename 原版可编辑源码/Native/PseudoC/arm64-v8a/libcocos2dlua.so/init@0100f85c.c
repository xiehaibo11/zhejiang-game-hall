
/* cocos2d::Physics3DWorld::init(cocos2d::Physics3DWorldDes*) */

undefined8 __thiscall cocos2d::Physics3DWorld::init(Physics3DWorld *this,Physics3DWorldDes *param_1)

{
  long lVar1;
  btDefaultCollisionConfiguration *this_00;
  btCollisionDispatcher *this_01;
  btDbvtBroadphase *this_02;
  btSequentialImpulseConstraintSolver *this_03;
  undefined8 *puVar2;
  btDiscreteDynamicsWorld *this_04;
  Physics3DDebugDrawer *this_05;
  undefined4 uVar3;
  undefined4 in_s1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0xb8,(nothrow_t *)&std::nothrow);
  if (this_00 != (btDefaultCollisionConfiguration *)0x0) {
    local_68 = 0;
    local_60 = 0;
    uStack_50 = 0x100000000;
    local_58 = 0x100000001000;
    btDefaultCollisionConfiguration::btDefaultCollisionConfiguration
              (this_00,(btDefaultCollisionConstructionInfo *)&local_68);
  }
  *(btDefaultCollisionConfiguration **)(this + 0x68) = this_00;
  this_01 = operator_new(0x2900,(nothrow_t *)&std::nothrow);
  if (this_01 != (btCollisionDispatcher *)0x0) {
    btCollisionDispatcher::btCollisionDispatcher(this_01,(btCollisionConfiguration *)this_00);
  }
  *(btCollisionDispatcher **)(this + 0x70) = this_01;
  this_02 = operator_new(0x120,(nothrow_t *)&std::nothrow);
  if (this_02 != (btDbvtBroadphase *)0x0) {
    btDbvtBroadphase::btDbvtBroadphase(this_02,(btOverlappingPairCache *)0x0);
  }
  *(btDbvtBroadphase **)(this + 0x78) = this_02;
  this_03 = (btSequentialImpulseConstraintSolver *)btAlignedAllocInternal(0x138,0x10);
  btSequentialImpulseConstraintSolver::btSequentialImpulseConstraintSolver(this_03);
  *(btSequentialImpulseConstraintSolver **)(this + 0x80) = this_03;
  puVar2 = operator_new(8);
  *puVar2 = &PTR__btOverlappingPairCallback_01726470;
  *(undefined8 **)(this + 0x88) = puVar2;
  this_04 = (btDiscreteDynamicsWorld *)btAlignedAllocInternal(0x1c8,0x10);
  btDiscreteDynamicsWorld::btDiscreteDynamicsWorld
            (this_04,*(btDispatcher **)(this + 0x70),*(btBroadphaseInterface **)(this + 0x78),
             *(btConstraintSolver **)(this + 0x80),*(btCollisionConfiguration **)(this + 0x68));
  *(btDiscreteDynamicsWorld **)(this + 0x60) = this_04;
  uVar3 = convertVec3TobtVector3((Vec3 *)(param_1 + 4));
  local_68 = CONCAT44(in_s1,uVar3);
  (**(code **)(*(long *)this_04 + 0x90))(this_04,&local_68);
  if (*param_1 != (Physics3DWorldDes)0x0) {
    this_05 = operator_new(0x90,(nothrow_t *)&std::nothrow);
    if (this_05 != (Physics3DDebugDrawer *)0x0) {
      Physics3DDebugDrawer::Physics3DDebugDrawer(this_05);
    }
    *(Physics3DDebugDrawer **)(this + 0x90) = this_05;
    (**(code **)(**(long **)(this + 0x60) + 0x20))(*(long **)(this + 0x60),this_05);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

