
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * BN_options(void)

{
  if (DAT_01782e00 == 0) {
    DAT_01782e00 = 1;
    BIO_snprintf(&DAT_01782e04,0x10,"bn(%d,%d)",0x40,0x40);
  }
  return &DAT_01782e04;
}

