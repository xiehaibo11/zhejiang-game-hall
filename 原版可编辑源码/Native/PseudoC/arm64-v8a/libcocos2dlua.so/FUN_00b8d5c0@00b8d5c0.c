
ASN1_TYPE * FUN_00b8d5c0(char *param_1,X509V3_CTX *param_2,int param_3,undefined4 *param_4)

{
  uint constructed;
  int iVar1;
  int iVar2;
  uint uVar3;
  ASN1_SEQUENCE_ANY *a;
  stack_st_CONF_VALUE *section;
  long lVar4;
  ulong mask;
  ASN1_INTEGER *pAVar5;
  uchar *puVar6;
  ASN1_TIME *t;
  ASN1_STRING *pAVar7;
  ASN1_OBJECT *pAVar8;
  uchar *puVar9;
  undefined4 uVar10;
  int iVar11;
  ASN1_TYPE *pAVar12;
  uchar **ppuVar13;
  int *piVar14;
  int iStack_290;
  int iStack_28c;
  long local_288;
  uchar *local_280;
  uchar *local_278;
  undefined8 local_270;
  uint local_268;
  int local_264;
  uchar *local_260 [3];
  int local_248 [116];
  int local_78;
  uchar *local_70;
  CONF_VALUE local_68;
  
  local_288 = 0;
  local_278 = (uchar *)0x0;
  local_270 = 0xffffffffffffffff;
  local_264 = 1;
  local_78 = 0;
  iVar1 = CONF_parse_list(param_1,0x2c,1,(list_cb *)&DAT_00b8df14,&local_270);
  iVar2 = local_264;
  if (iVar1 != 0) {
    uVar10 = 0xc2;
    goto LAB_00b8d620;
  }
  if ((local_268 & 0xfffffffe) == 0x10) {
    if (param_2 == (X509V3_CTX *)0x0) {
      uVar10 = 0xc0;
LAB_00b8d620:
      *param_4 = uVar10;
      return (ASN1_TYPE *)0x0;
    }
    if (0x31 < param_3) {
      uVar10 = 0xb5;
                    /* try { // try from 00b8d668 to 00c8d66b has its CatchHandler @ 00b8d6d4 */
      goto LAB_00b8d620;
    }
    local_68.section = (char *)0x0;
    a = (ASN1_SEQUENCE_ANY *)OPENSSL_sk_new_null();
    if (a == (ASN1_SEQUENCE_ANY *)0x0) {
      pAVar12 = (ASN1_TYPE *)0x0;
      section = (stack_st_CONF_VALUE *)0x0;
    }
    else {
      section = (stack_st_CONF_VALUE *)0x0;
      if (local_260[0] == (uchar *)0x0) {
LAB_00b8d784:
        if (local_268 == 0x11) {
          iVar2 = i2d_ASN1_SET_ANY(a,(uchar **)&local_68);
        }
        else {
          iVar2 = i2d_ASN1_SEQUENCE_ANY(a,(uchar **)&local_68);
        }
        if (-1 < iVar2) {
          pAVar12 = ASN1_TYPE_new();
          if (pAVar12 != (ASN1_TYPE *)0x0) {
            pAVar7 = ASN1_STRING_type_new(local_268);
            (pAVar12->value).asn1_string = pAVar7;
            if (pAVar7 != (ASN1_STRING *)0x0) {
              pAVar12->type = local_268;
              pAVar7->data = (uchar *)local_68.section;
              ((pAVar12->value).asn1_string)->length = iVar2;
              local_68.section = (char *)0x0;
            }
          }
          goto LAB_00b8d7b0;
        }
      }
      else {
        section = X509V3_get_section(param_2,(char *)local_260[0]);
        if (section != (stack_st_CONF_VALUE *)0x0) {
          iVar2 = OPENSSL_sk_num(section);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              lVar4 = OPENSSL_sk_value(section,iVar2);
              lVar4 = FUN_00b8d5c0(*(undefined8 *)(lVar4 + 0x10),param_2,param_3 + 1,param_4);
              if ((lVar4 == 0) || (iVar1 = OPENSSL_sk_push(a,lVar4), iVar1 == 0)) goto LAB_00b8d7a0;
              iVar2 = iVar2 + 1;
              iVar1 = OPENSSL_sk_num(section);
            } while (iVar2 < iVar1);
          }
          goto LAB_00b8d784;
        }
      }
LAB_00b8d7a0:
      pAVar12 = (ASN1_TYPE *)0x0;
    }
