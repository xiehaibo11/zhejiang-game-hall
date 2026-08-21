
/* cocos2d::FileUtils::writeStringToFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (bool)>) const */

void __thiscall
cocos2d::FileUtils::writeStringToFile
          (undefined8 param_1,long *param_2,basic_string *param_3,long *param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  AsyncTaskPool *pAVar5;
  void *pvVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1e8;
  undefined7 uStack_1e7;
  ulong uStack_1e0;
  void *local_1d8;
  undefined8 local_1c0;
  ulong uStack_1b8;
  void *local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  ulong local_170;
  long lStack_168;
  void *local_160;
  long alStack_150 [4];
  long *local_130;
  undefined **local_120 [4];
  undefined ***local_100;
  undefined8 local_e0;
  ulong uStack_d8;
  void *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  ulong local_90;
  long lStack_88;
  void *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_1e8,param_3);
  pvVar2 = local_1d8;
  uStack_d8 = 0;
  local_d0 = (void *)0x0;
  local_e0 = 0;
  if (((byte)local_1e8 & 1) == 0) {
    local_e0 = CONCAT71(uStack_1e7,local_1e8);
    local_d0 = local_1d8;
    uStack_d8 = uStack_1e0;
  }
  else {
    if (0xffffffffffffffef < uStack_1e0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_1e0 < 0x17) {
      pvVar6 = (void *)((long)&local_e0 + 1);
      local_e0 = (ulong)(byte)((int)uStack_1e0 << 1);
      if (uStack_1e0 != 0) goto LAB_00f67760;
    }
    else {
      uVar8 = uStack_1e0 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar8);
      local_e0 = uVar8 | 1;
      uStack_d8 = uStack_1e0;
      local_d0 = pvVar6;
LAB_00f67760:
      memcpy(pvVar6,pvVar2,uStack_1e0);
    }
    *(undefined1 *)((long)pvVar6 + uStack_1e0) = 0;
  }
  plVar4 = (long *)param_4[4];
  if (plVar4 == (long *)0x0) {
    local_a0 = (long *)0x0;
  }
  else if (param_4 == plVar4) {
    local_a0 = alStack_c0;
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_c0);
  }
  else {
    param_4[4] = 0;
    local_a0 = plVar4;
  }
  local_80 = (void *)param_2[2];
  lStack_88 = param_2[1];
  local_90 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  pAVar5 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
  pvVar2 = local_d0;
  uVar8 = uStack_d8;
  local_100 = local_120;
  local_120[0] = &PTR_FUN_017201b8;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = (void *)0x0;
  if ((local_e0 & 1) == 0) {
    local_1b0 = local_d0;
    uStack_1b8 = uStack_d8;
    local_1c0 = local_e0;
  }
  else {
    if (0xffffffffffffffef < uStack_d8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_d8 < 0x17) {
      pvVar6 = (void *)((long)&local_1c0 + 1);
      local_1c0 = (ulong)(byte)((int)uStack_d8 << 1);
      if (uStack_d8 != 0) goto LAB_00f67860;
    }
    else {
      uVar9 = uStack_d8 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar9);
      local_1c0 = uVar9 | 1;
      uStack_1b8 = uVar8;
      local_1b0 = pvVar6;
LAB_00f67860:
      memcpy(pvVar6,pvVar2,uVar8);
    }
    *(undefined1 *)((long)pvVar6 + uVar8) = 0;
  }
  if (local_a0 == (long *)0x0) {
    local_180 = (long *)0x0;
  }
  else if (alStack_c0 == local_a0) {
    local_180 = alStack_1a0;
    (**(code **)(*local_a0 + 0x18))(local_a0,alStack_1a0);
  }
  else {
    local_180 = local_a0;
    local_a0 = (long *)0x0;
  }
  local_160 = local_80;
  lStack_168 = lStack_88;
  local_170 = local_90;
  lStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  local_130 = (long *)0x0;
  plVar4 = operator_new(0x90);
  pvVar2 = local_1b0;
  uVar8 = uStack_1b8;
  *plVar4 = (long)&PTR_FUN_01720238;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  if ((local_1c0 & 1) == 0) {
    plVar4[6] = (long)local_1b0;
    plVar4[5] = uStack_1b8;
    plVar4[4] = local_1c0;
    if (local_180 == (long *)0x0) goto LAB_00f67994;
LAB_00f67918:
    if (alStack_1a0 == local_180) {
      plVar4[0xc] = (long)(plVar4 + 8);
      (**(code **)(*local_180 + 0x18))();
    }
    else {
      plVar4[0xc] = (long)local_180;
      local_180 = (long *)0x0;
    }
  }
  else {
    if (0xffffffffffffffef < uStack_1b8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_1b8 < 0x17) {
      pvVar6 = (void *)((long)plVar4 + 0x21);
      *(char *)(plVar4 + 4) = (char)((int)uStack_1b8 << 1);
      if (uStack_1b8 != 0) goto LAB_00f67978;
    }
    else {
      uVar9 = uStack_1b8 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar9);
      plVar4[5] = uVar8;
      plVar4[6] = (long)pvVar6;
      plVar4[4] = uVar9 | 1;
LAB_00f67978:
      memcpy(pvVar6,pvVar2,uVar8);
    }
    *(undefined1 *)((long)pvVar6 + uVar8) = 0;
    if (local_180 != (long *)0x0) goto LAB_00f67918;
LAB_00f67994:
    plVar4[0xc] = 0;
  }
  pvVar2 = local_160;
  lVar3 = lStack_168;
  uVar8 = local_170;
  lStack_168 = 0;
  local_160 = (void *)0x0;
  local_170 = 0;
  plVar4[0xf] = lVar3;
  plVar4[0xe] = uVar8;
  plVar4[0x10] = (long)pvVar2;
  local_130 = plVar4;
  AsyncTaskPool::enqueue(pAVar5,0,local_120,0,alStack_150);
  if (alStack_150 == local_130) {
    pcVar7 = *(code **)(*local_130 + 0x20);
LAB_00f67a14:
    (*pcVar7)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar7 = *(code **)(*local_130 + 0x28);
    goto LAB_00f67a14;
  }
  if ((local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if (alStack_1a0 == local_180) {
    pcVar7 = *(code **)(*local_180 + 0x20);
LAB_00f67a4c:
    (*pcVar7)();
  }
  else if (local_180 != (long *)0x0) {
    pcVar7 = *(code **)(*local_180 + 0x28);
    goto LAB_00f67a4c;
  }
  if ((local_1c0 & 1) != 0) {
    operator_delete(local_1b0);
  }
  if (local_120 == local_100) {
    pcVar7 = (code *)(*local_100)[4];
LAB_00f67a88:
    (*pcVar7)();
  }
  else if (local_100 != (undefined ***)0x0) {
    pcVar7 = (code *)(*local_100)[5];
    goto LAB_00f67a88;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (alStack_c0 == local_a0) {
    pcVar7 = *(code **)(*local_a0 + 0x20);
  }
  else {
    if (local_a0 == (long *)0x0) goto LAB_00f67ac4;
    pcVar7 = *(code **)(*local_a0 + 0x28);
  }
  (*pcVar7)();
LAB_00f67ac4:
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (((byte)local_1e8 & 1) != 0) {
    operator_delete(local_1d8);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

