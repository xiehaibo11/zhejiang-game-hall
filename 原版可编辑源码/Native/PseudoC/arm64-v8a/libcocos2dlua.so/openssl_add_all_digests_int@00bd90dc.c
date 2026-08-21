
int openssl_add_all_digests_int(void)

{
  int iVar1;
  EVP_MD *pEVar2;
  
  pEVar2 = EVP_md4();
  EVP_add_digest(pEVar2);
  pEVar2 = EVP_md5();
  EVP_add_digest(pEVar2);
  iVar1 = OBJ_NAME_add("ssl3-md5",0x8001,"MD5");
  pEVar2 = (EVP_MD *)EVP_md5_sha1(iVar1);
  EVP_add_digest(pEVar2);
  pEVar2 = EVP_sha1();
  EVP_add_digest(pEVar2);
  OBJ_NAME_add("ssl3-sha1",0x8001,"SHA1");
  iVar1 = OBJ_NAME_add("RSA-SHA1-2",0x8001,"RSA-SHA1");
  pEVar2 = (EVP_MD *)EVP_mdc2(iVar1);
  EVP_add_digest(pEVar2);
  pEVar2 = EVP_ripemd160();
  EVP_add_digest(pEVar2);
  OBJ_NAME_add("ripemd",0x8001,"RIPEMD160");
  OBJ_NAME_add("rmd160",0x8001,"RIPEMD160");
  pEVar2 = EVP_sha224();
  EVP_add_digest(pEVar2);
  pEVar2 = EVP_sha256();
  EVP_add_digest(pEVar2);
  pEVar2 = EVP_sha384();
  EVP_add_digest(pEVar2);
  pEVar2 = EVP_sha512();
  EVP_add_digest(pEVar2);
  pEVar2 = EVP_whirlpool();
  iVar1 = EVP_add_digest(pEVar2);
  pEVar2 = (EVP_MD *)EVP_blake2b512(iVar1);
  iVar1 = EVP_add_digest(pEVar2);
  pEVar2 = (EVP_MD *)EVP_blake2s256(iVar1);
  iVar1 = EVP_add_digest(pEVar2);
  return iVar1;
}

