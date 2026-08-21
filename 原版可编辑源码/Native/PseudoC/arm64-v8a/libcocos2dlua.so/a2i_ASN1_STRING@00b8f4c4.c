
int a2i_ASN1_STRING(BIO *bp,ASN1_STRING *bs,char *buf,int size)

{
  int num;
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uchar *addr;
  int iVar11;
  char *pcVar12;
  
  addr = (uchar *)0x0;
  bVar4 = true;
  num = 0;
  iVar11 = 0;
  do {
    iVar5 = BIO_gets(bp,buf,size);
    if (iVar5 < 1) {
      iVar5 = iVar11;
      if (!bVar4) {
LAB_00b8f6f0:
        ERR_put_error(0xd,0x67,0x96,"crypto/asn1/f_string.c",0x91);
LAB_00b8f768:
        CRYPTO_free(addr);
        return 0;
      }
      break;
    }
    lVar9 = (long)iVar5 + -1;
    if (buf[lVar9] == '\n') {
      iVar5 = (int)lVar9;
      buf[lVar9] = '\0';
      if (iVar5 == 0) goto LAB_00b8f6f0;
    }
    lVar9 = (long)iVar5 + -1;
    if (buf[lVar9] == '\r') {
      iVar5 = (int)lVar9;
      buf[lVar9] = '\0';
      if (iVar5 == 0) goto LAB_00b8f6f0;
    }
    lVar9 = (long)iVar5;
    uVar10 = lVar9 - 1;
    cVar2 = buf[uVar10];
    if (iVar5 < 2) {
      buf[lVar9] = '\0';
      goto LAB_00b8f6f0;
    }
    do {
      iVar8 = (int)uVar10;
      if ((9 < (byte)buf[lVar9 + -1] - 0x30) &&
         ((uVar3 = (byte)buf[lVar9 + -1] - 0x41, 0x25 < uVar3 ||
          ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) == 0)))) break;
      lVar9 = lVar9 + -1;
      uVar10 = (ulong)(iVar8 - 1);
      iVar8 = iVar5;
    } while (1 < lVar9);
    buf[iVar8] = '\0';
    if (iVar8 < 2) goto LAB_00b8f6f0;
    uVar3 = iVar8 - (uint)(cVar2 == '\\');
    if ((uVar3 & 1) != 0) {
      ERR_put_error(0xd,0x67,0x91,"crypto/asn1/f_string.c",0x6a);
      goto LAB_00b8f768;
    }
    uVar1 = uVar3;
    if ((int)uVar3 < 0) {
      uVar1 = uVar3 + 1;
    }
    iVar8 = (int)uVar1 >> 1;
    iVar5 = iVar8 + iVar11;
    puVar7 = addr;
    if (num < iVar5) {
      num = iVar11 + iVar8 * 2;
      puVar7 = CRYPTO_realloc(addr,num,"crypto/asn1/f_string.c",0x70);
      if (puVar7 == (uchar *)0x0) {
        ERR_put_error(0xd,0x67,0x41,"crypto/asn1/f_string.c",0x72);
        goto LAB_00b8f768;
      }
    }
    addr = puVar7;
    if (1 < (int)uVar3) {
      lVar9 = 0;
      pcVar12 = buf + 1;
      do {
        iVar6 = OPENSSL_hexchar2int(pcVar12[-1]);
        if (iVar6 < 0) {
LAB_00b8f6a4:
          ERR_put_error(0xd,0x67,0x8d,"crypto/asn1/f_string.c",0x7e);
          goto LAB_00b8f768;
        }
        addr[lVar9 + iVar11] = (byte)iVar6 | addr[lVar9 + iVar11] << 4;
        iVar6 = OPENSSL_hexchar2int(*pcVar12);
        if (iVar6 < 0) goto LAB_00b8f6a4;
        pcVar12 = pcVar12 + 2;
        addr[lVar9 + iVar11] = (byte)iVar6 | addr[lVar9 + iVar11] << 4;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar8);
    }
    bVar4 = false;
    iVar11 = iVar5;
  } while (cVar2 == '\\');
  bs->length = iVar5;
  bs->data = addr;
  return 1;
}

