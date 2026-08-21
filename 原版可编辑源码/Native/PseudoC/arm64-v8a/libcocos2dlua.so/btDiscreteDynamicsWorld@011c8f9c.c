
/* btDiscreteDynamicsWorld::btDiscreteDynamicsWorld(btDispatcher*, btBroadphaseInterface*,
   btConstraintSolver*, btCollisionConfiguration*) */

void __thiscall
btDiscreteDynamicsWorld::btDiscreteDynamicsWorld
          (btDiscreteDynamicsWorld *this,btDispatcher *param_1,btBroadphaseInterface *param_2,
          btConstraintSolver *param_3,btCollisionConfiguration *param_4)

{
  btSequentialImpulseConstraintSolver *this_00;
  btSimulationIslandManager *this_01;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  btCollisionWorld::btCollisionWorld((btCollisionWorld *)this,param_1,param_2,param_4);
  *(undefined8 *)(this + 0x98) = 0x3c8888893e99999a;
  *(undefined8 *)(this + 0x90) = 0x3f8000003f19999a;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0xa0) = 0xa00000000;
  *(undefined8 *)(this + 0xb8) = 0x100000000;
  *(undefined8 *)(this + 0xb0) = 0x3f4ccccd3e4ccccd;
  *(undefined8 *)(this + 0xa8) = 0x3f80000041a00000;
  *(undefined8 *)(this + 0xd0) = 0x200000104;
  *(undefined8 *)(this + 0xd8) = 0x42c8000000000080;
  *(undefined4 *)(this + 0xe0) = 0x7149f2ca;
  *(undefined ***)this = &PTR__btDiscreteDynamicsWorld_0172d970;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(btConstraintSolver **)(this + 0x110) = param_3;
  *(undefined8 *)(this + 0x130) = 0;
  this[0x100] = (btDiscreteDynamicsWorld)0x1;
  this[0x138] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 200) = 0x3f59999a00000000;
  *(undefined8 *)(this + 0xc0) = 0x3dcccccdbd23d70a;
  *(undefined8 *)(this + 0x124) = 0;
  this[0x158] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x144) = 0;
  *(undefined2 *)(this + 0x17a) = 0;
  *(undefined8 *)(this + 0x160) = 0xc120000000000000;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  this[0x198] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x184) = 0;
  this[0x1a4] = (btDiscreteDynamicsWorld)0x1;
  this[0x1c0] = (btDiscreteDynamicsWorld)0x1;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1ac) = 0;
  if (param_3 == (btConstraintSolver *)0x0) {
    this_00 = (btSequentialImpulseConstraintSolver *)btAlignedAllocInternal(0x138,0x10);
    btSequentialImpulseConstraintSolver::btSequentialImpulseConstraintSolver(this_00);
    *(btSequentialImpulseConstraintSolver **)(this + 0x110) = this_00;
  }
  this[0x179] = (btDiscreteDynamicsWorld)(param_3 == (btConstraintSolver *)0x0);
  this_01 = (btSimulationIslandManager *)btAlignedAllocInternal(0x70,0x10);
  btSimulationIslandManager::btSimulationIslandManager(this_01);
  *(btSimulationIslandManager **)(this + 0x118) = this_01;
  this[0x178] = (btDiscreteDynamicsWorld)0x1;
  puVar1 = (undefined8 *)btAlignedAllocInternal(0x98,0x10);
  uVar2 = *(undefined8 *)(this + 0x110);
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = param_1;
  *(undefined1 *)(puVar1 + 10) = 1;
  puVar1[9] = 0;
  *(undefined4 *)((long)puVar1 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined1 *)(puVar1 + 0xe) = 1;
  puVar1[0xd] = 0;
  *(undefined4 *)((long)puVar1 + 0x5c) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 1;
  puVar1[0x11] = 0;
  *(undefined4 *)((long)puVar1 + 0x7c) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *puVar1 = &PTR__InplaceSolverIslandCallback_0172db28;
  puVar1[1] = 0;
  puVar1[2] = uVar2;
  puVar1[3] = 0;
  *(undefined8 **)(this + 0x108) = puVar1;
  return;
}

