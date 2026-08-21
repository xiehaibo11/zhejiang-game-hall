
/* universe::network::Encryption::encryptStr(unsigned char const*, unsigned long, unsigned char**,
   unsigned long*) */

void __thiscall
universe::network::Encryption::encryptStr
          (Encryption *this,uchar *param_1,ulong param_2,uchar **param_3,ulong *param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  uchar *in;
  uchar *puVar4;
  ulong uVar5;
  uint uVar6;
  int local_17c;
  AES_KEY AStack_178;
  uchar local_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  in = malloc(param_2 + 1);
  in[param_2] = '\0';
  strncpy((char *)in,(char *)param_1,param_2);
  local_17c = 0;
  local_80[8] = 'U';
  local_80[9] = 0xfe;
  local_80[10] = 0xa1;
  local_80[0xb] = '\"';
  local_80[0xc] = '\b';
  local_80[0xd] = 'O';
  local_80[0xe] = '\x13';
  local_80[0xf] = '\a';
  local_80[0] = '\x15';
  local_80[1] = 0xff;
  local_80[2] = '\x01';
  local_80[3] = '\0';
  local_80[4] = '4';
  local_80[5] = 0xab;
  local_80[6] = 'L';
  local_80[7] = 0xd3;
  AES_set_encrypt_key((uchar *)this,*(int *)(this + 0x20) << 3,&AStack_178);
  AES_cfb128_encrypt(in,in,param_2,&AStack_178,local_80,&local_17c,1);
  uVar2 = 0;
  if (in != (uchar *)0x0) {
    uVar2 = param_2;
  }
  *param_4 = uVar2 << 1;
  puVar4 = malloc(uVar2 << 1 | 1);
  uVar5 = 0;
  *param_3 = puVar4;
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = 1;
    do {
      FUN_009f5b68(puVar4 + uVar6,0xffffffffffffffff);
      puVar4 = *param_3;
      uVar6 = uVar6 + 2;
      bVar1 = uVar5 < uVar2;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (bVar1);
    uVar5 = *param_4;
  }
  puVar4[uVar5] = '\0';
  free(in);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

