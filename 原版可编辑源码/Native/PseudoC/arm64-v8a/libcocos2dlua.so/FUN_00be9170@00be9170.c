
void FUN_00be9170(long param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *ptr;
  char *ptr_00;
  undefined8 *ptr_01;
  uint __c;
  
  if (param_2 == (char *)0x0) {
    ptr = (byte *)0x0;
joined_r0x00be91ec:
    ptr_00 = (char *)0x0;
    if ((param_3 == (char *)0x0) ||
       (ptr_00 = CRYPTO_strdup(param_3,"crypto/asn1/asn_mime.c",0x354), ptr_00 != (char *)0x0)) {
      ptr_01 = CRYPTO_malloc(0x10,"crypto/asn1/asn_mime.c",0x359);
      if (ptr_01 != (undefined8 *)0x0) {
        *ptr_01 = ptr;
        ptr_01[1] = ptr_00;
        iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x10),ptr_01);
        if (iVar2 != 0) {
          return;
        }
      }
      goto LAB_00be9258;
    }
  }
  else {
    ptr = (byte *)CRYPTO_strdup(param_2,"crypto/asn1/asn_mime.c",0x348);
    if (ptr != (byte *)0x0) {
      __c = (uint)*ptr;
      pbVar1 = ptr;
      if (*ptr != 0) {
        do {
          iVar2 = isupper(__c);
          if (iVar2 != 0) {
            iVar2 = tolower(__c);
            *pbVar1 = (byte)iVar2;
          }
          __c = (uint)pbVar1[1];
          pbVar1 = pbVar1 + 1;
        } while (__c != 0);
      }
      goto joined_r0x00be91ec;
    }
    ptr_00 = (char *)0x0;
  }
  ptr_01 = (undefined8 *)0x0;
LAB_00be9258:
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr_01);
  return;
}

