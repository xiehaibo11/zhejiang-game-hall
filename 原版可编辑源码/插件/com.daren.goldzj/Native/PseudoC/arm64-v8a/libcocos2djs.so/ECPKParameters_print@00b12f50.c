
int ECPKParameters_print(BIO *bp,EC_GROUP *x,int off)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  point_conversion_form_t form;
  BN_CTX *ctx;
  char *pcVar4;
  long lVar5;
  EC_METHOD *meth;
  EC_POINT *pEVar6;
  BIGNUM *num;
  BIGNUM *num_00;
  uchar *puVar7;
  BIGNUM *p;
  BIGNUM *a;
  BIGNUM *b;
  BIGNUM *num_01;
  ulong uVar8;
  ulong local_100;
  undefined1 local_e0 [128];
  
  if (x == (EC_GROUP *)0x0) {
    a = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
    num_01 = (BIGNUM *)0x0;
    p = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
    iVar2 = 0x43;
  }
  else {
    ctx = BN_CTX_new();
    if (ctx == (BN_CTX *)0x0) {
      a = (BIGNUM *)0x0;
      b = (BIGNUM *)0x0;
      p = (BIGNUM *)0x0;
    }
    else {
      iVar2 = EC_GROUP_get_asn1_flag(x);
      if (iVar2 != 0) {
        iVar2 = BIO_indent(bp,off,0x80);
        if ((iVar2 != 0) && (iVar2 = EC_GROUP_get_curve_name(x), iVar2 != 0)) {
          pcVar4 = OBJ_nid2sn(iVar2);
          iVar3 = BIO_printf(bp,"ASN1 OID: %s",pcVar4);
          if ((0 < iVar3) && (iVar3 = BIO_printf(bp,"\n"), 0 < iVar3)) {
            lVar5 = EC_curve_nid2nist(iVar2);
            if (lVar5 == 0) {
              num_01 = (BIGNUM *)0x0;
              b = (BIGNUM *)0x0;
              a = (BIGNUM *)0x0;
              iVar2 = 1;
              p = (BIGNUM *)0x0;
              goto LAB_00b13120;
            }
            iVar2 = BIO_indent(bp,off,0x80);
            if (iVar2 != 0) {
              iVar2 = BIO_printf(bp,"NIST CURVE: %s\n",lVar5);
              p = (BIGNUM *)0x0;
              if (0 < iVar2) {
                iVar2 = 1;
                num_01 = (BIGNUM *)0x0;
                b = (BIGNUM *)0x0;
                a = (BIGNUM *)0x0;
                goto LAB_00b13120;
              }
              iVar2 = 0x20;
              a = p;
              b = p;
              num_01 = p;
              goto LAB_00b13104;
            }
          }
        }
        a = (BIGNUM *)0x0;
        b = (BIGNUM *)0x0;
        num_01 = (BIGNUM *)0x0;
        p = (BIGNUM *)0x0;
        goto LAB_00b13090;
      }
      meth = EC_GROUP_method_of(x);
      iVar2 = EC_METHOD_get_field_type(meth);
      p = BN_new();
      if (p == (BIGNUM *)0x0) {
        a = (BIGNUM *)0x0;
      }
      else {
        a = BN_new();
        if (a != (BIGNUM *)0x0) {
          b = BN_new();
          if (b == (BIGNUM *)0x0) goto LAB_00b13100;
          if (iVar2 == 0x197) {
            iVar3 = EC_GROUP_get_curve_GF2m();
          }
          else {
            iVar3 = EC_GROUP_get_curve_GFp(x,p,a,b,ctx);
          }
          if (iVar3 == 0) {
LAB_00b131f0:
            num_01 = (BIGNUM *)0x0;
            iVar2 = 0x10;
          }
          else {
            pEVar6 = EC_GROUP_get0_generator(x);
            num_01 = (BIGNUM *)0x0;
            if (pEVar6 != (EC_POINT *)0x0) {
              num = (BIGNUM *)EC_GROUP_get0_order(x);
              num_00 = (BIGNUM *)EC_GROUP_get0_cofactor(x);
              if (num == (BIGNUM *)0x0) goto LAB_00b131f0;
              form = EC_GROUP_get_point_conversion_form(x);
              num_01 = EC_POINT_point2bn(x,pEVar6,form,(BIGNUM *)0x0,ctx);
              if (num_01 != (BIGNUM *)0x0) {
                puVar7 = EC_GROUP_get0_seed(x);
                if (puVar7 == (uchar *)0x0) {
                  local_100 = 0;
                }
                else {
                  local_100 = EC_GROUP_get_seed_len(x);
                }
                iVar3 = BIO_indent(bp,off,0x80);
                if (iVar3 != 0) {
                  pcVar4 = OBJ_nid2sn(iVar2);
                  iVar3 = BIO_printf(bp,"Field Type: %s\n",pcVar4);
                  if (0 < iVar3) {
                    if (iVar2 == 0x197) {
                      iVar2 = EC_GROUP_get_basis_type(x);
                      if ((iVar2 != 0) && (iVar3 = BIO_indent(bp,off,0x80), iVar3 != 0)) {
                        pcVar4 = OBJ_nid2sn(iVar2);
                        iVar2 = BIO_printf(bp,"Basis Type: %s\n",pcVar4);
                        if (0 < iVar2) {
                          pcVar4 = "Polynomial:";
                          goto LAB_00b132cc;
                        }
                      }
                    }
                    else {
                      pcVar4 = "Prime:";
LAB_00b132cc:
                      iVar2 = ASN1_bn_print(bp,pcVar4,p,(uchar *)0x0,off);
                      if (((iVar2 != 0) &&
                          (iVar2 = ASN1_bn_print(bp,"A:   ",a,(uchar *)0x0,off), iVar2 != 0)) &&
                         (iVar2 = ASN1_bn_print(bp,"B:   ",b,(uchar *)0x0,off), iVar2 != 0)) {
                        if (form == POINT_CONVERSION_UNCOMPRESSED) {
                          pcVar4 = "Generator (uncompressed):";
                        }
                        else if (form == POINT_CONVERSION_COMPRESSED) {
                          pcVar4 = "Generator (compressed):";
                        }
                        else {
                          pcVar4 = "Generator (hybrid):";
                        }
                        iVar2 = ASN1_bn_print(bp,pcVar4,num_01,(uchar *)0x0,off);
                        if (((iVar2 != 0) &&
                            (iVar2 = ASN1_bn_print(bp,"Order: ",num,(uchar *)0x0,off), iVar2 != 0))
                           && ((num_00 == (BIGNUM *)0x0 ||
                               (iVar2 = ASN1_bn_print(bp,"Cofactor: ",num_00,(uchar *)0x0,off),
                               iVar2 != 0)))) {
                          if (puVar7 == (uchar *)0x0) {
                            iVar2 = 1;
                            goto LAB_00b13120;
                          }
                          if (off < 1) {
                            off = 0;
                          }
                          else {
                            if (0x7f < off) {
                              off = 0x80;
                            }
                            memset(local_e0,0x20,(long)off);
                            iVar2 = BIO_write(bp,local_e0,off);
                            if (iVar2 < 1) goto LAB_00b13090;
                          }
                          iVar2 = BIO_printf(bp,"%s","Seed:");
                          if (0 < iVar2) {
                            uVar8 = 0;
                            do {
                              if (local_100 <= uVar8) {
                                iVar2 = 1;
                                iVar3 = BIO_write(bp,&DAT_018938a8,1);
                                if (0 < iVar3) goto LAB_00b13120;
                                break;
                              }
                              if (uVar8 % 0xf == 0) {
                                local_e0[0] = 10;
                                memset((void *)((ulong)local_e0 | 1),0x20,(long)(off + 4));
                                iVar2 = BIO_write(bp,local_e0,off + 5);
                                if (iVar2 < 1) break;
                              }
                              pbVar1 = puVar7 + uVar8;
                              pcVar4 = "";
                              if (local_100 - 1 != uVar8) {
                                pcVar4 = ":";
                              }
                              uVar8 = uVar8 + 1;
                              iVar2 = BIO_printf(bp,"%02x%s",(ulong)*pbVar1,pcVar4);
                            } while (0 < iVar2);
                          }
                        }
                      }
                    }
                  }
                }
LAB_00b13090:
                iVar2 = 0x20;
                goto LAB_00b13104;
              }
            }
            iVar2 = 0x10;
          }
          goto LAB_00b13104;
        }
      }
      b = (BIGNUM *)0x0;
    }
LAB_00b13100:
    num_01 = (BIGNUM *)0x0;
    iVar2 = 0x41;
  }
LAB_00b13104:
  ERR_put_error(0x10,0x95,iVar2,"crypto/ec/eck_prn.c",0xe4);
  iVar2 = 0;
LAB_00b13120:
  BN_free(p);
  BN_free(a);
  BN_free(b);
  BN_free(num_01);
  BN_CTX_free(ctx);
  return iVar2;
}

