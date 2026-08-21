
/* cocos2d::FileUtils::writeValueVectorToFile(std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (bool)>) const */

void __thiscall
cocos2d::FileUtils::writeValueVectorToFile
          (undefined8 param_1,long *param_2,basic_string *param_3,long *param_4)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Value *pVVar4;
  long lVar5;
  long *plVar6;
  AsyncTaskPool *pAVar7;
  void *pvVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1f8;
  undefined7 uStack_1f7;
  ulong uStack_1f0;
  void *local_1e8;
  undefined8 local_1d0;
  ulong uStack_1c8;
  void *local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  Value *local_180;
  Value *pVStack_178;
  long local_170;
  long alStack_160 [4];
  long *local_140;
  undefined **local_130 [4];
  undefined ***local_110;
  undefined8 local_f0;
  ulong uStack_e8;
  void *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  Value *local_a0;
  Value *pVStack_98;
  long local_90;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_1f8,param_3);
  pvVar3 = local_1e8;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  if (((byte)local_1f8 & 1) == 0) {
    local_f0 = CONCAT71(uStack_1f7,local_1f8);
    local_e0 = local_1e8;
    uStack_e8 = uStack_1f0;
  }
  else {
    if (0xffffffffffffffef < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_1f0 < 0x17) {
      pvVar8 = (void *)((long)&local_f0 + 1);
      local_f0 = (ulong)(byte)((int)uStack_1f0 << 1);
      if (uStack_1f0 != 0) goto LAB_00f69ea8;
    }
    else {
      uVar10 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar10);
      local_f0 = uVar10 | 1;
      uStack_e8 = uStack_1f0;
      local_e0 = pvVar8;
LAB_00f69ea8:
      memcpy(pvVar8,pvVar3,uStack_1f0);
    }
    *(undefined1 *)((long)pvVar8 + uStack_1f0) = 0;
  }
  plVar6 = (long *)param_4[4];
  if (plVar6 == (long *)0x0) {
    local_b0 = (long *)0x0;
  }
  else if (param_4 == plVar6) {
    local_b0 = alStack_d0;
    (**(code **)(*plVar6 + 0x18))(plVar6,alStack_d0);
  }
  else {
    param_4[4] = 0;
    local_b0 = plVar6;
  }
  pVStack_98 = (Value *)param_2[1];
  local_a0 = (Value *)*param_2;
  local_90 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pAVar7 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
  pvVar3 = local_e0;
  uVar10 = uStack_e8;
  local_110 = local_130;
  local_130[0] = &PTR_FUN_01720c40;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = (void *)0x0;
  if ((local_f0 & 1) == 0) {
    local_1c0 = local_e0;
    uStack_1c8 = uStack_e8;
    local_1d0 = local_f0;
  }
  else {
    if (0xffffffffffffffef < uStack_e8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_e8 < 0x17) {
      pvVar8 = (void *)((long)&local_1d0 + 1);
      local_1d0 = (ulong)(byte)((int)uStack_e8 << 1);
      if (uStack_e8 != 0) goto LAB_00f69fa8;
    }
    else {
      uVar11 = uStack_e8 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar11);
      local_1d0 = uVar11 | 1;
      uStack_1c8 = uVar10;
      local_1c0 = pvVar8;
LAB_00f69fa8:
      memcpy(pvVar8,pvVar3,uVar10);
    }
    *(undefined1 *)((long)pvVar8 + uVar10) = 0;
  }
  if (local_b0 == (long *)0x0) {
    local_190 = (long *)0x0;
  }
  else if (alStack_d0 == local_b0) {
    local_190 = alStack_1b0;
    (**(code **)(*local_b0 + 0x18))(local_b0,alStack_1b0);
  }
  else {
    local_190 = local_b0;
    local_b0 = (long *)0x0;
  }
  local_170 = local_90;
  pVStack_178 = pVStack_98;
  local_180 = local_a0;
  local_a0 = (Value *)0x0;
  pVStack_98 = (Value *)0x0;
  local_90 = 0;
  local_140 = (long *)0x0;
  plVar6 = operator_new(0x90);
  pvVar3 = local_1c0;
  uVar10 = uStack_1c8;
  *plVar6 = (long)&PTR_FUN_01720cc0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  if ((local_1d0 & 1) == 0) {
    plVar6[6] = (long)local_1c0;
    plVar6[5] = uStack_1c8;
    plVar6[4] = local_1d0;
    if (local_190 == (long *)0x0) goto LAB_00f6a0dc;
LAB_00f6a060:
    if (alStack_1b0 == local_190) {
      plVar6[0xc] = (long)(plVar6 + 8);
      (**(code **)(*local_190 + 0x18))();
    }
    else {
      plVar6[0xc] = (long)local_190;
      local_190 = (long *)0x0;
    }
  }
  else {
    if (0xffffffffffffffef < uStack_1c8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_1c8 < 0x17) {
      pvVar8 = (void *)((long)plVar6 + 0x21);
      *(char *)(plVar6 + 4) = (char)((int)uStack_1c8 << 1);
      if (uStack_1c8 != 0) goto LAB_00f6a0c0;
    }
    else {
      uVar11 = uStack_1c8 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar11);
      plVar6[5] = uVar10;
      plVar6[6] = (long)pvVar8;
      plVar6[4] = uVar11 | 1;
LAB_00f6a0c0:
      memcpy(pvVar8,pvVar3,uVar10);
    }
    *(undefined1 *)((long)pvVar8 + uVar10) = 0;
    if (local_190 != (long *)0x0) goto LAB_00f6a060;
