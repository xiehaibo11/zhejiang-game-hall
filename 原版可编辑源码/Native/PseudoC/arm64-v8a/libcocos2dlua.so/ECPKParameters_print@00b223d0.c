
int ECPKParameters_print(BIO *bp,EC_GROUP *x,int off)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  point_conversion_form_t form;
  BN_CTX *ctx;
  char *pcVar5;
  long lVar6;
  EC_METHOD *meth;
  EC_POINT *pEVar7;
  BIGNUM *num;
  BIGNUM *num_00;
  uchar *puVar8;
  BIGNUM *p;
  BIGNUM *a;
  BIGNUM *b;
  BIGNUM *num_01;
  ulong uVar9;
  ulong local_100;
  undefined1 local_e0 [128];
  
  if (x == (EC_GROUP *)0x0) {
    a = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
    num_01 = (BIGNUM *)0x0;
    p = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
    iVar3 = 0x43;
  }
  else {
    ctx = BN_CTX_new();
    if (ctx == (BN_CTX *)0x0) {
      a = (BIGNUM *)0x0;
      b = (BIGNUM *)0x0;
      p = (BIGNUM *)0x0;
    }
    else {
      iVar3 = EC_GROUP_get_asn1_flag(x);
      if (iVar3 != 0) {
        iVar3 = BIO_indent(bp,off,0x80);
        if ((iVar3 != 0) && (iVar3 = EC_GROUP_get_curve_name(x), iVar3 != 0)) {
          pcVar5 = OBJ_nid2sn(iVar3);
          iVar4 = BIO_printf(bp,"ASN1 OID: %s",pcVar5);
          if ((0 < iVar4) && (iVar4 = BIO_printf(bp,"\n"), 0 < iVar4)) {
            lVar6 = EC_curve_nid2nist(iVar3);
            if (lVar6 == 0) {
              num_01 = (BIGNUM *)0x0;
              b = (BIGNUM *)0x0;
              a = (BIGNUM *)0x0;
              iVar3 = 1;
              p = (BIGNUM *)0x0;
              goto LAB_00b225a0;
            }
            iVar3 = BIO_indent(bp,off,0x80);
            if (iVar3 != 0) {
              iVar3 = BIO_printf(bp,"NIST CURVE: %s\n",lVar6);
              p = (BIGNUM *)0x0;
              if (0 < iVar3) {
                iVar3 = 1;
                num_01 = (BIGNUM *)0x0;
                b = (BIGNUM *)0x0;
                a = (BIGNUM *)0x0;
                goto LAB_00b225a0;
              }
              iVar3 = 0x20;
              a = p;
              b = p;
              num_01 = p;
              goto LAB_00b22584;
            }
          }
        }
        a = (BIGNUM *)0x0;
        b = (BIGNUM *)0x0;
        num_01 = (BIGNUM *)0x0;
        p = (BIGNUM *)0x0;
        goto LAB_00b22510;
      }
      meth = EC_GROUP_method_of(x);
      iVar3 = EC_METHOD_get_field_type(meth);
      p = BN_new();
      if (p == (BIGNUM *)0x0) {
        a = (BIGNUM *)0x0;
      }
      else {
        a = BN_new();
        if (a != (BIGNUM *)0x0) {
          b = BN_new();
          if (b == (BIGNUM *)0x0) goto LAB_00b22580;
          if (iVar3 == 0x197) {
            iVar4 = EC_GROUP_get_curve_GF2m();
          }
          else {
            iVar4 = EC_GROUP_get_curve_GFp(x,p,a,b,ctx);
          }
          if (iVar4 == 0) {
LAB_00b22670:
            num_01 = (BIGNUM *)0x0;
            iVar3 = 0x10;
          }
          else {
            pEVar7 = EC_GROUP_get0_generator(x);
            num_01 = (BIGNUM *)0x0;
            if (pEVar7 != (EC_POINT *)0x0) {
              num = (BIGNUM *)EC_GROUP_get0_order(x);
              num_00 = (BIGNUM *)EC_GROUP_get0_cofactor(x);
              if (num == (BIGNUM *)0x0) goto LAB_00b22670;
              form = EC_GROUP_get_point_conversion_form(x);
              num_01 = EC_POINT_point2bn(x,pEVar7,form,(BIGNUM *)0x0,ctx);
              if (num_01 != (BIGNUM *)0x0) {
                puVar8 = EC_GROUP_get0_seed(x);
                if (puVar8 == (uchar *)0x0) {
                  local_100 = 0;
                }
                else {
                  local_100 = EC_GROUP_get_seed_len(x);
                }
                iVar4 = BIO_indent(bp,off,0x80);
                if (iVar4 != 0) {
                  pcVar5 = OBJ_nid2sn(iVar3);
                  iVar4 = BIO_printf(bp,"Field Type: %s\n",pcVar5);
                  if (0 < iVar4) {
                    if (iVar3 == 0x197) {
                      iVar3 = EC_GROUP_get_basis_type(x);
                      if ((iVar3 != 0) && (iVar4 = BIO_indent(bp,off,0x80), iVar4 != 0)) {
                        pcVar5 = OBJ_nid2sn(iVar3);
                        iVar3 = BIO_printf(bp,"Basis Type: %s\n",pcVar5);
                        if (0 < iVar3) {
                          pcVar5 = "Polynomial:";
                          goto LAB_00b2274c;
                        }
                      }
                    }
                    else {
                      pcVar5 = "Prime:";
LAB_00b2274c:
                      iVar3 = ASN1_bn_print(bp,pcVar5,p,(uchar *)0x0,off);
                      if (((iVar3 != 0) &&
                          (iVar3 = ASN1_bn_print(bp,"A:   ",a,(uchar *)0x0,off), iVar3 != 0)) &&
                         (iVar3 = ASN1_bn_print(bp,"B:   ",b,(uchar *)0x0,off), iVar3 != 0)) {
                        if (form == POINT_CONVERSION_UNCOMPRESSED) {
                          pcVar5 = "Generator (uncompressed):";
                        }
                        else if (form == POINT_CONVERSION_COMPRESSED) {
                          pcVar5 = "Generator (compressed):";
                        }
                        else {
                          pcVar5 = "Generator (hybrid):";
                        }
                        iVar3 = ASN1_bn_print(bp,pcVar5,num_01,(uchar *)0x0,off);
                        if (((iVar3 != 0) &&
                            (iVar3 = ASN1_bn_print(bp,"Order: ",num,(uchar *)0x0,off), iVar3 != 0))
                           && ((num_00 == (BIGNUM *)0x0 ||
                               (iVar3 = ASN1_bn_print(bp,"Cofactor: ",num_00,(uchar *)0x0,off),
                               iVar3 != 0)))) {
                          if (puVar8 == (uchar *)0x0) {
                            iVar3 = 1;
                            goto LAB_00b225a0;
                          }
                          if (off < 1) {
                            off = 0;
                          }
                          else {
                            if (0x7f < off) {
                              off = 0x80;
                            }
                            memset(local_e0,0x20,(long)off);
                            iVar3 = BIO_write(bp,local_e0,off);
                            if (iVar3 < 1) goto LAB_00b22510;
                          }
                          iVar3 = BIO_printf(bp,"%s","Seed:");
                          if (0 < iVar3) {
                            uVar9 = 0;
                            do {
                              if (local_100 <= uVar9) {
                                iVar3 = 1;
                                iVar4 = BIO_write(bp,&DAT_013c61e6,1);
                                if (0 < iVar4) goto LAB_00b225a0;
                                break;
                              }
                              if (uVar9 % 0xf == 0) {
                                local_e0[0] = 10;
                                memset((void *)((ulong)local_e0 | 1),0x20,(long)(off + 4));
                                iVar3 = BIO_write(bp,local_e0,off + 5);
                                if (iVar3 < 1) break;
                              }
                              pbVar1 = puVar8 + uVar9;
                              puVar2 = &DAT_013c996e;
                              if (local_100 - 1 != uVar9) {
                                puVar2 = &DAT_012f06b7;
                              }
                              uVar9 = uVar9 + 1;
                              iVar3 = BIO_printf(bp,"%02x%s",(ulong)*pbVar1,puVar2);
                            } while (0 < iVar3);
                          }
                        }
                      }
                    }
                  }
                }
LAB_00b22510:
                iVar3 = 0x20;
                goto LAB_00b22584;
              }
            }
            iVar3 = 0x10;
          }
          goto LAB_00b22584;
        }
      }
      b = (BIGNUM *)0x0;
    }
LAB_00b22580:
    num_01 = (BIGNUM *)0x0;
    iVar3 = 0x41;
  }
LAB_00b22584:
  ERR_put_error(0x10,0x95,iVar3,"crypto/ec/eck_prn.c",0xe4);
  iVar3 = 0;
LAB_00b225a0:
  BN_free(p);
  BN_free(a);
  BN_free(b);
  BN_free(num_01);
  BN_CTX_free(ctx);
  return iVar3;
}

