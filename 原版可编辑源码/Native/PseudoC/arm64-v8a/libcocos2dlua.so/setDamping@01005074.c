
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::PhysicsJointSpring::setDamping(float) */

void __thiscall cocos2d::PhysicsJointSpring::setDamping(PhysicsJointSpring *this,float param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined **local_70;
  PhysicsJointSpring *pPStack_68;
  ulong local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[100] == (PhysicsJointSpring)0x0) {
    cpDampedSpringSetDamping(**(undefined8 **)(this + 8));
  }
  else {
    lVar2 = *(long *)(this + 0x50);
    *(undefined1 *)(lVar2 + 0x60) = 1;
    *(float *)(lVar2 + 100) = param_1;
    local_70 = &PTR_FUN_01725898;
    local_60 = (ulong)(uint)param_1;
    lVar2 = *(long *)(this + 0x28);
    pPStack_68 = this;
    if (lVar2 == *(long *)(this + 0x30)) {
      local_50 = (long *)&local_70;
      std::__ndk1::
      vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
      __push_back_slow_path<std::__ndk1::function<void()>const&>
                ((vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                  *)(this + 0x20),(function *)&local_70);
    }
    else {
      *(long *)(lVar2 + 0x20) = lVar2;
      local_50 = (long *)&local_70;
                    /* try { // try from 0100510c to 0110518f has its CatchHandler @ 0100510c
                       catch() { ... } // from try @ 0100510c with catch @ 0100510c
                       catch() { ... } // from try @ 010051fc with catch @ 0100510c */
      FUN_01007cb8(FUN_01007cb8,&local_70,lVar2);
      *(long *)(this + 0x28) = lVar2 + 0x30;
    }
    if (&local_70 == (undefined ***)local_50) {
      pcVar3 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_010050ac;
      pcVar3 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar3)();
  }
LAB_010050ac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

