
int CMS_RecipientInfo_set0_pkey(CMS_RecipientInfo *ri,EVP_PKEY *pkey)

{
  if (*(int *)ri != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9c928 with catch @ 00b9c8d0
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9cafc with catch @ 00b9c8d0
                        */
    ERR_put_error(0x2e,0x91,0x7c,"crypto/cms/cms_env.c",0x11a);
    return 0;
  }
  *(EVP_PKEY **)(*(long *)(ri + 8) + 0x28) = pkey;
  return 1;
}

