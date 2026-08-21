
undefined8 ssl3_cbc_record_digest_supported(EVP_MD_CTX *param_1)

{
  int iVar1;
  EVP_MD *md;
  
  iVar1 = FIPS_mode();
  if (iVar1 == 0) {
    md = EVP_MD_CTX_md(param_1);
                    /* try { // try from 00acd24c to 00bcd29b has its CatchHandler @ 00acd4f4 */
    iVar1 = EVP_MD_type(md);
    if (iVar1 - 0x2a0U < 4) {
      return 1;
    }
    if (iVar1 == 4) {
      return 1;
    }
    if (iVar1 == 0x40) {
      return 1;
    }
  }
  return 0;
}

