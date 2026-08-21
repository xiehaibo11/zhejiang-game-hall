
/* universe::utils::CMD5Checksum::GetMD5OfString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void universe::utils::CMD5Checksum::GetMD5OfString(byte *param_1)

{
  long lVar1;
  uint uVar2;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_40 = 0;
  uStack_30 = 0x1032547698badcfe;
  local_38 = 0xefcdab8967452301;
  local_88 = &PTR__CMD5Checksum_016a0188;
  if ((*param_1 & 1) == 0) {
    uVar2 = (uint)(*param_1 >> 1);
    param_1 = param_1 + 1;
  }
  else {
    uVar2 = (uint)*(undefined8 *)(param_1 + 8);
    param_1 = *(byte **)(param_1 + 0x10);
  }
  Update((CMD5Checksum *)&local_88,param_1,uVar2);
  Final();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

