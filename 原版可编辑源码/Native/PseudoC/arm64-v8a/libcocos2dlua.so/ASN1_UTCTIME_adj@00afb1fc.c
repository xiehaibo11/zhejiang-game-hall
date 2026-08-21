
ASN1_UTCTIME * ASN1_UTCTIME_adj(ASN1_UTCTIME *s,time_t t,int offset_day,long offset_sec)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uchar *buf;
  undefined1 auStack_78 [56];
  time_t local_38;
  
  local_38 = t;
  if (s == (ASN1_UTCTIME *)0x0) {
    s = ASN1_UTCTIME_new();
    if (s == (ASN1_UTCTIME *)0x0) {
      return (ASN1_UTCTIME *)0x0;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  puVar3 = (undefined4 *)OPENSSL_gmtime(&local_38,auStack_78);
  if (((puVar3 == (undefined4 *)0x0) ||
      (((offset_day != 0 || (offset_sec != 0)) &&
       (iVar2 = OPENSSL_gmtime_adj(puVar3,offset_day,offset_sec), iVar2 == 0)))) ||
     (iVar2 = puVar3[5], 99 < iVar2 - 0x32U)) {
LAB_00afb344:
    if (bVar1) {
      ASN1_UTCTIME_free(s);
    }
    s = (ASN1_UTCTIME *)0x0;
  }
  else {
    buf = s->data;
    if ((buf == (uchar *)0x0) || ((uint)s->length < 0x14)) {
      buf = CRYPTO_malloc(0x14,"crypto/asn1/a_utctm.c",0xa6);
      if (buf == (uchar *)0x0) {
        ERR_put_error(0xd,0xda,0x41,"crypto/asn1/a_utctm.c",0xa8);
        goto LAB_00afb344;
      }
      CRYPTO_free(s->data);
      s->data = buf;
      iVar2 = puVar3[5];
    }
    BIO_snprintf((char *)buf,0x14,"%02d%02d%02d%02d%02d%02dZ",(ulong)(uint)(iVar2 % 100),
                 (ulong)(puVar3[4] + 1),(ulong)(uint)puVar3[3],(ulong)(uint)puVar3[2],
                 (ulong)(uint)puVar3[1],*puVar3);
    sVar4 = strlen((char *)buf);
    s->length = (int)sVar4;
    s->type = 0x17;
  }
  return s;
}

