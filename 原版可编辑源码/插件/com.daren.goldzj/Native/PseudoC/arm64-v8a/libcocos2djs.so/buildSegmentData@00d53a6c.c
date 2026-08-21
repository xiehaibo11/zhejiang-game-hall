
/* dragonBones::ArmatureCache::FrameData::buildSegmentData(unsigned long) */

void __thiscall
dragonBones::ArmatureCache::FrameData::buildSegmentData(FrameData *this,ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
  *this_00;
  undefined8 *puVar5;
  SegmentData *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
             *)(this + 0x30);
  lVar3 = *(long *)this_00;
  puVar5 = *(undefined8 **)(this + 0x38);
  uVar4 = (long)puVar5 - lVar3 >> 3;
  if (uVar4 < param_1) {
    uVar2 = 0;
  }
  else {
    if (uVar4 == param_1) {
      local_50 = operator_new(0x20);
      *(undefined4 *)local_50 = 0;
      *(undefined8 *)(local_50 + 0x10) = 0;
      *(undefined8 *)(local_50 + 0x18) = 0;
      *(undefined8 *)(local_50 + 8) = 0;
      if (*(undefined8 **)(this + 0x40) == puVar5) {
        std::__ndk1::
        vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
        ::__push_back_slow_path<dragonBones::ArmatureCache::SegmentData*const&>(this_00,&local_50);
      }
      else {
        *puVar5 = local_50;
        *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
      }
      lVar3 = *(long *)this_00;
    }
    uVar2 = *(undefined8 *)(lVar3 + param_1 * 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

