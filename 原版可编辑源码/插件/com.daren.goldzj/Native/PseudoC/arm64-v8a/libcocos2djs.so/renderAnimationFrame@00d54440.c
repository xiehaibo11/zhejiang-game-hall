
/* dragonBones::ArmatureCache::renderAnimationFrame(dragonBones::ArmatureCache::AnimationData*) */

void __thiscall
dragonBones::ArmatureCache::renderAnimationFrame(ArmatureCache *this,AnimationData *param_1)

{
  int iVar1;
  long lVar2;
  Armature *pAVar3;
  long lVar4;
  vector<dragonBones::ArmatureCache::FrameData*,std::__ndk1::allocator<dragonBones::ArmatureCache::FrameData*>>
  *this_00;
  vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
  *this_01;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  FrameData *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_00 = (vector<dragonBones::ArmatureCache::FrameData*,std::__ndk1::allocator<dragonBones::ArmatureCache::FrameData*>>
             *)(param_1 + 0x20);
  lVar4 = *(long *)this_00;
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  local_68 = operator_new(400);
  *(undefined8 *)(local_68 + 0x40) = 0;
  *(undefined8 *)(local_68 + 0x80) = 0;
  *(undefined8 *)(local_68 + 0xb0) = 0;
  *(undefined ***)(local_68 + 0x50) = &PTR__IOBuffer_01c8e178;
  *(undefined ***)(local_68 + 0xf0) = &PTR__IOBuffer_01c8e178;
  *(undefined8 *)(local_68 + 0xe0) = 0;
  local_68[0x78] = (FrameData)0x0;
  *(undefined8 *)(local_68 + 0x120) = 0;
  *(undefined8 *)(local_68 + 0x150) = 0;
  *(undefined8 *)(local_68 + 0x180) = 0;
  local_68[0x118] = (FrameData)0x0;
  *(undefined8 *)(local_68 + 0x28) = 0;
  *(undefined8 *)(local_68 + 0x20) = 0;
  *(undefined8 *)(local_68 + 0x38) = 0;
  *(undefined8 *)(local_68 + 0x30) = 0;
  *(undefined8 *)(local_68 + 8) = 0;
  *(undefined8 *)local_68 = 0;
  *(undefined8 *)(local_68 + 0x18) = 0;
  *(undefined8 *)(local_68 + 0x10) = 0;
  *(undefined8 *)(local_68 + 0x70) = 0;
  *(undefined8 *)(local_68 + 0x68) = 0;
  *(undefined8 *)(local_68 + 0x60) = 0;
  *(undefined8 *)(local_68 + 0x58) = 0;
  *(undefined8 *)(local_68 + 0x100) = 0;
  *(undefined8 *)(local_68 + 0xf8) = 0;
  *(undefined8 *)(local_68 + 0x110) = 0;
  *(undefined8 *)(local_68 + 0x108) = 0;
  if (*(undefined8 **)(param_1 + 0x30) == puVar6) {
    std::__ndk1::
    vector<dragonBones::ArmatureCache::FrameData*,std::__ndk1::allocator<dragonBones::ArmatureCache::FrameData*>>
    ::__push_back_slow_path<dragonBones::ArmatureCache::FrameData*const&>(this_00,&local_68);
  }
  else {
    *puVar6 = local_68;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
  }
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(*(long *)this_00 + ((long)puVar6 - lVar4 >> 3) * 8)
  ;
  cocos2d::Color4F::Color4F((Color4F *)&local_68,-1.0,-1.0,-1.0,-1.0);
  *(undefined8 *)(this + 0x20) = uStack_60;
  *(FrameData **)(this + 0x18) = local_68;
  cocos2d::Color4F::Color4F((Color4F *)&local_68,1.0,1.0,1.0,1.0);
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x30) = uStack_60;
  *(FrameData **)(this + 0x28) = local_68;
  *(undefined4 *)(this + 0x58) = 0;
  pAVar3 = (Armature *)(**(code **)(**(long **)(this + 0x38) + 0x60))();
  traverseArmature(this,pAVar3,1.0);
  if (*(int *)(this + 0x4c) != -1) {
    lVar5 = *(long *)(this + 0x10);
    iVar1 = *(int *)(this + 0x58);
    this_01 = (vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
               *)(lVar5 + 0x30);
    lVar4 = *(long *)this_01;
    puVar6 = *(undefined8 **)(lVar5 + 0x38);
    if ((long)iVar1 + -1 == (long)puVar6 - lVar4 >> 3) {
      local_68 = operator_new(0x20);
      *(undefined4 *)local_68 = 0;
      *(undefined8 *)(local_68 + 0x10) = 0;
      *(undefined8 *)(local_68 + 0x18) = 0;
      *(undefined8 *)(local_68 + 8) = 0;
      if (*(undefined8 **)(lVar5 + 0x40) == puVar6) {
        std::__ndk1::
        vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
        ::__push_back_slow_path<dragonBones::ArmatureCache::SegmentData*const&>
                  (this_01,(SegmentData **)&local_68);
      }
      else {
        *puVar6 = local_68;
        *(long *)(lVar5 + 0x38) = *(long *)(lVar5 + 0x38) + 8;
      }
      lVar4 = *(long *)this_01;
    }
    uVar7 = *(undefined8 *)(this + 0x50);
    lVar4 = *(long *)(lVar4 + ((long)iVar1 + -1) * 8);
    *(long *)(lVar4 + 0x10) = (long)(int)((ulong)uVar7 >> 0x20);
    *(long *)(lVar4 + 8) = (long)(int)uVar7;
  }
  lVar5 = *(long *)(this + 0x10);
  lVar4 = *(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x18);
  if (lVar4 != 0) {
    *(ulong *)(*(long *)(*(long *)(lVar5 + 0x18) + lVar4 + -8) + 0x10) =
         (ulong)(long)*(int *)(lVar5 + 0x108) >> 2;
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

