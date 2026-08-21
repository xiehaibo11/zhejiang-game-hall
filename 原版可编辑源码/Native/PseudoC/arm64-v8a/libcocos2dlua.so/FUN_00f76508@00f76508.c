
void FUN_00f76508(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  Scheduler *pSVar5;
  Data aDStack_d8 [24];
  allocator aaStack_c0 [16];
  long alStack_b0 [4];
  long *local_90;
  Data aDStack_80 [16];
  __bind a_Stack_70 [32];
  __bind *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = cocos2d::Director::getInstance();
  pSVar5 = *(Scheduler **)(lVar2 + 0xa0);
  plVar3 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x28))(aDStack_d8,plVar3,param_1 + 0x20);
  plVar3 = *(long **)(param_1 + 0x60);
  local_90 = alStack_b0;
  if (plVar3 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if ((long *)(param_1 + 0x40) == plVar3) {
    (**(code **)(*plVar3 + 0x18))(plVar3,local_90);
  }
  else {
    local_90 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  cocos2d::Data::Data(aDStack_80,aDStack_d8);
  std::__ndk1::__function::__value_func<void()>::
  __value_func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>>
            (a_Stack_70,aaStack_c0);
  cocos2d::Scheduler::performFunctionInCocosThread(pSVar5,a_Stack_70);
  if (a_Stack_70 == local_50) {
    pcVar4 = *(code **)(*(long *)local_50 + 0x20);
LAB_00f765f0:
    (*pcVar4)();
  }
  else if (local_50 != (__bind *)0x0) {
    pcVar4 = *(code **)(*(long *)local_50 + 0x28);
    goto LAB_00f765f0;
  }
  cocos2d::Data::~Data(aDStack_80);
  if (alStack_b0 == local_90) {
    pcVar4 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_00f7662c;
    pcVar4 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar4)();
LAB_00f7662c:
  cocos2d::Data::~Data(aDStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

