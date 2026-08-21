
int FUN_00afca7c(BIO *param_1,long *param_2,long param_3,int param_4,uint param_5,int param_6,
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
LAB_00afd46c:
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
LAB_00afcb44:
        iVar11 = (int)local_e8;
        iVar10 = BIO_printf(param_1,"%5ld:",pbVar14 + ((long)param_4 - *param_2));
        if (iVar10 < 1) goto LAB_00afd460;
        lVar15 = (long)(iVar11 - (int)pbVar14);
        if (uVar9 == 0x21) {
          iVar11 = BIO_printf(param_1,"d=%-2d hl=%ld l=inf  ",(ulong)param_5,lVar15);
          uVar2 = local_100;
          uVar5 = local_fc;
        }
        else {
          iVar11 = BIO_printf(param_1,"d=%-2d hl=%ld l=%4ld ",(ulong)param_5,lVar15,local_f8);
          uVar2 = local_100;
          uVar5 = local_fc;
        }
        if (iVar11 < 1) goto LAB_00afd460;
        pcVar13 = "prim: ";
        if ((uVar9 & 0x20) != 0) {
          pcVar13 = "cons: ";
        }
        local_100 = uVar2;
        local_fc = uVar5;
        iVar11 = BIO_write(param_1,pcVar13,6);
        if (iVar11 < 6) goto LAB_00afd460;
        BIO_indent(param_1,indent,0x80);
        if ((~uVar2 & 0xc0) == 0) {
          pcVar13 = "priv [ %d ] ";
LAB_00afcc7c:
          buf = acStack_e0;
          BIO_snprintf(buf,0x80,pcVar13,(ulong)uVar5);
        }
        else {
          if ((uVar2 >> 7 & 1) != 0) {
            pcVar13 = "cont [ %d ]";
            goto LAB_00afcc7c;
          }
          if ((uVar2 >> 6 & 1) != 0) {
            pcVar13 = "appl [ %d ]";
            goto LAB_00afcc7c;
          }
          if (0x1e < (int)uVar5) {
            pcVar13 = "<ASN1 %d>";
            goto LAB_00afcc7c;
          }
          uVar2 = uVar5 & 0xfffffeff;
          if ((uVar5 | 8) != 0x10a) {
            uVar2 = uVar5;
          }
          buf = "(unknown)";
          if (uVar2 < 0x1f) {
            buf = (&PTR_DAT_016ae3e0)[(int)uVar2];
          }
        }
        iVar11 = BIO_printf(param_1,"%-18s",buf);
        pbVar8 = local_e8;
        pbVar7 = local_f8;
        if (iVar11 < 1) goto LAB_00afd460;
        param_3 = param_3 - lVar15;
        if ((uVar9 >> 5 & 1) != 0) {
          iVar11 = BIO_write(param_1,&DAT_013c61e6,1);
          if (0 < iVar11) {
            if ((long)local_f8 <= param_3) {
              if ((uVar9 == 0x21) && (local_f8 == (byte *)0x0)) {
                do {
                  iVar11 = FUN_00afca7c(param_1,&local_e8,(long)pbVar1 - (long)local_e8,
                                        ((int)local_e8 + param_4) - (int)*param_2,param_5 + 1,
                                        param_6,param_7);
                  if (iVar11 == 0) goto LAB_00afd460;
                } while ((iVar11 != 2) && (local_e8 < pbVar1));
                local_f8 = local_e8 + -(long)pbVar8;
              }
              else {
                pbVar14 = local_f8;
                pbVar6 = local_e8;
                while (local_e8 = pbVar6, pbVar6 < pbVar8 + (long)pbVar7) {
                  iVar11 = FUN_00afca7c(param_1,&local_e8,pbVar14,
                                        ((int)pbVar6 + param_4) - (int)*param_2,param_5 + 1,param_6,
                                        param_7);
                  if (iVar11 == 0) goto LAB_00afd460;
                  pbVar14 = pbVar6 + ((long)pbVar14 - (long)local_e8);
                  pbVar6 = local_e8;
                }
              }
              goto LAB_00afd40c;
            }
            BIO_printf(param_1,"length is greater than %ld\n",param_3);
          }
          goto LAB_00afd460;
        }
        if (local_100 != 0) {
          local_e8 = local_e8 + (long)local_f8;
          iVar11 = BIO_write(param_1,&DAT_013c61e6,1);
          if (0 < iVar11) goto LAB_00afd40c;
          goto LAB_00afd460;
        }
        switch(local_fc) {
        case 1:
          if (local_f8 != (byte *)0x1) {
            iVar11 = BIO_puts(param_1,":BAD BOOLEAN");
            if (iVar11 < 1) goto LAB_00afd460;
            bVar4 = true;
            if ((long)local_f8 < 1) {
              iVar11 = 0;
              goto LAB_00afd270;
            }
          }
          BIO_printf(param_1,":%u",(ulong)*local_e8);
          break;
        case 2:
          local_f0 = pbVar14;
          a = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_f0,(long)(local_f8 + lVar15));
          if (a == (ASN1_INTEGER *)0x0) {
            iVar11 = BIO_puts(param_1,":BAD INTEGER");
            if (iVar11 < 1) goto LAB_00afd460;
            bVar4 = true;
          }
          else {
            iVar11 = BIO_write(param_1,&DAT_012f06b7,1);
            if ((iVar11 < 1) ||
               ((a->type == 0x102 && (iVar11 = BIO_write(param_1,"-",1), iVar11 < 1))))
            goto LAB_00afd460;
            iVar11 = a->length;
            if (0 < iVar11) {
              lVar16 = 0;
              do {
                iVar11 = BIO_printf(param_1,"%02X",(ulong)a->data[lVar16]);
                if (iVar11 < 1) goto LAB_00afd460;
                iVar11 = a->length;
                lVar16 = lVar16 + 1;
              } while (lVar16 < iVar11);
            }
            if ((iVar11 == 0) && (iVar11 = BIO_write(param_1,&DAT_01472b58,2), iVar11 < 1))
            goto LAB_00afd460;
          }
          ASN1_INTEGER_free(a);
          break;
        default:
          if ((param_7 == 0) || ((long)local_f8 < 1)) break;
          iVar11 = BIO_write(param_1,&DAT_013c61e6,1);
          if (0 < iVar11) {
            iVar11 = (int)local_f8;
            if ((long)param_7 <= (long)local_f8 && param_7 != -1) {
              iVar11 = param_7;
            }
            iVar11 = BIO_dump_indent(param_1,(char *)local_e8,iVar11,6);
            if (0 < iVar11) {
              iVar11 = 1;
              goto joined_r0x00afd3c4;
            }
          }
          goto LAB_00afd460;
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
                goto LAB_00afd2e8;
              }
              else if (0x7e < bVar3) {
LAB_00afd2e8:
                if (param_7 == 0) {
                  iVar11 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                  if (iVar11 < 1) goto LAB_00afd464;
                  if (a_01->length < 1) goto LAB_00afd3a8;
                  lVar16 = 0;
                  goto LAB_00afd370;
                }
                iVar11 = BIO_write(param_1,&DAT_013c61e6,1);
                if (iVar11 < 1) goto LAB_00afd464;
                iVar11 = a_01->length;
                if (param_7 <= a_01->length && param_7 != -1) {
                  iVar11 = param_7;
                }
                iVar11 = BIO_dump_indent(param_1,(char *)local_f0,iVar11,6);
                if (iVar11 < 1) goto LAB_00afd464;
                iVar11 = 1;
                goto LAB_00afd3ac;
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 < a_01->length);
            iVar11 = BIO_write(param_1,&DAT_012f06b7,1);
            if (0 < iVar11) {
              iVar10 = BIO_write(param_1,local_f0,a_01->length);
              iVar11 = 0;
              if (0 < iVar10) goto LAB_00afd3ac;
              goto LAB_00afd474;
            }
            goto LAB_00afd464;
          }