LAB_00b8d7b0:
    CRYPTO_free(local_68.section);
    OPENSSL_sk_pop_free(a,ASN1_TYPE_free);
    X509V3_section_free(param_2,section);
    goto joined_r0x00b8db04;
  }
                    /* try { // try from 00b8d66c to 00c8d6f7 has its CatchHandler @ 00b8d640 */
  pAVar12 = ASN1_TYPE_new();
  if (pAVar12 == (ASN1_TYPE *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8d668 with catch @ 00b8d6d4
                        */
    ERR_put_error(0xd,0xb3,0x41,"crypto/asn1/asn1_gen.c",0x24b);
    return (ASN1_TYPE *)0x0;
  }
  puVar9 = "";
  if (local_260[0] != (uchar *)0x0) {
    puVar9 = local_260[0];
  }
  switch(local_268) {
  case 1:
    if (iVar2 != 1) {
                    /* try { // try from 00b8da94 to 00c8db3b has its CatchHandler @ 00b8da94
                       catch() { ... } // from try @ 00b8da94 with catch @ 00b8da94
                       catch() { ... } // from try @ 00b8db48 with catch @ 00b8da94
                       catch() { ... } // from try @ 00b8dbfc with catch @ 00b8da94
                       catch() { ... } // from try @ 00b8dc50 with catch @ 00b8da94
                       catch() { ... } // from try @ 00b8dcc0 with catch @ 00b8da94 */
      ERR_put_error(0xd,0xb3,0xbe,"crypto/asn1/asn1_gen.c",0x25d);
      goto LAB_00b8dbe0;
    }
    local_68.section = (char *)0x0;
    local_68.name = (char *)0x0;
    local_68.value = (char *)puVar9;
    iVar2 = X509V3_get_value_bool(&local_68,&(pAVar12->value).boolean);
    if (iVar2 != 0) goto LAB_00b8d818;
    iVar2 = 0xb0;
    iVar1 = 0x264;
    break;
  case 2:
  case 10:
    if (iVar2 != 1) {
      ERR_put_error(0xd,0xb3,0xb9,"crypto/asn1/asn1_gen.c",0x26c);
      goto LAB_00b8dbe0;
    }
    pAVar5 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,(char *)puVar9);
    (pAVar12->value).integer = pAVar5;
    if (pAVar5 != (ASN1_INTEGER *)0x0) goto LAB_00b8d818;
    iVar2 = 0xb4;
    iVar1 = 0x271;
    break;
  case 3:
  case 4:
    pAVar7 = ASN1_STRING_new();
                    /* try { // try from 00b8d8a0 to 00c8d8c7 has its CatchHandler @ 00b8d8e0 */
    (pAVar12->value).asn1_string = pAVar7;
    if (pAVar7 == (ASN1_STRING *)0x0) {
      ERR_put_error(0xd,0xb3,0x41,"crypto/asn1/asn1_gen.c",0x2b4);
      goto LAB_00b8dbe0;
    }
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        puVar6 = (uchar *)OPENSSL_hexstr2buf(puVar9,&local_70);
        if (puVar6 != (uchar *)0x0) {
                    /* try { // try from 00b8d8c8 to 00c8d8fb has its CatchHandler @ 00b8d808 */
          ((pAVar12->value).asn1_string)->data = puVar6;
          pAVar7 = (pAVar12->value).asn1_string;
          pAVar7->length = (int)local_70;
          pAVar7->type = local_268;
                    /* catch() { ... } // from try @ 00b8d83c with catch @ 00b8d8dc */
                    /* catch() { ... } // from try @ 00b8d8a0 with catch @ 00b8d8e0 */
          if (local_268 == 3) goto LAB_00b8daec;
          goto LAB_00b8d818;
        }
        iVar2 = 0xb2;
        iVar1 = 0x2ba;
      }
      else {
        if ((local_268 != 3) || (iVar2 != 4)) {
                    /* try { // try from 00b8db94 to 00c8db9f has its CatchHandler @ 00b8dd84 */
          ERR_put_error(0xd,0xb3,0xaf,"crypto/asn1/asn1_gen.c",0x2cc);
          goto LAB_00b8dbe0;
        }
        iVar2 = CONF_parse_list((char *)puVar9,0x2c,1,(list_cb *)&LAB_00b8e50c,pAVar7);
        if (iVar2 != 0) goto LAB_00b8d818;
                    /* try { // try from 00b8db3c to 00c8db47 has its CatchHandler @ 00b8dd88 */
                    /* try { // try from 00b8db48 to 00c8db93 has its CatchHandler @ 00b8da94 */
        iVar2 = 0xbc;
        iVar1 = 0x2c6;
      }
      break;
    }
    ASN1_STRING_set(pAVar7,puVar9,-1);
    if (local_268 != 3) goto LAB_00b8d818;
