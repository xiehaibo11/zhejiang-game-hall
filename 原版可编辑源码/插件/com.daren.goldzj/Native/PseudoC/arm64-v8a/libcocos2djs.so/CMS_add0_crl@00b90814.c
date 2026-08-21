
int CMS_add0_crl(CMS_ContentInfo *cms,X509_CRL *crl)

{
  CMS_RevocationInfoChoice *pCVar1;
  
  pCVar1 = CMS_add0_RevocationInfoChoice(cms);
  if (pCVar1 != (CMS_RevocationInfoChoice *)0x0) {
    *(undefined4 *)pCVar1 = 0;
    *(X509_CRL **)(pCVar1 + 8) = crl;
  }
  return (int)(pCVar1 != (CMS_RevocationInfoChoice *)0x0);
}

