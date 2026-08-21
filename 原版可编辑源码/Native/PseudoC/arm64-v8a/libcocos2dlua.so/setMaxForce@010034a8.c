
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::PhysicsJoint::setMaxForce(float) */

void __thiscall cocos2d::PhysicsJoint::setMaxForce(PhysicsJoint *this,float param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 in_register_00005004;
  undefined **local_80;
  PhysicsJoint *pPStack_78;
  ulong local_70;
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (this[100] == (PhysicsJoint)0x0) {
    puVar5 = *(undefined8 **)(this + 8);
    puVar2 = *(undefined8 **)(this + 0x10);
    *(float *)(this + 0x60) = param_1;
    for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      cpConstraintSetMaxForce(CONCAT44(in_register_00005004,param_1),*puVar5);
    }
  }
  else {
    local_70 = (ulong)(uint)param_1;
    local_80 = &PTR_FUN_01725398;
    lVar1 = *(long *)(this + 0x28);
    pPStack_78 = this;
    if (lVar1 == *(long *)(this + 0x30)) {
      local_60 = (long *)&local_80;
      std::__ndk1::
      vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
      __push_back_slow_path<std::__ndk1::function<void()>const&>
                ((vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                  *)(this + 0x20),(function *)&local_80);
    }
    else {
      *(long *)(lVar1 + 0x20) = lVar1;
      local_60 = (long *)&local_80;
      FUN_0100755c(FUN_0100755c,&local_80,lVar1);
      *(long *)(this + 0x28) = lVar1 + 0x30;
    }
    if (&local_80 == (undefined ***)local_60) {
      pcVar4 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_01003588;
      pcVar4 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar4)();
  }
LAB_01003588:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

