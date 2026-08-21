
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
cocos2d::JniHelper::
getJNISignature<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (undefined8 *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_88 [8];
  ulong local_80;
  char *local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = &DAT_00005a02;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if ((*param_3 & 1) == 0) {
    local_90 = (void *)param_3[2];
    uStack_98 = param_3[1];
    local_a0 = *param_3;
  }
  else {
    uVar5 = param_3[1];
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = (void *)param_3[2];
    if (uVar5 < 0x17) {
      pvVar6 = (void *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_0091d820;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_a0 = uVar7 | 1;
      uStack_98 = uVar5;
      local_90 = pvVar6;
LAB_0091d820:
      memcpy(pvVar6,pvVar4,uVar5);
    }
    *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  }
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = 0;
  if ((*param_4 & 1) == 0) {
    local_b0 = (void *)param_4[2];
    uStack_b8 = param_4[1];
    local_c0 = *param_4;
    goto LAB_0091d8bc;
  }
  uVar5 = param_4[1];
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = (void *)param_4[2];
  if (uVar5 < 0x17) {
    pvVar6 = (void *)((ulong)&local_c0 | 1);
    local_c0 = (ulong)(byte)((int)uVar5 << 1);
    if (uVar5 != 0) goto LAB_0091d8a8;
  }
  else {
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    local_c0 = uVar7 | 1;
    uStack_b8 = uVar5;
    local_b0 = pvVar6;
LAB_0091d8a8:
    memcpy(pvVar6,pvVar4,uVar5);
  }
  *(undefined1 *)((long)pvVar6 + uVar5) = 0;
LAB_0091d8bc:
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_88,&local_a0,&local_c0);
  uVar5 = (ulong)(local_88[0] >> 1);
  pcVar2 = (char *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    uVar5 = local_80;
    pcVar2 = local_78;
  }
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_70,pcVar2,uVar5);
  uVar9 = puVar3[1];
  uVar8 = *puVar3;
  param_1[2] = puVar3[2];
  param_1[1] = uVar9;
  *param_1 = uVar8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

