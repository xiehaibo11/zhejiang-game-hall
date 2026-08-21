
/* cocostudio::BoneData::addDisplayData(cocostudio::DisplayData*) */

void __thiscall cocostudio::BoneData::addDisplayData(BoneData *this,DisplayData *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  DisplayData *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x90);
  local_30 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x98)) {
    std::__ndk1::vector<cocostudio::DisplayData*,std::__ndk1::allocator<cocostudio::DisplayData*>>::
    __push_back_slow_path<cocostudio::DisplayData*const&>
              ((vector<cocostudio::DisplayData*,std::__ndk1::allocator<cocostudio::DisplayData*>> *)
               (this + 0x88),&local_30);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x90) = puVar1 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_30);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

