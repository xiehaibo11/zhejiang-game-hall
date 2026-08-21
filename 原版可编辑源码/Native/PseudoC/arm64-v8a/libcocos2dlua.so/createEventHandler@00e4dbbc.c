
/* cocos2d::PUObserver::createEventHandler(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Ref * __thiscall cocos2d::PUObserver::createEventHandler(PUObserver *this,basic_string *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  PUEventHandlerManager *this_00;
  Ref *this_01;
  Ref *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (PUEventHandlerManager *)PUEventHandlerManager::Instance();
  this_01 = (Ref *)PUEventHandlerManager::createEventHandler(this_00,param_1);
  local_40 = this_01;
  Ref::retain(this_01);
  puVar1 = *(undefined8 **)(this + 0x88);
  if (puVar1 == *(undefined8 **)(this + 0x90)) {
    std::__ndk1::vector<cocos2d::PUEventHandler*,std::__ndk1::allocator<cocos2d::PUEventHandler*>>::
    __push_back_slow_path<cocos2d::PUEventHandler*const&>
              ((vector<cocos2d::PUEventHandler*,std::__ndk1::allocator<cocos2d::PUEventHandler*>> *)
               (this + 0x80),(PUEventHandler **)&local_40);
  }
  else {
    *puVar1 = this_01;
    *(undefined8 **)(this + 0x88) = puVar1 + 1;
  }
  *(PUObserver **)(local_40 + 0x28) = this;
  (**(code **)(*(long *)local_40 + 0x10))(local_40,this + 0x68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