LAB_00f6a0dc:
    plVar6[0xc] = 0;
  }
  lVar5 = local_170;
  pVVar4 = pVStack_178;
  pVVar2 = local_180;
  local_180 = (Value *)0x0;
  pVStack_178 = (Value *)0x0;
  local_170 = 0;
  plVar6[0xf] = (long)pVVar4;
  plVar6[0xe] = (long)pVVar2;
  plVar6[0x10] = lVar5;
  local_140 = plVar6;
  AsyncTaskPool::enqueue(pAVar7,0,local_130,0,alStack_160);
  if (alStack_160 == local_140) {
    pcVar9 = *(code **)(*local_140 + 0x20);
LAB_00f6a15c:
    (*pcVar9)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar9 = *(code **)(*local_140 + 0x28);
    goto LAB_00f6a15c;
  }
  pVVar4 = local_180;
  pVVar2 = pVStack_178;
  if (local_180 != (Value *)0x0) {
    while (pVVar2 != pVVar4) {
      cocos2d::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    pVStack_178 = pVVar4;
    operator_delete(local_180);
  }
  if (alStack_1b0 == local_190) {
    pcVar9 = *(code **)(*local_190 + 0x20);
LAB_00f6a1c0:
    (*pcVar9)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar9 = *(code **)(*local_190 + 0x28);
    goto LAB_00f6a1c0;
  }
  if ((local_1d0 & 1) != 0) {
    operator_delete(local_1c0);
  }
  if (local_130 == local_110) {
    pcVar9 = (code *)(*local_110)[4];
LAB_00f6a1fc:
    (*pcVar9)();
  }
  else if (local_110 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_110)[5];
    goto LAB_00f6a1fc;
  }
  pVVar4 = local_a0;
  pVVar2 = pVStack_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar2 != pVVar4) {
      cocos2d::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    pVStack_98 = pVVar4;
    operator_delete(local_a0);
  }
  if (alStack_d0 == local_b0) {
    pcVar9 = *(code **)(*local_b0 + 0x20);
  }
  else {
    if (local_b0 == (long *)0x0) goto LAB_00f6a264;
    pcVar9 = *(code **)(*local_b0 + 0x28);
  }
  (*pcVar9)();
LAB_00f6a264:
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (((byte)local_1f8 & 1) != 0) {
    operator_delete(local_1e8);
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

