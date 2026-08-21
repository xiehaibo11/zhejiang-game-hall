
/* spine::SkeletonCache::AnimationData::buildFrameData(unsigned long) */

void __thiscall
spine::SkeletonCache::AnimationData::buildFrameData(AnimationData *this,ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  vector<spine::SkeletonCache::FrameData*,std::__ndk1::allocator<spine::SkeletonCache::FrameData*>>
  *this_00;
  undefined8 *puVar5;
  FrameData *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (vector<spine::SkeletonCache::FrameData*,std::__ndk1::allocator<spine::SkeletonCache::FrameData*>>
             *)(this + 0x20);
  lVar3 = *(long *)this_00;
  puVar5 = *(undefined8 **)(this + 0x28);
  uVar4 = (long)puVar5 - lVar3 >> 3;
  if (uVar4 < param_1) {
    uVar2 = 0;
  }
  else {
    if (uVar4 == param_1) {
      local_50 = operator_new(400);
      *(undefined8 *)(local_50 + 0x40) = 0;
      *(undefined8 *)(local_50 + 0x80) = 0;
      *(undefined8 *)(local_50 + 0xb0) = 0;
      *(undefined ***)(local_50 + 0x50) = &PTR__IOBuffer_01c8e178;
      *(undefined ***)(local_50 + 0xf0) = &PTR__IOBuffer_01c8e178;
      *(undefined8 *)(local_50 + 0xe0) = 0;
      local_50[0x78] = (FrameData)0x0;
      *(undefined8 *)(local_50 + 0x120) = 0;
      *(undefined8 *)(local_50 + 0x150) = 0;
      *(undefined8 *)(local_50 + 0x180) = 0;
      local_50[0x118] = (FrameData)0x0;
      *(undefined8 *)(local_50 + 0x28) = 0;
      *(undefined8 *)(local_50 + 0x20) = 0;
      *(undefined8 *)(local_50 + 0x38) = 0;
      *(undefined8 *)(local_50 + 0x30) = 0;
      *(undefined8 *)(local_50 + 8) = 0;
      *(undefined8 *)local_50 = 0;
      *(undefined8 *)(local_50 + 0x18) = 0;
      *(undefined8 *)(local_50 + 0x10) = 0;
      *(undefined8 *)(local_50 + 0x70) = 0;
      *(undefined8 *)(local_50 + 0x68) = 0;
      *(undefined8 *)(local_50 + 0x60) = 0;
      *(undefined8 *)(local_50 + 0x58) = 0;
      *(undefined8 *)(local_50 + 0x100) = 0;
      *(undefined8 *)(local_50 + 0xf8) = 0;
      *(undefined8 *)(local_50 + 0x110) = 0;
      *(undefined8 *)(local_50 + 0x108) = 0;
      if (*(undefined8 **)(this + 0x30) == puVar5) {
        std::__ndk1::
        vector<spine::SkeletonCache::FrameData*,std::__ndk1::allocator<spine::SkeletonCache::FrameData*>>
        ::__push_back_slow_path<spine::SkeletonCache::FrameData*const&>(this_00,&local_50);
      }
      else {
        *puVar5 = local_50;
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
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

