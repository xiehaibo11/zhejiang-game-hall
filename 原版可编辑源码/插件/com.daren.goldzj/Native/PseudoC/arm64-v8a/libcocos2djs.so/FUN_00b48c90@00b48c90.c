
undefined4
FUN_00b48c90(EVP_MD_CTX *param_1,EVP_PKEY_CTX *param_2,undefined8 *param_3,EVP_PKEY *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RSA_PSS_PARAMS *a;
  X509_ALGOR *a_00;
  void *p2;
  char *name;
  EVP_MD *md;
  long lVar4;
  X509_ALGOR *pXVar5;
  undefined4 uVar6;
  EVP_MD *local_60;
  EVP_PKEY_CTX *local_58;
  
  local_58 = param_2;
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_3);
  if (iVar1 != 0x390) {
    ERR_put_error(4,0x9b,0x9b,"crypto/rsa/rsa_ameth.c",0x1f7);
    return 0xffffffff;
  }
  a = (RSA_PSS_PARAMS *)ASN1_TYPE_unpack_sequence(RSA_PSS_PARAMS_it,param_3[1]);
  if (a == (RSA_PSS_PARAMS *)0x0) {
    ERR_put_error(4,0x9b,0x95,"crypto/rsa/rsa_ameth.c",0x1fe);
    a_00 = (X509_ALGOR *)0x0;
  }
  else {
    pXVar5 = a->maskGenAlgorithm;
    a_00 = (X509_ALGOR *)0x0;
    if (pXVar5 != (X509_ALGOR *)0x0) {
      iVar1 = OBJ_obj2nid(pXVar5->algorithm);
      if (iVar1 == 0x38f) {
        a_00 = (X509_ALGOR *)ASN1_TYPE_unpack_sequence(X509_ALGOR_it,pXVar5->parameter);
      }
      else {
        a_00 = (X509_ALGOR *)0x0;
      }
    }
    p2 = (void *)FUN_00b48f58(a->maskGenAlgorithm,a_00);
    if (p2 != (void *)0x0) {
      if (a->hashAlgorithm == (X509_ALGOR *)0x0) {
        md = EVP_sha1();
        if (md != (EVP_MD *)0x0) goto LAB_00b48dc4;
      }
      else {
        iVar1 = OBJ_obj2nid(a->hashAlgorithm->algorithm);
        name = OBJ_nid2sn(iVar1);
        md = EVP_get_digestbyname(name);
        if (md == (EVP_MD *)0x0) {
          iVar1 = 0x9c;
          iVar2 = 0xa6;
          iVar3 = 0x199;
        }
        else {
LAB_00b48dc4:
          if (a->saltLength == (ASN1_INTEGER *)0x0) {
            iVar1 = 0x14;
          }
          else {
            lVar4 = ASN1_INTEGER_get(a->saltLength);
            iVar1 = (int)lVar4;
            if (iVar1 < 0) {
              iVar1 = 0x9b;
              iVar2 = 0x96;
              iVar3 = 0x210;
              goto LAB_00b48e48;
            }
          }
          if ((a->trailerField == (ASN1_INTEGER *)0x0) ||
             (lVar4 = ASN1_INTEGER_get(a->trailerField), lVar4 == 1)) {
            if (param_4 == (EVP_PKEY *)0x0) {
              iVar2 = EVP_PKEY_CTX_ctrl(param_2,-1,0xf8,0xd,0,&local_60);
              if (iVar2 < 1) goto LAB_00b48e4c;
              iVar2 = EVP_MD_type(md);
              iVar3 = EVP_MD_type(local_60);
              if (iVar2 != iVar3) {
                iVar1 = 0x9b;
                iVar2 = 0x9e;
                iVar3 = 0x229;
                goto LAB_00b48e48;
              }
            }
            else {
              iVar2 = EVP_DigestVerifyInit(param_1,&local_58,md,(ENGINE *)0x0,param_4);
              if (iVar2 == 0) goto LAB_00b48e4c;
            }
            iVar2 = EVP_PKEY_CTX_ctrl(local_58,6,-1,0x1001,6,(void *)0x0);
            uVar6 = 0xffffffff;
            if (0 < iVar2) {
              iVar1 = EVP_PKEY_CTX_ctrl(local_58,6,0x18,0x1002,iVar1,(void *)0x0);
              uVar6 = 0xffffffff;
              if (0 < iVar1) {
                iVar1 = EVP_PKEY_CTX_ctrl(local_58,6,0x3f8,0x1005,0,p2);
                uVar6 = 1;
                if (iVar1 < 1) {
                  uVar6 = 0xffffffff;
                }
              }
            }
            goto LAB_00b48e50;
          }
          iVar1 = 0x9b;
          iVar2 = 0x8b;
          iVar3 = 0x21b;
        }
LAB_00b48e48:
        ERR_put_error(4,iVar1,iVar2,"crypto/rsa/rsa_ameth.c",iVar3);
      }
    }
  }
LAB_00b48e4c:
  uVar6 = 0xffffffff;
LAB_00b48e50:
  RSA_PSS_PARAMS_free(a);
  X509_ALGOR_free(a_00);
  return uVar6;
}

