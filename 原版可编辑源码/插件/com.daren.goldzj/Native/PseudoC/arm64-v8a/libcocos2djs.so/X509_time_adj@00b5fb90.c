
ASN1_TIME * X509_time_adj(ASN1_TIME *s,long adj,time_t *t)

{
  ASN1_UTCTIME *pAVar1;
  ASN1_TIME *pAVar2;
  ASN1_GENERALIZEDTIME *pAVar3;
  time_t local_28;
  
  if (t == (time_t *)0x0) {
    time(&local_28);
  }
  else {
    local_28 = *t;
  }
  if ((s != (ASN1_TIME *)0x0) && (((byte)s->flags >> 6 & 1) == 0)) {
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

