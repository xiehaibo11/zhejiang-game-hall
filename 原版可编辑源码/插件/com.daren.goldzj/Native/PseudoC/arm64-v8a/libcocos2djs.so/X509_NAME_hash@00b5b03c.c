
ulong X509_NAME_hash(X509_NAME *x)

{
  int iVar1;
  EVP_MD *type;
  ulong uVar2;
  uchar *data;
  uint local_34 [5];
  
  i2d_X509_NAME(x,(uchar **)0x0);
  data = x->canon_enc;
  iVar1 = x->canon_enclen;
  type = EVP_sha1();
  iVar1 = EVP_Digest(data,(long)iVar1,(uchar *)local_34,(uint *)0x0,type,(ENGINE *)0x0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)local_34[0];
  }
  return uVar2;
}

