
/* spine::SkeletonCache::FrameData::buildBoneData(unsigned long) */

void __thiscall spine::SkeletonCache::FrameData::buildBoneData(FrameData *this,ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  Mat4 *this_00;
  long lVar3;
  ulong uVar4;
  Mat4 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)this;
  uVar4 = *(long *)(this + 8) - lVar3 >> 3;
  if (uVar4 < param_1) {
    uVar2 = 0;
  }
  else {
    if (uVar4 == param_1) {
      this_00 = operator_new(0x40);
      cocos2d::Mat4::Mat4(this_00);
      local_40 = this_00;
      if (*(undefined8 **)(this + 8) == *(undefined8 **)(this + 0x10)) {
        std::__ndk1::
        vector<spine::SkeletonCache::BoneData*,std::__ndk1::allocator<spine::SkeletonCache::BoneData*>>
        ::__push_back_slow_path<spine::SkeletonCache::BoneData*const&>
                  ((vector<spine::SkeletonCache::BoneData*,std::__ndk1::allocator<spine::SkeletonCache::BoneData*>>
                    *)this,(BoneData **)&local_40);
      }
      else {
        **(undefined8 **)(this + 8) = this_00;
        *(long *)(this + 8) = *(long *)(this + 8) + 8;
      }
      lVar3 = *(long *)this;
    }
    uVar2 = *(undefined8 *)(lVar3 + param_1 * 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

