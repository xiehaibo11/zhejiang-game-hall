
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::PhysicsJointSpring::setAnchr2(cocos2d::Vec2 const&) */

void __thiscall cocos2d::PhysicsJointSpring::setAnchr2(PhysicsJointSpring *this,Vec2 *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined **local_70;
  PhysicsJointSpring *pPStack_68;
  undefined8 local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 01004be4 with catch @ 01004c6c */
  if (this[100] == (PhysicsJointSpring)0x0) {
    cpDampedSpringSetAnchorB
              (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),**(undefined8 **)(this + 8));
  }
  else {
    lVar2 = *(long *)(this + 0x50);
    uVar4 = *(undefined8 *)param_1;
    *(undefined1 *)(lVar2 + 0x24) = 1;
    *(undefined8 *)(lVar2 + 0x28) = uVar4;
    local_60 = *(undefined8 *)param_1;
                    /* try { // try from 01004ccc to 01104d9f has its CatchHandler @ 01004ccc
                       catch() { ... } // from try @ 01004ccc with catch @ 01004ccc
                       catch() { ... } // from try @ 01004dc4 with catch @ 01004ccc */
    local_70 = &PTR_FUN_01725718;
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
      FUN_01007ae4(FUN_01007ae4,&local_70,lVar2);
      *(long *)(this + 0x28) = lVar2 + 0x30;
    }
    if (&local_70 == (undefined ***)local_50) {
      pcVar3 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_01004c88;
      pcVar3 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar3)();
  }
LAB_01004c88:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

