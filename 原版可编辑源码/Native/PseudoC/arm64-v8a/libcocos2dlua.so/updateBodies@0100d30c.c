
/* cocos2d::PhysicsWorld::updateBodies() */

void __thiscall cocos2d::PhysicsWorld::updateBodies(PhysicsWorld *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
                    /* try { // try from 0100d310 to 0110d3cf has its CatchHandler @ 0100d310
                       catch() { ... } // from try @ 0100d310 with catch @ 0100d310
                       catch() { ... } // from try @ 0100d454 with catch @ 0100d310
                       catch() { ... } // from try @ 0100d4a0 with catch @ 0100d310 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cVar5 = cpSpaceIsLocked(*(undefined8 *)(this + 0x28));
  if (cVar5 == '\0') {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_60 = (undefined8 *)0x0;
    if ((PhysicsWorld *)&local_60 != this + 0x90) {
      std::__ndk1::vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>>::
      assign<cocos2d::PhysicsBody**>
                ((vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>> *)
                 &local_60,*(PhysicsBody ***)(this + 0x90),*(PhysicsBody ***)(this + 0x98));
      puVar6 = local_58;
      for (puVar7 = local_60; puVar7 != puVar6; puVar7 = puVar7 + 1) {
        Ref::retain((Ref *)*puVar7);
      }
    }
    puVar7 = *(undefined8 **)(this + 0x90);
    puVar6 = *(undefined8 **)(this + 0x98);
    if (puVar7 != puVar6) {
      do {
        Ref::release((Ref *)*puVar7);
        puVar7 = puVar7 + 1;
      } while (puVar6 != puVar7);
      puVar7 = *(undefined8 **)(this + 0x90);
    }
    puVar6 = local_58;
    *(undefined8 **)(this + 0x98) = puVar7;
    for (puVar7 = local_60; puVar7 != puVar6; puVar7 = puVar7 + 1) {
      (**(code **)(*(long *)this + 0x78))(this,*puVar7);
                    /* try { // try from 0100d3d0 to 0110d453 has its CatchHandler @ 0100d680 */
    }
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    local_78 = (undefined8 *)0x0;
    if ((PhysicsWorld *)&local_78 != this + 0xa8) {
      std::__ndk1::vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>>::
      assign<cocos2d::PhysicsBody**>
                ((vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>> *)
                 &local_78,*(PhysicsBody ***)(this + 0xa8),*(PhysicsBody ***)(this + 0xb0));
      puVar6 = local_70;
      for (puVar7 = local_78; puVar7 != puVar6; puVar7 = puVar7 + 1) {
        Ref::retain((Ref *)*puVar7);
      }
    }
    puVar7 = *(undefined8 **)(this + 0xa8);
    puVar6 = *(undefined8 **)(this + 0xb0);
    if (puVar7 != puVar6) {
      do {
        Ref::release((Ref *)*puVar7);
        puVar7 = puVar7 + 1;
      } while (puVar6 != puVar7);
      puVar7 = *(undefined8 **)(this + 0xa8);
    }
    puVar3 = local_70;
    *(undefined8 **)(this + 0xb0) = puVar7;
    puVar6 = local_78;
    puVar7 = local_78;
    if (local_78 != local_70) {
      do {
                    /* try { // try from 0100d454 to 0110d47f has its CatchHandler @ 0100d310 */
        (**(code **)(*(long *)this + 0x80))(this,*puVar7);
        puVar4 = local_70;
        puVar7 = puVar7 + 1;
        puVar2 = local_78;
        puVar6 = local_70;
      } while (puVar3 != puVar7);
      for (; puVar2 != puVar4; puVar2 = puVar2 + 1) {
                    /* try { // try from 0100d480 to 0110d49f has its CatchHandler @ 0100d67c */
        Ref::release((Ref *)*puVar2);
        puVar6 = local_78;
      }
    }
                    /* try { // try from 0100d4a0 to 0110d69b has its CatchHandler @ 0100d310 */
    local_70 = local_78;
    puVar7 = local_60;
    puVar3 = local_58;
    if (puVar6 != (undefined8 *)0x0) {
      local_70 = puVar6;
      operator_delete(puVar6);
      puVar7 = local_60;
      puVar3 = local_58;
    }
    for (; puVar6 = local_58, puVar7 != local_58; puVar7 = puVar7 + 1) {
      local_58 = puVar3;
      Ref::release((Ref *)*puVar7);
      puVar3 = local_58;
      local_58 = puVar6;
    }
    local_58 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

