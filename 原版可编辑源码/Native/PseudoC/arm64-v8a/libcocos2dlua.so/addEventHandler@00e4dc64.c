
/* cocos2d::PUObserver::addEventHandler(cocos2d::PUEventHandler*) */

void __thiscall cocos2d::PUObserver::addEventHandler(PUObserver *this,PUEventHandler *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  PUEventHandler *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_1;
  Ref::retain((Ref *)param_1);
  puVar1 = *(undefined8 **)(this + 0x88);
  if (puVar1 == *(undefined8 **)(this + 0x90)) {
    std::__ndk1::vector<cocos2d::PUEventHandler*,std::__ndk1::allocator<cocos2d::PUEventHandler*>>::
    __push_back_slow_path<cocos2d::PUEventHandler*const&>
              ((vector<cocos2d::PUEventHandler*,std::__ndk1::allocator<cocos2d::PUEventHandler*>> *)
               (this + 0x80),&local_40);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x88) = puVar1 + 1;
  }
  *(PUObserver **)(local_40 + 0x28) = this;
  (**(code **)(*(long *)local_40 + 0x10))(local_40,this + 0x68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

