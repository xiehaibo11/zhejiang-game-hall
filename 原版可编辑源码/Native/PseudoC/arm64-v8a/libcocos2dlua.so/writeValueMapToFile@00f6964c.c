
/* cocos2d::FileUtils::writeValueMapToFile(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<void (bool)>) const */

void __thiscall
cocos2d::FileUtils::writeValueMapToFile
          (undefined8 param_1,long *param_2,basic_string *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  AsyncTaskPool *pAVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_208;
  undefined7 uStack_207;
  ulong uStack_200;
  void *local_1f8;
  undefined8 local_1e0;
  ulong uStack_1d8;
  void *local_1d0;
  long alStack_1c0 [4];
  long *local_1a0;
  void *local_190;
  ulong local_188;
  undefined8 *local_180;
  long local_178;
  undefined4 local_170;
  long alStack_160 [4];
  long *local_140;
  undefined **local_130 [4];
  undefined ***local_110;
  undefined8 local_f0;
  ulong uStack_e8;
  void *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  void *local_a0;
  ulong uStack_98;
  undefined8 *local_90;
  long lStack_88;
  undefined4 local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_208,param_3);
  pvVar3 = local_1f8;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  if (((byte)local_208 & 1) == 0) {
    local_f0 = CONCAT71(uStack_207,local_208);
    local_e0 = local_1f8;
    uStack_e8 = uStack_200;
  }
  else {
    if (0xffffffffffffffef < uStack_200) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_200 < 0x17) {
      pvVar11 = (void *)((long)&local_f0 + 1);
      local_f0 = (ulong)(byte)((int)uStack_200 << 1);
      if (uStack_200 != 0) goto LAB_00f69704;
    }
    else {
      uVar8 = uStack_200 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = operator_new(uVar8);
      local_f0 = uVar8 | 1;
      uStack_e8 = uStack_200;
      local_e0 = pvVar11;
LAB_00f69704:
      memcpy(pvVar11,pvVar3,uStack_200);
    }
    *(undefined1 *)((long)pvVar11 + uStack_200) = 0;
  }
  plVar5 = (long *)param_4[4];
  if (plVar5 == (long *)0x0) {
    local_b0 = (long *)0x0;
  }
  else if (param_4 == plVar5) {
    local_b0 = alStack_d0;
    (**(code **)(*plVar5 + 0x18))(plVar5,alStack_d0);
  }
  else {
    param_4[4] = 0;
    local_b0 = plVar5;
  }
  local_a0 = (void *)*param_2;
  uStack_98 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_90 = (undefined8 *)param_2[2];
  lStack_88 = param_2[3];
  local_80 = (undefined4)param_2[4];
  if (lStack_88 != 0) {
    uVar8 = local_90[1];
    if ((uStack_98 & uStack_98 - 1) == 0) {
      uVar8 = uVar8 & uStack_98 - 1;
    }
    else if (uStack_98 <= uVar8) {
      uVar9 = 0;
      if (uStack_98 != 0) {
        uVar9 = uVar8 / uStack_98;
      }
      uVar8 = uVar8 - uVar9 * uStack_98;
    }
    *(undefined8 ***)((long)local_a0 + uVar8 * 8) = &local_90;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  pAVar6 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
  pvVar3 = local_e0;
  uVar8 = uStack_e8;
  local_110 = local_130;
  local_130[0] = &PTR_FUN_01720ac8;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = (void *)0x0;
  if ((local_f0 & 1) == 0) {
    local_1d0 = local_e0;
    uStack_1d8 = uStack_e8;
    local_1e0 = local_f0;
  }
  else {
    if (0xffffffffffffffef < uStack_e8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_e8 < 0x17) {
      pvVar11 = (void *)((long)&local_1e0 + 1);
      local_1e0 = (ulong)(byte)((int)uStack_e8 << 1);
      if (uStack_e8 != 0) goto LAB_00f69848;
    }
    else {
      uVar9 = uStack_e8 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = operator_new(uVar9);
      local_1e0 = uVar9 | 1;
      uStack_1d8 = uVar8;
      local_1d0 = pvVar11;
LAB_00f69848:
      memcpy(pvVar11,pvVar3,uVar8);
    }
    *(undefined1 *)((long)pvVar11 + uVar8) = 0;
  }
  if (local_b0 == (long *)0x0) {
    local_1a0 = (long *)0x0;
  }
  else if (alStack_d0 == local_b0) {
    local_1a0 = alStack_1c0;
    (**(code **)(*local_b0 + 0x18))(local_b0,alStack_1c0);
  }
  else {
    local_1a0 = local_b0;
    local_b0 = (long *)0x0;
  }
  local_188 = uStack_98;
  local_190 = local_a0;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_180 = local_90;
  local_178 = lStack_88;
  local_170 = local_80;
  if (lStack_88 != 0) {
    uVar8 = local_90[1];
    if ((local_188 & local_188 - 1) == 0) {
      uVar8 = uVar8 & local_188 - 1;
    }
    else if (local_188 <= uVar8) {
      uVar9 = 0;
      if (local_188 != 0) {
        uVar9 = uVar8 / local_188;
      }
      uVar8 = uVar8 - uVar9 * local_188;
    }
    *(undefined8 ***)((long)local_190 + uVar8 * 8) = &local_180;
    local_90 = (undefined8 *)0x0;
    lStack_88 = 0;
  }
  local_140 = (long *)0x0;
  plVar5 = operator_new(0xa0);
  pvVar3 = local_1d0;
  uVar8 = uStack_1d8;
  *plVar5 = (long)&PTR_FUN_01720b48;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  if ((local_1e0 & 1) == 0) {
    plVar5[6] = (long)local_1d0;
    plVar5[5] = uStack_1d8;
    plVar5[4] = local_1e0;
    if (local_1a0 == (long *)0x0) goto LAB_00f699b8;
LAB_00f6993c:
    if (alStack_1c0 == local_1a0) {
      plVar5[0xc] = (long)(plVar5 + 8);
      (**(code **)(*local_1a0 + 0x18))();
    }
    else {
      plVar5[0xc] = (long)local_1a0;
      local_1a0 = (long *)0x0;
    }
  }
  else {
    if (0xffffffffffffffef < uStack_1d8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_1d8 < 0x17) {
      pvVar11 = (void *)((long)plVar5 + 0x21);
      *(char *)(plVar5 + 4) = (char)((int)uStack_1d8 << 1);
      if (uStack_1d8 != 0) goto LAB_00f6999c;
    }
    else {
      uVar9 = uStack_1d8 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = operator_new(uVar9);
      plVar5[5] = uVar8;
      plVar5[6] = (long)pvVar11;
      plVar5[4] = uVar9 | 1;
LAB_00f6999c:
      memcpy(pvVar11,pvVar3,uVar8);
    }
    *(undefined1 *)((long)pvVar11 + uVar8) = 0;
    if (local_1a0 != (long *)0x0) goto LAB_00f6993c;
LAB_00f699b8:
    plVar5[0xc] = 0;
  }
  uVar8 = local_188;
  pvVar3 = local_190;
  plVar5[0xe] = (long)local_190;
  plVar5[0xf] = local_188;
  plVar5[0x10] = (long)local_180;
  local_190 = (void *)0x0;
  local_188 = 0;
  plVar5[0x11] = local_178;
  *(undefined4 *)(plVar5 + 0x12) = local_170;
  if (local_178 != 0) {
    uVar9 = local_180[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar1 * uVar8;
    }
    *(long **)((long)pvVar3 + uVar9 * 8) = plVar5 + 0x10;
    local_180 = (undefined8 *)0x0;
    local_178 = 0;
  }
  local_140 = plVar5;
  AsyncTaskPool::enqueue(pAVar6,0,local_130,0,alStack_160);
  if (alStack_160 == local_140) {
    pcVar7 = *(code **)(*local_140 + 0x20);
LAB_00f69a70:
    (*pcVar7)();
    pvVar3 = local_190;
    puVar4 = local_180;
  }
  else {
    pvVar3 = local_190;
    puVar4 = local_180;
    if (local_140 != (long *)0x0) {
      pcVar7 = *(code **)(*local_140 + 0x28);
      goto LAB_00f69a70;
    }
  }
  while (puVar4 != (void *)0x0) {
    pvVar11 = (void *)*puVar4;
    local_190 = pvVar3;
    cocos2d::Value::~Value((Value *)(puVar4 + 5));
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_190;
    puVar4 = pvVar11;
  }
  local_190 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (alStack_1c0 == local_1a0) {
    pcVar7 = *(code **)(*local_1a0 + 0x20);
LAB_00f69ae4:
    (*pcVar7)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar7 = *(code **)(*local_1a0 + 0x28);
    goto LAB_00f69ae4;
  }
  if ((local_1e0 & 1) != 0) {
    operator_delete(local_1d0);
  }
  if (local_130 == local_110) {
    pcVar7 = (code *)(*local_110)[4];
LAB_00f69b20:
    (*pcVar7)();
    pvVar3 = local_a0;
    puVar4 = local_90;
  }
  else {
    pvVar3 = local_a0;
    puVar4 = local_90;
    if (local_110 != (undefined ***)0x0) {
      pcVar7 = (code *)(*local_110)[5];
      goto LAB_00f69b20;
    }
  }
  while (puVar4 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar4;
    local_a0 = pvVar3;
    cocos2d::Value::~Value((Value *)(puVar4 + 5));
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_a0;
    puVar4 = puVar10;
  }
  local_a0 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (alStack_d0 == local_b0) {
    pcVar7 = *(code **)(*local_b0 + 0x20);
  }
  else {
    if (local_b0 == (long *)0x0) goto LAB_00f69b98;
    pcVar7 = *(code **)(*local_b0 + 0x28);
  }
  (*pcVar7)();
LAB_00f69b98:
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (((byte)local_208 & 1) != 0) {
    operator_delete(local_1f8);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

