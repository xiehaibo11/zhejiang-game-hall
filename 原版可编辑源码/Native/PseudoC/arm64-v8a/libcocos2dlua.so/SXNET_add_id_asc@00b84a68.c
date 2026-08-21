
int SXNET_add_id_asc(SXNET **psx,char *zone,char *user,int userlen)

{
  int iVar1;
  ASN1_INTEGER *izone;
  
  izone = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,zone);
  if (izone != (ASN1_INTEGER *)0x0) {
                    /* try { // try from 00b84ab0 to 00c84b17 has its CatchHandler @ 00b84ab0
                       catch() { ... } // from try @ 00b84ab0 with catch @ 00b84ab0
                       catch() { ... } // from try @ 00b84b20 with catch @ 00b84ab0 */
    iVar1 = SXNET_add_id_INTEGER(psx,izone,user,userlen);
    return iVar1;
  }
  ERR_put_error(0x22,0x7d,0x83,"crypto/x509v3/v3_sxnet.c",0x6d);
  return 0;
}

