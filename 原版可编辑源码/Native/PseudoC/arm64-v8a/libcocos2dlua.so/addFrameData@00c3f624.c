
/* cocostudio::MovementBoneData::addFrameData(cocostudio::FrameData*) */

void __thiscall
cocostudio::MovementBoneData::addFrameData(MovementBoneData *this,FrameData *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  FrameData *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x50);
  local_30 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x58)) {
    std::__ndk1::vector<cocostudio::FrameData*,std::__ndk1::allocator<cocostudio::FrameData*>>::
    __push_back_slow_path<cocostudio::FrameData*const&>
              ((vector<cocostudio::FrameData*,std::__ndk1::allocator<cocostudio::FrameData*>> *)
               (this + 0x48),&local_30);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x50) = puVar1 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_30);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

