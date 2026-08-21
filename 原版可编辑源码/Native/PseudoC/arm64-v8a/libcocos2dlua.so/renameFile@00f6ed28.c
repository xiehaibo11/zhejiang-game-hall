
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::FileUtils::renameFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (bool)>) const */

void __thiscall
cocos2d::FileUtils::renameFile
          (undefined8 param_1_00,basic_string *param_1,basic_string *param_2,long *param_4)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  AsyncTaskPool *pAVar4;
  void *pvVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1e0;
  undefined7 uStack_1df;
  ulong uStack_1d8;
  void *local_1d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1c8;
  undefined7 uStack_1c7;
  ulong uStack_1c0;
  void *local_1b8;
  undefined8 local_1a0;
  ulong uStack_198;
  void *local_190;
  undefined8 local_188;
  ulong uStack_180;
  void *local_178;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  undefined **local_110 [4];
  undefined ***local_f0;
  undefined8 local_d0;
  ulong uStack_c8;
  void *local_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  void *local_a8;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_1e0,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_1c8,param_2);
  pvVar2 = local_1d0;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  if (((byte)local_1e0 & 1) == 0) {
    local_d0 = CONCAT71(uStack_1df,local_1e0);
    local_c0 = local_1d0;
    uStack_c8 = uStack_1d8;
  }
  else {
    if (0xffffffffffffffef < uStack_1d8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_1d8 < 0x17) {
      pvVar5 = (void *)((long)&local_d0 + 1);
      local_d0 = (ulong)(byte)((int)uStack_1d8 << 1);
      if (uStack_1d8 != 0) goto LAB_00f6edf0;
    }
    else {
      uVar7 = uStack_1d8 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar7);
      local_d0 = uVar7 | 1;
      uStack_c8 = uStack_1d8;
      local_c0 = pvVar5;
LAB_00f6edf0:
      memcpy(pvVar5,pvVar2,uStack_1d8);
    }
    *(undefined1 *)((long)pvVar5 + uStack_1d8) = 0;
  }
  pvVar2 = local_1b8;
  uStack_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = 0;
  if (((byte)local_1c8 & 1) == 0) {
    local_b8 = CONCAT71(uStack_1c7,local_1c8);
    local_a8 = local_1b8;
    uStack_b0 = uStack_1c0;
  }
  else {
    if (0xffffffffffffffef < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_1c0 < 0x17) {
      pvVar5 = (void *)((long)&local_b8 + 1);
      local_b8 = (ulong)(byte)((int)uStack_1c0 << 1);
      if (uStack_1c0 != 0) goto LAB_00f6ee7c;
    }
    else {
      uVar7 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar7);
      local_b8 = uVar7 | 1;
      uStack_b0 = uStack_1c0;
      local_a8 = pvVar5;
LAB_00f6ee7c:
      memcpy(pvVar5,pvVar2,uStack_1c0);
    }
    *(undefined1 *)((long)pvVar5 + uStack_1c0) = 0;
  }
  plVar3 = (long *)param_4[4];
  if (plVar3 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if (param_4 == plVar3) {
    local_80 = alStack_a0;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_a0);
  }
  else {
    param_4[4] = 0;
    local_80 = plVar3;
  }
  pAVar4 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
  pvVar2 = local_c0;
  uVar7 = uStack_c8;
  local_f0 = local_110;
  local_110[0] = &PTR_FUN_01721688;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = (void *)0x0;
  if ((local_d0 & 1) == 0) {
    local_190 = local_c0;
    uStack_198 = uStack_c8;
    local_1a0 = local_d0;
  }
  else {
    if (0xffffffffffffffef < uStack_c8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_c8 < 0x17) {
      pvVar5 = (void *)((long)&local_1a0 + 1);
      local_1a0 = (ulong)(byte)((int)uStack_c8 << 1);
      if (uStack_c8 != 0) goto LAB_00f6ef6c;
    }
    else {
      uVar8 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar8);
      local_1a0 = uVar8 | 1;
      uStack_198 = uVar7;
      local_190 = pvVar5;
LAB_00f6ef6c:
      memcpy(pvVar5,pvVar2,uVar7);
    }
    *(undefined1 *)((long)pvVar5 + uVar7) = 0;
  }
  pvVar2 = local_a8;
  uVar7 = uStack_b0;
  uStack_180 = 0;
  local_178 = (void *)0x0;
  local_188 = 0;
  if ((local_b8 & 1) == 0) {
    local_178 = local_a8;
    uStack_180 = uStack_b0;
    local_188 = local_b8;
  }
  else {
    if (0xffffffffffffffef < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_b0 < 0x17) {
      pvVar5 = (void *)((long)&local_188 + 1);
      local_188 = (ulong)(byte)((int)uStack_b0 << 1);
      if (uStack_b0 != 0) goto LAB_00f6eff8;
    }
    else {
      uVar8 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar8);
      local_188 = uVar8 | 1;
      uStack_180 = uVar7;
      local_178 = pvVar5;
LAB_00f6eff8:
      memcpy(pvVar5,pvVar2,uVar7);
    }
    *(undefined1 *)((long)pvVar5 + uVar7) = 0;
  }
  if (local_80 == (long *)0x0) {
    local_150 = (long *)0x0;
  }
  else if (alStack_a0 == local_80) {
    local_150 = alStack_170;
    (**(code **)(*local_80 + 0x18))(local_80,alStack_170);
  }
  else {
    local_150 = local_80;
    local_80 = (long *)0x0;
  }
  local_120 = (long *)0x0;
  plVar3 = operator_new(0x80);
  pvVar2 = local_190;
  uVar7 = uStack_198;
  *plVar3 = (long)&PTR_FUN_01721708;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  if ((local_1a0 & 1) == 0) {
    plVar3[6] = (long)local_190;
    plVar3[5] = uStack_198;
    plVar3[4] = local_1a0;
  }
  else {
    if (0xffffffffffffffef < uStack_198) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_198 < 0x17) {
      pvVar5 = (void *)((long)plVar3 + 0x21);
      *(char *)(plVar3 + 4) = (char)((int)uStack_198 << 1);
      if (uStack_198 != 0) goto LAB_00f6f0f4;
    }
    else {
      uVar8 = uStack_198 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar8);
      plVar3[5] = uVar7;
      plVar3[6] = (long)pvVar5;
      plVar3[4] = uVar8 | 1;
