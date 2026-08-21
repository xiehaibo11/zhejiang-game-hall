
/* cocos2d::Console::commandConfig(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandConfig(int param_1,basic_string *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined **local_60;
  undefined4 local_58;
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = Director::getInstance();
  local_60 = &PTR_FUN_01722528;
  local_58 = (int)param_2;
  local_40 = (long *)&local_60;
  Scheduler::performFunctionInCocosThread(*(Scheduler **)(lVar2 + 0xa0),&local_60);
  if (&local_60 == (undefined ***)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00f92b18;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00f92b18:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

