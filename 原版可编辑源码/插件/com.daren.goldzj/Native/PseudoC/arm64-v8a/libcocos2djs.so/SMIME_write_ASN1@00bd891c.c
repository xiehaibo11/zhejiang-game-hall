
int SMIME_write_ASN1(BIO *bio,ASN1_VALUE *val,BIO *data,int flags,int ctype_nid,int econt_nid,
                    stack_st_X509_ALGOR *mdalgs,ASN1_ITEM *it)

{
  char *pcVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  char *pcVar13;
  EVP_MD *pEVar14;
  BIO *pBVar15;
  ulong uVar16;
  void *pvVar17;
  char *pcVar18;
  byte bVar19;
  char cVar20;
  byte bVar21;
  char cVar22;
  byte bVar23;
  char cVar24;
  byte bVar25;
  char cVar26;
  byte bVar27;
  char cVar28;
  byte bVar29;
  char cVar30;
  byte bVar31;
  char cVar32;
  byte bVar33;
  char cVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulong local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  BIO *local_80;
  BIO *local_78;
  undefined8 local_70;
  ASN1_VALUE *local_68;
  
  pvVar17 = (void *)(ulong)(uint)econt_nid;
  uVar16 = (ulong)(uint)ctype_nid;
  pcVar1 = "application/pkcs7-";
  if ((flags & 0x400U) != 0) {
    pcVar1 = "application/x-pkcs7-";
  }
  puVar2 = &DAT_018938a8;
  if ((flags & 0x800U) != 0) {
    puVar2 = &DAT_018bc985;
  }
  if ((data == (BIO *)0x0) || (((uint)flags >> 6 & 1) == 0)) {
    if (ctype_nid == 0x312) {
      pcVar13 = "compressed-data";
      pcVar18 = "smime.p7z";
    }
    else {
      if (ctype_nid == 0x17) {
        pcVar13 = "enveloped-data";
      }
      else if (ctype_nid == 0x16) {
        if (econt_nid == 0xcc) {
          pcVar13 = "signed-receipt";
        }
        else {
          iVar9 = OPENSSL_sk_num(mdalgs);
          pcVar13 = "signed-data";
          if (iVar9 < 0) {
            pcVar13 = "certs-only";
          }
        }
      }
      else {
        pcVar13 = (char *)0x0;
      }
      pcVar18 = "smime.p7m";
    }
    BIO_printf(bio,"MIME-Version: 1.0%s",puVar2);
    BIO_printf(bio,"Content-Disposition: attachment;");
    BIO_printf(bio," filename=\"%s\"%s",pcVar18,puVar2);
    BIO_printf(bio,"Content-Type: %smime;",pcVar1);
    if (pcVar13 != (char *)0x0) {
      BIO_printf(bio," smime-type=%s;",pcVar13);
    }
    BIO_printf(bio," name=\"%s\"%s",pcVar18,puVar2);
    BIO_printf(bio,"Content-Transfer-Encoding: base64%s%s",puVar2,puVar2);
    iVar9 = FUN_00bd885c(bio,val,data,flags,it);
    if (iVar9 == 0) {
      return 0;
    }
    BIO_printf(bio,"%s",puVar2);
LAB_00bd8f08:
    iVar9 = 1;
  }
  else {
    iVar9 = RAND_bytes((uchar *)&local_b0,0x20);
    if (0 < iVar9) {
      bVar19 = (byte)local_b0 & 0xf;
      bVar21 = (byte)(local_b0 >> 8) & 0xf;
      bVar23 = (byte)(local_b0 >> 0x10) & 0xf;
      bVar25 = (byte)(local_b0 >> 0x18) & 0xf;
      bVar27 = (byte)(local_b0 >> 0x20) & 0xf;
      bVar29 = (byte)(local_b0 >> 0x28) & 0xf;
      bVar31 = (byte)(local_b0 >> 0x30) & 0xf;
      bVar33 = (byte)(local_b0 >> 0x38) & 0xf;
      bVar35 = (byte)uStack_a8 & 0xf;
      bVar36 = (byte)((ulong)uStack_a8 >> 8) & 0xf;
      bVar37 = (byte)((ulong)uStack_a8 >> 0x10) & 0xf;
      bVar38 = (byte)((ulong)uStack_a8 >> 0x18) & 0xf;
      bVar39 = (byte)((ulong)uStack_a8 >> 0x20) & 0xf;
      bVar40 = (byte)((ulong)uStack_a8 >> 0x28) & 0xf;
      bVar41 = (byte)((ulong)uStack_a8 >> 0x30) & 0xf;
      bVar42 = (byte)((ulong)uStack_a8 >> 0x38) & 0xf;
      auVar45[0] = -(bVar19 < 10);
      auVar45[1] = -(bVar21 < 10);
      auVar45[2] = -(bVar23 < 10);
      auVar45[3] = -(bVar25 < 10);
      auVar45[4] = -(bVar27 < 10);
      auVar45[5] = -(bVar29 < 10);
      auVar45[6] = -(bVar31 < 10);
      auVar45[7] = -(bVar33 < 10);
      auVar45[8] = -(bVar35 < 10);
      auVar45[9] = -(bVar36 < 10);
      auVar45[10] = -(bVar37 < 10);
      auVar45[0xb] = -(bVar38 < 10);
      auVar45[0xc] = -(bVar39 < 10);
      auVar45[0xd] = -(bVar40 < 10);
      auVar45[0xe] = -(bVar41 < 10);
      auVar45[0xf] = -(bVar42 < 10);
      cVar20 = bVar19 + 0x37;
      cVar22 = bVar21 + 0x37;
      cVar24 = bVar23 + 0x37;
      cVar26 = bVar25 + 0x37;
      cVar28 = bVar27 + 0x37;
      cVar30 = bVar29 + 0x37;
      cVar32 = bVar31 + 0x37;
      cVar34 = bVar33 + 0x37;
      auVar3[1] = cVar22;
      auVar3[0] = cVar20;
      auVar3[2] = cVar24;
      auVar3[3] = cVar26;
      auVar3[4] = cVar28;
      auVar3[5] = cVar30;
      auVar3[6] = cVar32;
      auVar3[7] = cVar34;
      auVar3[8] = bVar35 + 0x37;
      auVar3[9] = bVar36 + 0x37;
      auVar3[10] = bVar37 + 0x37;
      auVar3[0xb] = bVar38 + 0x37;
      auVar3[0xc] = bVar39 + 0x37;
      auVar3[0xd] = bVar40 + 0x37;
      auVar3[0xe] = bVar41 + 0x37;
      auVar3[0xf] = bVar42 + 0x37;
      auVar6[8] = bVar35 | 0x30;
      auVar6._0_8_ = local_b0 & 0xf0f0f0f0f0f0f0f | 0x3030303030303030;
      auVar6[9] = bVar36 | 0x30;
      auVar6[10] = bVar37 | 0x30;
      auVar6[0xb] = bVar38 | 0x30;
      auVar6[0xc] = bVar39 | 0x30;
      auVar6[0xd] = bVar40 | 0x30;
      auVar6[0xe] = bVar41 | 0x30;
      auVar6[0xf] = bVar42 | 0x30;
      auVar46[1] = cVar22;
      auVar46[0] = cVar20;
      auVar46[2] = cVar24;
      auVar46[3] = cVar26;
      auVar46[4] = cVar28;
      auVar46[5] = cVar30;
      auVar46[6] = cVar32;
      auVar46[7] = cVar34;
      auVar46[8] = bVar35 + 0x37;
      auVar46[9] = bVar36 + 0x37;
      auVar46[10] = bVar37 + 0x37;
      auVar46[0xb] = bVar38 + 0x37;
      auVar46[0xc] = bVar39 + 0x37;
      auVar46[0xd] = bVar40 + 0x37;
      auVar46[0xe] = bVar41 + 0x37;
      auVar46[0xf] = bVar42 + 0x37;
      auVar46 = auVar46 ^ (auVar3 ^ auVar6) & auVar45;
      bVar19 = (byte)local_a0 & 0xf;
      bVar21 = (byte)(local_a0 >> 8) & 0xf;
      bVar23 = (byte)(local_a0 >> 0x10) & 0xf;
      bVar25 = (byte)(local_a0 >> 0x18) & 0xf;
      bVar27 = (byte)(local_a0 >> 0x20) & 0xf;
      bVar29 = (byte)(local_a0 >> 0x28) & 0xf;
      bVar31 = (byte)(local_a0 >> 0x30) & 0xf;
      bVar33 = (byte)(local_a0 >> 0x38) & 0xf;
      bVar35 = (byte)uStack_98 & 0xf;
      bVar36 = (byte)((ulong)uStack_98 >> 8) & 0xf;
      bVar37 = (byte)((ulong)uStack_98 >> 0x10) & 0xf;
      bVar38 = (byte)((ulong)uStack_98 >> 0x18) & 0xf;
      bVar39 = (byte)((ulong)uStack_98 >> 0x20) & 0xf;
      bVar40 = (byte)((ulong)uStack_98 >> 0x28) & 0xf;
      bVar41 = (byte)((ulong)uStack_98 >> 0x30) & 0xf;
      bVar42 = (byte)((ulong)uStack_98 >> 0x38) & 0xf;
      auVar43[0] = -(bVar19 < 10);
      auVar43[1] = -(bVar21 < 10);
      auVar43[2] = -(bVar23 < 10);
      auVar43[3] = -(bVar25 < 10);
      auVar43[4] = -(bVar27 < 10);
      auVar43[5] = -(bVar29 < 10);
      auVar43[6] = -(bVar31 < 10);
      auVar43[7] = -(bVar33 < 10);
      auVar43[8] = -(bVar35 < 10);
      auVar43[9] = -(bVar36 < 10);
      auVar43[10] = -(bVar37 < 10);
      auVar43[0xb] = -(bVar38 < 10);
      auVar43[0xc] = -(bVar39 < 10);
      auVar43[0xd] = -(bVar40 < 10);
      auVar43[0xe] = -(bVar41 < 10);
      auVar43[0xf] = -(bVar42 < 10);
      cVar20 = bVar19 + 0x37;
      cVar22 = bVar21 + 0x37;
      cVar24 = bVar23 + 0x37;
      cVar26 = bVar25 + 0x37;
      cVar28 = bVar27 + 0x37;
      cVar30 = bVar29 + 0x37;
      cVar32 = bVar31 + 0x37;
      cVar34 = bVar33 + 0x37;
      auVar4[1] = cVar22;
      auVar4[0] = cVar20;
      auVar4[2] = cVar24;
      auVar4[3] = cVar26;
      auVar4[4] = cVar28;
      auVar4[5] = cVar30;
      auVar4[6] = cVar32;
      auVar4[7] = cVar34;
      auVar4[8] = bVar35 + 0x37;
      auVar4[9] = bVar36 + 0x37;
      auVar4[10] = bVar37 + 0x37;
      auVar4[0xb] = bVar38 + 0x37;
      auVar4[0xc] = bVar39 + 0x37;
      auVar4[0xd] = bVar40 + 0x37;
      auVar4[0xe] = bVar41 + 0x37;
      auVar4[0xf] = bVar42 + 0x37;
      auVar5[8] = bVar35 | 0x30;
      auVar5._0_8_ = local_a0 & 0xf0f0f0f0f0f0f0f | 0x3030303030303030;
      auVar5[9] = bVar36 | 0x30;
      auVar5[10] = bVar37 | 0x30;
      auVar5[0xb] = bVar38 | 0x30;
      auVar5[0xc] = bVar39 | 0x30;
      auVar5[0xd] = bVar40 | 0x30;
      auVar5[0xe] = bVar41 | 0x30;
      auVar5[0xf] = bVar42 | 0x30;
      auVar44[1] = cVar22;
      auVar44[0] = cVar20;
      auVar44[2] = cVar24;
      auVar44[3] = cVar26;
      auVar44[4] = cVar28;
      auVar44[5] = cVar30;
      auVar44[6] = cVar32;
      auVar44[7] = cVar34;
      auVar44[8] = bVar35 + 0x37;
      auVar44[9] = bVar36 + 0x37;
      auVar44[10] = bVar37 + 0x37;
      auVar44[0xb] = bVar38 + 0x37;
      auVar44[0xc] = bVar39 + 0x37;
      auVar44[0xd] = bVar40 + 0x37;
      auVar44[0xe] = bVar41 + 0x37;
      auVar44[0xf] = bVar42 + 0x37;
      auVar44 = auVar44 ^ (auVar4 ^ auVar5) & auVar43;
      uStack_a8 = auVar46._8_8_;
      local_b0 = auVar46._0_8_;
      uStack_98 = auVar44._8_8_;
      local_a0 = auVar44._0_8_;
      local_90 = 0;
      BIO_printf(bio,"MIME-Version: 1.0%s",puVar2);
      BIO_printf(bio,"Content-Type: multipart/signed;");
      BIO_printf(bio," protocol=\"%ssignature\";",pcVar1);
      BIO_puts(bio," micalg=\"");
      iVar9 = OPENSSL_sk_num(mdalgs);
      if (0 < iVar9) {
        iVar9 = 0;
        bVar7 = false;
        bVar8 = false;
        do {
          if (bVar7) {
            BIO_write(bio,&DAT_018bc98e,1);
          }
          puVar12 = (undefined8 *)OPENSSL_sk_value(mdalgs,iVar9);
          iVar10 = OBJ_obj2nid((ASN1_OBJECT *)*puVar12);
          pcVar13 = OBJ_nid2sn(iVar10);
          pEVar14 = EVP_get_digestbyname(pcVar13);
          if ((pEVar14 == (EVP_MD *)0x0) || (pEVar14->verify == (_func_1084 *)0x0)) {
LAB_00bd8ae0:
            if (iVar10 < 0x2a1) {
              if (iVar10 == 4) {
                BIO_puts(bio,"md5");
              }
              else if (iVar10 == 0x40) {
                BIO_puts(bio,"sha1");
              }
              else {
                if (iVar10 != 0x2a0) goto LAB_00bd8b7c;
                BIO_puts(bio,"sha-256");
              }
              goto LAB_00bd8ba4;
            }
            if (iVar10 == 0x2a1) {
              BIO_puts(bio,"sha-384");
              goto LAB_00bd8ba4;
            }
            if (iVar10 == 0x2a2) {
              BIO_puts(bio,"sha-512");
              goto LAB_00bd8ba4;
            }
            if (iVar10 == 0x329) {
              BIO_puts(bio,"gostr3411-94");
              break;
            }
LAB_00bd8b7c:
            if (!bVar8) {
              BIO_puts(bio,"unknown");
              bVar8 = true;
              goto LAB_00bd8ba4;
            }
            bVar7 = false;
          }
          else {
            iVar11 = (*pEVar14->verify)(0,(uchar *)0x2,0,(uchar *)&local_80,(uint)uVar16,pvVar17);
            if (iVar11 < 1) {
              if (iVar11 == -2) goto LAB_00bd8ae0;
              break;
            }
            BIO_puts(bio,(char *)local_80);
            CRYPTO_free(local_80);
LAB_00bd8ba4:
            bVar7 = true;
          }
          iVar9 = iVar9 + 1;
          iVar10 = OPENSSL_sk_num(mdalgs);
        } while (iVar9 < iVar10);
      }
      BIO_printf(bio,"\"; boundary=\"----%s\"%s%s",&local_b0,puVar2,puVar2);
      BIO_printf(bio,"This is an S/MIME signed message%s%s",puVar2,puVar2);
      BIO_printf(bio,"------%s%s",&local_b0,puVar2);
      local_68 = val;
      if ((flags & 0x8040U) != 0x40) {
        SMIME_crlf_copy(data,bio,flags);
LAB_00bd8d38:
        BIO_printf(bio,"%s------%s%s",puVar2,&local_b0,puVar2);
        BIO_printf(bio,"Content-Type: %ssignature;",pcVar1);
        BIO_printf(bio," name=\"smime.p7s\"%s",puVar2);
        BIO_printf(bio,"Content-Transfer-Encoding: base64%s",puVar2);
        BIO_printf(bio,"Content-Disposition: attachment;");
        BIO_printf(bio," filename=\"smime.p7s\"%s%s",puVar2,puVar2);
        FUN_00bd885c(bio,val,0,0,it);
        BIO_printf(bio,"%s------%s--%s%s",puVar2,&local_b0,puVar2,puVar2);
        goto LAB_00bd8f08;
      }
      pvVar17 = it->funcs;
      if ((pvVar17 == (void *)0x0) || (*(code **)((long)pvVar17 + 0x18) == (code *)0x0)) {
        ERR_put_error(0xd,0xd6,0xca,"crypto/asn1/asn_mime.c",0x14c);
      }
      else {
        local_78 = (BIO *)0x0;
        local_70 = 0;
        local_80 = bio;
        iVar9 = (**(code **)((long)pvVar17 + 0x18))(0xc,&local_68,it,&local_80);
        if (0 < iVar9) {
          SMIME_crlf_copy(data,local_78,flags);
          iVar9 = (**(code **)((long)pvVar17 + 0x18))(0xd,&local_68,it,&local_80);
          while (local_78 != bio) {
            pBVar15 = BIO_pop(local_78);
            BIO_free(local_78);
            local_78 = pBVar15;
          }
          if (0 < iVar9) goto LAB_00bd8d38;
        }
      }
    }
    iVar9 = 0;
  }
  return iVar9;
}