LAB_00f6f0f4:
      memcpy(pvVar5,pvVar2,uVar7);
    }
    *(undefined1 *)((long)pvVar5 + uVar7) = 0;
  }
  pvVar2 = local_178;
  uVar7 = uStack_180;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  if ((local_188 & 1) == 0) {
    plVar3[9] = (long)local_178;
    plVar3[8] = uStack_180;
    plVar3[7] = local_188;
    if (local_150 == (long *)0x0) goto LAB_00f6f1b0;
LAB_00f6f134:
    if (alStack_170 == local_150) {
      plVar3[0xe] = (long)(plVar3 + 10);
      (**(code **)(*local_150 + 0x18))();
    }
    else {
      plVar3[0xe] = (long)local_150;
      local_150 = (long *)0x0;
    }
  }
  else {
    if (0xffffffffffffffef < uStack_180) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_180 < 0x17) {
      pvVar5 = (void *)((long)plVar3 + 0x39);
      *(char *)(plVar3 + 7) = (char)((int)uStack_180 << 1);
      if (uStack_180 != 0) goto LAB_00f6f194;
    }
    else {
      uVar8 = uStack_180 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar8);
      plVar3[8] = uVar7;
      plVar3[9] = (long)pvVar5;
      plVar3[7] = uVar8 | 1;
LAB_00f6f194:
      memcpy(pvVar5,pvVar2,uVar7);
    }
    *(undefined1 *)((long)pvVar5 + uVar7) = 0;
    if (local_150 != (long *)0x0) goto LAB_00f6f134;
LAB_00f6f1b0:
    plVar3[0xe] = 0;
  }
  local_120 = plVar3;
  AsyncTaskPool::enqueue(pAVar4,0,local_110,0,alStack_140);
  if (alStack_140 == local_120) {
    pcVar6 = *(code **)(*local_120 + 0x20);
LAB_00f6f210:
    (*pcVar6)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar6 = *(code **)(*local_120 + 0x28);
    goto LAB_00f6f210;
  }
  if (alStack_170 == local_150) {
    pcVar6 = *(code **)(*local_150 + 0x20);
LAB_00f6f238:
    (*pcVar6)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar6 = *(code **)(*local_150 + 0x28);
    goto LAB_00f6f238;
  }
  if ((local_188 & 1) != 0) {
    operator_delete(local_178);
  }
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
  if (local_110 == local_f0) {
    pcVar6 = (code *)(*local_f0)[4];
LAB_00f6f284:
    (*pcVar6)();
  }
  else if (local_f0 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_f0)[5];
    goto LAB_00f6f284;
  }
  if (alStack_a0 == local_80) {
    pcVar6 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f6f2b0;
    pcVar6 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar6)();
LAB_00f6f2b0:
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if (((byte)local_1e0 & 1) != 0) {
    operator_delete(local_1d0);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

