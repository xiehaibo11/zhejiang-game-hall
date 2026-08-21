
void FUN_008f7a48(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  byte *__src;
  byte *__src_00;
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar1 = (byte)*param_3;
  uVar9 = param_3[1];
  __src_00 = (byte *)param_3[2];
  __src = __src_00;
  uVar6 = uVar9;
  if ((bVar1 & 1) == 0) {
    __src = (byte *)((long)param_3 + 1);
    uVar6 = (ulong)(bVar1 >> 1);
  }
  uVar7 = uVar6;
  if (uVar6 == 0) {
LAB_008f7ad4:
    uVar7 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar7 == 0) goto LAB_008f7ad4;
      lVar3 = uVar7 - 1;
      uVar7 = uVar7 - 1;
    } while (__src[lVar3] != 0x2e);
    if (uVar7 == 0) {
      local_90 = 0;
      uStack_88 = 0;
      local_80 = (void *)0x0;
      if ((bVar1 & 1) == 0) {
        local_80 = (void *)param_3[2];
        uStack_88 = param_3[1];
        local_90 = *param_3;
        goto LAB_008f7b44;
      }
      if (0xffffffffffffffef < uVar9) goto LAB_008f7c6c;
      if (uVar9 < 0x17) {
        pvVar8 = (void *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)uVar9 << 1);
        if (uVar9 != 0) goto LAB_008f7c50;
      }
      else {
        uVar6 = uVar9 + 0x10 & 0xfffffffffffffff0;
        pvVar8 = operator_new(uVar6);
        local_90 = uVar6 | 1;
        uStack_88 = uVar9;
        local_80 = pvVar8;
LAB_008f7c50:
        memcpy(pvVar8,__src_00,uVar9);
      }
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
      goto LAB_008f7b44;
    }
  }
  if (uVar7 <= uVar6) {
    uVar6 = uVar7;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  if (0xffffffffffffffef < uVar6) {
LAB_008f7c6c:
    local_80 = (void *)0x0;
    uStack_88 = 0;
    local_90 = 0;
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    pvVar8 = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)uVar6 << 1);
    if (uVar6 != 0) goto LAB_008f7b30;
  }
  else {
    uVar9 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = operator_new(uVar9);
    local_90 = uVar9 | 1;
    uStack_88 = uVar6;
    local_80 = pvVar8;
LAB_008f7b30:
    memcpy(pvVar8,__src,uVar6);
  }
  *(undefined1 *)((long)pvVar8 + uVar6) = 0;
LAB_008f7b44:
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,".jsc",4);
  local_60 = (void *)puVar4[2];
  uStack_68 = puVar4[1];
  local_70 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  plVar5 = (long *)cocos2d::FileUtils::getInstance();
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,&local_70);
  if ((uVar6 & 1) == 0) {
    plVar5 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar5 + 0x40))(param_1,plVar5,param_3);
  }
  else {
    plVar5 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar5 + 0x40))(param_1,plVar5,&local_70);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

