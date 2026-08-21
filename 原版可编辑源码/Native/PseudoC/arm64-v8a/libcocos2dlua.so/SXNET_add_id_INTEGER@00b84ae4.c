
int SXNET_add_id_INTEGER(SXNET **psx,ASN1_INTEGER *izone,char *user,int userlen)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ASN1_VALUE *val;
  size_t sVar4;
  SXNET *val_00;
  
  if (((psx == (SXNET **)0x0) || (izone == (ASN1_INTEGER *)0x0)) || (user == (char *)0x0)) {
    iVar1 = 0x6b;
    iVar2 = 0x90;
LAB_00b84b5c:
    ERR_put_error(0x22,0x7e,iVar1,"crypto/x509v3/v3_sxnet.c",iVar2);
    return 0;
  }
                    /* try { // try from 00b84b18 to 00c84b1f has its CatchHandler @ 00b84b84 */
  if (userlen == -1) {
    sVar4 = strlen(user);
                    /* catch() { ... } // from try @ 00b84b18 with catch @ 00b84b84 */
    userlen = (int)sVar4;
  }
  if (0x40 < userlen) {
    iVar1 = 0x84;
    iVar2 = 0x96;
    goto LAB_00b84b5c;
  }
  val_00 = *psx;
  if (val_00 == (SXNET *)0x0) {
    val_00 = (SXNET *)ASN1_item_new((ASN1_ITEM *)SXNET_it);
    if ((val_00 == (SXNET *)0x0) || (iVar1 = ASN1_INTEGER_set(val_00->version,0), iVar1 == 0)) {
      val = (ASN1_VALUE *)0x0;
      goto LAB_00b84c8c;
    }
    *psx = val_00;
  }
  iVar1 = OPENSSL_sk_num(val_00->ids);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(val_00->ids,iVar1);
      iVar2 = ASN1_INTEGER_cmp((ASN1_INTEGER *)*puVar3,izone);
      if (iVar2 == 0) {
        if (puVar3[1] != 0) {
          iVar1 = 0x85;
          iVar2 = 0xa2;
          goto LAB_00b84b5c;
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(val_00->ids);
    } while (iVar1 < iVar2);
  }
  val = ASN1_item_new((ASN1_ITEM *)SXNETID_it);
  if (val != (ASN1_VALUE *)0x0) {
    if (userlen == -1) {
      sVar4 = strlen(user);
      userlen = (int)sVar4;
    }
    iVar1 = ASN1_OCTET_STRING_set(*(ASN1_STRING **)(val + 8),user,userlen);
    if ((iVar1 != 0) && (iVar1 = OPENSSL_sk_push(val_00->ids,val), iVar1 != 0)) {
      *(ASN1_INTEGER **)val = izone;
      return 1;
    }
  }
LAB_00b84c8c:
  ERR_put_error(0x22,0x7e,0x41,"crypto/x509v3/v3_sxnet.c",0xb3);
  ASN1_item_free(val,(ASN1_ITEM *)SXNETID_it);
  ASN1_item_free((ASN1_VALUE *)val_00,(ASN1_ITEM *)SXNET_it);
  *psx = (SXNET *)0x0;
  return 0;
}

