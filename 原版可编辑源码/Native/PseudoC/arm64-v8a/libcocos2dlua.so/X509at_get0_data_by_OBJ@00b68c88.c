
void * X509at_get0_data_by_OBJ(stack_st_X509_ATTRIBUTE *x,ASN1_OBJECT *obj,int lastpos,int type)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ASN1_TYPE *a;
  long lVar5;
  uint uVar6;
  
  if (x == (stack_st_X509_ATTRIBUTE *)0x0) {
    return (void *)0x0;
  }
  iVar2 = OPENSSL_sk_num(x);
  uVar6 = lastpos + 1U & ((int)(lastpos + 1U) >> 0x1f ^ 0xffffffffU);
  do {
    uVar1 = uVar6;
    if (iVar2 <= (int)uVar1) {
      return (void *)0x0;
    }
    uVar6 = uVar1 + 1;
    puVar4 = (undefined8 *)OPENSSL_sk_value(x,uVar1);
    iVar3 = OBJ_cmp((ASN1_OBJECT *)*puVar4,obj);
  } while (iVar3 != 0);
  if (uVar6 != 0) {
    if (lastpos < -1) {
      iVar2 = OPENSSL_sk_num(x);
      for (uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU); (int)uVar6 < iVar2; uVar6 = uVar6 + 1
          ) {
        puVar4 = (undefined8 *)OPENSSL_sk_value(x,uVar6);
        iVar3 = OBJ_cmp((ASN1_OBJECT *)*puVar4,obj);
        if (iVar3 == 0) {
          if (uVar6 != 0xffffffff) {
            return (void *)0x0;
          }
          break;
        }
      }
    }
    iVar2 = OPENSSL_sk_num(x);
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < iVar2)) {
      lVar5 = OPENSSL_sk_value(x,uVar1);
    }
    if (lastpos < -2) {
      if (lVar5 == 0) {
        return (void *)0x0;
      }
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar5 + 8));
      if (iVar2 != 1) {
        return (void *)0x0;
      }
    }
    else if (lVar5 == 0) {
      return (void *)0x0;
    }
    a = (ASN1_TYPE *)OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),0);
    if (a == (ASN1_TYPE *)0x0) {
      return (void *)0x0;
    }
    iVar2 = ASN1_TYPE_get(a);
    if (iVar2 == type) {
      return (a->value).ptr;
    }
    ERR_put_error(0xb,0x8b,0x7a,"crypto/x509/x509_att.c",0x13e);
  }
  return (void *)0x0;
}

