
bool BN_generate_dsa_nonce
               (BIGNUM *param_1,BIGNUM *param_2,undefined8 *param_3,void *param_4,size_t param_5,
               BN_CTX *param_6)

{
  uint num;
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uchar *s;
  BIGNUM *pBVar5;
  ulong __n;
  undefined1 auStack_21c [96];
  uint local_1bc;
  uchar auStack_1b8 [64];
  uchar auStack_178 [64];
  SHA512_CTX SStack_138;
  
  iVar3 = BN_num_bits(param_2);
  iVar4 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    iVar4 = iVar3 + 7;
  }
  num = (iVar4 >> 3) + 8;
  s = CRYPTO_malloc(num,"crypto/bn/bn_rand.c",0xd5);
  if (s != (uchar *)0x0) {
    __n = (ulong)(uint)(*(int *)(param_3 + 1) << 3);
    if ((uint)(*(int *)(param_3 + 1) << 3) < 0x61) {
      memcpy(auStack_21c,(void *)*param_3,__n);
      memset(auStack_21c + __n,0,0x60 - __n);
      local_1bc = 0;
      if (num != 0) {
        do {
          iVar4 = RAND_bytes(auStack_178,0x40);
          if (iVar4 != 1) goto LAB_00b8ac34;
          SHA512_Init(&SStack_138);
          SHA512_Update(&SStack_138,&local_1bc,4);
          SHA512_Update(&SStack_138,auStack_21c,0x60);
          SHA512_Update(&SStack_138,param_4,param_5);
          SHA512_Update(&SStack_138,auStack_178,0x40);
          SHA512_Final(auStack_1b8,&SStack_138);
          uVar1 = num - local_1bc;
          if (0x3f < uVar1) {
            uVar1 = 0x40;
          }
          memcpy(s + local_1bc,auStack_1b8,(ulong)uVar1);
          local_1bc = uVar1 + local_1bc;
        } while (local_1bc < num);
      }
      pBVar5 = BN_bin2bn(s,num,param_1);
      if (pBVar5 != (BIGNUM *)0x0) {
        iVar4 = BN_div((BIGNUM *)0x0,param_1,param_1,param_2,param_6);
        bVar2 = iVar4 == 1;
        goto LAB_00b8ac38;
      }
    }
    else {
      ERR_put_error(3,0x8c,0x75,"crypto/bn/bn_rand.c",0xe1);
    }
  }
LAB_00b8ac34:
  bVar2 = false;
LAB_00b8ac38:
  CRYPTO_free(s);
  OPENSSL_cleanse(auStack_21c,0x60);
  return bVar2;
}