LAB_00afd3a8:
          iVar11 = 0;
          goto LAB_00afd3ac;
        case 6:
          local_f0 = pbVar14;
          pAVar12 = d2i_ASN1_OBJECT(&local_108,&local_f0,(long)(local_f8 + lVar15));
          if (pAVar12 != (ASN1_OBJECT *)0x0) {
            iVar11 = BIO_write(param_1,&DAT_012f06b7,1);
            if (0 < iVar11) {
              i2a_ASN1_OBJECT(param_1,local_108);
              break;
            }
            goto LAB_00afd460;
          }
          iVar10 = BIO_puts(param_1,":BAD OBJECT");
          iVar11 = 0;
          if (0 < iVar10) {
            bVar4 = true;
            goto LAB_00afd270;
          }
LAB_00afd4d4:
          iVar11 = 0;
          a_01 = (ASN1_STRING *)0x0;
          goto LAB_00afd474;
        case 10:
          local_f0 = pbVar14;
          a_00 = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_f0,(long)(local_f8 + lVar15));
          if (a_00 == (ASN1_ENUMERATED *)0x0) {
            iVar11 = BIO_puts(param_1,":BAD ENUMERATED");
            if (iVar11 < 1) goto LAB_00afd460;
            bVar4 = true;
          }
          else {
            iVar11 = BIO_write(param_1,&DAT_012f06b7,1);
            if ((iVar11 < 1) ||
               ((a_00->type == 0x10a && (iVar11 = BIO_write(param_1,"-",1), iVar11 < 1))))
            goto LAB_00afd460;
            iVar11 = a_00->length;
            if (0 < iVar11) {
              lVar16 = 0;
              do {
                iVar11 = BIO_printf(param_1,"%02X",(ulong)a_00->data[lVar16]);
                if (iVar11 < 1) goto LAB_00afd460;
                iVar11 = a_00->length;
                lVar16 = lVar16 + 1;
              } while (lVar16 < iVar11);
            }
            if ((iVar11 == 0) && (iVar11 = BIO_write(param_1,&DAT_01472b58,2), iVar11 < 1))
            goto LAB_00afd460;
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
          iVar11 = BIO_write(param_1,&DAT_012f06b7,1);
          if (iVar11 < 1) goto LAB_00afd460;
          if (0 < (long)local_f8) {
            iVar11 = BIO_write(param_1,local_e8,(int)local_f8);
            if (iVar11 != (int)local_f8) goto LAB_00afd4d4;
          }
          break;
        case 0x1e:
          break;
        }
        iVar11 = 0;
        if (!bVar4) goto LAB_00afd3c8;
        goto LAB_00afd270;
      }
