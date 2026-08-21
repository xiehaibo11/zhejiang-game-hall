
int DIST_POINT_set_dpname(DIST_POINT_NAME *dpn,X509_NAME *iname)

{
  int iVar1;
  int iVar2;
  X509_NAME *pXVar3;
  X509_NAME_ENTRY *ne;
  GENERAL_NAMES *pGVar4;
  
  if ((dpn != (DIST_POINT_NAME *)0x0) && (dpn->type == 1)) {
    pGVar4 = (dpn->name).fullname;
    pXVar3 = X509_NAME_dup(iname);
    dpn->dpname = pXVar3;
    if (pXVar3 == (X509_NAME *)0x0) {
      return 0;
    }
    iVar1 = OPENSSL_sk_num(pGVar4);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        ne = (X509_NAME_ENTRY *)OPENSSL_sk_value(pGVar4,iVar1);
        iVar2 = X509_NAME_add_entry(dpn->dpname,ne,-1,(uint)(iVar1 == 0));
        if (iVar2 == 0) goto LAB_00b70398;
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(pGVar4);
      } while (iVar1 < iVar2);
    }
    iVar1 = i2d_X509_NAME(dpn->dpname,(uchar **)0x0);
    if (iVar1 < 0) {
LAB_00b70398:
      X509_NAME_free(dpn->dpname);
      dpn->dpname = (X509_NAME *)0x0;
      return 0;
    }
  }
  return 1;
}

