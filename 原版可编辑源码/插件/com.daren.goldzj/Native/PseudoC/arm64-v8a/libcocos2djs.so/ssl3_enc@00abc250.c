
uint ssl3_enc(long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  EVP_CIPHER *pEVar5;
  EVP_MD *pEVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  EVP_CIPHER_CTX *ctx;
  ulong uVar10;
  
  if (param_3 != 1) {
    return 0;
  }
  if (param_4 == 0) {
    ctx = *(EVP_CIPHER_CTX **)(param_1 + 0x118);
  }
  else {
    ctx = *(EVP_CIPHER_CTX **)(param_1 + 0x138);
  }
  if ((((ctx == (EVP_CIPHER_CTX *)0x0) ||
       (pEVar5 = EVP_CIPHER_CTX_cipher(ctx), pEVar5 == (EVP_CIPHER *)0x0)) ||
      (ctx == (EVP_CIPHER_CTX *)0x0)) || (*(long *)(param_1 + 0x178) == 0)) {
    memmove(*(void **)(param_2 + 0x18),*(void **)(param_2 + 0x20),(ulong)*(uint *)(param_2 + 8));
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x18);
    return 1;
  }
  uVar7 = *(uint *)(param_2 + 8);
  uVar10 = (ulong)uVar7;
  uVar3 = EVP_CIPHER_CTX_block_size(ctx);
  if ((param_4 != 0) && (uVar3 != 1)) {
    iVar4 = 0;
    if (uVar3 != 0) {
      iVar4 = (int)uVar7 / (int)uVar3;
    }
    iVar4 = uVar3 - (uVar7 - iVar4 * uVar3);
    uVar10 = (long)iVar4 + uVar10;
    memset((void *)(*(long *)(param_2 + 0x20) + (ulong)*(uint *)(param_2 + 8)),0,(long)iVar4);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar4;
    *(char *)(*(long *)(param_2 + 0x20) + uVar10 + -1) = (char)iVar4 + -1;
  }
  if (param_4 == 0) {
    if (uVar10 == 0) {
      return 0;
    }
    uVar8 = (ulong)(int)uVar3;
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = uVar10 / uVar8;
    }
    if (uVar10 != uVar2 * uVar8) {
      return 0;
    }
  }
  iVar4 = EVP_Cipher(ctx,*(uchar **)(param_2 + 0x18),*(uchar **)(param_2 + 0x20),(uint)uVar10);
  if (iVar4 < 1) {
    return 0xffffffff;
  }
  pEVar6 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x120));
  if (pEVar6 == (EVP_MD *)0x0) {
    uVar7 = 1;
  }
  else {
    pEVar6 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x120));
    iVar4 = EVP_MD_size(pEVar6);
    uVar7 = iVar4 + 1;
  }
  if (param_4 == 0) {
    if (uVar3 == 1) {
      return 1;
    }
    uVar1 = *(uint *)(param_2 + 8);
    if (uVar1 < uVar7) {
      return 0;
    }
    uVar9 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + (ulong)(uVar1 - 1));
    uVar7 = uVar7 + uVar9;
    uVar9 = uVar9 + 1;
    uVar7 = (int)((uVar1 - uVar7 ^ uVar7 | uVar7 ^ uVar1) ^ uVar1 |
                 uVar3 - uVar9 & (uVar3 ^ 0xffffffff)) >> 0x1f;
    *(uint *)(param_2 + 8) = uVar1 - (uVar9 & (uVar7 ^ 0xffffffff));
    return uVar7 | 1;
  }
  return 1;
}

