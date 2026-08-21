
int FUN_00aec5fc(BIO *param_1,long *param_2,long param_3,int param_4,uint param_5,int param_6,
                int param_7)

{
  byte *pbVar1;
  uint indent;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ASN1_INTEGER *a;
  ASN1_OBJECT *pAVar12;
  ASN1_ENUMERATED *a_00;
  char *pcVar13;
  byte *pbVar14;
  long lVar15;
  char *buf;
  long lVar16;
  ASN1_OCTET_STRING *a_01;
  ASN1_OBJECT *local_108;
  uint local_100;
  uint local_fc;
  byte *local_f8;
  byte *local_f0;
  byte *local_e8;
  char acStack_e0 [128];
  
  local_108 = (ASN1_OBJECT *)0x0;
  if ((int)param_5 < 0x81) {
    pbVar14 = (byte *)*param_2;
    local_e8 = pbVar14;
    if (param_3 < 1) {
LAB_00aecfec:
      a_01 = (ASN1_STRING *)0x0;
      iVar11 = 1;
    }
    else {
      indent = param_5;
      if (param_6 == 0) {
        indent = 0;
      }
      uVar9 = ASN1_get_object(&local_e8,(long *)&local_f8,(int *)&local_fc,(int *)&local_100,param_3
                             );
      if ((uVar9 >> 7 & 1) == 0) {
        pbVar1 = pbVar14 + param_3;
        bVar4 = false;
LAB_00aec6c4:
        iVar11 = (int)local_e8;
        iVar10 = BIO_printf(param_1,"%5ld:",pbVar14 + ((long)param_4 - *param_2));
        if (iVar10 < 1) goto LAB_00aecfe0;
                    /* try { // try from 00aec6f0 to 00bec6f7 has its CatchHandler @ 00aec7b4 */
        lVar15 = (long)(iVar11 - (int)pbVar14);
        if (uVar9 == 0x21) {
                    /* try { // try from 00aec6f8 to 00bec85b has its CatchHandler @ 00aec5f8 */
          iVar11 = BIO_printf(param_1,"d=%-2d hl=%ld l=inf  ",(ulong)param_5,lVar15);
          uVar2 = local_100;
          uVar5 = local_fc;
        }
        else {
          iVar11 = BIO_printf(param_1,"d=%-2d hl=%ld l=%4ld ",(ulong)param_5,lVar15,local_f8);
          uVar2 = local_100;
          uVar5 = local_fc;
        }
        if (iVar11 < 1) goto LAB_00aecfe0;
        pcVar13 = "prim: ";
        if ((uVar9 & 0x20) != 0) {
          pcVar13 = "cons: ";
        }
        local_100 = uVar2;
        local_fc = uVar5;
        iVar11 = BIO_write(param_1,pcVar13,6);
        if (iVar11 < 6) goto LAB_00aecfe0;
        BIO_indent(param_1,indent,0x80);
        if ((~uVar2 & 0xc0) == 0) {
          pcVar13 = "priv [ %d ] ";
LAB_00aec7fc:
          buf = acStack_e0;
          BIO_snprintf(buf,0x80,pcVar13,(ulong)uVar5);
        }
        else {
          if ((uVar2 >> 7 & 1) != 0) {
            pcVar13 = "cont [ %d ]";
            goto LAB_00aec7fc;
          }
          if ((uVar2 >> 6 & 1) != 0) {
            pcVar13 = "appl [ %d ]";
            goto LAB_00aec7fc;
          }
                    /* catch() { ... } // from try @ 00aec6f0 with catch @ 00aec7b4 */
          if (0x1e < (int)uVar5) {
            pcVar13 = "<ASN1 %d>";
            goto LAB_00aec7fc;
          }
          uVar2 = uVar5 & 0xfffffeff;
          if ((uVar5 | 8) != 0x10a) {
            uVar2 = uVar5;
          }
          buf = "(unknown)";
          if (uVar2 < 0x1f) {
            buf = (&PTR_DAT_01c73490)[(int)uVar2];
          }
        }
        iVar11 = BIO_printf(param_1,"%-18s",buf);
        pbVar8 = local_e8;
        pbVar7 = local_f8;
        if (iVar11 < 1) goto LAB_00aecfe0;
        param_3 = param_3 - lVar15;
        if ((uVar9 >> 5 & 1) != 0) {
          iVar11 = BIO_write(param_1,&DAT_018938a8,1);
          if (0 < iVar11) {
            if ((long)local_f8 <= param_3) {
              if ((uVar9 == 0x21) && (local_f8 == (byte *)0x0)) {
                do {
                    /* try { // try from 00aec8cc to 00bec8d3 has its CatchHandler @ 00aecb04 */
                  iVar11 = FUN_00aec5fc(param_1,&local_e8,(long)pbVar1 - (long)local_e8,
                                        ((int)local_e8 + param_4) - (int)*param_2,param_5 + 1,
                                        param_6,param_7);
                  if (iVar11 == 0) goto LAB_00aecfe0;
                } while ((iVar11 != 2) &&
                        (local_e8 < pbVar1
                    /* try { // try from 00aec8ec to 00bec8f3 has its CatchHandler @ 00aecaf4 */));
                local_f8 = local_e8 + -(long)pbVar8;
              }
              else {
                pbVar14 = local_f8;
                pbVar6 = local_e8;
                while (local_e8 = pbVar6, pbVar6 < pbVar8 + (long)pbVar7) {
                  iVar11 = FUN_00aec5fc(param_1,&local_e8,pbVar14,
                                        ((int)pbVar6 + param_4) - (int)*param_2,param_5 + 1,param_6,
                                        param_7);
                  if (iVar11 == 0) goto LAB_00aecfe0;
                  pbVar14 = pbVar6 + ((long)pbVar14 - (long)local_e8);
                  pbVar6 = local_e8;
                }
              }
              goto LAB_00aecf8c;
            }
            BIO_printf(param_1,"length is greater than %ld\n",param_3);
          }
          goto LAB_00aecfe0;
        }
        if (local_100 != 0) {
          local_e8 = local_e8 + (long)local_f8;
          iVar11 = BIO_write(param_1,&DAT_018938a8,1);
                    /* try { // try from 00aec85c to 00bec8cb has its CatchHandler @ 00aec85c
                       catch() { ... } // from try @ 00aec85c with catch @ 00aec85c
                       catch() { ... } // from try @ 00aec97c with catch @ 00aec85c */
          if (0 < iVar11) goto LAB_00aecf8c;
          goto LAB_00aecfe0;
        }
                    /* try { // try from 00aec974 to 00bec97b has its CatchHandler @ 00aeca50 */
                    /* try { // try from 00aec97c to 00becb17 has its CatchHandler @ 00aec85c */
        switch(local_fc) {
        case 1:
          if (local_f8 != (byte *)0x1) {
            iVar11 = BIO_puts(param_1,":BAD BOOLEAN");
            if (iVar11 < 1) goto LAB_00aecfe0;
            bVar4 = true;
            if ((long)local_f8 < 1) {
              iVar11 = 0;
              goto LAB_00aecdf0;
            }
          }
                    /* catch() { ... } // from try @ 00aec974 with catch @ 00aeca50 */
          BIO_printf(param_1,":%u",(ulong)*local_e8);
          break;
        case 2:
          local_f0 = pbVar14;
          a = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_f0,(long)(local_f8 + lVar15));
          if (a == (ASN1_INTEGER *)0x0) {
            iVar11 = BIO_puts(param_1,":BAD INTEGER");
                    /* try { // try from 00aecd70 to 00becd77 has its CatchHandler @ 00aecd78 */
            if (iVar11 < 1) goto LAB_00aecfe0;
                    /* catch() { ... } // from try @ 00aeccd0 with catch @ 00aecd78
                       catch() { ... } // from try @ 00aecd70 with catch @ 00aecd78
                       try { // try from 00aecd78 to 00becdc3 has its CatchHandler @ 00aecb18 */
            bVar4 = true;
          }
          else {
            iVar11 = BIO_write(param_1,":",1);
            if ((iVar11 < 1) ||
               ((a->type == 0x102 && (iVar11 = BIO_write(param_1,&DAT_019b5d6c,1), iVar11 < 1))))
            goto LAB_00aecfe0;
            iVar11 = a->length;
            if (0 < iVar11) {
              lVar16 = 0;
              do {
                iVar11 = BIO_printf(param_1,"%02X",(ulong)a->data[lVar16]);
                if (iVar11 < 1) goto LAB_00aecfe0;
                    /* catch() { ... } // from try @ 00aec8ec with catch @ 00aecaf4 */
                iVar11 = a->length;
                lVar16 = lVar16 + 1;
              } while (lVar16 < iVar11);
            }
                    /* try { // try from 00aecb18 to 00becccf has its CatchHandler @ 00aecb18
                       catch() { ... } // from try @ 00aecb18 with catch @ 00aecb18
                       catch() { ... } // from try @ 00aeccd8 with catch @ 00aecb18
                       catch() { ... } // from try @ 00aecd44 with catch @ 00aecb18
                       catch() { ... } // from try @ 00aecd78 with catch @ 00aecb18 */
            if ((iVar11 == 0) && (iVar11 = BIO_write(param_1,&DAT_01949f77,2), iVar11 < 1))
            goto LAB_00aecfe0;
          }
          ASN1_INTEGER_free(a);
                    /* catch() { ... } // from try @ 00aecd3c with catch @ 00aecd88 */
          break;
        default:
          if ((param_7 == 0) || ((long)local_f8 < 1)) break;
          iVar11 = BIO_write(param_1,&DAT_018938a8,1);
          if (0 < iVar11) {
            iVar11 = (int)local_f8;
            if ((long)param_7 <= (long)local_f8 && param_7 != -1) {
              iVar11 = param_7;
            }
            iVar11 = BIO_dump_indent(param_1,(char *)local_e8,iVar11,6);
            if (0 < iVar11) {
              iVar11 = 1;
              goto joined_r0x00aecf44;
            }
          }
          goto LAB_00aecfe0;
        case 4:
          local_f0 = pbVar14;
          a_01 = d2i_ASN1_OCTET_STRING
                           ((ASN1_OCTET_STRING **)0x0,&local_f0,(long)(local_f8 + lVar15));
          if ((a_01 != (ASN1_OCTET_STRING *)0x0) && (0 < a_01->length)) {
            local_f0 = a_01->data;
            lVar16 = 0;
            do {
              bVar3 = local_f0[lVar16];
              if (bVar3 < 0x20) {
                if ((0xd < bVar3) || ((1 << (ulong)(bVar3 & 0x1f) & 0x2600U) == 0))
                goto LAB_00aece68;
              }
              else if (0x7e < bVar3) {
LAB_00aece68:
                if (param_7 == 0) {
                  iVar11 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                  if (iVar11 < 1) goto LAB_00aecfe4;
                  if (a_01->length < 1) goto LAB_00aecf28;
                  lVar16 = 0;
                  goto LAB_00aecef0;
                }
                iVar11 = BIO_write(param_1,&DAT_018938a8,1);
                if (iVar11 < 1) goto LAB_00aecfe4;
                iVar11 = a_01->length;
                if (param_7 <= a_01->length && param_7 != -1) {
                  iVar11 = param_7;
                }
                iVar11 = BIO_dump_indent(param_1,(char *)local_f0,iVar11,6);
                if (iVar11 < 1) goto LAB_00aecfe4;
                iVar11 = 1;
                goto LAB_00aecf2c;
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 < a_01->length);
            iVar11 = BIO_write(param_1,":",1);
            if (0 < iVar11) {
              iVar10 = BIO_write(param_1,local_f0,a_01->length);
              iVar11 = 0;
              if (0 < iVar10) goto LAB_00aecf2c;
              goto LAB_00aecff4;
            }
            goto LAB_00aecfe4;
          }
LAB_00aecf28:
          iVar11 = 0;
          goto LAB_00aecf2c;
        case 6:
          local_f0 = pbVar14;
          pAVar12 = d2i_ASN1_OBJECT(&local_108,&local_f0,(long)(local_f8 + lVar15));
          if (pAVar12 != (ASN1_OBJECT *)0x0) {
            iVar11 = BIO_write(param_1,":",1);
            if (0 < iVar11) {
              i2a_ASN1_OBJECT(param_1,local_108);
              break;
            }
            goto LAB_00aecfe0;
          }
          iVar10 = BIO_puts(param_1,":BAD OBJECT");
          iVar11 = 0;
          if (0 < iVar10) {
            bVar4 = true;
            goto LAB_00aecdf0;
          }
LAB_00aed054:
          iVar11 = 0;
          a_01 = (ASN1_STRING *)0x0;
          goto LAB_00aecff4;
        case 10:
          local_f0 = pbVar14;
          a_00 = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_f0,(long)(local_f8 + lVar15));
          if (a_00 == (ASN1_ENUMERATED *)0x0) {
            iVar11 = BIO_puts(param_1,":BAD ENUMERATED");
                    /* try { // try from 00aecdc8 to 00bece07 has its CatchHandler @ 00aecdc8
                       catch() { ... } // from try @ 00aecdc8 with catch @ 00aecdc8
                       catch() { ... } // from try @ 00aece14 with catch @ 00aecdc8 */
            if (iVar11 < 1) goto LAB_00aecfe0;
            bVar4 = true;
          }
          else {
            iVar11 = BIO_write(param_1,":",1);
                    /* try { // try from 00aeccd0 to 00beccd7 has its CatchHandler @ 00aecd78 */
                    /* try { // try from 00aeccd8 to 00becd3b has its CatchHandler @ 00aecb18 */
            if ((iVar11 < 1) ||
               ((a_00->type == 0x10a && (iVar11 = BIO_write(param_1,&DAT_019b5d6c,1), iVar11 < 1))))
            goto LAB_00aecfe0;
            iVar11 = a_00->length;
            if (0 < iVar11) {
              lVar16 = 0;
              do {
                iVar11 = BIO_printf(param_1,"%02X",(ulong)a_00->data[lVar16]);
                if (iVar11 < 1) goto LAB_00aecfe0;
                iVar11 = a_00->length;
                lVar16 = lVar16 + 1;
              } while (lVar16 < iVar11);
            }
                    /* try { // try from 00aecd3c to 00becd43 has its CatchHandler @ 00aecd88 */
                    /* try { // try from 00aecd44 to 00becd6f has its CatchHandler @ 00aecb18 */
            if ((iVar11 == 0) && (iVar11 = BIO_write(param_1,&DAT_01949f77,2), iVar11 < 1))
            goto LAB_00aecfe0;
          }
          ASN1_ENUMERATED_free(a_00);
          break;
        case 0xc:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x1a:
          iVar11 = BIO_write(param_1,":",1);
          if (iVar11 < 1) goto LAB_00aecfe0;
          if (0 < (long)local_f8) {
            iVar11 = BIO_write(param_1,local_e8,(int)local_f8);
            if (iVar11 != (int)local_f8) goto LAB_00aed054;
          }
          break;
        case 0x1e:
          break;
        }
        iVar11 = 0;
        if (!bVar4) goto LAB_00aecf48;
        goto LAB_00aecdf0;
      }
LAB_00aecfcc:
      BIO_write(param_1,"Error in encoding\n",0x12);
LAB_00aecfe0:
      a_01 = (ASN1_OCTET_STRING *)0x0;
LAB_00aecfe4:
      iVar11 = 0;
    }
LAB_00aecff4:
    ASN1_OBJECT_free(local_108);
    ASN1_OCTET_STRING_free(a_01);
    *param_2 = (long)local_e8;
  }
  else {
    BIO_puts(param_1,"BAD RECURSION DEPTH\n");
    iVar11 = 0;
  }
  return iVar11;
  while( true ) {
    lVar16 = lVar16 + 1;
    iVar11 = 0;
    if (a_01->length <= lVar16) break;
LAB_00aecef0:
    iVar11 = BIO_printf(param_1,"%02X",(ulong)local_f0[lVar16]);
    if (iVar11 < 1) goto LAB_00aecfe4;
  }
