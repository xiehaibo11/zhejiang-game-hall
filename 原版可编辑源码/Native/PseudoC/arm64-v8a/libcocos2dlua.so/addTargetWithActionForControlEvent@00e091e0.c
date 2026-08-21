
/* cocos2d::extension::Control::addTargetWithActionForControlEvent(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*, cocos2d::extension::Control::EventType),
   cocos2d::extension::Control::EventType) */

void cocos2d::extension::Control::addTargetWithActionForControlEvent
               (Control *param_1,Invocation *param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  Ref *pRVar3;
  vector<cocos2d::extension::Invocation*,std::__ndk1::allocator<cocos2d::extension::Invocation*>>
  *this;
  Ref *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pRVar3 = (Ref *)Invocation::create(param_2,param_3,param_4,param_5);
  this = (vector<cocos2d::extension::Invocation*,std::__ndk1::allocator<cocos2d::extension::Invocation*>>
          *)dispatchListforControlEvent(param_1,param_5);
  puVar1 = *(undefined8 **)(this + 8);
  local_40 = pRVar3;
  if (puVar1 == *(undefined8 **)(this + 0x10)) {
    std::__ndk1::
    vector<cocos2d::extension::Invocation*,std::__ndk1::allocator<cocos2d::extension::Invocation*>>
    ::__push_back_slow_path<cocos2d::extension::Invocation*const&>(this,(Invocation **)&local_40);
  }
  else {
    *puVar1 = pRVar3;
    *(undefined8 **)(this + 8) = puVar1 + 1;
  }
  Ref::retain(local_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

