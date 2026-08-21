
/* cocos2d::extension::Control::addTargetWithActionForControlEvents(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*, cocos2d::extension::Control::EventType),
   cocos2d::extension::Control::EventType) */

void cocos2d::extension::Control::addTargetWithActionForControlEvents
               (Control *param_1,Invocation *param_2,undefined8 param_3,undefined8 param_4,
               uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  Ref *pRVar4;
  vector<cocos2d::extension::Invocation*,std::__ndk1::allocator<cocos2d::extension::Invocation*>>
  *this;
  uint uVar5;
  Ref *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = 0;
  do {
    uVar2 = 1 << (ulong)(uVar5 & 0x1f);
    if ((uVar2 & param_5) != 0) {
      pRVar4 = (Ref *)Invocation::create(param_2,param_3,param_4,uVar2);
      this = (vector<cocos2d::extension::Invocation*,std::__ndk1::allocator<cocos2d::extension::Invocation*>>
              *)dispatchListforControlEvent(param_1,uVar2);
      puVar1 = *(undefined8 **)(this + 8);
      local_70 = pRVar4;
      if (puVar1 == *(undefined8 **)(this + 0x10)) {
        std::__ndk1::
        vector<cocos2d::extension::Invocation*,std::__ndk1::allocator<cocos2d::extension::Invocation*>>
        ::__push_back_slow_path<cocos2d::extension::Invocation*const&>
                  (this,(Invocation **)&local_70);
      }
      else {
        *puVar1 = pRVar4;
        *(undefined8 **)(this + 8) = puVar1 + 1;
      }
      Ref::retain(local_70);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 9);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

