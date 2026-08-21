
/* dragonBones::ArmatureDisplayData::addAction(dragonBones::ActionData*) */

void __thiscall
dragonBones::ArmatureDisplayData::addAction(ArmatureDisplayData *this,ActionData *param_1)

{
  long lVar1;
  ActionData *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  if (*(undefined8 **)(this + 0x78) == *(undefined8 **)(this + 0x80)) {
    std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>::
    __push_back_slow_path<dragonBones::ActionData*const&>
              ((vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *)
               (this + 0x70),&local_30);
  }
  else {
    **(undefined8 **)(this + 0x78) = param_1;
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

