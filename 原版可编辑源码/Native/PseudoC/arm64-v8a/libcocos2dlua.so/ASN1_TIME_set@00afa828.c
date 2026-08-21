
ASN1_TIME * ASN1_TIME_set(ASN1_TIME *s,time_t t)

{
  long lVar1;
  ASN1_TIME *pAVar2;
  undefined1 auStack_58 [56];
  time_t local_18;
  
  local_18 = t;
  lVar1 = OPENSSL_gmtime(&local_18,auStack_58);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0xd9,0xad,"crypto/asn1/a_time.c",0x28);
    pAVar2 = (ASN1_TIME *)0x0;
  }
  else if (*(int *)(lVar1 + 0x14) - 0x32U < 100) {
    pAVar2 = ASN1_UTCTIME_adj(s,local_18,0,0);
  }
  else {
    pAVar2 = ASN1_GENERALIZEDTIME_adj(s,local_18,0,0);
  }
  return pAVar2;
}

