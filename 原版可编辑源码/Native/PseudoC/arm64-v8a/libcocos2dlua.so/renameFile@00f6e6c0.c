
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::FileUtils::renameFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<void (bool)>) const */

void __thiscall
cocos2d::FileUtils::renameFile
          (undefined8 param_1_00,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          long *param_5)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  AsyncTaskPool *pAVar5;
  code *pcVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_238;
  undefined7 uStack_237;
  ulong uStack_230;
  void *local_228;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_220;
  undefined7 uStack_21f;
  ulong uStack_218;
  void *local_210;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_208;
  undefined7 uStack_207;
  ulong uStack_200;
  void *local_1f8;
  undefined1 auStack_1f0 [16];
  byte local_1e0;
  void *local_1d0;
  byte local_1c8;
  void *local_1b8;
  byte local_1b0;
  void *local_1a0;
  long alStack_190 [4];
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  undefined **local_130 [4];
  undefined ***local_110;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  void *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_238,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_220,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_208,param_3);
  pvVar2 = local_228;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  if (((byte)local_238 & 1) == 0) {
    local_f0 = CONCAT71(uStack_237,local_238);
    local_e0 = local_228;
    uStack_e8 = uStack_230;
  }
  else {
    if (0xffffffffffffffef < uStack_230) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_230 < 0x17) {
      pvVar3 = (void *)((long)&local_f0 + 1);
      local_f0 = (ulong)(byte)((int)uStack_230 << 1);
      if (uStack_230 != 0) goto LAB_00f6e79c;
    }
    else {
      uVar7 = uStack_230 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = operator_new(uVar7);
      local_f0 = uVar7 | 1;
      uStack_e8 = uStack_230;
      local_e0 = pvVar3;
LAB_00f6e79c:
      memcpy(pvVar3,pvVar2,uStack_230);
    }
    *(undefined1 *)((long)pvVar3 + uStack_230) = 0;
  }
  pvVar2 = local_210;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  local_d8 = 0;
  if (((byte)local_220 & 1) == 0) {
    local_d8 = CONCAT71(uStack_21f,local_220);
    local_c8 = local_210;
    uStack_d0 = uStack_218;
  }
  else {
    if (0xffffffffffffffef < uStack_218) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_218 < 0x17) {
      pvVar3 = (void *)((long)&local_d8 + 1);
      local_d8 = (ulong)(byte)((int)uStack_218 << 1);
      if (uStack_218 != 0) goto LAB_00f6e828;
    }
    else {
      uVar7 = uStack_218 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = operator_new(uVar7);
      local_d8 = uVar7 | 1;
      uStack_d0 = uStack_218;
      local_c8 = pvVar3;
LAB_00f6e828:
      memcpy(pvVar3,pvVar2,uStack_218);
    }
    *(undefined1 *)((long)pvVar3 + uStack_218) = 0;
  }
  pvVar2 = local_1f8;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = 0;
  if (((byte)local_208 & 1) == 0) {
    local_c0 = CONCAT71(uStack_207,local_208);
    local_b0 = local_1f8;
    uStack_b8 = uStack_200;
  }
  else {
    if (0xffffffffffffffef < uStack_200) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_200 < 0x17) {
      pvVar3 = (void *)((long)&local_c0 + 1);
      local_c0 = (ulong)(byte)((int)uStack_200 << 1);
      if (uStack_200 != 0) goto LAB_00f6e8b4;
    }
    else {
      uVar7 = uStack_200 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = operator_new(uVar7);
      local_c0 = uVar7 | 1;
      uStack_b8 = uStack_200;
      local_b0 = pvVar3;
LAB_00f6e8b4:
      memcpy(pvVar3,pvVar2,uStack_200);
    }
    *(undefined1 *)((long)pvVar3 + uStack_200) = 0;
  }
  plVar4 = (long *)param_5[4];
  if (plVar4 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if (param_5 == plVar4) {
    local_80 = alStack_a0;
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_a0);
  }
  else {
    param_5[4] = 0;
    local_80 = plVar4;
  }
  pAVar5 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
  local_110 = local_130;
  local_130[0] = &PTR_FUN_01721510;
  FUN_00f7987c(auStack_1f0,auStack_100);
  local_140 = (long *)0x0;
  plVar4 = operator_new(0xa0);
  *plVar4 = (long)&PTR_FUN_01721590;
  FUN_00f7987c(plVar4 + 2,auStack_1f0);
  local_140 = plVar4;
  AsyncTaskPool::enqueue(pAVar5,0,local_130,0,alStack_160);
  if (alStack_160 == local_140) {
    pcVar6 = *(code **)(*local_140 + 0x20);
LAB_00f6e998:
    (*pcVar6)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar6 = *(code **)(*local_140 + 0x28);
    goto LAB_00f6e998;
  }
  if (alStack_190 == local_170) {
    pcVar6 = *(code **)(*local_170 + 0x20);
LAB_00f6e9c8:
    (*pcVar6)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar6 = *(code **)(*local_170 + 0x28);
    goto LAB_00f6e9c8;
  }
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if ((local_1e0 & 1) != 0) {
    operator_delete(local_1d0);
  }
  if (local_130 == local_110) {
    pcVar6 = (code *)(*local_110)[4];
LAB_00f6ea38:
    (*pcVar6)();
  }
  else if (local_110 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_110)[5];
    goto LAB_00f6ea38;
  }
  if (alStack_a0 == local_80) {
    pcVar6 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f6ea64;
    pcVar6 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar6)();
LAB_00f6ea64:
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (((byte)local_208 & 1) != 0) {
    operator_delete(local_1f8);
  }
  if (((byte)local_220 & 1) != 0) {
    operator_delete(local_210);
  }
  if (((byte)local_238 & 1) != 0) {
    operator_delete(local_228);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

