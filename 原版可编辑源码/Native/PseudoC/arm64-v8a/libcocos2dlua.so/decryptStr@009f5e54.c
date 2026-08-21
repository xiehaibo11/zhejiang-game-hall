
/* universe::network::Encryption::decryptStr(unsigned char const*, unsigned long, unsigned char**,
   unsigned long*) */

void __thiscall
universe::network::Encryption::decryptStr
          (Encryption *this,uchar *param_1,ulong param_2,uchar **param_3,ulong *param_4)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  uchar *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  size_t length;
  int local_16c;
  AES_KEY AStack_168;
  uchar local_70 [24];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar9 = 0;
  if (param_1 != (uchar *)0x0) {
    uVar9 = param_2 >> 1;
  }
  *param_4 = uVar9;
  puVar4 = malloc(uVar9 + 1);
  *param_3 = puVar4;
  if (uVar9 == 0) {
    uVar9 = 0;
  }
  else {
    uVar5 = 1;
    uVar6 = 0;
    uVar7 = 1;
    do {
      bVar2 = param_1[uVar5 - 1];
      uVar8 = bVar2 - 0x30;
      if (9 < uVar8) {
        uVar10 = (uint)bVar2;
        if (bVar2 - 0x41 < 0x1a) {
          uVar8 = uVar10 - 0x37;
        }
        else {
          uVar8 = uVar10 - 0x57;
          if (0x19 < uVar10 - 0x61) {
            uVar8 = 0;
          }
        }
      }
      bVar2 = param_1[uVar5];
      uVar11 = (uint)bVar2;
      uVar10 = uVar11 - 0x30;
      if (9 < uVar10) {
        if (uVar11 - 0x41 < 0x1a) {
          uVar10 = uVar11 - 0x37;
        }
        else {
          uVar10 = bVar2 - 0x57;
          if (0x19 < bVar2 - 0x61) {
            uVar10 = 0;
          }
        }
      }
      uVar5 = uVar5 + 2;
      (*param_3)[uVar6] = (char)uVar10 + (char)uVar8 * '\x10';
      uVar9 = *param_4;
      bVar1 = uVar7 < uVar9;
      uVar6 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
    puVar4 = *param_3;
  }
  puVar4[uVar9] = '\0';
  local_16c = 0;
  puVar4 = *param_3;
  length = *param_4;
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
  AES_set_encrypt_key((uchar *)this,*(int *)(this + 0x20) << 3,&AStack_168);
  AES_cfb128_encrypt(puVar4,puVar4,length,&AStack_168,local_70,&local_16c,0);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

