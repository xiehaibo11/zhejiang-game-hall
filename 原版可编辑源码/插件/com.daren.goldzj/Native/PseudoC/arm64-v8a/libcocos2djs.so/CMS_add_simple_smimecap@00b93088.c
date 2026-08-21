
int CMS_add_simple_smimecap(stack_st_X509_ALGOR **algs,int algnid,int keysize)

{
  int iVar1;
  ASN1_INTEGER *a;
  X509_ALGOR *alg;
  ASN1_OBJECT *aobj;
  stack_st_X509_ALGOR *psVar2;
  
  if (keysize < 1) {
    a = (ASN1_STRING *)0x0;
  }
  else {
    a = ASN1_INTEGER_new();
    if (a == (ASN1_INTEGER *)0x0) {
      return 0;
    }
    iVar1 = ASN1_INTEGER_set(a,(long)keysize);
    if (iVar1 == 0) {
      return 0;
    }
  }
  alg = X509_ALGOR_new();
  if (alg == (X509_ALGOR *)0x0) {
    ASN1_INTEGER_free(a);
    return 0;
  }
  aobj = OBJ_nid2obj(algnid);
  iVar1 = 2;
  if (a == (ASN1_STRING *)0x0) {
    iVar1 = -1;
  }
  X509_ALGOR_set0(alg,aobj,iVar1,a);
  psVar2 = *algs;
  if (psVar2 == (stack_st_X509_ALGOR *)0x0) {
    psVar2 = (stack_st_X509_ALGOR *)OPENSSL_sk_new_null();
    *algs = psVar2;
    if (psVar2 == (stack_st_X509_ALGOR *)0x0) goto LAB_00b93134;
  }
  iVar1 = OPENSSL_sk_push(psVar2,alg);
  if (iVar1 != 0) {
    return 1;
  }
LAB_00b93134:
  X509_ALGOR_free(alg);
  return 0;
}

