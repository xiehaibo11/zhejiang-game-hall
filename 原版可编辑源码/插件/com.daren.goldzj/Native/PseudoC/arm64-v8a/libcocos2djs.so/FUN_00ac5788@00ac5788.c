
void FUN_00ac5788(void)

{
  int iVar1;
  EVP_CIPHER *pEVar2;
  EVP_MD *pEVar3;
  
  pEVar2 = EVP_des_cbc();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_des_ede3_cbc();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_idea_cbc();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_rc4();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_rc4_hmac_md5();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_rc2_cbc();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_rc2_40_cbc();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_aes_128_cbc();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_aes_192_cbc();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_aes_256_cbc();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_aes_128_gcm();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_aes_256_gcm();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_aes_128_ccm();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_aes_256_ccm();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_aes_128_cbc_hmac_sha1();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_aes_256_cbc_hmac_sha1();
  iVar1 = EVP_add_cipher(pEVar2);
  pEVar2 = (EVP_CIPHER *)EVP_aes_128_cbc_hmac_sha256(iVar1);
  iVar1 = EVP_add_cipher(pEVar2);
  pEVar2 = (EVP_CIPHER *)EVP_aes_256_cbc_hmac_sha256(iVar1);
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_camellia_128_cbc();
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_camellia_256_cbc();
  iVar1 = EVP_add_cipher(pEVar2);
  pEVar2 = (EVP_CIPHER *)EVP_chacha20_poly1305(iVar1);
  EVP_add_cipher(pEVar2);
  pEVar2 = EVP_seed_cbc();
  EVP_add_cipher(pEVar2);
  pEVar3 = EVP_md5();
  EVP_add_digest(pEVar3);
  iVar1 = OBJ_NAME_add("ssl3-md5",0x8001,"MD5");
  pEVar3 = (EVP_MD *)EVP_md5_sha1(iVar1);
  EVP_add_digest(pEVar3);
  pEVar3 = EVP_sha1();
  EVP_add_digest(pEVar3);
  OBJ_NAME_add("ssl3-sha1",0x8001,"SHA1");
  OBJ_NAME_add("RSA-SHA1-2",0x8001,"RSA-SHA1");
  pEVar3 = EVP_sha224();
  EVP_add_digest(pEVar3);
  pEVar3 = EVP_sha256();
  EVP_add_digest(pEVar3);
  pEVar3 = EVP_sha384();
  EVP_add_digest(pEVar3);
  pEVar3 = EVP_sha512();
  EVP_add_digest(pEVar3);
  SSL_COMP_get_compression_methods();
  ssl_load_ciphers();
  SSL_add_ssl_module();
  OPENSSL_atexit(&DAT_00ac592c);
  DAT_01d39024 = 1;
  DAT_01d39018 = 1;
  return;
}

