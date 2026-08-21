
/* cocos2d::FileUtils::removeDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (bool)>) const */

void __thiscall
cocos2d::FileUtils::removeDirectory(undefined8 param_1_00,basic_string *param_1,long *param_3)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  AsyncTaskPool *pAVar4;
  void *pvVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1a8;
  undefined7 uStack_1a7;
  ulong uStack_1a0;
  void *local_198;
  undefined8 local_180;
  ulong uStack_178;
  void *local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  undefined **local_100 [4];
  undefined ***local_e0;
  undefined8 local_c0;
  ulong uStack_b8;
  void *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_1a8,param_1);
  pvVar2 = local_198;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = 0;
  if (((byte)local_1a8 & 1) == 0) {
    local_c0 = CONCAT71(uStack_1a7,local_1a8);
    local_b0 = local_198;
    uStack_b8 = uStack_1a0;
  }
  else {
    if (0xffffffffffffffef < uStack_1a0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_1a0 < 0x17) {
      pvVar5 = (void *)((long)&local_c0 + 1);
      local_c0 = (ulong)(byte)((int)uStack_1a0 << 1);
      if (uStack_1a0 != 0) goto LAB_00f6dd98;
    }
    else {
      uVar7 = uStack_1a0 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar7);
      local_c0 = uVar7 | 1;
      uStack_b8 = uStack_1a0;
      local_b0 = pvVar5;
LAB_00f6dd98:
      memcpy(pvVar5,pvVar2,uStack_1a0);
    }
    *(undefined1 *)((long)pvVar5 + uStack_1a0) = 0;
  }
  plVar3 = (long *)param_3[4];
  if (plVar3 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if (param_3 == plVar3) {
    local_80 = alStack_a0;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_a0);
  }
  else {
    param_3[4] = 0;
    local_80 = plVar3;
  }
  pAVar4 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
  pvVar2 = local_b0;
  uVar7 = uStack_b8;
  local_e0 = local_100;
  local_100[0] = &PTR_FUN_01721220;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = (void *)0x0;
  if ((local_c0 & 1) == 0) {
    local_170 = local_b0;
    uStack_178 = uStack_b8;
    local_180 = local_c0;
  }
  else {
    if (0xffffffffffffffef < uStack_b8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_b8 < 0x17) {
      pvVar5 = (void *)((long)&local_180 + 1);
      local_180 = (ulong)(byte)((int)uStack_b8 << 1);
      if (uStack_b8 != 0) goto LAB_00f6de80;
    }
    else {
      uVar8 = uStack_b8 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar8);
      local_180 = uVar8 | 1;
      uStack_178 = uVar7;
      local_170 = pvVar5;
LAB_00f6de80:
      memcpy(pvVar5,pvVar2,uVar7);
    }
    *(undefined1 *)((long)pvVar5 + uVar7) = 0;
  }
  if (local_80 == (long *)0x0) {
    local_140 = (long *)0x0;
  }
  else if (alStack_a0 == local_80) {
    local_140 = alStack_160;
    (**(code **)(*local_80 + 0x18))(local_80,alStack_160);
  }
  else {
    local_140 = local_80;
    local_80 = (long *)0x0;
  }
  local_110 = (long *)0x0;
  plVar3 = operator_new(0x70);
  pvVar2 = local_170;
  uVar7 = uStack_178;
  *plVar3 = (long)&PTR_FUN_017212a0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  if ((local_180 & 1) == 0) {
    plVar3[6] = (long)local_170;
    plVar3[5] = uStack_178;
    plVar3[4] = local_180;
    if (local_140 == (long *)0x0) goto LAB_00f6df94;
LAB_00f6df18:
    if (alStack_160 == local_140) {
      plVar3[0xc] = (long)(plVar3 + 8);
      (**(code **)(*local_140 + 0x18))();
    }
    else {
      plVar3[0xc] = (long)local_140;
      local_140 = (long *)0x0;
    }
  }
  else {
    if (0xffffffffffffffef < uStack_178) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_178 < 0x17) {
      pvVar5 = (void *)((long)plVar3 + 0x21);
      *(char *)(plVar3 + 4) = (char)((int)uStack_178 << 1);
      if (uStack_178 != 0) goto LAB_00f6df78;
    }
    else {
      uVar8 = uStack_178 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar8);
      plVar3[5] = uVar7;
      plVar3[6] = (long)pvVar5;
      plVar3[4] = uVar8 | 1;
LAB_00f6df78:
      memcpy(pvVar5,pvVar2,uVar7);
    }
    *(undefined1 *)((long)pvVar5 + uVar7) = 0;
    if (local_140 != (long *)0x0) goto LAB_00f6df18;
LAB_00f6df94:
    plVar3[0xc] = 0;
  }
  local_110 = plVar3;
  AsyncTaskPool::enqueue(pAVar4,0,local_100,0,alStack_130);
  if (alStack_130 == local_110) {
    pcVar6 = *(code **)(*local_110 + 0x20);
LAB_00f6dff4:
    (*pcVar6)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar6 = *(code **)(*local_110 + 0x28);
    goto LAB_00f6dff4;
  }
  if (alStack_160 == local_140) {
    pcVar6 = *(code **)(*local_140 + 0x20);
LAB_00f6e01c:
    (*pcVar6)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar6 = *(code **)(*local_140 + 0x28);
    goto LAB_00f6e01c;
  }
  if ((local_180 & 1) != 0) {
    operator_delete(local_170);
  }
  if (local_100 == local_e0) {
    pcVar6 = (code *)(*local_e0)[4];
LAB_00f6e058:
    (*pcVar6)();
  }
  else if (local_e0 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_e0)[5];
    goto LAB_00f6e058;
  }
  if (alStack_a0 == local_80) {
    pcVar6 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f6e084;
    pcVar6 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar6)();
LAB_00f6e084:
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_1a8 & 1) != 0) {
    operator_delete(local_198);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

