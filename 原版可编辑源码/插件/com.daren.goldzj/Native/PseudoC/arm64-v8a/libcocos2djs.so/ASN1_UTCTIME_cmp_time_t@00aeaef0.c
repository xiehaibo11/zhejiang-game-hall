
int ASN1_UTCTIME_cmp_time_t(ASN1_UTCTIME *s,time_t t)

{
  int iVar1;
  long lVar2;
  int local_90;
  int local_8c;
  undefined1 auStack_88 [56];
  undefined1 auStack_50 [56];
  time_t local_18;
  
                    /* catch() { ... } // from try @ 00aeaea4 with catch @ 00aeaef8 */
                    /* catch() { ... } // from try @ 00aeae48 with catch @ 00aeaefc */
  local_18 = t;
  iVar1 = asn1_utctime_to_tm(auStack_50,s);
                    /* catch() { ... } // from try @ 00aeae24 with catch @ 00aeaf2c */
  if (((iVar1 == 0) || (lVar2 = OPENSSL_gmtime(&local_18,auStack_88), lVar2 == 0)) ||
     (iVar1 = OPENSSL_gmtime_diff(&local_8c,&local_90,auStack_88,auStack_50), iVar1 == 0)) {
    return -2;
  }
  if (local_8c < 1) {
    if (local_8c < 0) {
      return -1;
    }
    if (local_90 < 1) {
      return -(uint)(local_90 != 0);
    }
  }
                    /* try { // try from 00aeaf48 to 00beb047 has its CatchHandler @ 00aeaf48
                       catch() { ... } // from try @ 00aeaf48 with catch @ 00aeaf48
                       catch() { ... } // from try @ 00aeb050 with catch @ 00aeaf48 */
  return 1;
}

