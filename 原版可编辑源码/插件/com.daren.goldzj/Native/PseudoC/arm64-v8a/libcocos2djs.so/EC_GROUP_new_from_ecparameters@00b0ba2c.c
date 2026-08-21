
EC_GROUP * EC_GROUP_new_from_ecparameters(long param_1)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *b;
  ASN1_INTEGER *ai;
  long lVar2;
  void *__dest;
  int iVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  BIGNUM *a_00;
  EC_GROUP *group;
  long *plVar7;
  EC_POINT *p;
  long lVar8;
  
  plVar4 = *(long **)(param_1 + 8);
  if (((plVar4 == (long *)0x0) || (*plVar4 == 0)) || (plVar4[1] == 0)) {
    iVar1 = 0x25e;
LAB_00b0bb40:
    ERR_put_error(0x10,0x107,0x73,"crypto/ec/ec_asn1.c",iVar1);
    a = (BIGNUM *)0x0;
LAB_00b0bb50:
    group = (EC_GROUP *)0x0;
    a_00 = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
LAB_00b0bb54:
    p = (EC_POINT *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar6 == (undefined8 *)0x0) || (piVar5 = (int *)*puVar6, piVar5 == (int *)0x0)) ||
       ((*(uchar **)(piVar5 + 2) == (uchar *)0x0 ||
        ((puVar6[1] == 0 || (*(long *)(puVar6[1] + 8) == 0)))))) {
      iVar1 = 0x266;
      goto LAB_00b0bb40;
    }
    a = BN_bin2bn(*(uchar **)(piVar5 + 2),*piVar5,(BIGNUM *)0x0);
    if (a == (BIGNUM *)0x0) {
      ERR_put_error(0x10,0x107,3,"crypto/ec/ec_asn1.c",0x26b);
      goto LAB_00b0bb50;
    }
    piVar5 = *(int **)(*(long *)(param_1 + 0x10) + 8);
    b = BN_bin2bn(*(uchar **)(piVar5 + 2),*piVar5,(BIGNUM *)0x0);
    if (b == (BIGNUM *)0x0) {
      iVar1 = 3;
      iVar3 = 0x270;
      goto LAB_00b0bd24;
    }
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 8));
    if (iVar1 != 0x196) {
      if (iVar1 == 0x197) {
        plVar4 = *(long **)(*(long *)(param_1 + 8) + 8);
        lVar8 = *plVar4;
        if (lVar8 < 0x296) {
          a_00 = BN_new();
          if (a_00 == (BIGNUM *)0x0) {
            iVar1 = 0x41;
            iVar3 = 0x289;
            goto LAB_00b0bfec;
          }
          iVar1 = OBJ_obj2nid((ASN1_OBJECT *)plVar4[1]);
          if (iVar1 == 0x2a9) {
            iVar1 = 0x7e;
            iVar3 = 0x2c4;
            goto LAB_00b0bfec;
          }
          if (iVar1 != 0x2ab) {
            if (iVar1 == 0x2aa) {
              if ((ASN1_INTEGER *)plVar4[2] == (ASN1_INTEGER *)0x0) {
                iVar1 = 0x73;
                iVar3 = 0x294;
              }
              else {
                lVar2 = ASN1_INTEGER_get((ASN1_INTEGER *)plVar4[2]);
                if ((0 < lVar2) && (lVar2 < *plVar4)) {
                  iVar1 = BN_set_bit(a_00,(int)*plVar4);
                  if (iVar1 != 0) {
                    iVar1 = BN_set_bit(a_00,(int)lVar2);
                    goto joined_r0x00b0bcc0;
                  }
                  goto LAB_00b0bff0;
                }
                iVar1 = 0x89;
                iVar3 = 0x29c;
              }
            }
            else {
              iVar1 = 0x73;
              iVar3 = 0x2c8;
            }
            goto LAB_00b0bfec;
          }
          plVar7 = (long *)plVar4[2];
          if (plVar7 == (long *)0x0) {
            iVar1 = 0x73;
            iVar3 = 0x2ac;
            group = (EC_GROUP *)0x0;
            goto LAB_00b0c02c;
          }
          if ((((*plVar4 <= plVar7[2]) || (plVar7[2] <= plVar7[1])) || (plVar7[1] <= *plVar7)) ||
             (*plVar7 < 1)) {
            iVar1 = 0x84;
            iVar3 = 0x2b4;
            goto LAB_00b0bfec;
          }
          iVar1 = BN_set_bit(a_00,(int)*plVar4);
          if (((iVar1 != 0) && (iVar1 = BN_set_bit(a_00,(int)*plVar7), iVar1 != 0)) &&
             (iVar1 = BN_set_bit(a_00,(int)plVar7[1]), iVar1 != 0)) {
            iVar1 = BN_set_bit(a_00,(int)plVar7[2]);
joined_r0x00b0bcc0:
            if ((iVar1 != 0) && (iVar1 = BN_set_bit(a_00,0), iVar1 != 0)) {
              group = (EC_GROUP *)EC_GROUP_new_curve_GF2m(a_00,a,b,0);
              goto joined_r0x00b0bcec;
            }
          }
          goto LAB_00b0bff0;
        }
        iVar1 = 0x8f;
        iVar3 = 0x284;
      }
      else {
        iVar1 = 0x67;
        iVar3 = 0x2eb;
      }
LAB_00b0bd24:
      ERR_put_error(0x10,0x107,iVar1,"crypto/ec/ec_asn1.c",iVar3);
      group = (EC_GROUP *)0x0;
      a_00 = (BIGNUM *)0x0;
      goto LAB_00b0bb54;
    }
    ai = *(ASN1_INTEGER **)(*(long *)(param_1 + 8) + 8);
    if (ai == (ASN1_INTEGER *)0x0) {
      iVar1 = 0x73;
      iVar3 = 0x2d4;
      goto LAB_00b0bd24;
    }
    a_00 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
    if (a_00 == (BIGNUM *)0x0) {
      iVar1 = 0xd;
      iVar3 = 0x2d9;
LAB_00b0bfec:
      ERR_put_error(0x10,0x107,iVar1,"crypto/ec/ec_asn1.c",iVar3);
LAB_00b0bff0:
      group = (EC_GROUP *)0x0;
      goto LAB_00b0bb54;
    }
    iVar1 = BN_is_negative(a_00);
    if ((iVar1 != 0) || (iVar1 = BN_is_zero(a_00), iVar1 != 0)) {
      iVar1 = 0x67;
      iVar3 = 0x2de;
      goto LAB_00b0bfec;
    }
    iVar1 = BN_num_bits(a_00);
    if (0x295 < iVar1) {
      iVar1 = 0x8f;
      iVar3 = 0x2e4;
      goto LAB_00b0bfec;
    }
    lVar8 = (long)iVar1;
    group = EC_GROUP_new_curve_GFp(a_00,a,b,(BN_CTX *)0x0);
