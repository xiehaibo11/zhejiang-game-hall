
/* cocos2d::Technique::addPass(cocos2d::Pass*) */

void __thiscall cocos2d::Technique::addPass(Technique *this,Pass *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Pass *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x80);
  local_30 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x88)) {
    std::__ndk1::vector<cocos2d::Pass*,std::__ndk1::allocator<cocos2d::Pass*>>::
    __push_back_slow_path<cocos2d::Pass*const&>
              ((vector<cocos2d::Pass*,std::__ndk1::allocator<cocos2d::Pass*>> *)(this + 0x78),
               &local_30);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x80) = puVar1 + 1;
  }
  Ref::retain((Ref *)local_30);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

