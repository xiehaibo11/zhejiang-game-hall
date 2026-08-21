
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * DES_options(void)

{
  if ((DAT_01782e34 & 1) == 0) {
    BIO_snprintf(&DAT_01782e35,0x20,"des(%s)","int");
    DAT_01782e34 = 1;
  }
  return &DAT_01782e35;
}

