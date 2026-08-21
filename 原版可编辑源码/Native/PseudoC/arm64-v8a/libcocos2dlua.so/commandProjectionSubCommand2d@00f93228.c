
/* cocos2d::Console::commandProjectionSubCommand2d(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandProjectionSubCommand2d(int param_1,basic_string *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined **local_60;
  long lStack_58;
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lStack_58 = Director::getInstance();
  local_60 = &PTR_FUN_017227e0;
  local_40 = (long *)&local_60;
  Scheduler::performFunctionInCocosThread(*(Scheduler **)(lStack_58 + 0xa0),&local_60);
  if (&local_60 == (undefined ***)local_40) {
    pcVar2 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00f93294;
    pcVar2 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar2)();
LAB_00f93294:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

