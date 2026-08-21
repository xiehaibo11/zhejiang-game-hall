
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::EditBox::show(cocos2d::EditBox::ShowInfo const&) */

void cocos2d::EditBox::show(ShowInfo *param_1)

{
  undefined4 uVar1;
  ShowInfo SVar2;
  ShowInfo SVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  byte local_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined4 uStack_8c;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_70 = operator_new(0x30);
  uStack_8c = 0;
  uStack_78 = 0x20;
  local_80 = 0x31;
  local_98 = 0x14;
  local_8f = 0x6576;
  builtin_strncpy(local_70,"org/cocos2dx/lib/Cocos2dxEditBox",0x21);
  local_88 = (void *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  uStack_97 = 0x74614e776f6873;
  uStack_90 = 0x69;
  local_8d = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_a0 = *(void **)(param_1 + 0x10);
    uStack_a8 = *(ulong *)(param_1 + 8);
    local_b0 = *(ulong *)param_1;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar5 = *(void **)(param_1 + 0x10);
    if (uVar6 < 0x17) {
      pvVar7 = (void *)((ulong)&local_b0 | 1);
      local_b0 = (ulong)(byte)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_0091bf2c;
    }
    else {
      uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = operator_new(uVar8);
      local_b0 = uVar8 | 1;
      uStack_a8 = uVar6;
      local_a0 = pvVar7;
LAB_0091bf2c:
      memcpy(pvVar7,pvVar5,uVar6);
    }
    *(undefined1 *)((long)pvVar7 + uVar6) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  SVar2 = param_1[0x5d];
  SVar3 = param_1[0x5c];
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  if (((byte)param_1[0x18] & 1) == 0) {
    local_c0 = *(void **)(param_1 + 0x28);
    uStack_c8 = *(ulong *)(param_1 + 0x20);
    local_d0 = *(ulong *)(param_1 + 0x18);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x20);
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar5 = *(void **)(param_1 + 0x28);
    if (uVar6 < 0x17) {
      pvVar7 = (void *)((ulong)&local_d0 | 1);
      local_d0 = (ulong)(byte)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_0091bfc4;
    }
    else {
      uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = operator_new(uVar8);
      local_d0 = uVar8 | 1;
      uStack_c8 = uVar6;
      local_c0 = pvVar7;
LAB_0091bfc4:
      memcpy(pvVar7,pvVar5,uVar6);
    }
    *(undefined1 *)((long)pvVar7 + uVar6) = 0;
  }
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  if (((byte)param_1[0x30] & 1) == 0) {
    local_e0 = *(void **)(param_1 + 0x40);
    uStack_e8 = *(ulong *)(param_1 + 0x38);
    local_f0 = *(ulong *)(param_1 + 0x30);
    goto LAB_0091c064;
  }
  uVar6 = *(ulong *)(param_1 + 0x38);
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar5 = *(void **)(param_1 + 0x40);
  if (uVar6 < 0x17) {
    pvVar7 = (void *)((ulong)&local_f0 | 1);
    local_f0 = (ulong)(byte)((int)uVar6 << 1);
    if (uVar6 != 0) goto LAB_0091c050;
  }
  else {
    uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_f0 = uVar8 | 1;
    uStack_e8 = uVar6;
    local_e0 = pvVar7;
LAB_0091c050:
    memcpy(pvVar7,pvVar5,uVar6);
  }
  *(undefined1 *)((long)pvVar7 + uVar6) = 0;
LAB_0091c064:
  JniHelper::
  callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int,bool,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&local_80,&local_98,&local_b0,uVar1,SVar2 != (ShowInfo)0x0,SVar3 != (ShowInfo)0x0,
             &local_d0,&local_f0);
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

