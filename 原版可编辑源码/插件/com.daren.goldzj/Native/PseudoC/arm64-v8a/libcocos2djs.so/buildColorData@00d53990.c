
/* dragonBones::ArmatureCache::FrameData::buildColorData(unsigned long) */

void __thiscall dragonBones::ArmatureCache::FrameData::buildColorData(FrameData *this,ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  Color4F *this_00;
  long lVar3;
  ulong uVar4;
  vector<dragonBones::ArmatureCache::ColorData*,std::__ndk1::allocator<dragonBones::ArmatureCache::ColorData*>>
  *this_01;
  Color4F *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_01 = (vector<dragonBones::ArmatureCache::ColorData*,std::__ndk1::allocator<dragonBones::ArmatureCache::ColorData*>>
             *)(this + 0x18);
  lVar3 = *(long *)this_01;
  uVar4 = *(long *)(this + 0x20) - lVar3 >> 3;
  if (uVar4 < param_1) {
    uVar2 = 0;
  }
  else {
    if (uVar4 == param_1) {
      this_00 = operator_new(0x18);
      cocos2d::Color4F::Color4F(this_00);
      *(undefined8 *)(this_00 + 0x10) = 0;
      local_50 = this_00;
      if (*(undefined8 **)(this + 0x20) == *(undefined8 **)(this + 0x28)) {
        std::__ndk1::
        vector<dragonBones::ArmatureCache::ColorData*,std::__ndk1::allocator<dragonBones::ArmatureCache::ColorData*>>
        ::__push_back_slow_path<dragonBones::ArmatureCache::ColorData*const&>
                  (this_01,(ColorData **)&local_50);
      }
      else {
        **(undefined8 **)(this + 0x20) = this_00;
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
      }
      lVar3 = *(long *)this_01;
    }
    uVar2 = *(undefined8 *)(lVar3 + param_1 * 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

