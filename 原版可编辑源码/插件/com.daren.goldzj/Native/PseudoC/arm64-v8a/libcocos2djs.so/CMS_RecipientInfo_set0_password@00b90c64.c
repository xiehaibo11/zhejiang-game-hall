
int CMS_RecipientInfo_set0_password(CMS_RecipientInfo *ri,uchar *pass,ssize_t passlen)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)ri == 3) {
    lVar2 = *(long *)(ri + 8);
    *(uchar **)(lVar2 + 0x20) = pass;
    if ((pass != (uchar *)0x0) && (passlen < 0)) {
      passlen = strlen((char *)pass);
    }
    iVar1 = 1;
    *(ssize_t *)(lVar2 + 0x28) = passlen;
  }
  else {
    ERR_put_error(0x2e,0xa8,0xb1,"crypto/cms/cms_pwri.c",0x1a);
    iVar1 = 0;
  }
  return iVar1;
}

