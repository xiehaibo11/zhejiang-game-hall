
int GENERAL_NAME_cmp(GENERAL_NAME *a,GENERAL_NAME *b)

{
  int iVar1;
  ASN1_TYPE *a_00;
  ASN1_TYPE *b_00;
  OTHERNAME *pOVar2;
  OTHERNAME *pOVar3;
  
  if (a == (GENERAL_NAME *)0x0) {
    return -1;
  }
  if (b == (GENERAL_NAME *)0x0) {
    return -1;
  }
  if (a->type == b->type) {
    switch(a->type) {
    case 0:
      pOVar2 = (a->d).otherName;
      if (pOVar2 == (OTHERNAME *)0x0) {
        return -1;
      }
      pOVar3 = (b->d).otherName;
      if (pOVar3 == (OTHERNAME *)0x0) {
        return -1;
      }
      iVar1 = OBJ_cmp(pOVar2->type_id,pOVar3->type_id);
      if (iVar1 != 0) {
        return iVar1;
      }
      a_00 = pOVar2->value;
      b_00 = pOVar3->value;
      break;
    case 1:
    case 2:
    case 6:
      iVar1 = ASN1_STRING_cmp((ASN1_STRING *)(a->d).otherName,(ASN1_STRING *)(b->d).otherName);
      return iVar1;
    case 3:
    case 5:
      a_00 = (a->d).x400Address;
      b_00 = (b->d).x400Address;
      break;
    case 4:
      iVar1 = X509_NAME_cmp((a->d).directoryName,(b->d).directoryName);
      return iVar1;
    case 7:
      iVar1 = ASN1_OCTET_STRING_cmp((ASN1_STRING *)(a->d).otherName,(ASN1_STRING *)(b->d).otherName)
      ;
      return iVar1;
    case 8:
      iVar1 = OBJ_cmp((a->d).registeredID,(b->d).registeredID);
      return iVar1;
    default:
      goto LAB_00b70c44;
    }
    iVar1 = ASN1_TYPE_cmp(a_00,b_00);
    return iVar1;
  }
LAB_00b70c44:
  return -1;
}

