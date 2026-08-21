
void ssl3_cbc_copy_mac(byte *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *__s;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong __n;
  byte abStack_e0 [128];
  
  uVar4 = *(uint *)(param_2 + 0xc);
  if (uVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: rec->orig_len >= md_size","ssl/record/ssl3_record.c",0x4c7);
  }
  if (param_3 < 0x41) {
    iVar5 = *(int *)(param_2 + 8);
    uVar13 = param_3 + 0x100;
    __s = abStack_e0 + ((ulong)(uint)-(int)abStack_e0 & 0x3c);
    __n = (ulong)param_3;
    uVar10 = uVar4 - uVar13;
    if (uVar4 < uVar13 || uVar10 == 0) {
      uVar10 = 0;
    }
    memset(__s,0,__n);
    if (uVar10 < uVar4) {
      lVar12 = *(long *)(param_2 + 0x18);
      uVar3 = uVar4;
      if (uVar4 <= uVar13) {
        uVar3 = uVar13;
      }
      lVar11 = 0;
      uVar13 = 0;
      do {
        iVar9 = (int)lVar11;
        bVar7 = (byte)(uVar10 + iVar9 >> 0x18);
        bVar8 = (byte)(iVar5 - param_3 >> 0x18);
        bVar6 = (byte)((uint)iVar5 >> 0x18);
        pbVar1 = (byte *)(lVar12 + (ulong)uVar10 + lVar11);
        uVar2 = uVar13 + 1;
        lVar11 = lVar11 + 1;
        __s[uVar13] = (char)(((byte)(uVar10 + -iVar5 + iVar9 >> 0x18) ^ bVar6 | bVar7 ^ bVar6) ^
                            bVar7) >> 7 &
                      ((char)(((byte)(-iVar5 + (uVar3 - 0x100) + iVar9 >> 0x18) ^ bVar8 |
                              bVar7 ^ bVar8) ^ bVar7) >> 7 ^ 0xffU) & *pbVar1 | __s[uVar13];
        uVar13 = uVar2 & (int)((uVar2 - param_3 ^ param_3 | uVar2 ^ param_3) ^ uVar2) >> 0x1f;
      } while (uVar10 + (int)lVar11 < uVar4);
    }
    if (param_3 != 0) {
      uVar10 = ((iVar5 - param_3) + (param_3 & 0x1fe) * 0x800000) - uVar10;
      uVar4 = 0;
      if (param_3 != 0) {
        uVar4 = uVar10 / param_3;
      }
      uVar10 = uVar10 - uVar4 * param_3;
      do {
        uVar4 = uVar10 + 1;
        __n = __n - 1;
        *param_1 = __s[uVar10];
        uVar10 = uVar4 & (int)((uVar4 - param_3 ^ param_3 | uVar4 ^ param_3) ^ uVar4) >> 0x1f;
        param_1 = param_1 + 1;
      } while (__n != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: md_size <= EVP_MAX_MD_SIZE","ssl/record/ssl3_record.c",0x4c8);
}

