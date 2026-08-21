
/* cocos2d::FileUtils::removeFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<void (bool)>) const */

void __thiscall cocos2d::FileUtils::removeFile(FileUtils *this,undefined8 param_2,long *param_3)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long *plVar4;
  AsyncTaskPool *pAVar5;
  code *pcVar6;
  void *__dest;
  ulong uVar7;
  ulong local_1b0;
  ulong uStack_1a8;
  void *local_1a0;
  byte local_198;
  undefined7 uStack_197;
  ulong uStack_190;
  void *local_188;
  ulong local_170;
  ulong uStack_168;
  void *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  undefined **local_f0 [4];
  undefined ***local_d0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x50))(&local_198);
  pvVar2 = local_188;
  uStack_1a8 = 0;
  local_1a0 = (void *)0x0;
  local_1b0 = 0;
  if ((local_198 & 1) == 0) {
    local_1b0 = CONCAT71(uStack_197,local_198);
    uStack_1a8 = uStack_190;
    local_1a0 = local_188;
  }
  else {
    if (0xffffffffffffffef < uStack_190) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_190 < 0x17) {
      __dest = (void *)((ulong)&local_1b0 | 1);
      local_1b0 = (ulong)(byte)((int)uStack_190 << 1);
      if (uStack_190 != 0) goto LAB_00f6e2dc;
    }
    else {
      uVar7 = uStack_190 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar7);
      local_1b0 = uVar7 | 1;
      uStack_1a8 = uStack_190;
      local_1a0 = __dest;
LAB_00f6e2dc:
      memcpy(__dest,pvVar2,uStack_190);
    }
    *(undefined1 *)((long)__dest + uStack_190) = 0;
  }
  local_a0 = local_1a0;
  uStack_a8 = uStack_1a8;
  local_b0 = local_1b0;
  uStack_1a8 = 0;
  local_1a0 = (void *)0x0;
  local_1b0 = 0;
  plVar4 = (long *)param_3[4];
  if (plVar4 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (param_3 == plVar4) {
    local_70 = alStack_90;
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_90);
  }
  else {
    param_3[4] = 0;
    local_70 = plVar4;
  }
  pAVar5 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
  local_160 = local_a0;
  uStack_168 = uStack_a8;
  local_170 = local_b0;
  local_f0[0] = &PTR_FUN_01721398;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_d0 = local_f0;
  if (local_70 == (long *)0x0) {
    local_130 = (long *)0x0;
  }
  else if (alStack_90 == local_70) {
    local_130 = alStack_150;
    (**(code **)(*local_70 + 0x18))(local_70,alStack_150);
  }
  else {
    local_130 = local_70;
    local_70 = (long *)0x0;
  }
  local_100 = (long *)0x0;
  plVar4 = operator_new(0x70);
  pvVar2 = local_160;
  uVar3 = uStack_168;
  uVar7 = local_170;
  uStack_168 = 0;
  local_160 = (void *)0x0;
  local_170 = 0;
  *plVar4 = (long)&PTR_FUN_01721418;
  plVar4[6] = (long)pvVar2;
  plVar4[5] = uVar3;
  plVar4[4] = uVar7;
  if (local_130 == (long *)0x0) {
    plVar4[0xc] = 0;
  }
  else if (alStack_150 == local_130) {
    plVar4[0xc] = (long)(plVar4 + 8);
    (**(code **)(*local_130 + 0x18))();
  }
  else {
    plVar4[0xc] = (long)local_130;
    local_130 = (long *)0x0;
  }
  local_100 = plVar4;
  AsyncTaskPool::enqueue(pAVar5,0,local_f0,0,alStack_120);
  if (alStack_120 == local_100) {
    pcVar6 = *(code **)(*local_100 + 0x20);
LAB_00f6e474:
    (*pcVar6)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar6 = *(code **)(*local_100 + 0x28);
    goto LAB_00f6e474;
  }
  if (alStack_150 == local_130) {
    pcVar6 = *(code **)(*local_130 + 0x20);
LAB_00f6e49c:
    (*pcVar6)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar6 = *(code **)(*local_130 + 0x28);
    goto LAB_00f6e49c;
  }
  if ((local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if (local_f0 == local_d0) {
    pcVar6 = (code *)(*local_d0)[4];
LAB_00f6e4d8:
    (*pcVar6)();
  }
  else if (local_d0 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_d0)[5];
    goto LAB_00f6e4d8;
  }
  if (alStack_90 == local_70) {
    pcVar6 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00f6e504;
    pcVar6 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar6)();
LAB_00f6e504:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_198 & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

