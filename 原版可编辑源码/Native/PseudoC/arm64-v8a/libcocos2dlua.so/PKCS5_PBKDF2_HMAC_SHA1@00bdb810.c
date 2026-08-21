
int PKCS5_PBKDF2_HMAC_SHA1
              (char *pass,int passlen,uchar *salt,int saltlen,int iter,int keylen,uchar *out)

{
  int iVar1;
  EVP_MD *digest;
  
  digest = EVP_sha1();
  iVar1 = PKCS5_PBKDF2_HMAC(pass,passlen,salt,saltlen,iter,digest,keylen,out);
  return iVar1;
}

