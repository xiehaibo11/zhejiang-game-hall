
/* WARNING: Type propagation algorithm not settling */
/* localStorageSetItem(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void localStorageSetItem(basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = operator_new(0x30);
  uStack_6f = 0;
  local_78 = 0xe;
  uStack_77 = 0x6d657449746573;
  uStack_70 = 0;
  uStack_58 = 0x25;
  local_60 = 0x31;
  local_68 = (void *)0x0;
  builtin_strncpy(local_50,"org/cocos2dx/lib/Cocos2dxLocalStorage",0x26);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    local_80 = *(void **)(param_1 + 0x10);
    uStack_88 = *(ulong *)(param_1 + 8);
    local_90 = *(ulong *)param_1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar2 = *(void **)(param_1 + 0x10);
    if (uVar3 < 0x17) {
      pvVar4 = (void *)((ulong)&local_90 | 1);
      local_90 = (ulong)(byte)((int)uVar3 << 1);
      if (uVar3 != 0) goto LAB_009a49fc;
    }
    else {
      uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = operator_new(uVar5);
      local_90 = uVar5 | 1;
      uStack_88 = uVar3;
      local_80 = pvVar4;
LAB_009a49fc:
      memcpy(pvVar4,pvVar2,uVar3);
    }
    *(undefined1 *)((long)pvVar4 + uVar3) = 0;
  }
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    local_a0 = *(void **)(param_2 + 0x10);
    uStack_a8 = *(ulong *)(param_2 + 8);
    local_b0 = *(ulong *)param_2;
    goto LAB_009a4a98;
  }
  uVar3 = *(ulong *)(param_2 + 8);
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar2 = *(void **)(param_2 + 0x10);
  if (uVar3 < 0x17) {
    pvVar4 = (void *)((ulong)&local_b0 | 1);
    local_b0 = (ulong)(byte)((int)uVar3 << 1);
    if (uVar3 != 0) goto LAB_009a4a84;
  }
  else {
    uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = operator_new(uVar5);
    local_b0 = uVar5 | 1;
    uStack_a8 = uVar3;
    local_a0 = pvVar4;
LAB_009a4a84:
    memcpy(pvVar4,pvVar2,uVar3);
  }
  *(undefined1 *)((long)pvVar4 + uVar3) = 0;
LAB_009a4a98:
  cocos2d::JniHelper::
  callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&local_60,&local_78,&local_90,&local_b0);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

