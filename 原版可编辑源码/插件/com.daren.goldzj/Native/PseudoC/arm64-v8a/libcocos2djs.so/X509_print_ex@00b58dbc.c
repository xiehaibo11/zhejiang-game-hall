
int X509_print_ex(BIO *bp,X509 *x,ulong nmflag,ulong cflag)

{
  byte *pbVar1;
  long lVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ASN1_INTEGER *a;
  X509_ALGOR *alg;
  X509_NAME *pXVar8;
  ASN1_TIME *pAVar9;
  X509_PUBKEY *pub;
  EVP_PKEY *pkey;
  stack_st_X509_EXTENSION *exts;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char **ppcVar13;
  uchar *puVar14;
  ASN1_STRING *local_70;
  ASN1_OBJECT *local_68;
  
  iVar5 = 0xc;
  uVar10 = 10;
  if ((nmflag & 0xf0000) != 0x40000) {
    uVar10 = 0x20;
    iVar5 = 0;
  }
  iVar6 = 0x10;
  if (nmflag != 0) {
    iVar6 = iVar5;
  }
  uVar12 = (uint)cflag;
  if (((cflag & 1) != 0) ||
     ((iVar5 = BIO_write(bp,"Certificate:\n",0xd), 0 < iVar5 &&
      (iVar5 = BIO_write(bp,"    Data:\n",10), 0 < iVar5)))) {
    if ((uVar12 >> 1 & 1) == 0) {
      lVar7 = X509_get_version(x);
      iVar5 = BIO_printf(bp,"%8sVersion: %lu (0x%lx)\n",&DAT_0189703a,lVar7 + 1,lVar7);
      if (iVar5 < 1) goto LAB_00b5948c;
    }
    if ((uVar12 >> 2 & 1) == 0) {
      iVar5 = BIO_write(bp,"        Serial Number:",0x16);
      if (0 < iVar5) {
        a = X509_get_serialNumber(x);
        if (a->length < 9) {
          ERR_set_mark();
          lVar7 = ASN1_INTEGER_get(a);
          ERR_pop_to_mark();
          iVar5 = a->type;
          if (lVar7 != -1) {
            puVar3 = &DAT_019b5d6c;
            if (iVar5 != 0x102) {
              puVar3 = &DAT_0189703a;
            }
            lVar2 = -lVar7;
            if (iVar5 != 0x102) {
              lVar2 = lVar7;
            }
            iVar5 = BIO_printf(bp," %s%lu (%s0x%lx)\n",puVar3,lVar2,puVar3,lVar2);
            if (0 < iVar5) goto LAB_00b58fb4;
            goto LAB_00b5948c;
          }
        }
        else {
          iVar5 = a->type;
        }
        pcVar4 = " (Negative)";
        if (iVar5 != 0x102) {
          pcVar4 = "";
        }
        iVar5 = BIO_printf(bp,"\n%12s%s",&DAT_0189703a,pcVar4);
        if (0 < iVar5) {
          lVar7 = 0;
          do {
            if (a->length <= lVar7) goto LAB_00b58fb4;
            pbVar1 = a->data + lVar7;
            lVar7 = lVar7 + 1;
            uVar11 = 10;
            if ((int)lVar7 != a->length) {
              uVar11 = 0x3a;
            }
            iVar5 = BIO_printf(bp,"%02x%c",(ulong)*pbVar1,(ulong)uVar11);
          } while (0 < iVar5);
        }
      }
    }
    else {
LAB_00b58fb4:
      if ((uVar12 >> 3 & 1) == 0) {
        alg = (X509_ALGOR *)X509_get0_tbs_sigalg(x);
        iVar5 = X509_signature_print(bp,alg,(ASN1_STRING *)0x0);
        if (iVar5 < 1) goto LAB_00b5948c;
      }
      if ((uVar12 >> 4 & 1) == 0) {
        iVar5 = BIO_printf(bp,"        Issuer:%c",(ulong)uVar10);
        if (0 < iVar5) {
          pXVar8 = X509_get_issuer_name(x);
          iVar5 = X509_NAME_print_ex(bp,pXVar8,iVar6,nmflag);
          if ((-1 < iVar5) && (iVar5 = BIO_write(bp,&DAT_018938a8,1), 0 < iVar5)) goto LAB_00b59038;
        }
      }
      else {
LAB_00b59038:
        if ((uVar12 >> 5 & 1) == 0) {
          iVar5 = BIO_write(bp,"        Validity\n",0x11);
          if ((0 < iVar5) && (iVar5 = BIO_write(bp,"            Not Before: ",0x18), 0 < iVar5)) {
            pAVar9 = (ASN1_TIME *)X509_get0_notBefore(x);
            iVar5 = ASN1_TIME_print(bp,pAVar9);
            if ((iVar5 != 0) && (iVar5 = BIO_write(bp,"\n            Not After : ",0x19), 0 < iVar5)
               ) {
              pAVar9 = (ASN1_TIME *)X509_get0_notAfter(x);
              iVar5 = ASN1_TIME_print(bp,pAVar9);
              if ((iVar5 != 0) && (iVar5 = BIO_write(bp,&DAT_018938a8,1), 0 < iVar5))
              goto LAB_00b590dc;
            }
          }
        }
        else {
LAB_00b590dc:
          if ((uVar12 >> 6 & 1) == 0) {
            iVar5 = BIO_printf(bp,"        Subject:%c",(ulong)uVar10);
            if (0 < iVar5) {
              pXVar8 = X509_get_subject_name(x);
              iVar5 = X509_NAME_print_ex(bp,pXVar8,iVar6,nmflag);
              if ((-1 < iVar5) && (iVar5 = BIO_write(bp,&DAT_018938a8,1), 0 < iVar5))
              goto LAB_00b59138;
            }
          }
          else {
LAB_00b59138:
            if ((uVar12 >> 7 & 1) == 0) {
              pub = (X509_PUBKEY *)X509_get_X509_PUBKEY(x);
              X509_PUBKEY_get0_param(&local_68,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,pub);
              iVar5 = BIO_write(bp,"        Subject Public Key Info:\n",0x21);
                    /* try { // try from 00b5917c to 00c5918b has its CatchHandler @ 00b591e8 */
                    /* try { // try from 00b5918c to 00c591eb has its CatchHandler @ 00b58c40 */
              if ((((0 < iVar5) &&
                   (iVar5 = BIO_printf(bp,"%12sPublic Key Algorithm: ",&DAT_0189703a), 0 < iVar5))
                  && (iVar5 = i2a_ASN1_OBJECT(bp,local_68), 0 < iVar5)) &&
                 (iVar5 = BIO_puts(bp,"\n"), 0 < iVar5)) {
                pkey = (EVP_PKEY *)X509_get0_pubkey(x);
                if (pkey == (EVP_PKEY *)0x0) {
                  BIO_printf(bp,"%12sUnable to load Public Key\n",&DAT_0189703a);
                  ERR_print_errors(bp);
                  goto LAB_00b59210;
                }
                EVP_PKEY_print_public(bp,pkey,0x10,(ASN1_PCTX *)0x0);
                    /* catch() { ... } // from try @ 00b5917c with catch @ 00b591e8 */
                if ((uVar12 >> 0xc & 1) == 0) goto LAB_00b59214;
                goto LAB_00b59420;
              }
            }
            else {
LAB_00b59210:
              if ((uVar12 >> 0xc & 1) != 0) {
LAB_00b59420:
                if ((uVar12 >> 8 & 1) == 0) {
                  exts = (stack_st_X509_EXTENSION *)X509_get0_extensions(x);
                  X509V3_extensions_print(bp,"X509v3 extensions",exts,cflag,8);
                }
                if ((uVar12 >> 9 & 1) == 0) {
                  X509_get0_signature(&local_70,&local_68,x);
                  iVar5 = X509_signature_print(bp,(X509_ALGOR *)local_68,local_70);
                  if (iVar5 < 1) goto LAB_00b5948c;
                }
                if ((uVar12 >> 10 & 1) == 0) {
                  X509_aux_print(bp,x,0);
                }
                iVar5 = 1;
                goto LAB_00b59490;
              }
LAB_00b59214:
              X509_get0_uids(x,&local_68,&local_70);
              if (local_68 == (ASN1_OBJECT *)0x0) {
LAB_00b59320:
                if (local_70 == (ASN1_STRING *)0x0) goto LAB_00b59420;
                iVar5 = BIO_printf(bp,"%8sSubject Unique ID: ",&DAT_0189703a);
                if (0 < iVar5) {
                  lVar7 = 0;
                  iVar5 = local_70->length;
                  puVar14 = local_70->data;
                  while (lVar7 < iVar5) {
                    if (((int)lVar7 % 0x12 == 0) &&
                       ((iVar6 = BIO_write(bp,&DAT_018938a8,1), iVar6 < 1 ||
                        (iVar6 = BIO_indent(bp,0xc,0xc), iVar6 < 1)))) goto LAB_00b5948c;
                    pbVar1 = puVar14 + lVar7;
                    pcVar4 = "";
                    if (iVar5 + -1 != (int)lVar7) {
                      pcVar4 = ":";
                    }
                    lVar7 = lVar7 + 1;
                    iVar6 = BIO_printf(bp,"%02x%s",(ulong)*pbVar1,pcVar4);
                    if (iVar6 < 1) goto LAB_00b5948c;
                  }
                  iVar5 = BIO_write(bp,&DAT_018938a8,1);
                  if (iVar5 == 1) goto LAB_00b59420;
                }
              }
              else {
                    /* try { // try from 00b59240 to 00c5962f has its CatchHandler @ 00b59bb0 */
                iVar5 = BIO_printf(bp,"%8sIssuer Unique ID: ",&DAT_0189703a);
                if (0 < iVar5) {
                  lVar7 = 0;
                  iVar5 = *(int *)&local_68->sn;
                  ppcVar13 = local_68->ln;
                  while (lVar7 < iVar5) {
                    if (((int)lVar7 % 0x12 == 0) &&
                       ((iVar6 = BIO_write(bp,&DAT_018938a8,1), iVar6 < 1 ||
                        (iVar6 = BIO_indent(bp,0xc,0xc), iVar6 < 1)))) goto LAB_00b5948c;
                    pbVar1 = (byte *)((long)ppcVar13 + lVar7);
                    pcVar4 = "";
                    if (iVar5 + -1 != (int)lVar7) {
                      pcVar4 = ":";
                    }
                    lVar7 = lVar7 + 1;
                    iVar6 = BIO_printf(bp,"%02x%s",(ulong)*pbVar1,pcVar4);
                    if (iVar6 < 1) goto LAB_00b5948c;
                  }
                  iVar5 = BIO_write(bp,&DAT_018938a8,1);
                  if (iVar5 == 1) goto LAB_00b59320;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00b5948c:
  iVar5 = 0;
LAB_00b59490:
  CRYPTO_free((void *)0x0);
  return iVar5;
}

