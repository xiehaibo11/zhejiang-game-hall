
int CMS_add1_cert(CMS_ContentInfo *cms,X509 *cert)

{
  int iVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9ee18 with catch @ 00b9ef14
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9ee44 with catch @ 00b9ef14
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9ef6c with catch @ 00b9ef18
                        */
  iVar1 = CMS_add0_cert(cms,cert);
  if (0 < iVar1) {
    X509_up_ref(cert);
  }
  return iVar1;
}

