
undefined8 cms_RecipientInfo_pwri_crypt(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  X509_ALGOR *a;
  char *name;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *ctx;
  byte *pbVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uchar *out;
  ulong uVar9;
  ulong uVar10;
  uchar *in;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iStack_68;
  int iStack_64;
  
  lVar12 = *(long *)(param_2 + 8);
  if (*(long *)(lVar12 + 0x20) == 0) {
    iVar1 = 0xb2;
    iVar3 = 0x124;
    goto LAB_00b9129c;
  }
  puVar7 = *(undefined8 **)(lVar12 + 0x10);
  if (puVar7 != (undefined8 *)0x0) {
    lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*puVar7);
    if (iVar1 == 0x37d) {
      a = (X509_ALGOR *)ASN1_TYPE_unpack_sequence(X509_ALGOR_it,puVar7[1]);
      if (a == (X509_ALGOR *)0x0) {
        iVar1 = 0xb0;
        iVar3 = 0x134;
        goto LAB_00b9129c;
      }
      iVar1 = OBJ_obj2nid(a->algorithm);
      name = OBJ_nid2sn(iVar1);
      cipher = EVP_get_cipherbyname(name);
      if (cipher == (EVP_CIPHER *)0x0) {
        iVar1 = 0x94;
        iVar3 = 0x13b;
        goto LAB_00b9129c;
      }
      ctx = EVP_CIPHER_CTX_new();
      if (ctx == (EVP_CIPHER_CTX *)0x0) {
        ERR_put_error(0x2e,0xa7,0x41,"crypto/cms/cms_pwri.c",0x141);
        return 0;
      }
      iVar1 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,param_3);
      if (iVar1 == 0) {
LAB_00b91358:
        out = (uchar *)0x0;
      }
      else {
        EVP_CIPHER_CTX_set_padding(ctx,0);
        iVar1 = EVP_CIPHER_asn1_to_param(ctx,a->parameter);
        if (iVar1 < 0) {
          iVar1 = 0x66;
          iVar3 = 0x14a;
LAB_00b91354:
          ERR_put_error(0x2e,0xa7,iVar1,"crypto/cms/cms_pwri.c",iVar3);
          goto LAB_00b91358;
        }
        iVar1 = EVP_PBE_CipherInit((ASN1_OBJECT *)**(undefined8 **)(lVar12 + 8),
                                   *(char **)(lVar12 + 0x20),*(int *)(lVar12 + 0x28),
                                   (ASN1_TYPE *)(*(undefined8 **)(lVar12 + 8))[1],ctx,param_3);
        if (iVar1 < 0) {
          iVar1 = 6;
          iVar3 = 0x155;
          goto LAB_00b91354;
        }
        if (param_3 == 0) {
          out = CRYPTO_malloc(**(int **)(lVar12 + 0x18),"crypto/cms/cms_pwri.c",0x16a);
          if (out == (uchar *)0x0) {
            iVar1 = 0x41;
            iVar3 = 0x16d;
          }
          else {
            in = *(uchar **)(*(int **)(lVar12 + 0x18) + 2);
            iVar1 = **(int **)(lVar12 + 0x18);
            uVar9 = (ulong)iVar1;
            uVar2 = EVP_CIPHER_CTX_block_size(ctx);
            uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
            if (uVar10 <= uVar9) {
              uVar11 = (ulong)(int)uVar2;
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar9 / uVar11;
              }
              if ((uVar9 == uVar6 * uVar11) &&
                 (pbVar4 = CRYPTO_malloc(iVar1,"crypto/cms/cms_pwri.c",0xbf), pbVar4 != (byte *)0x0)
                 ) {
                iVar3 = EVP_DecryptUpdate(ctx,pbVar4 + (uVar9 - uVar10),&iStack_64,
                                          in + (uVar9 - uVar10),(int)((ulong)uVar2 << 1));
                if (((iVar3 != 0) &&
                    ((iVar3 = EVP_DecryptUpdate(ctx,pbVar4,&iStack_64,pbVar4 + (uVar9 - uVar11),
                                                uVar2), iVar3 != 0 &&
                     (iVar3 = EVP_DecryptUpdate(ctx,pbVar4,&iStack_64,in,iVar1 - uVar2), iVar3 != 0)
                     ))) && ((iVar3 = EVP_DecryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                                         (uchar *)0x0,(uchar *)0x0), iVar3 != 0 &&
                             (((iVar1 = EVP_DecryptUpdate(ctx,pbVar4,&iStack_64,pbVar4,iVar1),
                               iVar1 != 0 &&
                               ((byte)((pbVar4[5] ^ pbVar4[2]) & (pbVar4[4] ^ pbVar4[1]) &
                                      (pbVar4[6] ^ pbVar4[3])) == 0xff)) &&
                              (uVar10 = (ulong)*pbVar4, uVar10 - 4 <= uVar9)))))) {
                  memcpy(out,pbVar4 + 4,uVar10);
                  CRYPTO_clear_free(pbVar4,uVar9,"crypto/cms/cms_pwri.c",0xe1);
                  *(uchar **)(lVar13 + 0x20) = out;
                  *(ulong *)(lVar13 + 0x28) = uVar10;
LAB_00b91258:
                  EVP_CIPHER_CTX_free(ctx);
                  uVar8 = 1;
                  goto LAB_00b9137c;
                }
                CRYPTO_clear_free(pbVar4,uVar9,"crypto/cms/cms_pwri.c",0xe1);
              }
            }
            iVar1 = 0xb4;
            iVar3 = 0x173;
          }
          ERR_put_error(0x2e,0xa7,iVar1,"crypto/cms/cms_pwri.c",iVar3);
        }
        else {
          uVar9 = *(ulong *)(lVar13 + 0x28);
          uVar2 = EVP_CIPHER_CTX_block_size(ctx);
          out = (uchar *)0x0;
          if (uVar9 < 0x100) {
            uVar6 = (ulong)(int)uVar2;
            uVar10 = 0;
            if (uVar6 != 0) {
              uVar10 = (uVar9 + uVar6 + 3) / uVar6;
            }
            if (((-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) <=
                 uVar10 * uVar6) &&
               (out = CRYPTO_malloc((int)(uVar10 * uVar6),"crypto/cms/cms_pwri.c",0x160),
               out != (uchar *)0x0)) {
              pbVar4 = *(byte **)(lVar13 + 0x20);
              uVar9 = *(ulong *)(lVar13 + 0x28);
              uVar2 = EVP_CIPHER_CTX_block_size(ctx);
              if (uVar9 < 0x100) {
                uVar6 = (ulong)(int)uVar2;
                uVar10 = 0;
                if (uVar6 != 0) {
                  uVar10 = (uVar9 + uVar6 + 3) / uVar6;
                }
                uVar10 = uVar10 * uVar6;
                if ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) <= uVar10) {
                  *out = (uchar)uVar9;
                  out[1] = ~*pbVar4;
                  out[2] = ~pbVar4[1];
                  out[3] = ~pbVar4[2];
                  memcpy(out + 4,pbVar4,uVar9);
                  iVar1 = (int)uVar10;
                  if ((((uVar10 < uVar9 + 4 || uVar10 - (uVar9 + 4) == 0) ||
                       (iVar3 = RAND_bytes(out + 4 + uVar9,(-4 - (int)uVar9) + iVar1), 0 < iVar3))
                      && (iVar3 = EVP_EncryptUpdate(ctx,out,&iStack_68,out,iVar1), iVar3 != 0)) &&
                     (iVar3 = EVP_EncryptUpdate(ctx,out,&iStack_68,out,iVar1), iVar3 != 0)) {
                    piVar5 = *(int **)(lVar12 + 0x18);
                    *(uchar **)(piVar5 + 2) = out;
                    *piVar5 = iVar1;
                    goto LAB_00b91258;
                  }
                }
              }
            }
          }
        }
      }
      EVP_CIPHER_CTX_free(ctx);
      CRYPTO_free(out);
      uVar8 = 0;
LAB_00b9137c:
      X509_ALGOR_free(a);
      return uVar8;
    }
  }
  iVar1 = 0xb3;
  iVar3 = 299;
LAB_00b9129c:
  ERR_put_error(0x2e,0xa7,iVar1,"crypto/cms/cms_pwri.c",iVar3);
  return 0;
}