LAB_00afd44c:
      BIO_write(param_1,"Error in encoding\n",0x12);
LAB_00afd460:
      a_01 = (ASN1_OCTET_STRING *)0x0;
LAB_00afd464:
      iVar11 = 0;
    }
LAB_00afd474:
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
LAB_00afd370:
    iVar11 = BIO_printf(param_1,"%02X",(ulong)local_f0[lVar16]);
    if (iVar11 < 1) goto LAB_00afd464;
  }
LAB_00afd3ac:
  ASN1_OCTET_STRING_free(a_01);
joined_r0x00afd3c4:
  if (bVar4) {
LAB_00afd270:
    iVar10 = BIO_puts(param_1,":[");
    if (iVar10 < 1) goto LAB_00afd460;
    if (0 < (long)local_f8) {
      lVar16 = 0;
      do {
        iVar10 = BIO_printf(param_1,"%02X",(ulong)pbVar14[lVar16 + lVar15]);
        if (iVar10 < 1) goto LAB_00afd460;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (long)local_f8);
    }
    iVar10 = BIO_puts(param_1,"]");
    if (iVar10 < 1) goto LAB_00afd460;
  }
  else {
LAB_00afd3c8:
    bVar4 = false;
  }
  if ((iVar11 == 0) && (iVar11 = BIO_write(param_1,&DAT_013c61e6,1), iVar11 < 1)) goto LAB_00afd460;
  local_e8 = local_e8 + (long)local_f8;
  if (local_100 == 0 && local_fc == 0) {
    a_01 = (ASN1_STRING *)0x0;
    iVar11 = 2;
    goto LAB_00afd474;
  }
LAB_00afd40c:
  pbVar14 = local_e8;
  param_3 = param_3 - (long)local_f8;
  if (param_3 < 1) goto LAB_00afd46c;
  uVar9 = ASN1_get_object(&local_e8,(long *)&local_f8,(int *)&local_fc,(int *)&local_100,param_3);
  if ((uVar9 >> 7 & 1) != 0) goto LAB_00afd44c;
  goto LAB_00afcb44;
}

