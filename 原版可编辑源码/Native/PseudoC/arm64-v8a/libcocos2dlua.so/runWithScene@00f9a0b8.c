
/* cocos2d::Director::runWithScene(cocos2d::Scene*) */

void __thiscall cocos2d::Director::runWithScene(Director *this,Scene *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  pthread_t pVar4;
  long *plVar5;
  Scene *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this[0x168] = (Director)0x0;
  puVar1 = *(undefined8 **)(this + 0x178);
  local_40 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x180)) {
    std::__ndk1::vector<cocos2d::Scene*,std::__ndk1::allocator<cocos2d::Scene*>>::
    __push_back_slow_path<cocos2d::Scene*const&>
              ((vector<cocos2d::Scene*,std::__ndk1::allocator<cocos2d::Scene*>> *)(this + 0x170),
               &local_40);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x178) = puVar1 + 1;
  }
  Ref::retain((Ref *)local_40);
  *(Scene **)(this + 0x160) = param_1;
  uVar3 = std::__ndk1::chrono::steady_clock::now();
  *(undefined8 *)(this + 0x188) = uVar3;
  this[0x1d0] = (Director)0x0;
  pVar4 = pthread_self();
  *(pthread_t *)(this + 0x1c8) = pVar4;
  plVar5 = (long *)Application::getInstance();
  (**(code **)(*plVar5 + 0x28))(*(undefined4 *)(this + 0x118));
  this[400] = (Director)0x1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

