
/* dragonBones::WeightData::addBone(dragonBones::BoneData*) */

void __thiscall dragonBones::WeightData::addBone(WeightData *this,BoneData *param_1)

{
  long lVar1;
  BoneData *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  if (*(undefined8 **)(this + 0x20) == *(undefined8 **)(this + 0x28)) {
    std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>::
    __push_back_slow_path<dragonBones::BoneData*const&>
              ((vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>> *)
               (this + 0x18),&local_30);
  }
  else {
    **(undefined8 **)(this + 0x20) = param_1;
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

