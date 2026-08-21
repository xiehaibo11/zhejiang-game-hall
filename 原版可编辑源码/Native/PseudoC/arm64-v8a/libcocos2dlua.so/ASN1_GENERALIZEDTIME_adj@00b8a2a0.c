
ASN1_GENERALIZEDTIME *
ASN1_GENERALIZEDTIME_adj(ASN1_GENERALIZEDTIME *s,time_t t,int offset_day,long offset_sec)

{
  int iVar1;
  ASN1_GENERALIZEDTIME *a;
  undefined4 *puVar2;
  size_t sVar3;
  uchar *buf;
  undefined1 auStack_78 [56];
  time_t local_38;
  
                    /* try { // try from 00b8a2bc to 00c8a2c7 has its CatchHandler @ 00b8a370 */
  a = s;
  local_38 = t;
  if ((s == (ASN1_GENERALIZEDTIME *)0x0) &&
     (a = ASN1_GENERALIZEDTIME_new(), a == (ASN1_GENERALIZEDTIME *)0x0)) {
    return (ASN1_GENERALIZEDTIME *)0x0;
  }
                    /* try { // try from 00b8a2e0 to 00c8a2e7 has its CatchHandler @ 00b8a384 */
  puVar2 = (undefined4 *)OPENSSL_gmtime(&local_38,auStack_78);
                    /* try { // try from 00b8a2e8 to 00c8a3b7 has its CatchHandler @ 00b8a238 */
  if ((puVar2 == (undefined4 *)0x0) ||
     (((offset_day != 0 || (offset_sec != 0)) &&
      (iVar1 = OPENSSL_gmtime_adj(puVar2,offset_day,offset_sec), iVar1 == 0)))) {
LAB_00b8a3b0:
    if (s == (ASN1_GENERALIZEDTIME *)0x0) {
      ASN1_GENERALIZEDTIME_free(a);
    }
    a = (ASN1_GENERALIZEDTIME *)0x0;
  }
  else {
    buf = a->data;
    if ((buf == (uchar *)0x0) || ((uint)a->length < 0x14)) {
      buf = CRYPTO_malloc(0x14,"crypto/asn1/a_gentm.c",0xc2);
      if (buf == (uchar *)0x0) {
        ERR_put_error(0xd,0xd8,0x41,"crypto/asn1/a_gentm.c",0xc4);
        goto LAB_00b8a3b0;
      }
      CRYPTO_free(a->data);
      a->data = buf;
    }
                    /* catch() { ... } // from try @ 00b8a2bc with catch @ 00b8a370 */
    BIO_snprintf((char *)buf,0x14,"%04d%02d%02d%02d%02d%02dZ",(ulong)(puVar2[5] + 0x76c),
                 (ulong)(puVar2[4] + 1),(ulong)(uint)puVar2[3],(ulong)(uint)puVar2[2],
                 (ulong)(uint)puVar2[1],*puVar2);
                    /* catch() { ... } // from try @ 00b8a2e0 with catch @ 00b8a384 */
    sVar3 = strlen((char *)buf);
    a->length = (int)sVar3;
    a->type = 0x18;
  }
  return a;
}

