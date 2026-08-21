
/* cocos2d::PhysicsWorld::afterSimulation(cocos2d::Node*, cocos2d::Mat4 const&, float) */

void __thiscall
cocos2d::PhysicsWorld::afterSimulation(PhysicsWorld *this,Node *param_1,Mat4 *param_2,float param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Mat4 *pMVar3;
  long *plVar4;
  undefined8 *puVar5;
  float fVar6;
  Mat4 aMStack_98 [64];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pMVar3 = (Mat4 *)(**(code **)(*(long *)param_1 + 1000))(param_1);
  Mat4::Mat4(aMStack_98,param_2);
  Mat4::multiply(aMStack_98,pMVar3);
  fVar6 = (float)(**(code **)(*(long *)param_1 + 0x188))(param_1);
  if (*(PhysicsBody **)(param_1 + 0x2f0) != (PhysicsBody *)0x0) {
    PhysicsBody::afterSimulation(*(PhysicsBody **)(param_1 + 0x2f0),param_2,param_3);
  }
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  puVar5 = (undefined8 *)*plVar4;
  puVar1 = (undefined8 *)plVar4[1];
  if (puVar5 != puVar1) {
    do {
      afterSimulation(this,(Node *)*puVar5,aMStack_98,fVar6 + param_3);
      puVar5 = puVar5 + 1;
    } while (puVar1 != puVar5);
  }
  Mat4::~Mat4(aMStack_98);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

