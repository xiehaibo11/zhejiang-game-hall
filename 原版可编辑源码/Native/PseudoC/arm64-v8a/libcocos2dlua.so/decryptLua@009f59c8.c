
/* universe::network::Encryption::decryptLua(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void universe::network::Encryption::decryptLua
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                *param_1,uchar *param_2,byte *param_3)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  uchar *out;
  ulong uVar4;
  uchar *local_170;
  AES_KEY AStack_168;
  uchar local_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(int *)(param_2 + 0x28) = 0;
  local_170 = (uchar *)0x0;
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar4 = (ulong)(*param_3 >> 1);
  }
  else {
    uVar4 = *(ulong *)(param_3 + 8);
    pbVar3 = *(byte **)(param_3 + 0x10);
  }
  iVar2 = base64Decode(pbVar3,uVar4 & 0xffffffff,&local_170);
  local_70[8] = 'U';
  local_70[9] = 0xfe;
  local_70[10] = 0xa1;
  local_70[0xb] = '\"';
  local_70[0xc] = '\b';
  local_70[0xd] = 'O';
  local_70[0xe] = '\x13';
  local_70[0xf] = '\a';
  local_70[0] = '\x15';
  local_70[1] = 0xff;
  local_70[2] = '\x01';
  local_70[3] = '\0';
  local_70[4] = '4';
  local_70[5] = 0xab;
  local_70[6] = 'L';
  local_70[7] = 0xd3;
  out = malloc((long)(iVar2 + 1));
  memset(out,0,(long)(iVar2 + 1));
  AES_set_encrypt_key(param_2,*(int *)(param_2 + 0x20) << 3,&AStack_168);
  AES_cfb128_encrypt(local_170,out,(long)iVar2,&AStack_168,local_70,(int *)(param_2 + 0x28),0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(param_1,(char *)out);
  free(out);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

