
void FUN_007c3dec(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  Scheduler *pSVar7;
  void *__dest;
  ulong uVar8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8;
  undefined7 uStack_a7;
  ulong uStack_a0;
  void *local_98;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_a8,(char *)*param_3);
  lVar5 = cocos2d::Director::getInstance();
  pvVar4 = local_98;
  pSVar7 = *(Scheduler **)(lVar5 + 0xa0);
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  if (((byte)local_a8 & 1) == 0) {
    local_d0 = CONCAT71(uStack_a7,local_a8);
    uStack_c8 = uStack_a0;
    local_c0 = local_98;
  }
  else {
    if (0xffffffffffffffef < uStack_a0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_a0 < 0x17) {
      __dest = (void *)((ulong)&local_d0 | 1);
      local_d0 = (ulong)(byte)((int)uStack_a0 << 1);
      if (uStack_a0 != 0) goto LAB_007c3ea4;
    }
    else {
      uVar8 = uStack_a0 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar8);
      local_d0 = uVar8 | 1;
      uStack_c8 = uStack_a0;
      local_c0 = __dest;
LAB_007c3ea4:
      memcpy(__dest,pvVar4,uStack_a0);
    }
    *(undefined1 *)((long)__dest + uStack_a0) = 0;
  }
  local_b8 = *(undefined4 *)(param_1 + 8);
  local_70 = (long *)0x0;
  uStack_b4 = uVar1;
  local_70 = operator_new(0x28);
  pvVar4 = local_c0;
  uVar3 = uStack_c8;
  uVar8 = local_d0;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  *local_70 = (long)&PTR_FUN_01697cf8;
  local_70[3] = (long)pvVar4;
  local_70[4] = CONCAT44(uStack_b4,local_b8);
  local_70[2] = uVar3;
  local_70[1] = uVar8;
  cocos2d::Scheduler::performFunctionInCocosThread(pSVar7,alStack_90);
  if (alStack_90 == local_70) {
    pcVar6 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007c3f2c;
    pcVar6 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar6)();
LAB_007c3f2c:
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

