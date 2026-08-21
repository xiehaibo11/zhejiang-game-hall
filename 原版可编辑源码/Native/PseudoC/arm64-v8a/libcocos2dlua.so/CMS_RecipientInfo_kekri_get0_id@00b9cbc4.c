
int CMS_RecipientInfo_kekri_get0_id
              (CMS_RecipientInfo *ri,X509_ALGOR **palg,ASN1_OCTET_STRING **pid,
              ASN1_GENERALIZEDTIME **pdate,ASN1_OBJECT **potherid,ASN1_TYPE **pothertype)

{
  undefined8 *puVar1;
  
  if (*(int *)ri != 2) {
    ERR_put_error(0x2e,0x89,0x7b,"crypto/cms/cms_env.c",0x23a);
    return 0;
  }
  puVar1 = *(undefined8 **)(*(long *)(ri + 8) + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9caf4 with catch @ 00b9cbd8
                        */
  if (palg != (X509_ALGOR **)0x0) {
    *palg = *(X509_ALGOR **)(*(long *)(ri + 8) + 0x10);
  }
  if (pid != (ASN1_OCTET_STRING **)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9ca80 with catch @ 00b9cbec
                        */
    *pid = (ASN1_OCTET_STRING *)*puVar1;
  }
  if (pdate != (ASN1_GENERALIZEDTIME **)0x0) {
    *pdate = (ASN1_GENERALIZEDTIME *)puVar1[1];
  }
  if (potherid != (ASN1_OBJECT **)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9c920 with catch @ 00b9cc00
                        */
    if ((undefined8 *)puVar1[2] == (undefined8 *)0x0) {
      *potherid = (ASN1_OBJECT *)0x0;
    }
    else {
      *potherid = *(ASN1_OBJECT **)puVar1[2];
    }
  }
  if (pothertype != (ASN1_TYPE **)0x0) {
    if (puVar1[2] != 0) {
      *pothertype = *(ASN1_TYPE **)(puVar1[2] + 8);
      return 1;
    }
    *pothertype = (ASN1_TYPE *)0x0;
    return 1;
  }
  return 1;
}

