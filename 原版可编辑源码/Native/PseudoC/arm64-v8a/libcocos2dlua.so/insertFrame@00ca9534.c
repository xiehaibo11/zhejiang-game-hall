
/* cocostudio::timeline::Timeline::insertFrame(cocostudio::timeline::Frame*, int) */

void __thiscall
cocostudio::timeline::Timeline::insertFrame(Timeline *this,Frame *param_1,int param_2)

{
  long lVar1;
  Ref *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (Ref *)param_1;
  std::__ndk1::
  vector<cocostudio::timeline::Frame*,std::__ndk1::allocator<cocostudio::timeline::Frame*>>::insert
            ((vector<cocostudio::timeline::Frame*,std::__ndk1::allocator<cocostudio::timeline::Frame*>>
              *)(this + 0x28),*(long *)(this + 0x28) + (long)param_2 * 8,&local_40);
  cocos2d::Ref::retain(local_40);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

