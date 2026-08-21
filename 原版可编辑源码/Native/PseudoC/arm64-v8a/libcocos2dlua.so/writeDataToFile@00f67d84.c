
/* cocos2d::FileUtils::writeDataToFile(cocos2d::Data, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (bool)>) const */

void __thiscall
cocos2d::FileUtils::writeDataToFile
          (undefined8 param_1,Data *param_2,basic_string *param_3,long *param_4)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  AsyncTaskPool *pAVar4;
  void *pvVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1c8;
  undefined7 uStack_1c7;
  ulong uStack_1c0;
  void *local_1b8;
  undefined8 local_1a0;
  ulong uStack_198;
  void *local_190;
  long alStack_180 [4];
  long *local_160;
  Data aDStack_150 [16];
  long alStack_140 [4];
  long *local_120;
  undefined **local_110 [4];
  undefined ***local_f0;
  undefined8 local_d0;
  ulong uStack_c8;
  void *local_c0;
  long alStack_b0 [4];
  long *local_90;
  Data aDStack_80 [16];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_1c8,param_3);
  pvVar2 = local_1b8;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  if (((byte)local_1c8 & 1) == 0) {
    local_d0 = CONCAT71(uStack_1c7,local_1c8);
    local_c0 = local_1b8;
    uStack_c8 = uStack_1c0;
  }
  else {
    if (0xffffffffffffffef < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_1c0 < 0x17) {
      pvVar5 = (void *)((long)&local_d0 + 1);
      local_d0 = (ulong)(byte)((int)uStack_1c0 << 1);
      if (uStack_1c0 != 0) goto LAB_00f67e3c;
    }
    else {
      uVar8 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar8);
      local_d0 = uVar8 | 1;
      uStack_c8 = uStack_1c0;
      local_c0 = pvVar5;
LAB_00f67e3c:
      memcpy(pvVar5,pvVar2,uStack_1c0);
    }
    *(undefined1 *)((long)pvVar5 + uStack_1c0) = 0;
  }
  plVar3 = (long *)param_4[4];
  if (plVar3 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (param_4 == plVar3) {
    local_90 = alStack_b0;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_b0);
  }
  else {
    param_4[4] = 0;
    local_90 = plVar3;
  }
  Data::Data(aDStack_80,param_2);
  pAVar4 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
  pvVar2 = local_c0;
  uVar8 = uStack_c8;
  local_f0 = local_110;
  local_110[0] = &PTR_FUN_01720440;
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
      if (uStack_c8 != 0) goto LAB_00f67f40;
    }
    else {
      uVar7 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar7);
      local_1a0 = uVar7 | 1;
      uStack_198 = uVar8;
      local_190 = pvVar5;
LAB_00f67f40:
      memcpy(pvVar5,pvVar2,uVar8);
    }
    *(undefined1 *)((long)pvVar5 + uVar8) = 0;
  }
  if (local_90 == (long *)0x0) {
    local_160 = (long *)0x0;
  }
  else if (alStack_b0 == local_90) {
    local_160 = alStack_180;
    (**(code **)(*local_90 + 0x18))(local_90,alStack_180);
  }
  else {
    local_160 = local_90;
    local_90 = (long *)0x0;
  }
  Data::Data(aDStack_150,aDStack_80);
  local_120 = (long *)0x0;
  plVar3 = operator_new(0x80);
  pvVar2 = local_190;
  uVar8 = uStack_198;
  *plVar3 = (long)&PTR_FUN_017204c0;
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
      if (uStack_198 != 0) goto LAB_00f68048;
    }
    else {
      uVar7 = uStack_198 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar7);
      plVar3[5] = uVar8;
      plVar3[6] = (long)pvVar5;
      plVar3[4] = uVar7 | 1;
LAB_00f68048:
      memcpy(pvVar5,pvVar2,uVar8);
    }
    *(undefined1 *)((long)pvVar5 + uVar8) = 0;
  }
  if (local_160 == (long *)0x0) {
    plVar3[0xc] = 0;
  }
  else if (alStack_180 == local_160) {
    plVar3[0xc] = (long)(plVar3 + 8);
    (**(code **)(*local_160 + 0x18))(local_160,plVar3 + 8);
  }
  else {
    plVar3[0xc] = (long)local_160;
    local_160 = (long *)0x0;
  }
  Data::Data((Data *)(plVar3 + 0xe),aDStack_150);
  local_120 = plVar3;
  AsyncTaskPool::enqueue(pAVar4,0,local_110,0,alStack_140);
  if (alStack_140 == local_120) {
    pcVar6 = *(code **)(*local_120 + 0x20);
LAB_00f680f0:
    (*pcVar6)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar6 = *(code **)(*local_120 + 0x28);
    goto LAB_00f680f0;
  }
  Data::~Data(aDStack_150);
  if (alStack_180 == local_160) {
    pcVar6 = *(code **)(*local_160 + 0x20);
LAB_00f68120:
    (*pcVar6)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar6 = *(code **)(*local_160 + 0x28);
    goto LAB_00f68120;
  }
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
  if (local_110 == local_f0) {
    pcVar6 = (code *)(*local_f0)[4];
LAB_00f6815c:
    (*pcVar6)();
  }
  else if (local_f0 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_f0)[5];
    goto LAB_00f6815c;
  }
  Data::~Data(aDStack_80);
  if (alStack_b0 == local_90) {
    pcVar6 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_00f68190;
    pcVar6 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar6)();
LAB_00f68190:
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

