
int FIPS_mode_set(int r)

{
  if (r != 0) {
    ERR_put_error(0xf,0x6d,0x65,"crypto/o_fips.c",0x1f);
    return 0;
  }
  return 1;
}

