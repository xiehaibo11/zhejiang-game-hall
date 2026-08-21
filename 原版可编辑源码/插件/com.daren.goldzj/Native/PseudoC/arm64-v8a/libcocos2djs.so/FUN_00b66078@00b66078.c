
undefined4 FUN_00b66078(undefined8 *param_1)

{
  bool bVar1;
  uchar **out;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ASN1_VALUE *val;
  ASN1_OBJECT *pAVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ASN1_STRING *dst;
  ASN1_STRING *str;
  uchar *local_70;
  ASN1_VALUE *local_68;
  
                    /* try { // try from 00b66090 to 00c660ef has its CatchHandler @ 00b66090
                       catch() { ... } // from try @ 00b66090 with catch @ 00b66090
                       catch() { ... } // from try @ 00b66198 with catch @ 00b66090 */
  CRYPTO_free((void *)param_1[3]);
  param_1[3] = 0;
  iVar3 = OPENSSL_sk_num(*param_1);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  lVar7 = OPENSSL_sk_new_null();
  if (lVar7 != 0) {
    iVar3 = OPENSSL_sk_num(*param_1);
    if (0 < iVar3) {
      iVar3 = 0;
      lVar14 = 0;
      iVar4 = -1;
                    /* try { // try from 00b660f0 to 00c660ff has its CatchHandler @ 00b661d0 */
      do {
        puVar8 = (undefined8 *)OPENSSL_sk_value(*param_1,iVar3);
        if (*(int *)(puVar8 + 2) != iVar4) {
          lVar14 = OPENSSL_sk_new_null();
                    /* try { // try from 00b66114 to 00c66123 has its CatchHandler @ 00b661cc */
          if ((lVar14 == 0) || (iVar4 = OPENSSL_sk_push(lVar7,lVar14), iVar4 == 0))
          goto LAB_00b663ec;
          iVar4 = *(int *)(puVar8 + 2);
        }
        val = ASN1_item_new((ASN1_ITEM *)X509_NAME_ENTRY_it);
        if (val == (ASN1_VALUE *)0x0) goto LAB_00b663f0;
        pAVar9 = OBJ_dup((ASN1_OBJECT *)*puVar8);
        *(ASN1_OBJECT **)val = pAVar9;
        if (pAVar9 == (ASN1_OBJECT *)0x0) goto LAB_00b663f0;
        str = (ASN1_STRING *)puVar8[1];
        dst = *(ASN1_STRING **)(val + 8);
        uVar10 = ASN1_tag2bit(str->type);
                    /* try { // try from 00b66164 to 00c6617f has its CatchHandler @ 00b661f0 */
        if ((uVar10 & 0x2956) == 0) {
          iVar5 = ASN1_STRING_copy(dst,str);
          if (iVar5 == 0) goto LAB_00b663f0;
        }
        else {
          out = &dst->data;
          dst->type = 0xc;
          iVar5 = ASN1_STRING_to_UTF8(out,str);
                    /* try { // try from 00b66190 to 00c66197 has its CatchHandler @ 00b661d4 */
          dst->length = iVar5;
          if (iVar5 == -1) goto LAB_00b663f0;
                    /* try { // try from 00b66198 to 00c6621f has its CatchHandler @ 00b66090 */
          pbVar16 = *out;
          pbVar11 = pbVar16;
          if (iVar5 < 1) {
            iVar5 = (int)pbVar16;
          }
          else {
            do {
              iVar12 = iVar5;
              if (((char)*pbVar11 < '\0') || (iVar6 = isspace((uint)*pbVar11), iVar6 == 0)) break;
              iVar12 = iVar5 + -1;
              pbVar11 = pbVar11 + 1;
              bVar1 = 0 < iVar5;
              iVar5 = iVar12;
            } while (iVar12 != 0 && bVar1);
            pbVar17 = pbVar16;
            if (0 < iVar12) {
                    /* catch() { ... } // from try @ 00b66114 with catch @ 00b661cc */
              pbVar15 = pbVar11 + iVar12;
                    /* catch() { ... } // from try @ 00b660f0 with catch @ 00b661d0 */
                    /* catch() { ... } // from try @ 00b66190 with catch @ 00b661d4 */
              do {
                pbVar15 = pbVar15 + -1;
                iVar5 = iVar12;
                if (((char)*pbVar15 < '\0') || (iVar6 = isspace((uint)*pbVar15), iVar6 == 0)) break;
                iVar5 = iVar12 + -1;
                    /* catch() { ... } // from try @ 00b66164 with catch @ 00b661f0 */
                bVar1 = 0 < iVar12;
                iVar12 = iVar5;
              } while (iVar5 != 0 && bVar1);
              if (0 < iVar5) {
                iVar12 = 0;
                do {
                  bVar2 = *pbVar11;
                  if ((char)bVar2 < '\0') {
                    *pbVar17 = bVar2;
LAB_00b66264:
                    pbVar11 = pbVar11 + 1;
                    iVar12 = iVar12 + 1;
                  }
                  else {
                    iVar6 = isspace((uint)bVar2);
                    if (iVar6 == 0) {
                      iVar6 = tolower((uint)bVar2);
                      *pbVar17 = (byte)iVar6;
                      goto LAB_00b66264;
                    }
                    *pbVar17 = 0x20;
                    do {
                    /* try { // try from 00b66220 to 00c664c3 has its CatchHandler @ 00b66220
                       catch() { ... } // from try @ 00b66220 with catch @ 00b66220
                       catch() { ... } // from try @ 00b6654c with catch @ 00b66220
                       catch() { ... } // from try @ 00b6669c with catch @ 00b66220
                       catch() { ... } // from try @ 00b66954 with catch @ 00b66220
                       catch() { ... } // from try @ 00b66960 with catch @ 00b66220 */
                      iVar12 = iVar12 + 1;
                      pbVar11 = pbVar11 + 1;
                      if ((char)*pbVar11 < '\0') break;
                      iVar6 = isspace((uint)*pbVar11);
                    } while (iVar6 != 0);
                  }
                  pbVar17 = pbVar17 + 1;
                } while (iVar12 < iVar5);
                pbVar16 = *out;
              }
            }
            iVar5 = (int)pbVar16;
            pbVar16 = pbVar17;
          }
          dst->length = (int)pbVar16 - iVar5;
        }
        iVar5 = OPENSSL_sk_push(lVar14,val);
        if (iVar5 == 0) goto LAB_00b663f0;
        iVar3 = iVar3 + 1;
        iVar5 = OPENSSL_sk_num(*param_1);
      } while (iVar3 < iVar5);
    }
    iVar3 = OPENSSL_sk_num(lVar7);
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    else {
      iVar4 = 0;
      iVar3 = 0;
      do {
        local_68 = (ASN1_VALUE *)OPENSSL_sk_value(lVar7,iVar4);
        iVar5 = ASN1_item_ex_i2d(&local_68,(uchar **)0x0,(ASN1_ITEM *)&DAT_01c861d8,-1,-1);
        if (iVar5 < 0) goto LAB_00b663ec;
        iVar3 = iVar5 + iVar3;
        iVar4 = iVar4 + 1;
        iVar5 = OPENSSL_sk_num(lVar7);
      } while (iVar4 < iVar5);
      if (iVar3 < 0) goto LAB_00b663ec;
    }
    *(int *)(param_1 + 4) = iVar3;
    local_70 = CRYPTO_malloc(iVar3,"crypto/x509/x_name.c",0x168);
    if (local_70 != (uchar *)0x0) {
      param_1[3] = local_70;
      iVar3 = OPENSSL_sk_num(lVar7);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          local_68 = (ASN1_VALUE *)OPENSSL_sk_value(lVar7,iVar3);
          iVar4 = ASN1_item_ex_i2d(&local_68,&local_70,(ASN1_ITEM *)&DAT_01c861d8,-1,-1);
          if (iVar4 < 0) break;
          iVar3 = iVar3 + 1;
          iVar4 = OPENSSL_sk_num(lVar7);
        } while (iVar3 < iVar4);
      }
      val = (ASN1_VALUE *)0x0;
      uVar13 = 1;
      goto LAB_00b663f4;
    }
  }
LAB_00b663ec:
  val = (ASN1_VALUE *)0x0;
LAB_00b663f0:
  uVar13 = 0;
LAB_00b663f4:
  ASN1_item_free(val,(ASN1_ITEM *)X509_NAME_ENTRY_it);
  OPENSSL_sk_pop_free(lVar7,&LAB_00b66444);
  return uVar13;
}

