
/* WARNING: Type propagation algorithm not settling */

void FUN_014914a4(ulong *param_1)

{
  ulong uVar1;
  void *pvVar2;
  char *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte local_118 [8];
  ulong local_110;
  char *local_108;
  byte local_100 [8];
  ulong local_f8;
  char *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  
  v8::internal::wasm::AsmType::Name();
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_e8,0,"(",1);
  uStack_c8 = puVar4[1];
  local_d0 = *puVar4;
  local_c0 = (void *)puVar4[2];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_d0,", ");
  uStack_a8 = puVar4[1];
  local_b0 = *puVar4;
  local_a0 = (void *)puVar4[2];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  v8::internal::wasm::AsmType::Name();
  uVar1 = (ulong)(local_100[0] >> 1);
  pcVar3 = (char *)((ulong)local_100 | 1);
  if ((local_100[0] & 1) != 0) {
    uVar1 = local_f8;
    pcVar3 = local_f0;
  }
  if ((local_b0 & 1) == 0) {
    uVar5 = 0x16;
    uVar6 = local_b0 >> 1 & 0x7f;
  }
  else {
    uVar5 = (local_b0 & 0xfffffffffffffffe) - 1;
    uVar6 = uStack_a8;
  }
  if (uVar5 - uVar6 < uVar1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,uVar5,(uVar6 + uVar1) - uVar5,uVar6,uVar6,0,uVar1,pcVar3);
  }
  else if (uVar1 != 0) {
    pvVar2 = (void *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      pvVar2 = local_a0;
    }
    memcpy((void *)((long)pvVar2 + uVar6),pcVar3,uVar1);
    uVar6 = uVar6 + uVar1;
    uVar1 = uVar6;
    if ((local_b0 & 1) == 0) {
      local_b0 = CONCAT71(local_b0._1_7_,(char)((int)uVar6 << 1));
      uVar1 = uStack_a8;
    }
    uStack_a8 = uVar1;
    *(undefined1 *)((long)pvVar2 + uVar6) = 0;
  }
  uStack_88 = uStack_a8;
  local_90 = local_b0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_80 = local_a0;
  local_a0 = (void *)0x0;
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,"...) -> ");
  uStack_68 = puVar4[1];
  local_70 = *puVar4;
  local_60 = (void *)puVar4[2];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  v8::internal::wasm::AsmType::Name();
  uVar1 = (ulong)(local_118[0] >> 1);
  pcVar3 = (char *)((ulong)local_118 | 1);
  if ((local_118[0] & 1) != 0) {
    uVar1 = local_110;
    pcVar3 = local_108;
  }
  if ((local_70 & 1) == 0) {
    uVar5 = 0x16;
    uVar6 = local_70 >> 1 & 0x7f;
  }
  else {
    uVar5 = (local_70 & 0xfffffffffffffffe) - 1;
    uVar6 = uStack_68;
  }
  if (uVar5 - uVar6 < uVar1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,uVar5,(uVar6 + uVar1) - uVar5,uVar6,uVar6,0,uVar1,pcVar3);
  }
  else if (uVar1 != 0) {
    pvVar2 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pvVar2 = local_60;
    }
    memcpy((void *)((long)pvVar2 + uVar6),pcVar3,uVar1);
    uVar6 = uVar6 + uVar1;
    uVar1 = uVar6;
    if ((local_70 & 1) == 0) {
      local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar6 << 1));
      uVar1 = uStack_68;
    }
    uStack_68 = uVar1;
    *(undefined1 *)((long)pvVar2 + uVar6) = 0;
  }
  pvVar2 = local_60;
  uVar1 = uStack_68;
  uStack_68 = 0;
  local_60 = (void *)0x0;
  param_1[2] = (ulong)pvVar2;
  param_1[1] = uVar1;
  *param_1 = local_70;
  local_70 = 0;
  if (((local_118[0] & 1) != 0) && (operator_delete(local_108), (local_70 & 1) != 0)) {
    operator_delete(local_60);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  return;
}

