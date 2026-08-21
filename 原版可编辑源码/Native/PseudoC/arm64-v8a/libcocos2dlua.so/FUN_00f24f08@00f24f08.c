
undefined4
FUN_00f24f08(byte *param_1,basic_regex<char,std::__ndk1::regex_traits<char>> *param_2,uint param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  undefined4 uVar6;
  void *local_130;
  void *local_128;
  undefined8 uStack_120;
  undefined1 local_108;
  undefined1 local_f0;
  char local_d8;
  undefined1 local_d0;
  void *local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 local_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(byte **)(param_1 + 0x10);
  local_128 = (void *)0x0;
  uStack_120 = 0;
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)(*param_1 >> 1);
  }
  local_130 = (void *)0x0;
  local_108 = 0;
  local_f0 = 0;
  local_d8 = '\0';
  local_d0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  pvStack_b8 = (void *)0x0;
  local_c0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_9f = 0;
  local_a7 = 0;
  uStack_a0 = 0;
  bVar5 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
          __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                    (param_2,pbVar2,pbVar2 + uVar1,&local_c0,param_3 | 0x1040);
  std::__ndk1::
  match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
  ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
              *)&local_130,pbVar2,pbVar2 + uVar1,&local_c0,param_3 >> 0xb & 1);
  if (local_c0 != (void *)0x0) {
    pvStack_b8 = local_c0;
    operator_delete(local_c0);
  }
  pvVar4 = local_128;
  if ((bVar5) && (pvVar4 = local_130, local_d8 == '\0')) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    local_128 = pvVar4;
  }
  if (local_130 != (void *)0x0) {
    local_128 = local_130;
    operator_delete(local_130);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

