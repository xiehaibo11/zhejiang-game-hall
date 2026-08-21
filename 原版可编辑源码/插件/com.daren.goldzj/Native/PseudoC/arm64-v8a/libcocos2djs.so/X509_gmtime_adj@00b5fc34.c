
ASN1_TIME * X509_gmtime_adj(ASN1_TIME *s,long adj)

{
  ASN1_UTCTIME *pAVar1;
  ASN1_TIME *pAVar2;
  ASN1_GENERALIZEDTIME *pAVar3;
  time_t local_28;
  
  time(&local_28);
                    /* try { // try from 00b5fc5c to 00c5fc63 has its CatchHandler @ 00b5fd60 */
  if ((s != (ASN1_TIME *)0x0) && (((byte)s->flags >> 6 & 1) == 0)) {
                    /* try { // try from 00b5fc64 to 00c5fdab has its CatchHandler @ 00b5fa50 */
    if (s->type == 0x18) {
      pAVar3 = ASN1_GENERALIZEDTIME_adj(s,local_28,0,adj);
      return pAVar3;
    }
    if (s->type == 0x17) {
      pAVar1 = ASN1_UTCTIME_adj(s,local_28,0,adj);
      return pAVar1;
    }
  }
  pAVar2 = ASN1_TIME_adj(s,local_28,0,adj);
  return pAVar2;
}

