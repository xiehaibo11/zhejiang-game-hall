
/* cocos2d::PhysicsWorld::queryPoint(std::__ndk1::function<bool (cocos2d::PhysicsWorld&,
   cocos2d::PhysicsShape&, void*)>, cocos2d::Vec2 const&, void*) */

void __thiscall
cocos2d::PhysicsWorld::queryPoint
          (PhysicsWorld *this,long *param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  PhysicsWorld *local_a0 [2];
  long alStack_90 [4];
  long *local_70;
  undefined8 local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_2[4];
  if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0100ccac with catch @ 0100cd30 */
                    /* catch() { ... } // from try @ 0100cc24 with catch @ 0100cd48 */
    if ((*(long *)(this + 0x90) != *(long *)(this + 0x98)) ||
       (*(long *)(this + 0xa8) != *(long *)(this + 0xb0))) {
                    /* catch() { ... } // from try @ 0100cccc with catch @ 0100cd58 */
      (**(code **)(*(long *)this + 0xa0))(this);
      plVar2 = (long *)param_2[4];
    }
    local_a0[0] = this;
    if (plVar2 == (long *)0x0) {
      local_70 = (long *)0x0;
    }
    else if (param_2 == plVar2) {
      local_70 = alStack_90;
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    else {
      local_70 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
    }
    PhysicsWorldCallback::continues = 1;
    local_60 = param_4;
    cpSpacePointQuery(*param_3,param_3[1],0,*(undefined8 *)(this + 0x28),0,0xffffffffffffffff,
                      FUN_0100ce7c,local_a0);
    if (alStack_90 == local_70) {
      pcVar3 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_0100ce14;
      pcVar3 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar3)();
  }
LAB_0100ce14:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

