
uint tls1_cbc_remove_padding(long param_1,long param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  EVP_CIPHER *cipher;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar12;
  
  uVar5 = param_4 + 1;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) & 1) == 0) {
    uVar4 = *(uint *)(param_2 + 8);
    if (uVar4 < uVar5) {
      return 0;
    }
    lVar6 = *(long *)(param_2 + 0x18);
  }
  else {
    if (*(uint *)(param_2 + 8) < uVar5 + param_3) {
      return 0;
    }
    uVar4 = *(uint *)(param_2 + 8) - param_3;
    lVar6 = *(long *)(param_2 + 0x18) + (ulong)param_3;
    *(long *)(param_2 + 0x18) = lVar6;
    *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + (ulong)param_3;
    *(uint *)(param_2 + 8) = uVar4;
    *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - param_3;
  }
  puVar15 = (uint *)(param_2 + 8);
  bVar1 = *(byte *)(lVar6 + (ulong)(uVar4 - 1));
  cipher = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x118));
  uVar3 = EVP_CIPHER_flags(cipher);
  uVar4 = *puVar15;
  uVar16 = (uint)bVar1;
  if (((uint)uVar3 >> 0x15 & 1) != 0) {
    *puVar15 = uVar4 + ~uVar16;
    return 1;
  }
  uVar5 = uVar5 + uVar16;
  uVar8 = uVar4;
  if (0xff < uVar4) {
    uVar8 = 0x100;
  }
  uVar5 = (int)((uVar4 - uVar5 ^ uVar5 | uVar4 ^ uVar5) ^ uVar4) >> 0x1f ^ 0xffffffff;
  if (uVar8 != 0) {
    lVar6 = *(long *)(param_2 + 0x18);
    uVar3 = (ulong)uVar8;
    if (uVar8 == 1) {
      uVar9 = 0;
      iVar7 = 0;
    }
    else {
      uVar9 = uVar3 - (uVar8 & 1);
      if (uVar9 == 0) {
        iVar7 = 0;
      }
      else {
        uVar10 = uVar4 - 1;
        iVar7 = 0;
        if ((uVar10 < uVar10 - (int)(uVar3 - 1)) || (uVar3 - 1 >> 0x20 != 0)) {
          uVar9 = 0;
        }
        else {
          iVar7 = (int)uVar9;
          uVar13 = uVar16 - 1;
          uVar14 = 0xffffffff;
          uVar12 = 0;
          do {
            uVar11 = (uint)uVar12;
            uVar2 = uVar13 | uVar11;
            uVar12 = uVar12 + 2;
            uVar5 = uVar5 & ~((uint)(*(byte *)(lVar6 + (ulong)uVar10) ^ bVar1) &
                             ((int)(uVar13 + 1 | uVar11) >> 0x1f ^ 0xffffffffU));
            uVar13 = uVar13 - 2;
            uVar14 = uVar14 & ~((uint)(*(byte *)(lVar6 + (ulong)(uVar4 + (uVar11 ^ 0xfffffffe))) ^
                                      bVar1) & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
            uVar10 = uVar10 - 2;
          } while (uVar9 != uVar12);
          uVar5 = uVar14 & uVar5;
          if ((uVar8 & 1) == 0) goto LAB_00acc6a8;
        }
      }
    }
    iVar7 = -iVar7;
    do {
      uVar8 = (uint)uVar9;
      uVar9 = uVar9 + 1;
      uVar5 = uVar5 & ~((uint)(*(byte *)(lVar6 + (ulong)((uVar4 - 1) + iVar7)) ^ bVar1) &
                       ((int)(uVar16 + iVar7 | uVar8) >> 0x1f ^ 0xffffffffU));
      iVar7 = iVar7 + -1;
    } while (uVar9 < uVar3);
  }
LAB_00acc6a8:
                    /* try { // try from 00acc6a8 to 00bcc6e3 has its CatchHandler @ 00acc6a8
                       catch() { ... } // from try @ 00acc6a8 with catch @ 00acc6a8
                       catch() { ... } // from try @ 00acc718 with catch @ 00acc6a8
                       catch() { ... } // from try @ 00acc75c with catch @ 00acc6a8 */
  uVar5 = (int)(0xfe - (uVar5 & 0xff)) >> 0x1f;
  *puVar15 = uVar4 - (uVar5 & bVar1 + 1);
  return (uVar5 | 1) ^ 0xfffffffe;
}

