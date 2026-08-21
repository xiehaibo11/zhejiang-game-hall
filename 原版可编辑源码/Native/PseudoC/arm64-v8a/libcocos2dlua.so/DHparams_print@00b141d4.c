
/* WARNING: Removing unreachable block (ram,0x00b14210) */
/* WARNING: Removing unreachable block (ram,0x00b14224) */

int DHparams_print(BIO *bp,DH *x)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  iVar4 = 0x43;
  if (x->p != (BIGNUM *)0x0) {
    BIO_indent(bp,4,0x80);
    uVar3 = BN_num_bits(x->p);
    iVar4 = BIO_printf(bp,"%s: (%d bit)\n","DH Parameters",(ulong)uVar3);
    if ((((((0 < iVar4) &&
           (iVar4 = ASN1_bn_print(bp,"private-key:",(BIGNUM *)0x0,(uchar *)0x0,8), iVar4 != 0)) &&
          (iVar4 = ASN1_bn_print(bp,"public-key:",(BIGNUM *)0x0,(uchar *)0x0,8), iVar4 != 0)) &&
         ((iVar4 = ASN1_bn_print(bp,"prime:",x->p,(uchar *)0x0,8), iVar4 != 0 &&
          (iVar4 = ASN1_bn_print(bp,"generator:",x->g,(uchar *)0x0,8), iVar4 != 0)))) &&
        ((x->q == (BIGNUM *)0x0 ||
         (iVar4 = ASN1_bn_print(bp,"subgroup order:",x->q,(uchar *)0x0,8), iVar4 != 0)))) &&
       ((x->j == (BIGNUM *)0x0 ||
        (iVar4 = ASN1_bn_print(bp,"subgroup factor:",x->j,(uchar *)0x0,8), iVar4 != 0)))) {
      if (x->seed != (uchar *)0x0) {
        BIO_indent(bp,8,0x80);
        BIO_puts(bp,"seed:");
        lVar6 = 0;
        do {
          iVar4 = x->seedlen;
          if (iVar4 <= lVar6) {
            iVar4 = BIO_write(bp,&DAT_013c61e6,1);
            if (iVar4 < 1) {
              return 0;
            }
            goto LAB_00b14498;
          }
          if ((int)lVar6 % 0xf == 0) {
            iVar4 = BIO_puts(bp,"\n");
            if ((iVar4 < 1) || (iVar4 = BIO_indent(bp,0xc,0x80), iVar4 == 0)) goto LAB_00b144f8;
            iVar4 = x->seedlen;
          }
          pbVar1 = x->seed + lVar6;
          lVar6 = lVar6 + 1;
          puVar2 = &DAT_013c996e;
          if ((int)lVar6 != iVar4) {
            puVar2 = &DAT_012f06b7;
          }
          iVar5 = BIO_printf(bp,"%02x%s",(ulong)*pbVar1,puVar2);
          iVar4 = 7;
        } while (0 < iVar5);
        goto LAB_00b144fc;
      }
LAB_00b14498:
      if ((x->counter == (BIGNUM *)0x0) ||
         (iVar4 = ASN1_bn_print(bp,"counter:",x->counter,(uchar *)0x0,8), iVar4 != 0)) {
        if (x->length == 0) {
          return 1;
        }
        BIO_indent(bp,8,0x80);
        iVar4 = BIO_printf(bp,"recommended-private-length: %d bits\n",(ulong)(uint)x->length);
        if (0 < iVar4) {
          return 1;
        }
      }
    }
LAB_00b144f8:
    iVar4 = 7;
  }
LAB_00b144fc:
  ERR_put_error(5,100,iVar4,"crypto/dh/dh_ameth.c",0x157);
  return 0;
}

