
EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_find(ENGINE **pe,int type)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  long *plVar3;
  ENGINE *e;
  int *local_130;
  int local_128 [54];
  
                    /* try { // try from 00aeb6cc to 00beb6db has its CatchHandler @ 00aeb80c */
                    /* try { // try from 00aeb6dc to 00beb6e3 has its CatchHandler @ 00aeb7f4 */
  while( true ) {
                    /* try { // try from 00aeb714 to 00beb76f has its CatchHandler @ 00aeb7f0 */
    local_130 = local_128;
    local_128[0] = type;
    if ((DAT_01d39048 == 0) || (iVar1 = OPENSSL_sk_find(DAT_01d39048,local_128), iVar1 < 0)) {
      plVar3 = OBJ_bsearch_(&local_130,&PTR_rsa_asn1_meths_01d200a0,0xd,8,(cmp *)&LAB_00aebcb4);
      if (plVar3 == (long *)0x0) {
        pEVar2 = (EVP_PKEY_ASN1_METHOD *)0x0;
        if (pe == (ENGINE **)0x0) {
          return (EVP_PKEY_ASN1_METHOD *)0x0;
        }
        goto LAB_00aeb770;
      }
      pEVar2 = (EVP_PKEY_ASN1_METHOD *)*plVar3;
    }
    else {
      pEVar2 = (EVP_PKEY_ASN1_METHOD *)OPENSSL_sk_value(DAT_01d39048,iVar1);
    }
    if ((pEVar2 == (EVP_PKEY_ASN1_METHOD *)0x0) || (((byte)pEVar2[8] & 1) == 0)) break;
    type = *(int *)(pEVar2 + 4);
  }
  if (pe != (ENGINE **)0x0) {
LAB_00aeb770:
                    /* try { // try from 00aeb770 to 00beb7e3 has its CatchHandler @ 00aeb308 */
    e = ENGINE_get_pkey_asn1_meth_engine(type);
    if (e == (ENGINE *)0x0) {
      *pe = (ENGINE *)0x0;
    }
    else {
      *pe = e;
      pEVar2 = ENGINE_get_pkey_asn1_meth(e,type);
    }
  }
  return pEVar2;
}

