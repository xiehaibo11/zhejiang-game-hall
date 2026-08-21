
X509_ALGOR *
PKCS5_pbe2_set_scrypt
          (EVP_CIPHER *param_1,void *param_2,int param_3,void *param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *pAVar3;
  PBE2PARAM *a;
  ASN1_TYPE *pAVar4;
  EVP_CIPHER_CTX *ctx;
  ASN1_VALUE *val;
  ASN1_INTEGER *pAVar5;
  X509_ALGOR *pXVar6;
  long lVar7;
  uchar auStack_70 [16];
  
  if (param_1 == (EVP_CIPHER *)0x0) {
    iVar1 = 0x43;
    iVar2 = 0x3e;
  }
  else {
    iVar1 = EVP_PBE_scrypt(0,0,0,0,param_5,param_6,param_7,0,0,0);
    if (iVar1 == 0) {
      iVar1 = 0xe3;
      iVar2 = 0x44;
    }
    else {
      iVar1 = EVP_CIPHER_type(param_1);
      if (iVar1 != 0) {
        pAVar3 = OBJ_nid2obj(iVar1);
        a = PBE2PARAM_new();
        if (a == (PBE2PARAM *)0x0) {
LAB_00bdad4c:
          pXVar6 = (X509_ALGOR *)0x0;
LAB_00bdad50:
          ERR_put_error(0xd,0xe7,0x41,"crypto/asn1/p5_scrypt.c",0x94);
        }
        else {
          pXVar6 = a->encryption;
          pXVar6->algorithm = pAVar3;
          pAVar4 = ASN1_TYPE_new();
          pXVar6->parameter = pAVar4;
          if (pAVar4 == (ASN1_TYPE *)0x0) goto LAB_00bdad4c;
          iVar2 = EVP_CIPHER_iv_length(param_1);
          if (iVar2 == 0) {
LAB_00bdacf0:
            ctx = EVP_CIPHER_CTX_new();
            if (ctx == (EVP_CIPHER_CTX *)0x0) goto LAB_00bdad4c;
            iVar2 = EVP_CipherInit_ex(ctx,param_1,(ENGINE *)0x0,(uchar *)0x0,auStack_70,0);
            if (iVar2 == 0) {
LAB_00bdadd4:
              pXVar6 = (X509_ALGOR *)0x0;
              goto LAB_00bdad70;
            }
            iVar2 = EVP_CIPHER_param_to_asn1(ctx,pXVar6->parameter);
            if (iVar2 < 0) {
              ERR_put_error(0xd,0xe7,0x72,"crypto/asn1/p5_scrypt.c",0x6c);
              goto LAB_00bdadd4;
            }
            EVP_CIPHER_CTX_free(ctx);
            if (iVar1 == 0x25) {
              iVar1 = EVP_CIPHER_key_length(param_1);
              lVar7 = (long)iVar1;
            }
            else {
              lVar7 = 0;
            }
            X509_ALGOR_free(a->keyfunc);
            val = ASN1_item_new((ASN1_ITEM *)&DAT_01c8c7d8);
            if (val == (ASN1_VALUE *)0x0) {
LAB_00bdaf08:
              pXVar6 = (X509_ALGOR *)0x0;
LAB_00bdaf0c:
              ERR_put_error(0xd,0xe8,0x41,"crypto/asn1/p5_scrypt.c",0xda);
LAB_00bdaf28:
              ASN1_item_free(val,(ASN1_ITEM *)&DAT_01c8c7d8);
              X509_ALGOR_free(pXVar6);
              pXVar6 = (X509_ALGOR *)0x0;
              a->keyfunc = (X509_ALGOR *)0x0;
            }
            else {
              iVar1 = 8;
              if (param_3 != 0) {
                iVar1 = param_3;
              }
              iVar2 = ASN1_STRING_set(*(ASN1_STRING **)val,param_2,iVar1);
              if (iVar2 == 0) goto LAB_00bdaf08;
              if ((param_2 == (void *)0x0) &&
                 (iVar1 = RAND_bytes(*(uchar **)(*(long *)val + 8),iVar1), iVar1 < 1)) {
                pXVar6 = (X509_ALGOR *)0x0;
                goto LAB_00bdaf28;
              }
              iVar1 = ASN1_INTEGER_set_uint64(*(undefined8 *)(val + 8),param_5);
              if (((iVar1 == 0) ||
                  (iVar1 = ASN1_INTEGER_set_uint64(*(undefined8 *)(val + 0x10),param_6), iVar1 == 0)
                  ) || (iVar1 = ASN1_INTEGER_set_uint64(*(undefined8 *)(val + 0x18),param_7),
                       iVar1 == 0)) goto LAB_00bdaf08;
              if (lVar7 != 0) {
                pAVar5 = ASN1_INTEGER_new();
                *(ASN1_INTEGER **)(val + 0x20) = pAVar5;
                if ((pAVar5 == (ASN1_INTEGER *)0x0) ||
                   (iVar1 = ASN1_INTEGER_set_int64(pAVar5,lVar7), iVar1 == 0)) goto LAB_00bdaf08;
              }
              pXVar6 = X509_ALGOR_new();
              if (pXVar6 == (X509_ALGOR *)0x0) goto LAB_00bdaf0c;
              pAVar3 = OBJ_nid2obj(0x3cd);
              pXVar6->algorithm = pAVar3;
              lVar7 = ASN1_TYPE_pack_sequence(&DAT_01c8c7d8,val,&pXVar6->parameter);
              if (lVar7 == 0) goto LAB_00bdaf0c;
              ASN1_item_free(val,(ASN1_ITEM *)&DAT_01c8c7d8);
              a->keyfunc = pXVar6;
              pXVar6 = X509_ALGOR_new();
              if (pXVar6 != (X509_ALGOR *)0x0) {
                pAVar3 = OBJ_nid2obj(0xa1);
                pXVar6->algorithm = pAVar3;
                lVar7 = ASN1_TYPE_pack_sequence(PBE2PARAM_it,a,&pXVar6->parameter);
                if (lVar7 != 0) {
                  PBE2PARAM_free(a);
                  return pXVar6;
                }
              }
            }
            goto LAB_00bdad50;
          }
          iVar2 = EVP_CIPHER_iv_length(param_1);
          if (param_4 != (void *)0x0) {
            memcpy(auStack_70,param_4,(long)iVar2);
            goto LAB_00bdacf0;
          }
          iVar2 = RAND_bytes(auStack_70,iVar2);
          if (-1 < iVar2) goto LAB_00bdacf0;
          pXVar6 = (X509_ALGOR *)0x0;
        }
        ctx = (EVP_CIPHER_CTX *)0x0;
        goto LAB_00bdad70;
      }
      iVar1 = 0x6c;
      iVar2 = 0x4b;
    }
  }
  ERR_put_error(0xd,0xe7,iVar1,"crypto/asn1/p5_scrypt.c",iVar2);
  pXVar6 = (X509_ALGOR *)0x0;
  ctx = (EVP_CIPHER_CTX *)0x0;
  a = (PBE2PARAM *)0x0;
LAB_00bdad70:
  PBE2PARAM_free(a);
  X509_ALGOR_free((X509_ALGOR *)0x0);
  X509_ALGOR_free(pXVar6);
  EVP_CIPHER_CTX_free(ctx);
  return (X509_ALGOR *)0x0;
}

