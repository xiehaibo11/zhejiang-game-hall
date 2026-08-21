
/* cocostudio::timeline::Timeline::addFrame(cocostudio::timeline::Frame*) */

void __thiscall cocostudio::timeline::Timeline::addFrame(Timeline *this,Frame *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Frame *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x30);
  local_40 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x38)) {
    std::__ndk1::
    vector<cocostudio::timeline::Frame*,std::__ndk1::allocator<cocostudio::timeline::Frame*>>::
    __push_back_slow_path<cocostudio::timeline::Frame*const&>
              ((vector<cocostudio::timeline::Frame*,std::__ndk1::allocator<cocostudio::timeline::Frame*>>
                *)(this + 0x28),&local_40);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x30) = puVar1 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_40);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

