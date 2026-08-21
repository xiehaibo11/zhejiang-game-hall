
undefined8 * FUN_00be9028(char *param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *ptr;
  byte *pbVar3;
  undefined8 *ptr_00;
  long lVar4;
  uint uVar5;
  
  if (param_1 == (char *)0x0) {
    ptr = (byte *)0x0;
  }
  else {
    ptr = (byte *)CRYPTO_strdup(param_1,"crypto/asn1/asn_mime.c",0x31d);
    if (ptr == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar5 = (uint)*ptr;
    pbVar3 = ptr;
    if (*ptr != 0) {
      do {
        iVar2 = isupper(uVar5);
        if (iVar2 != 0) {
          iVar2 = tolower(uVar5);
          *pbVar3 = (byte)iVar2;
        }
        uVar5 = (uint)pbVar3[1];
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
    }
  }
  pbVar3 = (byte *)0x0;
  if (param_2 != (char *)0x0) {
    pbVar3 = (byte *)CRYPTO_strdup(param_2,"crypto/asn1/asn_mime.c",0x328);
    if (pbVar3 == (byte *)0x0) {
      ptr_00 = (undefined8 *)0x0;
      goto LAB_00be9120;
    }
    uVar5 = (uint)*pbVar3;
    pbVar1 = pbVar3;
    if (*pbVar3 != 0) {
      do {
        iVar2 = isupper(uVar5);
        if (iVar2 != 0) {
          iVar2 = tolower(uVar5);
          *pbVar1 = (byte)iVar2;
        }
        uVar5 = (uint)pbVar1[1];
        pbVar1 = pbVar1 + 1;
      } while (uVar5 != 0);
    }
  }
  ptr_00 = CRYPTO_malloc(0x18,"crypto/asn1/asn_mime.c",0x332);
  if (ptr_00 != (undefined8 *)0x0) {
    *ptr_00 = ptr;
    ptr_00[1] = pbVar3;
    lVar4 = OPENSSL_sk_new(&LAB_00be92a0);
    ptr_00[2] = lVar4;
    if (lVar4 != 0) {
      return ptr_00;
    }
  }
LAB_00be9120:
  CRYPTO_free(ptr);
  CRYPTO_free(pbVar3);
  CRYPTO_free(ptr_00);
  return (undefined8 *)0x0;
}

