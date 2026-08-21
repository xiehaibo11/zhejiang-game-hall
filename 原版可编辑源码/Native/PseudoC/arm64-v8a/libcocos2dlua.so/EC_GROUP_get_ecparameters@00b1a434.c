
/* WARNING: Type propagation algorithm not settling */

ASN1_VALUE * EC_GROUP_get_ecparameters(EC_GROUP *param_1,ASN1_VALUE *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  point_conversion_form_t pVar7;
  ASN1_VALUE *val;
  EC_METHOD *pEVar8;
  ASN1_OBJECT *pAVar9;
  BIGNUM *pBVar10;
  ASN1_INTEGER *pAVar11;
  BIGNUM *b;
  ASN1_VALUE *pAVar12;
  ASN1_STRING *pAVar13;
  ASN1_VALUE *pAVar14;
  EC_POINT *pEVar15;
  long lVar16;
  void *data;
  int reason;
  undefined8 *puVar17;
  uchar *data_00;
  uchar *data_01;
  long *plVar18;
  uchar *local_80;
  uchar *local_78;
  void *local_70;
  uchar local_64 [4];
  
  local_70 = (void *)0x0;
  val = param_2;
  if ((param_2 == (ASN1_VALUE *)0x0) &&
     (val = ASN1_item_new((ASN1_ITEM *)ECPARAMETERS_it), val == (ASN1_VALUE *)0x0)) {
    ERR_put_error(0x10,0x105,0x41,"crypto/ec/ec_asn1.c",0x1e0);
    goto LAB_00b1a698;
  }
  *(undefined8 *)val = 1;
  if ((param_1 == (EC_GROUP *)0x0) ||
     (puVar17 = *(undefined8 **)(val + 8), puVar17 == (undefined8 *)0x0)) {
LAB_00b1a678:
    ERR_put_error(0x10,0x105,0x10,"crypto/ec/ec_asn1.c",0x1eb);
  }
  else {
    ASN1_OBJECT_free((ASN1_OBJECT *)*puVar17);
    ASN1_TYPE_free((ASN1_TYPE *)puVar17[1]);
    pEVar8 = EC_GROUP_method_of(param_1);
    iVar5 = EC_METHOD_get_field_type(pEVar8);
    pAVar9 = OBJ_nid2obj(iVar5);
    *puVar17 = pAVar9;
    if (pAVar9 == (ASN1_OBJECT *)0x0) {
      iVar6 = 0x9a;
      reason = 8;
      iVar5 = 0xff;
      goto LAB_00b1a668;
    }
    if (iVar5 != 0x197) {
      if (iVar5 != 0x196) {
        iVar6 = 0x9a;
        reason = 0x83;
        iVar5 = 0x15f;
        goto LAB_00b1a668;
      }
      pBVar10 = BN_new();
      if (pBVar10 == (BIGNUM *)0x0) {
        ERR_put_error(0x10,0x9a,0x41,"crypto/ec/ec_asn1.c",0x105);
      }
      else {
        iVar5 = EC_GROUP_get_curve_GFp(param_1,pBVar10,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_CTX *)0x0);
        if (iVar5 == 0) {
          ERR_put_error(0x10,0x9a,0x10,"crypto/ec/ec_asn1.c",0x10a);
        }
        else {
          pAVar11 = BN_to_ASN1_INTEGER(pBVar10,(ASN1_INTEGER *)0x0);
          puVar17[1] = pAVar11;
          if (pAVar11 != (ASN1_INTEGER *)0x0) goto LAB_00b1a508;
          ERR_put_error(0x10,0x9a,0xd,"crypto/ec/ec_asn1.c",0x110);
        }
      }
LAB_00b1a670:
      BN_free(pBVar10);
      goto LAB_00b1a678;
    }
    pAVar12 = ASN1_item_new((ASN1_ITEM *)&DAT_016afd78);
    puVar17[1] = pAVar12;
    if (pAVar12 == (ASN1_VALUE *)0x0) {
      ERR_put_error(0x10,0x9a,0x41,"crypto/ec/ec_asn1.c",0x122);
      pBVar10 = (BIGNUM *)0x0;
      goto LAB_00b1a670;
    }
    iVar5 = EC_GROUP_get_degree(param_1);
    *(long *)pAVar12 = (long)iVar5;
    pEVar8 = EC_GROUP_method_of(param_1);
    iVar5 = EC_METHOD_get_field_type(pEVar8);
    if (iVar5 != 0x197) {
LAB_00b1a650:
      iVar6 = 0x9a;
      reason = 0x10;
      iVar5 = 299;
LAB_00b1a668:
      ERR_put_error(0x10,iVar6,reason,"crypto/ec/ec_asn1.c",iVar5);
      pBVar10 = (BIGNUM *)0x0;
      goto LAB_00b1a670;
    }
    lVar16 = 0x12;
    do {
      lVar1 = lVar16 * 4;
      lVar16 = lVar16 + 1;
    } while (*(int *)(param_1 + lVar1) != 0);
    if ((int)lVar16 == 0x15) {
      iVar5 = 0x2aa;
    }
    else {
      if ((int)lVar16 != 0x17) goto LAB_00b1a650;
      iVar5 = 0x2ab;
    }
    pAVar9 = OBJ_nid2obj(iVar5);
    *(ASN1_OBJECT **)(pAVar12 + 8) = pAVar9;
    if (pAVar9 == (ASN1_OBJECT *)0x0) {
      iVar6 = 0x9a;
      reason = 8;
      iVar5 = 0x130;
      goto LAB_00b1a668;
    }
    pEVar8 = EC_GROUP_method_of(param_1);
    iVar6 = EC_METHOD_get_field_type(pEVar8);
    if (iVar5 != 0x2ab) {
      if ((((iVar6 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) &&
          (uVar2 = *(uint *)(param_1 + 0x4c), uVar2 != 0)) && (*(int *)(param_1 + 0x50) == 0)) {
        pAVar11 = ASN1_INTEGER_new();
        *(ASN1_INTEGER **)(pAVar12 + 0x10) = pAVar11;
        if (pAVar11 == (ASN1_INTEGER *)0x0) {
          iVar6 = 0x9a;
          reason = 0x41;
          iVar5 = 0x13c;
        }
        else {
          iVar5 = ASN1_INTEGER_set(pAVar11,(ulong)uVar2);
          if (iVar5 != 0) {
            pBVar10 = (BIGNUM *)0x0;
            goto LAB_00b1a508;
          }
          iVar6 = 0x9a;
          reason = 0xd;
          iVar5 = 0x140;
        }
      }
      else {
        iVar6 = 0xc2;
        reason = 0x42;
        iVar5 = 0x30;
      }
      goto LAB_00b1a668;
    }
    if ((((iVar6 != 0x197) || (*(int *)(param_1 + 0x48) == 0)) ||
        ((uVar2 = *(uint *)(param_1 + 0x4c), uVar2 == 0 ||
         ((uVar3 = *(uint *)(param_1 + 0x50), uVar3 == 0 ||
          (uVar4 = *(uint *)(param_1 + 0x54), uVar4 == 0)))))) || (*(int *)(param_1 + 0x58) != 0)) {
      iVar6 = 0xc1;
      reason = 0x42;
      iVar5 = 0x46;
      goto LAB_00b1a668;
    }
    pAVar14 = ASN1_item_new((ASN1_ITEM *)&DAT_016afd40);
    *(ASN1_VALUE **)(pAVar12 + 0x10) = pAVar14;
    if (pAVar14 == (ASN1_VALUE *)0x0) {
      iVar6 = 0x9a;
      reason = 0x41;
      iVar5 = 0x14b;
      goto LAB_00b1a668;
    }
    pBVar10 = (BIGNUM *)0x0;
    *(ulong *)pAVar14 = (ulong)uVar4;
    *(ulong *)(pAVar14 + 8) = (ulong)uVar3;
    *(ulong *)(pAVar14 + 0x10) = (ulong)uVar2;
LAB_00b1a508:
    BN_free(pBVar10);
    plVar18 = *(long **)(val + 0x10);
    local_64[0] = '\0';
    if (((plVar18 == (long *)0x0) || (*plVar18 == 0)) || (plVar18[1] == 0)) {
LAB_00b1aabc:
      ERR_put_error(0x10,0x105,0x10,"crypto/ec/ec_asn1.c",0x1f1);
    }
    else {
      pBVar10 = BN_new();
      if ((pBVar10 == (BIGNUM *)0x0) || (b = BN_new(), b == (BIGNUM *)0x0)) {
        ERR_put_error(0x10,0x99,0x41,"crypto/ec/ec_asn1.c",0x177);
        CRYPTO_free((void *)0x0);
        CRYPTO_free((void *)0x0);
        BN_free(pBVar10);
        b = (BIGNUM *)0x0;
LAB_00b1aab8:
        BN_free(b);
        goto LAB_00b1aabc;
      }
      pEVar8 = EC_GROUP_method_of(param_1);
      iVar5 = EC_METHOD_get_field_type(pEVar8);
      if (iVar5 != 0x196) {
        iVar5 = EC_GROUP_get_curve_GF2m(param_1,0,pBVar10,b,0);
        if (iVar5 != 0) goto LAB_00b1a888;
        iVar5 = 0x10;
        iVar6 = 0x188;
LAB_00b1aa84:
        ERR_put_error(0x10,0x99,iVar5,"crypto/ec/ec_asn1.c",iVar6);
        local_78 = (uchar *)0x0;
LAB_00b1aa94:
        CRYPTO_free(local_78);
        local_80 = (uchar *)0x0;
LAB_00b1aaa4:
        CRYPTO_free(local_80);
        BN_free(pBVar10);
        goto LAB_00b1aab8;
      }
      iVar5 = EC_GROUP_get_curve_GFp(param_1,(BIGNUM *)0x0,pBVar10,b,(BN_CTX *)0x0);
      if (iVar5 == 0) {
        iVar5 = 0x10;
        iVar6 = 0x180;
        goto LAB_00b1aa84;
      }
LAB_00b1a888:
      iVar5 = BN_num_bits(pBVar10);
      iVar6 = BN_num_bits(b);
      uVar2 = iVar6 + 0xe;
      uVar3 = uVar2;
      if (-1 < (int)(iVar6 + 7U)) {
        uVar3 = iVar6 + 7U;
      }
      if (iVar5 + 0xeU < 0xf) {
        local_78 = (uchar *)0x0;
        iVar5 = 1;
        data_00 = local_64;
        if (uVar2 < 0xf) goto LAB_00b1a918;
LAB_00b1a928:
        local_80 = CRYPTO_malloc((int)uVar3 >> 3,"crypto/ec/ec_asn1.c",0x1a5);
        if (local_80 != (uchar *)0x0) {
          iVar6 = BN_bn2bin(b,local_80);
          data_01 = local_80;
          if (iVar6 != 0) goto LAB_00b1a95c;
          ERR_put_error(0x10,0x99,3,"crypto/ec/ec_asn1.c",0x1aa);
          CRYPTO_free(local_78);
          goto LAB_00b1aaa4;
        }
        ERR_put_error(0x10,0x99,0x41,"crypto/ec/ec_asn1.c",0x1a6);
        goto LAB_00b1aa94;
      }
      uVar4 = iVar5 + 0xeU;
      if (-1 < (int)(iVar5 + 7U)) {
        uVar4 = iVar5 + 7U;
      }
      local_78 = CRYPTO_malloc((int)uVar4 >> 3,"crypto/ec/ec_asn1.c",0x195);
      if (local_78 == (uchar *)0x0) {
        iVar5 = 0x41;
        iVar6 = 0x196;
        goto LAB_00b1aa84;
      }
      iVar5 = BN_bn2bin(pBVar10,local_78);
      if (iVar5 == 0) {
        ERR_put_error(0x10,0x99,3,"crypto/ec/ec_asn1.c",0x19a);
        goto LAB_00b1aa94;
      }
      data_00 = local_78;
      if (0xe < uVar2) goto LAB_00b1a928;
LAB_00b1a918:
      local_80 = (uchar *)0x0;
      iVar6 = 1;
      data_01 = local_64;
LAB_00b1a95c:
      iVar5 = ASN1_OCTET_STRING_set((ASN1_STRING *)*plVar18,data_00,iVar5);
      if ((iVar5 == 0) ||
         (iVar5 = ASN1_OCTET_STRING_set((ASN1_STRING *)plVar18[1],data_01,iVar6), iVar5 == 0)) {
        iVar5 = 0xd;
        iVar6 = 0x1b3;
LAB_00b1aa48:
        ERR_put_error(0x10,0x99,iVar5,"crypto/ec/ec_asn1.c",iVar6);
LAB_00b1aa58:
        CRYPTO_free(local_78);
        goto LAB_00b1aaa4;
      }
      data = *(void **)(param_1 + 0x30);
      pAVar13 = (ASN1_STRING *)plVar18[2];
      if (data == (void *)0x0) {
        ASN1_BIT_STRING_free(pAVar13);
        plVar18[2] = 0;
      }
      else {
        if (pAVar13 == (ASN1_STRING *)0x0) {
          pAVar13 = ASN1_BIT_STRING_new();
          plVar18[2] = (long)pAVar13;
          if (pAVar13 == (ASN1_BIT_STRING *)0x0) {
            iVar5 = 0x41;
            iVar6 = 0x1bb;
            goto LAB_00b1aa48;
          }
          data = *(void **)(param_1 + 0x30);
        }
        pAVar13->flags = pAVar13->flags & 0xfffffffffffffff0U | 8;
        iVar5 = ASN1_BIT_STRING_set(pAVar13,data,*(int *)(param_1 + 0x38));
        if (iVar5 == 0) {
          ERR_put_error(0x10,0x99,0xd,"crypto/ec/ec_asn1.c",0x1c2);
          goto LAB_00b1aa58;
        }
      }
      CRYPTO_free(local_78);
      CRYPTO_free(local_80);
      BN_free(pBVar10);
      BN_free(b);
      pEVar15 = EC_GROUP_get0_generator(param_1);
      if (pEVar15 == (EC_POINT *)0x0) {
        ERR_put_error(0x10,0x105,0x71,"crypto/ec/ec_asn1.c",0x1f7);
      }
      else {
        pVar7 = EC_GROUP_get_point_conversion_form(param_1);
        lVar16 = EC_POINT_point2buf(param_1,pEVar15,pVar7,&local_70,0);
        if (lVar16 == 0) {
          ERR_put_error(0x10,0x105,0x10,"crypto/ec/ec_asn1.c",0x1ff);
        }
        else {
          pAVar13 = *(ASN1_STRING **)(val + 0x18);
          if (pAVar13 == (ASN1_STRING *)0x0) {
            pAVar13 = ASN1_OCTET_STRING_new();
            *(ASN1_STRING **)(val + 0x18) = pAVar13;
            if (pAVar13 == (ASN1_OCTET_STRING *)0x0) {
              CRYPTO_free(local_70);
              ERR_put_error(0x10,0x105,0x41,"crypto/ec/ec_asn1.c",0x204);
              goto joined_r0x00b1ad84;
            }
          }
          ASN1_STRING_set0(pAVar13,local_70,(int)lVar16);
          pBVar10 = (BIGNUM *)EC_GROUP_get0_order(param_1);
          if (pBVar10 == (BIGNUM *)0x0) {
            ERR_put_error(0x10,0x105,0x10,"crypto/ec/ec_asn1.c",0x20c);
          }
          else {
            pAVar11 = BN_to_ASN1_INTEGER(pBVar10,*(ASN1_INTEGER **)(val + 0x20));
            *(ASN1_INTEGER **)(val + 0x20) = pAVar11;
            if (pAVar11 == (ASN1_INTEGER *)0x0) {
              ERR_put_error(0x10,0x105,0xd,"crypto/ec/ec_asn1.c",0x211);
            }
            else {
              pBVar10 = (BIGNUM *)EC_GROUP_get0_cofactor(param_1);
              if (pBVar10 == (BIGNUM *)0x0) {
                return val;
              }
              pAVar11 = BN_to_ASN1_INTEGER(pBVar10,*(ASN1_INTEGER **)(val + 0x28));
              *(ASN1_INTEGER **)(val + 0x28) = pAVar11;
              if (pAVar11 != (ASN1_INTEGER *)0x0) {
                return val;
              }
              ERR_put_error(0x10,0x105,0xd,"crypto/ec/ec_asn1.c",0x21a);
            }
          }
        }
      }
    }
  }
joined_r0x00b1ad84:
  if (param_2 != (ASN1_VALUE *)0x0) {
    return (ASN1_VALUE *)0x0;
  }
LAB_00b1a698:
  ASN1_item_free(val,(ASN1_ITEM *)ECPARAMETERS_it);
  return (ASN1_VALUE *)0x0;
}

