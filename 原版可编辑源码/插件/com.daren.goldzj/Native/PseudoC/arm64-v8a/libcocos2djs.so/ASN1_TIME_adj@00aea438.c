
ASN1_TIME * ASN1_TIME_adj(ASN1_TIME *s,time_t t,int offset_day,long offset_sec)

{
  int iVar1;
  long lVar2;
  ASN1_UTCTIME *pAVar3;
  ASN1_GENERALIZEDTIME *pAVar4;
  undefined1 auStack_70 [56];
  time_t local_38;
  
                    /* try { // try from 00aea448 to 00bea44f has its CatchHandler @ 00aea5fc */
  local_38 = t;
  lVar2 = OPENSSL_gmtime(&local_38,auStack_70);
  if (lVar2 == 0) {
    ERR_put_error(0xd,0xd9,0xad,"crypto/asn1/a_time.c",0x28);
  }
  else if (((offset_day == 0) && (offset_sec == 0)) ||
          (iVar1 = OPENSSL_gmtime_adj(lVar2,offset_day,offset_sec), iVar1 != 0)) {
                    /* try { // try from 00aea498 to 00bea49f has its CatchHandler @ 00aea558 */
    if (*(int *)(lVar2 + 0x14) - 0x32U < 100) {
      pAVar3 = ASN1_UTCTIME_adj(s,local_38,offset_day,offset_sec);
      return pAVar3;
    }
    pAVar4 = ASN1_GENERALIZEDTIME_adj(s,local_38,offset_day,offset_sec);
    return pAVar4;
  }
  return (ASN1_TIME *)0x0;
}