LAB_00aecf2c:
  ASN1_OCTET_STRING_free(a_01);
joined_r0x00aecf44:
  if (bVar4) {
LAB_00aecdf0:
    iVar10 = BIO_puts(param_1,":[");
    if (iVar10 < 1) goto LAB_00aecfe0;
                    /* try { // try from 00aece08 to 00bece13 has its CatchHandler @ 00aece28 */
    if (0 < (long)local_f8) {
                    /* try { // try from 00aece14 to 00bece4b has its CatchHandler @ 00aecdc8 */
      lVar16 = 0;
      do {
                    /* catch() { ... } // from try @ 00aece08 with catch @ 00aece28 */
        iVar10 = BIO_printf(param_1,"%02X",(ulong)pbVar14[lVar16 + lVar15]);
        if (iVar10 < 1) goto LAB_00aecfe0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (long)local_f8);
    }
    iVar10 = BIO_puts(param_1,"]");
    if (iVar10 < 1) goto LAB_00aecfe0;
  }
  else {
LAB_00aecf48:
    bVar4 = false;
  }
  if ((iVar11 == 0) && (iVar11 = BIO_write(param_1,&DAT_018938a8,1), iVar11 < 1)) goto LAB_00aecfe0;
  local_e8 = local_e8 + (long)local_f8;
  if (local_100 == 0 && local_fc == 0) {
    a_01 = (ASN1_STRING *)0x0;
    iVar11 = 2;
    goto LAB_00aecff4;
  }
LAB_00aecf8c:
  pbVar14 = local_e8;
  param_3 = param_3 - (long)local_f8;
  if (param_3 < 1) goto LAB_00aecfec;
  uVar9 = ASN1_get_object(&local_e8,(long *)&local_f8,(int *)&local_fc,(int *)&local_100,param_3);
  if ((uVar9 >> 7 & 1) != 0) goto LAB_00aecfcc;
  goto LAB_00aec6c4;
}

