
/* cocos2d::Console::commandSceneGraph(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandSceneGraph(int param_1,basic_string *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  Scheduler *pSVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = Director::getInstance();
  pSVar4 = *(Scheduler **)(lVar2 + 0xa0);
  local_50 = operator_new(0x28);
  local_50[3] = (ulong)(uint)param_1;
  *(int *)(local_50 + 4) = (int)param_2;
  *local_50 = (long)&PTR_FUN_017226a8;
  local_50[2] = 0;
  local_50[1] = (long)printSceneGraphBoot;
  Scheduler::performFunctionInCocosThread(pSVar4,alStack_70);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f937c4;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00f937c4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

