
/* cocos2d::Console::commandFpsSubCommandOnOff(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::Console::commandFpsSubCommandOnOff(Console *this,int param_1,basic_string *param_2)

{
  ulong uVar1;
  size_t __n;
  basic_string bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  basic_string *__s1;
  Scheduler *pSVar7;
  undefined4 uStack_78;
  undefined3 uStack_74;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_2;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  __n = 2;
  if (uVar1 < 3) {
    __n = uVar1;
  }
  if (__n == 0) {
LAB_00f93088:
    uVar4 = (uint)(2 < uVar1);
    if (uVar1 < 2) {
      uVar4 = 0xffffffff;
    }
  }
  else {
    __s1 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    uVar4 = memcmp(__s1,"on",__n);
    if (uVar4 == 0) goto LAB_00f93088;
  }
  lVar5 = Director::getInstance();
  pSVar7 = *(Scheduler **)(lVar5 + 0xa0);
  local_50 = operator_new(0x28);
  local_50[3] = lVar5;
  *(bool *)(local_50 + 4) = uVar4 == 0;
  *local_50 = (long)&PTR_FUN_01722730;
  local_50[2] = 0;
  local_50[1] = (long)Director::setDisplayStats;
  *(undefined4 *)((long)local_50 + 0x21) = uStack_78;
  *(uint *)((long)local_50 + 0x24) = CONCAT31(uStack_74,uStack_78._3_1_);
  Scheduler::performFunctionInCocosThread(pSVar7,alStack_70);
  if (alStack_70 == local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f93128;
    pcVar6 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar6)();
LAB_00f93128:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

