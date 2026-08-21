
/* WARNING: Type propagation algorithm not settling */

int X509_PURPOSE_add(int id,int trust,int flags,ck *ck,char *name,char *sname,void *arg)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int *ptr;
  int local_90 [12];
  
  uVar5 = id - 1;
  if (8 < uVar5) {
    local_90[0] = id;
    if (((DAT_01d3b228 == 0) || (iVar3 = OPENSSL_sk_find(DAT_01d3b228,local_90), iVar3 == -1)) ||
       (uVar5 = iVar3 + 9, uVar5 == 0xffffffff)) {
      ptr = CRYPTO_malloc(0x30,"crypto/x509v3/v3_purp.c",0xa5);
      if (ptr == (int *)0x0) {
        ERR_put_error(0x22,0x89,0x41,"crypto/x509v3/v3_purp.c",0xa6);
        return 0;
      }
      bVar2 = true;
      ptr[2] = 1;
      bVar1 = *(byte *)(ptr + 2);
      goto joined_r0x00b745e0;
    }
    if ((int)uVar5 < 0) {
      bVar2 = false;
      ptr = (int *)0x0;
      bVar1 = DAT_00000008;
      goto joined_r0x00b745e0;
    }
    if (8 < (int)uVar5) {
      ptr = (int *)OPENSSL_sk_value(DAT_01d3b228,iVar3);
      bVar2 = false;
      bVar1 = *(byte *)(ptr + 2);
      goto joined_r0x00b745e0;
    }
  }
  bVar2 = false;
  ptr = (int *)(&DAT_01d20db0 + (long)(int)uVar5 * 0x30);
  bVar1 = (&DAT_01d20db8)[(long)(int)uVar5 * 0x30];
joined_r0x00b745e0:
  if ((bVar1 >> 1 & 1) != 0) {
    CRYPTO_free(*(void **)(ptr + 6));
    CRYPTO_free(*(void **)(ptr + 8));
  }
  pcVar4 = CRYPTO_strdup(name,"crypto/x509v3/v3_purp.c",0xb3);
  *(char **)(ptr + 6) = pcVar4;
  pcVar4 = CRYPTO_strdup(sname,"crypto/x509v3/v3_purp.c",0xb4);
  *(char **)(ptr + 8) = pcVar4;
  if ((pcVar4 == (char *)0x0) || (*(long *)(ptr + 6) == 0)) {
    ERR_put_error(0x22,0x89,0x41,"crypto/x509v3/v3_purp.c",0xb6);
    if (!bVar2) {
      return 0;
    }
  }
  else {
    *ptr = id;
    ptr[1] = trust;
    *(ck **)(ptr + 4) = ck;
    ptr[2] = flags & 0xfffffffcU | ptr[2] & 1U | 2;
    *(void **)(ptr + 10) = arg;
    if (!bVar2) {
      return 1;
    }
    if ((DAT_01d3b228 == 0) && (DAT_01d3b228 = OPENSSL_sk_new(&LAB_00b74660), DAT_01d3b228 == 0)) {
      iVar3 = 199;
    }
    else {
      iVar3 = OPENSSL_sk_push(DAT_01d3b228,ptr);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = 0xcb;
    }
    ERR_put_error(0x22,0x89,0x41,"crypto/x509v3/v3_purp.c",iVar3);
  }
  CRYPTO_free(*(void **)(ptr + 6));
  CRYPTO_free(*(void **)(ptr + 8));
  CRYPTO_free(ptr);
  return 0;
}

