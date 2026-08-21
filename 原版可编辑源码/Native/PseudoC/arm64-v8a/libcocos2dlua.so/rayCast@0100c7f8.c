
/* cocos2d::PhysicsWorld::rayCast(std::__ndk1::function<bool (cocos2d::PhysicsWorld&,
   cocos2d::PhysicsRayCastInfo const&, void*)>, cocos2d::Vec2 const&, cocos2d::Vec2 const&, void*)
    */

void __thiscall
cocos2d::PhysicsWorld::rayCast
          (PhysicsWorld *this,long *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  PhysicsWorld *local_b0 [2];
  long alStack_a0 [4];
  long *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_48;
  
                    /* catch() { ... } // from try @ 0100c978 with catch @ 0100c80c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_2[4];
  if (plVar2 != (long *)0x0) {
    if ((*(long *)(this + 0x90) != *(long *)(this + 0x98)) ||
       (*(long *)(this + 0xa8) != *(long *)(this + 0xb0))) {
                    /* try { // try from 0100c854 to 0110c887 has its CatchHandler @ 0100cac8 */
      (**(code **)(*(long *)this + 0xa0))(this);
      plVar2 = (long *)param_2[4];
    }
    local_b0[0] = this;
    if (plVar2 == (long *)0x0) {
      local_80 = (long *)0x0;
    }
    else if (param_2 == plVar2) {
      local_80 = alStack_a0;
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    else {
      local_80 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
    }
    local_70 = *param_3;
    uStack_68 = *param_4;
                    /* try { // try from 0100c8c0 to 0110c8c7 has its CatchHandler @ 0100caac */
    PhysicsWorldCallback::continues = 1;
                    /* try { // try from 0100c8d0 to 0110c8d7 has its CatchHandler @ 0100ca8c */
    local_60 = param_5;
                    /* try { // try from 0100c900 to 0110c907 has its CatchHandler @ 0100ca84 */
    cpSpaceSegmentQuery((int)local_70,*(undefined4 *)((long)param_3 + 4),(int)uStack_68,
                        *(undefined4 *)((long)param_4 + 4),0,*(undefined8 *)(this + 0x28),0,
                        0xffffffffffffffff,FUN_0100c998,local_b0);
    if (alStack_a0 == local_80) {
      pcVar3 = *(code **)(*local_80 + 0x20);
    }
    else {
      if (local_80 == (long *)0x0) goto LAB_0100c930;
      pcVar3 = *(code **)(*local_80 + 0x28);
    }
    (*pcVar3)();
  }
LAB_0100c930:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

