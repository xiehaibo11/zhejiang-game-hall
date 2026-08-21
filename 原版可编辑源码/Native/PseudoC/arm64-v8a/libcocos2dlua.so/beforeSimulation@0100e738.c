
/* cocos2d::PhysicsWorld::beforeSimulation(cocos2d::Node*, cocos2d::Mat4 const&, float, float,
   float) */

void __thiscall
cocos2d::PhysicsWorld::beforeSimulation
          (PhysicsWorld *this,Node *param_1,Mat4 *param_2,float param_3,float param_4,float param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  Mat4 *pMVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Mat4 aMStack_b8 [64];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 0100e700 with catch @ 0100e788 */
  fVar6 = (float)(**(code **)(*(long *)param_1 + 0x58))(param_1);
  fVar7 = (float)(**(code **)(*(long *)param_1 + 0x68))(param_1);
  fVar8 = (float)(**(code **)(*(long *)param_1 + 0x188))(param_1);
  pMVar4 = (Mat4 *)(**(code **)(*(long *)param_1 + 1000))(param_1);
  Mat4::Mat4(aMStack_b8,param_2);
  Mat4::multiply(aMStack_b8,pMVar4);
  if (*(PhysicsBody **)(param_1 + 0x2f0) != (PhysicsBody *)0x0) {
    PhysicsBody::beforeSimulation
              (*(PhysicsBody **)(param_1 + 0x2f0),param_2,aMStack_b8,fVar6 * param_3,fVar7 * param_4
               ,fVar8 + param_5);
  }
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  puVar2 = (undefined8 *)plVar5[1];
  for (puVar1 = (undefined8 *)*plVar5; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    beforeSimulation(this,(Node *)*puVar1,aMStack_b8,fVar6 * param_3,fVar7 * param_4,fVar8 + param_5
                    );
  }
  Mat4::~Mat4(aMStack_b8);
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

