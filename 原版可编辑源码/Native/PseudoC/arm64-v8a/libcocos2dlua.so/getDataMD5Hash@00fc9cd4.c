
/* cocos2d::utils::getDataMD5Hash(cocos2d::Data const&) */

void __thiscall cocos2d::utils::getDataMD5Hash(utils *this,Data *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char *pcVar5;
  long lVar6;
  char local_e0 [48];
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [88];
  long local_48;
  
  pcVar5 = local_e0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = Data::isNull((Data *)this);
  if ((uVar2 & 1) == 0) {
    local_e0[0x20] = 0;
    local_e0[8] = '\0';
    local_e0[9] = '\0';
    local_e0[10] = '\0';
    local_e0[0xb] = '\0';
    local_e0[0xc] = '\0';
    local_e0[0xd] = '\0';
    local_e0[0xe] = '\0';
    local_e0[0xf] = '\0';
    local_e0[0] = '\0';
    local_e0[1] = '\0';
    local_e0[2] = '\0';
    local_e0[3] = '\0';
    local_e0[4] = '\0';
    local_e0[5] = '\0';
    local_e0[6] = '\0';
    local_e0[7] = '\0';
    local_e0[0x18] = '\0';
    local_e0[0x19] = '\0';
    local_e0[0x1a] = '\0';
    local_e0[0x1b] = '\0';
    local_e0[0x1c] = '\0';
    local_e0[0x1d] = '\0';
    local_e0[0x1e] = '\0';
    local_e0[0x1f] = '\0';
    local_e0[0x10] = '\0';
    local_e0[0x11] = '\0';
    local_e0[0x12] = '\0';
    local_e0[0x13] = '\0';
    local_e0[0x14] = '\0';
    local_e0[0x15] = '\0';
    local_e0[0x16] = '\0';
    local_e0[0x17] = '\0';
    md5_init(auStack_a0);
    uVar3 = Data::getBytes((Data *)this);
    uVar4 = Data::getSize((Data *)this);
    md5_append(auStack_a0,uVar3,uVar4);
    md5_finish(auStack_a0,local_b0);
    lVar6 = 0;
    do {
      FUN_00fc9dbc(pcVar5,0xffffffffffffffff);
      lVar6 = lVar6 + 1;
      pcVar5 = pcVar5 + 2;
    } while (lVar6 != 0x10);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,local_e0);
  }
  else {
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

