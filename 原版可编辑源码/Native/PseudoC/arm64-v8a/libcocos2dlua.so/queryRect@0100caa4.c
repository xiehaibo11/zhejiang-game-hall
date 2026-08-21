
/* cocos2d::PhysicsWorld::queryRect(std::__ndk1::function<bool (cocos2d::PhysicsWorld&,
   cocos2d::PhysicsShape&, void*)>, cocos2d::Rect const&, void*) */

void __thiscall
cocos2d::PhysicsWorld::queryRect(PhysicsWorld *this,long *param_2,float *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  PhysicsWorld *local_a0 [2];
  long alStack_90 [4];
  long *local_70;
  undefined8 local_60;
  long local_48;
  
                    /* catch() { ... } // from try @ 0100c8c0 with catch @ 0100caac */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0100c854 with catch @ 0100cac8 */
  plVar2 = (long *)param_2[4];
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 0100cad8 to 0110cc23 has its CatchHandler @ 0100cad8
                       catch() { ... } // from try @ 0100cad8 with catch @ 0100cad8
                       catch() { ... } // from try @ 0100ccec with catch @ 0100cad8 */
    if ((*(long *)(this + 0x90) != *(long *)(this + 0x98)) ||
       (*(long *)(this + 0xa8) != *(long *)(this + 0xb0))) {
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
    cpSpaceBBQuery(*param_3,param_3[1],*param_3 + param_3[2],param_3[1] + param_3[3],
                   *(undefined8 *)(this + 0x28),0,0xffffffffffffffff,FUN_0100cc30,local_a0);
    if (alStack_90 == local_70) {
      pcVar3 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_0100cbc8;
      pcVar3 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar3)();
  }
LAB_0100cbc8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

