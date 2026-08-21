
/* cocos2d::PhysicsJointMotor::construct(cocos2d::PhysicsBody*, cocos2d::PhysicsBody*, float) */

PhysicsJoint *
cocos2d::PhysicsJointMotor::construct(PhysicsBody *param_1,PhysicsBody *param_2,float param_3)

{
  long lVar1;
  PhysicsJoint *pPVar2;
  undefined8 *puVar3;
  long lVar4;
  PhysicsJoint *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pPVar2 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PhysicsJoint *)0x0) {
    pPVar2[0x58] = (PhysicsJoint)0x0;
    *(undefined ***)pPVar2 = &PTR___cxa_pure_virtual_017250a0;
    *(undefined8 *)(pPVar2 + 0x10) = 0;
    *(undefined8 *)(pPVar2 + 8) = 0;
    *(undefined8 *)(pPVar2 + 0x20) = 0;
    *(undefined8 *)(pPVar2 + 0x18) = 0;
    *(undefined8 *)(pPVar2 + 0x30) = 0;
    *(undefined8 *)(pPVar2 + 0x28) = 0;
    *(undefined8 *)(pPVar2 + 0x40) = 0;
    *(undefined8 *)(pPVar2 + 0x38) = 0;
    *(undefined8 *)(pPVar2 + 0x50) = 0;
    *(undefined8 *)(pPVar2 + 0x48) = 0;
    *(undefined2 *)(pPVar2 + 0x59) = 1;
    *(undefined4 *)(pPVar2 + 0x5c) = 0;
    *(undefined4 *)(pPVar2 + 0x60) = 0x7f7fffff;
    pPVar2[100] = (PhysicsJoint)0x1;
    puVar3 = operator_new(0x90);
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    *(undefined8 **)(pPVar2 + 0x50) = puVar3;
    *(PhysicsBody **)(pPVar2 + 0x38) = param_1;
    *(PhysicsBody **)(pPVar2 + 0x40) = param_2;
    *(undefined ***)pPVar2 = &PTR__PhysicsJoint_01725358;
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    if (puVar3 < *(undefined8 **)(param_1 + 0x60)) {
      *puVar3 = pPVar2;
      *(undefined8 **)(param_1 + 0x58) = puVar3 + 1;
    }
    else {
      local_50 = pPVar2;
      std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::
      __push_back_slow_path<cocos2d::PhysicsJoint*>
                ((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *)
                 (param_1 + 0x50),&local_50);
    }
    lVar4 = *(long *)(pPVar2 + 0x40);
    puVar3 = *(undefined8 **)(lVar4 + 0x58);
    if (puVar3 < *(undefined8 **)(lVar4 + 0x60)) {
      *puVar3 = pPVar2;
      *(undefined8 **)(lVar4 + 0x58) = puVar3 + 1;
      local_50 = pPVar2;
    }
    else {
      local_50 = pPVar2;
      std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::
      __push_back_slow_path<cocos2d::PhysicsJoint*>
                ((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *)
                 (lVar4 + 0x50),&local_50);
    }
    *(float *)(pPVar2 + 0x68) = param_3;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

