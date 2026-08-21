
/* cocos2d::PhysicsJointGroove::construct(cocos2d::PhysicsBody*, cocos2d::PhysicsBody*,
   cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2 const&) */

PhysicsJoint *
cocos2d::PhysicsJointGroove::construct
          (PhysicsBody *param_1,PhysicsBody *param_2,Vec2 *param_3,Vec2 *param_4,Vec2 *param_5)

{
  long lVar1;
  PhysicsJoint *pPVar2;
  undefined8 *puVar3;
  long lVar4;
  PhysicsJoint *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 010051fc to 01105247 has its CatchHandler @ 0100510c */
  pPVar2 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PhysicsJoint *)0x0) {
    pPVar2[0x58] = (PhysicsJoint)0x0;
                    /* catch() { ... } // from try @ 01005190 with catch @ 01005214 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010052c4 with catch @ 01005248
                        */
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
    *(undefined8 *)(pPVar2 + 0x70) = 0;
    *(undefined8 *)(pPVar2 + 0x78) = 0;
    *(undefined8 *)(pPVar2 + 0x68) = 0;
    *(PhysicsBody **)(pPVar2 + 0x38) = param_1;
    *(PhysicsBody **)(pPVar2 + 0x40) = param_2;
    *(undefined ***)pPVar2 = &PTR__PhysicsJoint_01725218;
                    /* try { // try from 01005294 to 011052a7 has its CatchHandler @ 01005370 */
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    if (puVar3 < *(undefined8 **)(param_1 + 0x60)) {
      *puVar3 = pPVar2;
      *(undefined8 **)(param_1 + 0x58) = puVar3 + 1;
    }
    else {
      local_60 = pPVar2;
                    /* try { // try from 010052b4 to 011052c3 has its CatchHandler @ 0100536c */
      std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::
      __push_back_slow_path<cocos2d::PhysicsJoint*>
                ((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *)
                 (param_1 + 0x50),&local_60);
    }
    lVar4 = *(long *)(pPVar2 + 0x40);
    puVar3 = *(undefined8 **)(lVar4 + 0x58);
                    /* try { // try from 010052c4 to 01105393 has its CatchHandler @ 01005248 */
    if (puVar3 < *(undefined8 **)(lVar4 + 0x60)) {
      *puVar3 = pPVar2;
      *(undefined8 **)(lVar4 + 0x58) = puVar3 + 1;
      local_60 = pPVar2;
    }
    else {
      local_60 = pPVar2;
      std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::
      __push_back_slow_path<cocos2d::PhysicsJoint*>
                ((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *)
                 (lVar4 + 0x50),&local_60);
    }
    *(undefined8 *)(pPVar2 + 0x68) = *(undefined8 *)param_3;
    *(undefined8 *)(pPVar2 + 0x70) = *(undefined8 *)param_4;
    *(undefined8 *)(pPVar2 + 0x78) = *(undefined8 *)param_5;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

