
int RSA_padding_add_PKCS1_OAEP(uchar *to,int tlen,uchar *f,int fl,uchar *p,int pl)

{
  int iVar1;
  
  iVar1 = RSA_padding_add_PKCS1_OAEP_mgf1((int)to,tlen,f,fl,p,pl,0,0);
  return iVar1;
}

