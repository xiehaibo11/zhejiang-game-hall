
/* dragonBones::ArmatureData::addAction(dragonBones::ActionData*, bool) */

void __thiscall
dragonBones::ArmatureData::addAction(ArmatureData *this,ActionData *param_1,bool param_2)

{
  long lVar1;
  ArmatureData *this_00;
  ActionData *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  if (param_2) {
    if (*(undefined8 **)(this + 0x98) != *(undefined8 **)(this + 0xa0)) {
      **(undefined8 **)(this + 0x98) = param_1;
      *(long *)(this + 0x98) = *(long *)(this + 0x98) + 8;
      goto LAB_00d35ba8;
    }
    this_00 = this + 0x90;
  }
  else {
    if (*(undefined8 **)(this + 0xb0) != *(undefined8 **)(this + 0xb8)) {
      **(undefined8 **)(this + 0xb0) = param_1;
      *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + 8;
      goto LAB_00d35ba8;
    }
    this_00 = this + 0xa8;
  }
  std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>::
  __push_back_slow_path<dragonBones::ActionData*const&>
            ((vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *)
             this_00,&local_30);
LAB_00d35ba8:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

