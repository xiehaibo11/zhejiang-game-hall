
/* cocos2d::Console::commandProjection(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandProjection(int param_1,basic_string *param_2)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_3c [20];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  auVar4 = Director::getInstance();
  uVar1 = *(uint *)(auVar4._0_8_ + 0x194);
  if (uVar1 < 3) {
    pcVar3 = (&PTR_s_2d_01478347_0x2b_01722cd0)[(int)uVar1];
  }
  else {
    pcVar3 = "unknown";
  }
  FUN_00f94854(auStack_3c,auVar4._8_8_,pcVar3);
  Utility::mydprintf((int)param_2,"Current projection: %s\n",auStack_3c);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

