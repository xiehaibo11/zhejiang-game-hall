
/* WARNING: Type propagation algorithm not settling */

int X509_TRUST_add(int id,int flags,ck *ck,char *name,int arg1,void *arg2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int *ptr;
  uint uVar5;
  int local_78 [10];
  
  uVar5 = id - 1;
  if (7 < uVar5) {
    local_78[0] = id;
    if (((DAT_01d3b210 == 0) || (iVar3 = OPENSSL_sk_find(DAT_01d3b210,local_78), iVar3 == -1)) ||
       (uVar5 = iVar3 + 8, uVar5 == 0xffffffff)) {
      ptr = CRYPTO_malloc(0x28,"crypto/x509/x509_trs.c",0x89);
      if (ptr == (int *)0x0) {
        ERR_put_error(0xb,0x85,0x41,"crypto/x509/x509_trs.c",0x8a);
        return 0;
      }
      bVar2 = true;
      ptr[1] = 1;
      bVar1 = *(byte *)(ptr + 1);
      goto joined_r0x00b5dcd8;
    }
    if ((int)uVar5 < 0) {
      bVar2 = false;
      ptr = (int *)0x0;
      bVar1 = DAT_00000004;
      goto joined_r0x00b5dcd8;
    }
    if (7 < (int)uVar5) {
      ptr = (int *)OPENSSL_sk_value(DAT_01d3b210,iVar3);
      bVar2 = false;
      bVar1 = *(byte *)(ptr + 1);
      goto joined_r0x00b5dcd8;
    }
  }
  bVar2 = false;
  ptr = (int *)(&DAT_01d20a88 + (long)(int)uVar5 * 0x28);
  bVar1 = (&DAT_01d20a8c)[(long)(int)uVar5 * 0x28];
joined_r0x00b5dcd8:
  if ((bVar1 >> 1 & 1) != 0) {
    CRYPTO_free(*(void **)(ptr + 4));
  }
  pcVar4 = CRYPTO_strdup(name,"crypto/x509/x509_trs.c",0x95);
  *(char **)(ptr + 4) = pcVar4;
  if (pcVar4 == (char *)0x0) {
    ERR_put_error(0xb,0x85,0x41,"crypto/x509/x509_trs.c",0x96);
    if (!bVar2) {
      return 0;
    }
  }
  else {
    *(ck **)(ptr + 2) = ck;
    ptr[6] = arg1;
    *ptr = id;
    ptr[1] = flags & 0xfffffffcU | ptr[1] & 1U | 2;
    *(void **)(ptr + 8) = arg2;
    if (!bVar2) {
      return 1;
    }
    if ((DAT_01d3b210 == 0) && (DAT_01d3b210 = OPENSSL_sk_new(&LAB_00b5dd44), DAT_01d3b210 == 0)) {
      iVar3 = 0xa7;
    }
    else {
      iVar3 = OPENSSL_sk_push(DAT_01d3b210,ptr);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = 0xab;
    }
    ERR_put_error(0xb,0x85,0x41,"crypto/x509/x509_trs.c",iVar3);
  }
  CRYPTO_free(*(void **)(ptr + 4));
  CRYPTO_free(ptr);
  return 0;
}

