
int CMS_RecipientInfo_kekri_id_cmp(CMS_RecipientInfo *ri,uchar *id,size_t idlen)

{
  int iVar1;
  ASN1_STRING local_28;
  
  if (*(int *)ri == 2) {
                    /* try { // try from 00b9c920 to 00c9c927 has its CatchHandler @ 00b9cc00 */
    local_28.length = (int)idlen;
                    /* try { // try from 00b9c928 to 00c9ca7f has its CatchHandler @ 00b9c8d0 */
    local_28.type = 4;
    local_28.flags = 0;
    local_28.data = id;
    iVar1 = ASN1_OCTET_STRING_cmp(&local_28,(ASN1_STRING *)**(undefined8 **)(*(long *)(ri + 8) + 8))
    ;
  }
  else {
    ERR_put_error(0x2e,0x8a,0x7b,"crypto/cms/cms_env.c",0x1af);
    iVar1 = -2;
  }
  return iVar1;
}

