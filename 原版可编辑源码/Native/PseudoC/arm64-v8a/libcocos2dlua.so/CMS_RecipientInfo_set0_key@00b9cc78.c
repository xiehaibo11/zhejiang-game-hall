
int CMS_RecipientInfo_set0_key(CMS_RecipientInfo *ri,uchar *key,size_t keylen)

{
  long lVar1;
  
  if (*(int *)ri == 2) {
    lVar1 = *(long *)(ri + 8);
    *(uchar **)(lVar1 + 0x20) = key;
    *(size_t *)(lVar1 + 0x28) = keylen;
    return 1;
  }
  ERR_put_error(0x2e,0x90,0x7b,"crypto/cms/cms_env.c",600);
  return 0;
}

