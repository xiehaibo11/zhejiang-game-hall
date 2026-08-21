
undefined8 FUN_00b04d60(BIO *param_1,long param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int off;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  BIGNUM *num;
  BIGNUM *num_00;
  long lVar8;
  
  if (param_4 == 2) {
    num = *(BIGNUM **)(param_2 + 0x28);
LAB_00b04da4:
    bVar4 = 1;
    num_00 = *(BIGNUM **)(param_2 + 0x20);
  }
  else {
    num = (BIGNUM *)0x0;
    if (0 < param_4) goto LAB_00b04da4;
    bVar4 = 0;
    num_00 = num;
  }
  iVar6 = 0x43;
  if (((!(bool)(bVar4 & num_00 == (BIGNUM *)0x0)) && (param_4 != 2 || num != (BIGNUM *)0x0)) &&
     (*(long *)(param_2 + 8) != 0)) {
    pcVar3 = "DH Public-Key";
    if (param_4 != 1) {
      pcVar3 = "DH Parameters";
    }
    pcVar2 = "DH Private-Key";
    if (param_4 != 2) {
      pcVar2 = pcVar3;
    }
    BIO_indent(param_1,param_3,0x80);
    uVar5 = BN_num_bits(*(BIGNUM **)(param_2 + 8));
    iVar6 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar2,(ulong)uVar5);
    if (0 < iVar6) {
      off = param_3 + 4;
      iVar6 = ASN1_bn_print(param_1,"private-key:",num,(uchar *)0x0,off);
                    /* try { // try from 00b04eb8 to 00c04fe3 has its CatchHandler @ 00b04eb8
                       catch() { ... } // from try @ 00b04eb8 with catch @ 00b04eb8
                       catch() { ... } // from try @ 00b04fec with catch @ 00b04eb8 */
      if (((((iVar6 != 0) &&
            (iVar6 = ASN1_bn_print(param_1,"public-key:",num_00,(uchar *)0x0,off), iVar6 != 0)) &&
           ((iVar6 = ASN1_bn_print(param_1,"prime:",*(BIGNUM **)(param_2 + 8),(uchar *)0x0,off),
            iVar6 != 0 &&
            (iVar6 = ASN1_bn_print(param_1,"generator:",*(BIGNUM **)(param_2 + 0x10),(uchar *)0x0,
                                   off), iVar6 != 0)))) &&
          ((*(BIGNUM **)(param_2 + 0x40) == (BIGNUM *)0x0 ||
           (iVar6 = ASN1_bn_print(param_1,"subgroup order:",*(BIGNUM **)(param_2 + 0x40),
                                  (uchar *)0x0,off), iVar6 != 0)))) &&
         ((*(BIGNUM **)(param_2 + 0x48) == (BIGNUM *)0x0 ||
          (iVar6 = ASN1_bn_print(param_1,"subgroup factor:",*(BIGNUM **)(param_2 + 0x48),
                                 (uchar *)0x0,off), iVar6 != 0)))) {
        if (*(long *)(param_2 + 0x50) != 0) {
          BIO_indent(param_1,off,0x80);
          BIO_puts(param_1,"seed:");
          lVar8 = 0;
          do {
            iVar6 = *(int *)(param_2 + 0x58);
            if (iVar6 <= lVar8) {
              iVar6 = BIO_write(param_1,&DAT_018938a8,1);
              if (iVar6 < 1) {
                return 0;
              }
              goto LAB_00b05018;
            }
            if ((int)lVar8 % 0xf == 0) {
              iVar6 = BIO_puts(param_1,"\n");
              if ((iVar6 < 1) || (iVar6 = BIO_indent(param_1,param_3 + 8,0x80), iVar6 == 0))
              goto LAB_00b05078;
              iVar6 = *(int *)(param_2 + 0x58);
            }
            pbVar1 = (byte *)(*(long *)(param_2 + 0x50) + lVar8);
            lVar8 = lVar8 + 1;
            pcVar3 = "";
            if ((int)lVar8 != iVar6) {
              pcVar3 = ":";
            }
            iVar7 = BIO_printf(param_1,"%02x%s",(ulong)*pbVar1,pcVar3);
                    /* try { // try from 00b04fe4 to 00c04feb has its CatchHandler @ 00b050ac */
            iVar6 = 7;
          } while (0 < iVar7);
          goto LAB_00b0507c;
        }
LAB_00b05018:
        if ((*(BIGNUM **)(param_2 + 0x60) == (BIGNUM *)0x0) ||
           (iVar6 = ASN1_bn_print(param_1,"counter:",*(BIGNUM **)(param_2 + 0x60),(uchar *)0x0,off),
           iVar6 != 0)) {
          if (*(long *)(param_2 + 0x18) == 0) {
            return 1;
          }
          BIO_indent(param_1,off,0x80);
          iVar6 = BIO_printf(param_1,"recommended-private-length: %d bits\n",
                             (ulong)*(uint *)(param_2 + 0x18));
          if (0 < iVar6) {
            return 1;
          }
        }
      }
    }
LAB_00b05078:
    iVar6 = 7;
  }
LAB_00b0507c:
  ERR_put_error(5,100,iVar6,"crypto/dh/dh_ameth.c",0x157);
                    /* catch() { ... } // from try @ 00b04fe4 with catch @ 00b050ac */
  return 0;
}