joined_r0x00b0bcec:
    if (group == (EC_GROUP *)0x0) {
      iVar1 = 0x10;
      iVar3 = 0x2f0;
LAB_00b0c02c:
      ERR_put_error(0x10,0x107,iVar1,"crypto/ec/ec_asn1.c",iVar3);
      goto LAB_00b0bb54;
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
      CRYPTO_free(*(void **)(group + 0x30));
      __dest = CRYPTO_malloc(**(int **)(*(long *)(param_1 + 0x10) + 0x10),"crypto/ec/ec_asn1.c",
                             0x2f7);
      *(void **)(group + 0x30) = __dest;
      if (__dest == (void *)0x0) {
        iVar1 = 0x41;
        iVar3 = 0x2f8;
        goto LAB_00b0c02c;
      }
      piVar5 = *(int **)(*(long *)(param_1 + 0x10) + 0x10);
      memcpy(__dest,*(void **)(piVar5 + 2),(long)*piVar5);
      *(long *)(group + 0x38) = (long)**(int **)(*(long *)(param_1 + 0x10) + 0x10);
    }
    if (((*(long *)(param_1 + 0x20) == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
       (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0)) {
      iVar1 = 0x73;
      iVar3 = 0x301;
      goto LAB_00b0c02c;
    }
    p = EC_POINT_new(group);
    if (p == (EC_POINT *)0x0) goto LAB_00b0bb54;
    EC_GROUP_set_point_conversion_form(group,**(byte **)(*(long *)(param_1 + 0x18) + 8) & 0xfe);
    iVar1 = EC_POINT_oct2point(group,p,*(uchar **)(*(int **)(param_1 + 0x18) + 2),
                               (long)**(int **)(param_1 + 0x18),(BN_CTX *)0x0);
    if (iVar1 == 0) {
      iVar1 = 0x10;
      iVar3 = 0x30f;
    }
    else {
      a = ASN1_INTEGER_to_BN(*(ASN1_INTEGER **)(param_1 + 0x20),a);
      if (a == (BIGNUM *)0x0) {
        iVar1 = 0xd;
        iVar3 = 0x315;
      }
      else {
        iVar1 = BN_is_negative(a);
        if ((iVar1 == 0) && (iVar1 = BN_is_zero(a), iVar1 == 0)) {
          iVar1 = BN_num_bits(a);
          if ((int)lVar8 + 1 < iVar1) {
            iVar1 = 0x7a;
            iVar3 = 0x31d;
          }
          else {
            if (*(ASN1_INTEGER **)(param_1 + 0x28) == (ASN1_INTEGER *)0x0) {
              BN_free(b);
              b = (BIGNUM *)0x0;
            }
            else {
              b = ASN1_INTEGER_to_BN(*(ASN1_INTEGER **)(param_1 + 0x28),b);
              if (b == (BIGNUM *)0x0) {
                iVar1 = 0xd;
                iVar3 = 0x326;
                goto LAB_00b0c068;
              }
            }
            iVar1 = EC_GROUP_set_generator(group,p,a,b);
            if (iVar1 != 0) goto LAB_00b0bb64;
            iVar1 = 0x10;
            iVar3 = 0x32b;
          }
        }
        else {
          iVar1 = 0x7a;
          iVar3 = 0x319;
        }
      }
    }
LAB_00b0c068:
    ERR_put_error(0x10,0x107,iVar1,"crypto/ec/ec_asn1.c",iVar3);
  }
  EC_GROUP_clear_free(group);
  group = (EC_GROUP *)0x0;
LAB_00b0bb64:
  BN_free(a_00);
  BN_free(a);
  BN_free(b);
  EC_POINT_free(p);
  return group;
}

