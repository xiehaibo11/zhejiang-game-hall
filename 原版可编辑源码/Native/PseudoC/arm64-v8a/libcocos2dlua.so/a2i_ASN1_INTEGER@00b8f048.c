
int a2i_ASN1_INTEGER(BIO *bp,ASN1_INTEGER *bs,char *buf,int size)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  uchar *local_68;
  
  iVar11 = 0;
  bVar4 = true;
  local_68 = (uchar *)0x0;
  bs->type = 2;
  iVar10 = 0;
  while (iVar5 = BIO_gets(bp,buf,size), 0 < iVar5) {
    lVar9 = (long)iVar5 + -1;
    if (buf[lVar9] == '\n') {
      iVar5 = (int)lVar9;
      buf[lVar9] = '\0';
      if (iVar5 == 0) break;
    }
    lVar9 = (long)iVar5 + -1;
    if (buf[lVar9] == '\r') {
      iVar5 = (int)lVar9;
      buf[lVar9] = '\0';
      if (iVar5 == 0) break;
    }
    cVar3 = buf[(long)iVar5 + -1];
    lVar9 = 0;
    do {
      if ((9 < (byte)buf[lVar9] - 0x30) &&
         ((uVar8 = (byte)buf[lVar9] - 0x41, 0x25 < uVar8 ||
          ((1L << ((ulong)uVar8 & 0x3f) & 0x3f0000003fU) == 0)))) {
        iVar5 = (int)lVar9;
        break;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar5);
    buf[iVar5] = '\0';
    if (iVar5 < 2) break;
    uVar8 = (uint)(cVar3 == '\\');
    if ((bVar4) && (*buf == '0')) {
      pcVar12 = buf + 2;
      iVar1 = iVar5 + -2;
      if (buf[1] != '0') {
        pcVar12 = buf;
        iVar1 = iVar5;
      }
      uVar8 = iVar1 - uVar8;
    }
    else {
      uVar8 = iVar5 - uVar8;
      pcVar12 = buf;
    }
    if ((uVar8 & 1) != 0) {
      ERR_put_error(0xd,0x66,0x91,"crypto/asn1/f_int.c",0x72);
      goto LAB_00b8f2cc;
    }
    uVar2 = uVar8;
    if ((int)uVar8 < 0) {
      uVar2 = uVar8 + 1;
    }
    iVar1 = (int)uVar2 >> 1;
    iVar5 = iVar1 + iVar10;
    puVar7 = local_68;
    if (iVar11 < iVar5) {
      lVar9 = (long)iVar11;
      iVar11 = iVar10 + iVar1 * 2;
      puVar7 = (uchar *)CRYPTO_clear_realloc(local_68,lVar9,(long)iVar11,"crypto/asn1/f_int.c",0x78)
      ;
      if (puVar7 == (uchar *)0x0) {
        ERR_put_error(0xd,0x66,0x41,"crypto/asn1/f_int.c",0x7a);
        goto LAB_00b8f2cc;
      }
    }
    local_68 = puVar7;
    if (1 < (int)uVar8) {
      lVar9 = 0;
      pcVar12 = pcVar12 + 1;
      do {
        iVar6 = OPENSSL_hexchar2int(pcVar12[-1]);
        if (iVar6 < 0) {
LAB_00b8f284:
          ERR_put_error(0xd,0x66,0x8d,"crypto/asn1/f_int.c",0x86);
          goto LAB_00b8f2a0;
        }
        local_68[lVar9 + iVar10] = (byte)iVar6 | local_68[lVar9 + iVar10] << 4;
        iVar6 = OPENSSL_hexchar2int(*pcVar12);
        if (iVar6 < 0) goto LAB_00b8f284;
        pcVar12 = pcVar12 + 2;
        local_68[lVar9 + iVar10] = (byte)iVar6 | local_68[lVar9 + iVar10] << 4;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar1);
    }
    bVar4 = false;
    iVar10 = iVar5;
    if (cVar3 != '\\') {
      bs->length = iVar5;
      bs->data = local_68;
      return 1;
    }
  }
LAB_00b8f2a0:
  ERR_put_error(0xd,0x66,0x96,"crypto/asn1/f_int.c",0x97);
LAB_00b8f2cc:
  CRYPTO_free(local_68);
  return 0;
}

