
void * X509V3_get_d2i(stack_st_X509_EXTENSION *x,int nid,int *crit,int *idx)

{
  bool bVar1;
  int iVar2;
  X509_EXTENSION *ex;
  ASN1_OBJECT *pAVar3;
  X509_EXTENSION *ex_00;
  X509V3_EXT_METHOD *pXVar4;
  ASN1_OCTET_STRING *x_00;
  ASN1_VALUE *pAVar5;
  void *pvVar6;
  uint uVar7;
  uchar *local_48;
  
  if (x == (stack_st_X509_EXTENSION *)0x0) {
    if (idx != (int *)0x0) {
      *idx = -1;
    }
  }
  else {
    if (idx == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *idx + 1;
    }
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    iVar2 = OPENSSL_sk_num(x);
    if ((int)uVar7 < iVar2) {
      if (idx == (int *)0x0) {
        ex = (X509_EXTENSION *)0x0;
        do {
          ex_00 = (X509_EXTENSION *)OPENSSL_sk_value(x,uVar7);
          pAVar3 = X509_EXTENSION_get_object(ex_00);
          iVar2 = OBJ_obj2nid(pAVar3);
          if ((iVar2 == nid) && (bVar1 = ex != (X509_EXTENSION *)0x0, ex = ex_00, bVar1)) {
            if (crit == (int *)0x0) {
              return (void *)0x0;
            }
            iVar2 = -2;
            goto LAB_00b80cbc;
          }
          uVar7 = uVar7 + 1;
          iVar2 = OPENSSL_sk_num(x);
        } while ((int)uVar7 < iVar2);
joined_r0x00b80c40:
        if (ex != (X509_EXTENSION *)0x0) {
          if (crit != (int *)0x0) {
            iVar2 = X509_EXTENSION_get_critical(ex);
            *crit = iVar2;
          }
          pXVar4 = X509V3_EXT_get(ex);
          if (pXVar4 == (X509V3_EXT_METHOD *)0x0) {
            return (void *)0x0;
          }
          x_00 = X509_EXTENSION_get_data(ex);
          local_48 = (uchar *)ASN1_STRING_get0_data();
          iVar2 = ASN1_STRING_length(x_00);
          if (pXVar4->it != (ASN1_ITEM *)0x0) {
            pAVar5 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_48,(long)iVar2,pXVar4->it);
            return pAVar5;
          }
          pvVar6 = (*pXVar4->d2i)((void *)0x0,&local_48,(long)iVar2);
          return pvVar6;
        }
      }
      else {
        do {
          ex = (X509_EXTENSION *)OPENSSL_sk_value(x,uVar7);
          pAVar3 = X509_EXTENSION_get_object(ex);
          iVar2 = OBJ_obj2nid(pAVar3);
          if (iVar2 == nid) {
            *idx = uVar7;
            goto joined_r0x00b80c40;
          }
          uVar7 = uVar7 + 1;
          iVar2 = OPENSSL_sk_num(x);
        } while ((int)uVar7 < iVar2);
      }
    }
    if (idx != (int *)0x0) {
      *idx = -1;
    }
  }
  if (crit != (int *)0x0) {
    iVar2 = -1;
LAB_00b80cbc:
    *crit = iVar2;
  }
  return (void *)0x0;
}

