
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * DES_options(void)

{
  if ((DAT_01d390b4 & 1) == 0) {
    BIO_snprintf(&DAT_01d390b5,0x20,"des(%s)","int");
    DAT_01d390b4 = 1;
  }
  return &DAT_01d390b5;
}

