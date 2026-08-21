
uchar * OPENSSL_asc2uni(char *asc,int asclen,uchar **uni,int *unilen)

{
  int num;
  uchar *puVar1;
  ulong uVar2;
  uchar *puVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  ulong uVar8;
  
  sVar6 = (size_t)(uint)asclen;
  if (asclen == -1) {
    sVar6 = strlen(asc);
  }
  uVar2 = (sVar6 & 0xffffffff) << 1;
  uVar8 = -(sVar6 >> 0x1f & 1) & 0xfffffffe00000000 | uVar2;
  uVar7 = (uint)uVar2;
  num = uVar7 + 2;
  puVar3 = CRYPTO_malloc(num,"crypto/pkcs12/p12_utl.c",0x19);
  if (puVar3 != (uchar *)0x0) {
    if (0 < (int)sVar6) {
      lVar5 = 0;
      do {
        puVar1 = puVar3 + lVar5;
        *puVar1 = '\0';
        iVar4 = (int)lVar5;
        lVar5 = lVar5 + 2;
        puVar1[1] = asc[iVar4 >> 1];
      } while (lVar5 < (long)uVar8);
    }
    puVar3[uVar8] = '\0';
    puVar3[(int)(uVar7 | 1)] = '\0';
    if (unilen != (int *)0x0) {
      *unilen = num;
    }
    if (uni != (uchar **)0x0) {
      *uni = puVar3;
    }
  }
  return puVar3;
}