LAB_00b8daec:
    ((pAVar12->value).asn1_string)->flags =
         ((pAVar12->value).asn1_string)->flags & 0xfffffffffffffff0U | 8;
    pAVar12->type = local_268;
    goto joined_r0x00b8db04;
  case 5:
    if (*puVar9 != '\0') {
      ERR_put_error(0xd,0xb3,0xb6,"crypto/asn1/asn1_gen.c",0x256);
      goto LAB_00b8dbe0;
    }
LAB_00b8d818:
    pAVar12->type = local_268;
joined_r0x00b8db04:
    if (pAVar12 == (ASN1_TYPE *)0x0) {
      return (ASN1_TYPE *)0x0;
    }
                    /* try { // try from 00b8dbfc to 00c8dc43 has its CatchHandler @ 00b8da94 */
    if (((uint)local_270 == -1) && (local_78 == 0)) {
      return pAVar12;
    }
    iVar2 = i2d_ASN1_TYPE(pAVar12,&local_278);
    ASN1_TYPE_free(pAVar12);
    local_68.section = (char *)local_278;
    if ((uint)local_270 == -1) {
      uVar3 = 0;
      iVar1 = iVar2;
    }
    else {
                    /* try { // try from 00b8dc44 to 00c8dc4f has its CatchHandler @ 00b8dd80 */
      uVar3 = ASN1_get_object((uchar **)&local_68,&local_288,&iStack_28c,&iStack_290,(long)iVar2);
      if ((uVar3 >> 7 & 1) != 0) {
        pAVar12 = (ASN1_TYPE *)0x0;
        puVar9 = (uchar *)0x0;
        goto LAB_00b8ddc8;
      }
                    /* try { // try from 00b8dc50 to 00c8dca7 has its CatchHandler @ 00b8da94 */
      iVar2 = (iVar2 - (int)local_68.section) + (int)local_278;
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar3 & 0x20;
      }
      else {
        local_288._0_4_ = 0;
        local_288 = 0;
        uVar3 = 2;
      }
      iVar1 = ASN1_object_size(0,(int)local_288,(uint)local_270);
    }
                    /* try { // try from 00b8dca8 to 00c8dcbf has its CatchHandler @ 00b8dd38 */
    if (0 < local_78) {
      iVar11 = 0;
                    /* try { // try from 00b8dcc0 to 00c8dda3 has its CatchHandler @ 00b8da94 */
      ppuVar13 = local_260 + (long)local_78 * 3;
      do {
        puVar9 = (uchar *)((long)*(int *)((long)ppuVar13 + -4) + (long)iVar1);
        *ppuVar13 = puVar9;
        iVar1 = ASN1_object_size(0,(int)puVar9,*(int *)(ppuVar13 + -2));
        iVar11 = iVar11 + 1;
        ppuVar13 = ppuVar13 + -3;
      } while (iVar11 < local_78);
    }
    puVar9 = CRYPTO_malloc(iVar1,"crypto/asn1/asn1_gen.c",0xc3);
    if (puVar9 == (uchar *)0x0) {
      pAVar12 = (ASN1_TYPE *)0x0;
    }
    else {
      local_70 = puVar9;
      if (0 < local_78) {
        iVar11 = 0;
        piVar14 = local_248;
        do {
                    /* catch() { ... } // from try @ 00b8dca8 with catch @ 00b8dd38 */
          ASN1_put_object(&local_70,piVar14[-2],*piVar14,piVar14[-4],piVar14[-3]);
          puVar6 = local_70;
          if (piVar14[-1] != 0) {
            local_70 = local_70 + 1;
            *puVar6 = '\0';
          }
                    /* catch() { ... } // from try @ 00b8dbe4 with catch @ 00b8dd58 */
          iVar11 = iVar11 + 1;
          piVar14 = piVar14 + 6;
        } while (iVar11 < local_78);
      }
      if ((uint)local_270 != 0xffffffff) {
                    /* catch() { ... } // from try @ 00b8dc44 with catch @ 00b8dd80 */
                    /* catch() { ... } // from try @ 00b8db94 with catch @ 00b8dd84 */
                    /* catch() { ... } // from try @ 00b8db3c with catch @ 00b8dd88 */
        constructed = 0x20;
        if (local_270._4_4_ != 0 || ((uint)local_270 & 0xfffffffe) != 0x10) {
          constructed = uVar3;
        }
        ASN1_put_object(&local_70,constructed,(int)local_288,(uint)local_270,local_270._4_4_);
      }
      memcpy(local_70,local_68.section,(long)iVar2);
      local_280 = puVar9;
      pAVar12 = d2i_ASN1_TYPE((ASN1_TYPE **)0x0,&local_280,(long)iVar1);
    }
