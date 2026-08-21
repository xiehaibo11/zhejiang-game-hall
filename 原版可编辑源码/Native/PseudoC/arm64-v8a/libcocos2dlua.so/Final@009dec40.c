
/* universe::utils::CMD5Checksum::Final() */

void universe::utils::CMD5Checksum::Final(void)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  CMD5Checksum *in_x0;
  size_t sVar4;
  uint uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  int iVar6;
  long lVar7;
  ulong local_1b0;
  ulong uStack_1a8;
  char *local_1a0;
  ulong local_190;
  ulong uStack_188;
  char *local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_80 = *(uint *)(in_x0 + 0x48);
  uStack_7c = *(undefined4 *)(in_x0 + 0x4c);
  uVar5 = local_80 >> 3 & 0x3f;
  iVar6 = 0x38;
  if (0x37 < uVar5) {
    iVar6 = 0x78;
  }
  Update(in_x0,&DAT_017698ca,iVar6 - uVar5);
  Update(in_x0,(uchar *)&local_80,8);
  local_90 = *(uint *)(in_x0 + 0x50);
  uStack_8c = *(undefined4 *)(in_x0 + 0x54);
  local_88 = *(undefined4 *)(in_x0 + 0x58);
  lVar7 = 1;
  local_84 = *(undefined4 *)(in_x0 + 0x5c);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uVar5 = local_90;
  while( true ) {
    uStack_1a8 = 0;
    local_1a0 = (char *)0x0;
    local_1b0 = 0;
    if ((uVar5 & 0xff) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_190,"00");
      if ((local_1b0 & 1) != 0) {
        *local_1a0 = '\0';
        uStack_1a8 = 0;
        if ((local_1b0 & 1) != 0) {
          operator_delete(local_1a0);
        }
      }
      uStack_1a8 = uStack_188;
      local_1b0 = local_190;
      local_1a0 = local_180;
    }
    else if ((uVar5 & 0xff) < 0x10) {
      uStack_99 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_a1 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      local_180 = (char *)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      local_190 = 0;
      FUN_009dfc18(&local_190);
      sVar4 = strlen((char *)&local_190);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,(char *)&local_190,sVar4);
    }
    else {
      uStack_99 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_a1 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      local_180 = (char *)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      local_190 = 0;
      FUN_009dfc18(&local_190);
      sVar4 = strlen((char *)&local_190);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,(char *)&local_190,sVar4);
    }
    uVar1 = local_1b0 >> 1 & 0x7f;
    pcVar3 = (char *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      uVar1 = uStack_1a8;
      pcVar3 = local_1a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8,pcVar3,uVar1);
    if ((local_1b0 & 1) != 0) {
      operator_delete(local_1a0);
    }
    if (lVar7 == 0x10) break;
    uVar5 = (uint)*(byte *)((long)&local_90 + lVar7);
    lVar7 = lVar7 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

