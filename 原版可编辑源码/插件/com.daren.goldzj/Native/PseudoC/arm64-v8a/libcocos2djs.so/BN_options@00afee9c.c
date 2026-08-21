
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * BN_options(void)

{
  if (DAT_01d39080 == 0) {
    DAT_01d39080 = 1;
    BIO_snprintf(&DAT_01d39084,0x10,"bn(%d,%d)",0x40,0x40);
  }
                    /* try { // try from 00afeedc to 00bfeee3 has its CatchHandler @ 00afef9c */
  return &DAT_01d39084;
}