LAB_00b8ddc8:
    CRYPTO_free(local_278);
    CRYPTO_free(puVar9);
    return pAVar12;
  case 6:
    if (iVar2 != 1) {
      ERR_put_error(0xd,0xb3,0xbf,"crypto/asn1/asn1_gen.c",0x278);
      goto LAB_00b8dbe0;
    }
    pAVar8 = OBJ_txt2obj((char *)puVar9,0);
    (pAVar12->value).object = pAVar8;
    if (pAVar8 != (ASN1_OBJECT *)0x0) goto LAB_00b8d818;
    iVar2 = 0xb7;
    iVar1 = 0x27c;
    break;
  default:
    iVar2 = 0xc4;
    iVar1 = 0x2d9;
    break;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    if (iVar2 == 1) {
      iVar2 = 0x1001;
    }
    else {
      if (iVar2 != 2) {
                    /* try { // try from 00b8d83c to 00c8d843 has its CatchHandler @ 00b8d8dc */
        ERR_put_error(0xd,0xb3,0xb1,"crypto/asn1/asn1_gen.c",0x2a5);
        goto LAB_00b8dbe0;
      }
      iVar2 = 0x1000;
    }
    mask = ASN1_tag2bit(local_268);
                    /* catch() { ... } // from try @ 00b8d8c8 with catch @ 00b8d808 */
    iVar2 = ASN1_mbstring_copy(&(pAVar12->value).asn1_string,puVar9,-1,iVar2,mask);
    if (0 < iVar2) goto LAB_00b8d818;
    iVar2 = 0x41;
    iVar1 = 0x2ab;
    break;
  case 0x17:
  case 0x18:
    if (iVar2 != 1) {
      ERR_put_error(0xd,0xb3,0xc1,"crypto/asn1/asn1_gen.c",0x284);
      goto LAB_00b8dbe0;
    }
    pAVar7 = ASN1_STRING_new();
    (pAVar12->value).asn1_string = pAVar7;
    if (pAVar7 == (ASN1_STRING *)0x0) {
      iVar2 = 0x41;
      iVar1 = 0x288;
    }
    else {
      iVar2 = ASN1_STRING_set(pAVar7,puVar9,-1);
      if (iVar2 == 0) {
        iVar2 = 0x41;
        iVar1 = 0x28c;
      }
      else {
        t = (pAVar12->value).asn1_string;
        t->type = local_268;
        iVar2 = ASN1_TIME_check(t);
        if (iVar2 != 0) goto LAB_00b8d818;
        iVar2 = 0xb8;
        iVar1 = 0x291;
      }
    }
  }
  ERR_put_error(0xd,0xb3,iVar2,"crypto/asn1/asn1_gen.c",iVar1);
  ERR_add_error_data(2,"string=",puVar9);
LAB_00b8dbe0:
                    /* try { // try from 00b8dbe4 to 00c8dbfb has its CatchHandler @ 00b8dd58 */
  ASN1_TYPE_free(pAVar12);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8d66c with catch @ 00b8d640
                        */
  return (ASN1_TYPE *)0x0;
}

